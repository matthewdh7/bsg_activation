
    module bsg_cordic_sine_cosine_hyperbolic #(parameter neg_prec_p=6, posi_prec_p=12, extr_iter_p=1, ans_width_p = 32, ang_width_p = 21)
    (
    input clk_i
    ,input signed [ang_width_p-1:0] ang_i
    ,input ready_i
    ,input val_i
    ,output signed [ans_width_p-1:0] sinh_o
    ,output signed [ans_width_p-1:0] cosh_o
    ,output ready_o
    ,output val_o
    );
    
    logic signed [neg_prec_p+posi_prec_p+extr_iter_p+1:0][ans_width_p-1:0] x ;
    logic signed [neg_prec_p+posi_prec_p+extr_iter_p+1:0][ans_width_p-1:0] y ;
    logic signed [neg_prec_p+posi_prec_p+extr_iter_p+1:0][ang_width_p-1:0] ang ;
    logic [neg_prec_p+posi_prec_p+extr_iter_p+1:0] val ;
    logic signed [neg_prec_p+posi_prec_p+extr_iter_p:0][ans_width_p-1:0] x_ans ;
    logic signed [neg_prec_p+posi_prec_p+extr_iter_p:0][ans_width_p-1:0] y_ans ;
    logic signed [neg_prec_p+posi_prec_p+extr_iter_p:0][ang_width_p-1:0] ang_ans ;
    logic [neg_prec_p+posi_prec_p+extr_iter_p:0] val_ans ;
    wire stall_pipe = val_o & (~ready_i);
    
    
    
     localparam [neg_prec_p+posi_prec_p:0][ang_width_p-1:0] ang_lookup_lp = {
     21'h10,
     21'h20,
     21'h40,
     21'h80,
     21'h100,
     21'h200,
     21'h400,
     21'h800,
     21'h1005,
     21'h202b,
     21'h4162,
     21'h8c9f,
     21'hf913,
     21'h15aa1,
     21'h1b78c,
     21'h21252,
     21'h26c0e,
     21'h2c548,
     21'h31e41 };
    
    localparam x_start = 32'h57ce0293;
    localparam y_start = 32'h0;
    

          
    always_ff @(posedge clk_i) begin
      if(~stall_pipe) begin
        x[0] <= x_start;
        y[0] <= y_start;
        ang[0] <= ang_i;
        val[0] <= val_i;
       end 
    end
    genvar i;
    generate
        for(i = 0; i <= neg_prec_p ; i = i+1)
            begin : stage_neg
            
                bsg_cordic_sin_cos_hyperbolic_stage_negative #(.stage_p(i), .neg_prec_p(neg_prec_p), .ans_width_p(ans_width_p), .ang_width_p(ang_width_p)) cs
                       (.x_i(x[i])
                        ,.y_i(y[i])
                        ,.ang_i(ang[i])
                        ,.ang_lookup_i(ang_lookup_lp[i])
                        ,.val_i(val[i])
                        ,.x_o(x_ans[i])
                        ,.y_o(y_ans[i])
                        ,.ang_o(ang_ans[i])
                        ,.val_o(val_ans[i])
                        );
          
                    always_ff @(posedge clk_i)
                      begin
                        if(~stall_pipe) begin
                         x[i+1] <= x_ans[i];
                         y[i+1] <= y_ans[i];
                         ang[i+1] <= ang_ans[i];
                         val[i+1] <= val_ans[i];
                      end
                 end
               end
          
            endgenerate
            
    genvar j;
    generate        
        for(j = neg_prec_p+1; j <= neg_prec_p+posi_prec_p ; j = j+1)    
            begin : stage_pos
              if((j==(neg_prec_p+4))||(j==(neg_prec_p+12)))
                begin
                
                bsg_cordic_sin_cos_hyperbolic_stage_positive #(.stage_p(j), .neg_prec_p(neg_prec_p), .ans_width_p(ans_width_p), .ang_width_p(ang_width_p)) cs
                       (.x_i(x[j])
                        ,.y_i(y[j])
                        ,.ang_i(ang[j])
                        ,.ang_lookup_i(ang_lookup_lp[j])
                        ,.val_i(val[j])
                        ,.x_o(x_ans[j])
                        ,.y_o(y_ans[j])
                        ,.ang_o(ang_ans[j])
                        ,.val_o(val_ans[j])
                        );
                        
                    always_ff @(posedge clk_i)
                      begin
                        if(~stall_pipe) begin
                         x[j+1] <= x_ans[j];
                         y[j+1] <= y_ans[j];
                         ang[j+1] <= ang_ans[j];
                         val[j+1] <= val_ans[j];
                      end
                    end
                bsg_cordic_sin_cos_hyperbolic_stage_positive #(.stage_p(j), .neg_prec_p(neg_prec_p), .ans_width_p(ans_width_p), .ang_width_p(ang_width_p)) csrep
                       (.x_i(x[j+1])
                       ,.y_i(y[j+1])
                       ,.ang_i(ang[j+1])
                       ,.ang_lookup_i(ang_lookup_lp[j])
                       ,.val_i(val[j+1])
                       ,.x_o(x_ans[j+1])
                       ,.y_o(y_ans[j+1])
                       ,.ang_o(ang_ans[j+1])
                       ,.val_o(val_ans[j+1])
                       );
                       
                    always_ff @(posedge clk_i)
                    begin
                    if(~stall_pipe) begin
                    x[j+2] <= x_ans[j+1];
                    y[j+2] <= y_ans[j+1];
                    ang[j+2] <= ang_ans[j+1];
                    val[j+2] <= val_ans[j+1];
                    end
                  end
                end
                
              else if(j>(neg_prec_p+4))
                  begin
                  
                	bsg_cordic_sin_cos_hyperbolic_stage_positive #(.stage_p(j), .neg_prec_p(neg_prec_p), .ans_width_p(ans_width_p), .ang_width_p(ang_width_p)) cs
                       	(.x_i(x[j+1])
                         ,.y_i(y[j+1])
                         ,.ang_i(ang[j+1])
                         ,.ang_lookup_i(ang_lookup_lp[j])
                         ,.val_i(val[j+1])
                         ,.x_o(x_ans[j+1])
                         ,.y_o(y_ans[j+1])
                         ,.ang_o(ang_ans[j+1])
                         ,.val_o(val_ans[j+1])
                        );
                        
                    always_ff @(posedge clk_i)
                      begin
                        if(~stall_pipe) begin
                        x[j+2] <= x_ans[j+1];
                        y[j+2] <= y_ans[j+1];
                        ang[j+2] <= ang_ans[j+1];
                        val[j+2] <= val_ans[j+1];
                      end
                      end
                  end
              else if(j<(neg_prec_p+4)) 
                begin
                
                  bsg_cordic_sin_cos_hyperbolic_stage_positive #(.stage_p(j), .neg_prec_p(neg_prec_p), .ans_width_p(ans_width_p), .ang_width_p(ang_width_p)) cs
                       	(.x_i(x[j])
                         ,.y_i(y[j])
                         ,.ang_i(ang[j])
                         ,.ang_lookup_i(ang_lookup_lp[j])
                         ,.val_i(val[j])
                         ,.x_o(x_ans[j])
                         ,.y_o(y_ans[j])
                         ,.ang_o(ang_ans[j])
                         ,.val_o(val_ans[j])
                        );
                        
                    always_ff @(posedge clk_i)
                      begin
                        if(~stall_pipe) begin
                        x[j+1] <= x_ans[j];
                        y[j+1] <= y_ans[j];
                        ang[j+1] <= ang_ans[j];
                        val[j+1] <= val_ans[j];
                      end
                      end
                  end
            end
                                   
    endgenerate

    assign val_o = val[neg_prec_p+posi_prec_p+2];
    assign cosh_o = x[neg_prec_p+posi_prec_p+2];
    assign sinh_o = y[neg_prec_p+posi_prec_p+2];
    assign ready_o = ~stall_pipe;
    
    endmodule
