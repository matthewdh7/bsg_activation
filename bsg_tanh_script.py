import sys, math

def bsg_exponential_main_initial(angbitlen, ansbitlen, negprec, posprec, extriter):
    print("""
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
    
    """ %{'s':ansbitlen, 'g':angbitlen, 'n':negprec, 'p':posprec, 'e':extriter})
    return


# def bsg_lookup_initialization(negprec, posprec, angbitlen,result):
#     print("     localparam [neg_prec_p+posi_prec_p:0][ang_width_p-1:0] ang_lookup_lp = {")
#     for i in range(posprec+negprec,0,-1):
#         print("     %(g)d'h%(r)s," %{'g':angbitlen,'r':result[i] })
#     print("     %(g)d'h%(r)s };" %{'g':angbitlen,'r':result[0] })
#     return


def constant_compute(negprec, posprec):
    const=1
    for i in range(-negprec,1):
        comp=((1-(1-2**(i-2))**2)**0.5)
        const=const*comp
    for i in range(1,posprec+1):
        comp=((1-2**(-2*i))**0.5)
        const=const*comp
    return 1/const


def lookup_compute(negprec, posprec, precision):
    lookup=[]
    for i in range(-negprec,1):
        m=math.atanh(1-2**(i-2))
        lookup.append(format((int)(m*(2**precision)),'x'))
    for j in range(negprec+1,negprec+posprec+1):
        m=math.atanh(2**(-j+negprec))
        lookup.append(format((int)(m*(2**precision)),'x'))
    return lookup


# def bsg_constxy_initialization(constant, ansbitlen):
#     print("""    
#     localparam x_start = %(s)d'h%(c)s;
#     localparam y_start = %(s)d'h0;
#     """ %{'s':ansbitlen, 'c':constant})
#     return


def main_body_print():
    print("""  
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

    
    endmodule""")
    return
    
angbitlen = (int)(sys.argv[1])
# Determined by the maximum input quantity into the module decided by the
# number of iterations and the corresponding maximum theta_max. Determine this
# length as 1-sign + 1-overflow bit + bit-length of [theta_max] + 'precision' bits.

ansbitlen = (int)(sys.argv[2])
# Determine this length by finding out the maximum of the sine and cosine hyperbolic
# corresponding to the theta_max. `ansbitlen` is equal to 1-sign + 1-overflow bit
# + bit-length of [sinh(theta_max)] + 'precision' bits.

negprec = (int)(sys.argv[3])
# Determine this by deciding the theta_max and `negprec` is the corresponding 'M' value.

posprec = (int)(sys.argv[4])

precision = (int)(sys.argv[5])

startquant_pow = (int)(sys.argv[6])

extriter = 1

bsg_exponential_main_initial(angbitlen, ansbitlen, negprec, posprec, extriter)
# lookup=lookup_compute(negprec, posprec, precision)
# bsg_lookup_initialization(negprec, posprec, angbitlen,lookup)
# constant=constant_compute(negprec, posprec)*(2**precision)
# constant=format(round(constant),'x')
# bsg_constxy_initialization(constant, ansbitlen)
main_body_print()

# This file object is used to create a header file facilitating the passing of parameters of the module to
# Verilator for testing purposes. 
f_params = open("params_def.h","w+")
f_params.write('#ifndef PARAMS_DEF\n')
f_params.write('#define PARAMS_DEF\n')
f_params.write('int anglen = %(g)d;\n'%{'g':angbitlen})
f_params.write('int anslen = %(s)d;\n'%{'s':ansbitlen})
f_params.write('int startquant_pow = %(s)d;\n'%{'s':startquant_pow})
f_params.write('int posiprec = %(p)d;\n'%{'p':posprec})
f_params.write('int negprec = %(n)d;\n'%{'n':negprec})
f_params.write('int precision = %(p)d;\n'%{'p':precision})
f_params.write('#endif')
f_params.close()
