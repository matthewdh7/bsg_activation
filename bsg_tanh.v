
    `include "../../basejump_stl/bsg_misc/bsg_defines.v"
    `include "bsg_idiv_iterative.v"
    `include "../../basejump_stl/bsg_misc/bsg_dff_en.v"
    `include "../../basejump_stl/bsg_misc/bsg_mux_one_hot.v"
    `include "../../basejump_stl/bsg_misc/bsg_adder_cin.v"
    `include "bsg_idiv_iterative_controller.v"
    `include "../../basejump_stl/bsg_misc/bsg_counter_clear_up.v"
    
    module bsg_tanh #(parameter neg_prec_p=6, posi_prec_p=12, extr_iter_p=1, ans_width_p = 32, ang_width_p = 21)
    (
    input clk_i
    ,input signed [ang_width_p-1:0] ang_i
    ,input ready_i
    ,input val_i
    ,input reset_i
    ,output signed [ans_width_p-1:0] tanh_o
    ,output ready_o
    ,output val_o
    );

    logic signed [ans_width_p-1:0] sinh, cosh;
    logic sincosReady, sincosDone, tanReady, tanDone;
    
    
  
    /* state logic */
    enum logic [1:0] {eWAIT, eBUSY1, eBUSY2, eDONE} state_r, state_n;

    always_comb begin
        state_n = state_r;
        case (state_r)
            eWAIT: begin
                if (ready_o && val_i) state_n = eBUSY1;
            end
            eBUSY1: begin
                if (sincosDone && tanReady) state_n = eBUSY2;
            end
            eBUSY2: begin
                if (tanDone) state_n = eDONE;
            end
            eDONE: begin
                if (ready_i) state_n = eWAIT;
            end
            default: state_n = eWAIT;
        endcase
    end

    always_ff @(posedge clk_i) begin
        state_r <= state_n;
    end

    /* sinh cosh module */
    bsg_cordic_sine_cosine_hyperbolic #(.neg_prec_p, .posi_prec_p, .extr_iter_p, .ans_width_p, .ang_width_p) sinhcosh
    (
     .clk_i
    ,.ang_i
    ,.ready_i   (tanReady && (state_r == eWAIT))
    ,.val_i     
    ,.sinh_o    (sinh)
    ,.cosh_o    (cosh)
    ,.ready_o   (sincosReady)
    ,.val_o     (sincosDone)
    );

    /* tan divider unit */
    parameter SHFT_AMT = 16;
    logic [ans_width_p+SHFT_AMT-1:0] sinh_shifted, tanh_shifted, remainder_o, tanh_crop; //L shift by 16
    assign sinh_shifted = {SHFT_AMT'('d0), sinh} << SHFT_AMT;

    bsg_idiv_iterative #(.width_p(ans_width_p+SHFT_AMT)) divider
    (
     .clk_i
    ,.reset_i       

    ,.v_i           (sincosDone)
    ,.ready_and_o   (tanReady) 

    ,.dividend_i    (sinh_shifted)
    ,.divisor_i     ({SHFT_AMT'('d0), cosh})
    ,.signed_div_i  (1)

    ,.v_o           (tanDone)
    ,.quotient_o    (tanh_shifted)
    ,.remainder_o   
    ,.yumi_i        (ready_i)
    );

    /* outbound signals */
    //assign tanh_crop = tanh_shifted >> SHFT_AMT;
    assign tanh_o = tanh_shifted[ans_width_p-1:0];
    assign val_o = state_r == eDONE;
    assign ready_o = (state_r == eWAIT) && (sincosReady);

    
    endmodule
