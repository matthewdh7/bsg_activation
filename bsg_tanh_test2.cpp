#include "Vbsg_tanh.h"
#include "verilated.h"
#include <iostream>
#include <math.h>
#include "params_def.h" 

#if VM_TRACE			
#include <verilated_vcd_c.h> 
#endif

vluint64_t main_time = 0;
double sc_time_stamp(){
	return main_time;
}

double theta_max_compute(int negprec, int posiprec)
{	

// This function computes the maximum theta(angle) that can be
// computed by the negprec+posprec number of hyperbolic iterations. In this
// particular module this theta translates to the half of the maximum
// attainable natural logarithm value.

	double theta =atanh(pow(2,-posiprec));		   
												   
	for(int i=-negprec;i<=posiprec;i++)				
	{
		if(i<=0)
			theta+=atanh(1-pow(2,i-2));
		else
			theta+=atanh(pow(2,-i));
	}
	return theta;
}



double theta_final = theta_max_compute(negprec, posiprec);

double maxquant = theta_final*pow(2,precision); 

// The maximum quantity is determined by the angle that can be accumulated
// by the negative and positive iterations. Please refer to the table mentioned
// in the readme for the maximum angle accumulated by a particular number of
// iterations.
									  
// unsigned long int startquant = pow(2,startquant_pow);
unsigned long int startquant = 10000; //FFFF in hex without the 1

// The starting quantity is a very important parameter of testing. Due to truncation effect
// the sense of magnitude of smaller numbers is lost and results in high error. The starting quantity can be
// 2^(negprec+posprec+1) so that the sense of magnitude is not lost throughout the iterations and 
// this gives very accurate results. The fixed point representation should also be carefully selected.
// There will be very high error in smaller numbers due to the above explained truncation
// error. This can easily be shifted to an error range of 0.1-1% or better by
// using some careful fixed point respresentation and it is highly advised to retain
// at least 8-12 bits for decimal point to get above rated results.

unsigned long int numsamples = (pow(2,anglen-1)-1);

// While testing please be very careful of the number of samples. Sometimes the
// anglen can make the sample_width = 0 which will definitely result in unnecessary
// high errors. If the test fails, the first thing to check is `sample_width`.

unsigned long int sample_width = round((maxquant-startquant)/numsamples);
																			
unsigned long int startquant_print = startquant;	
														
unsigned long int *samples;													

unsigned long int *result_tanh;

unsigned long int clkcycles = numsamples+posiprec+negprec+4;

int main(int argc, char **argv, char **env)
{
	Verilated::commandArgs(argc, argv);
	Vbsg_tanh* top = new Vbsg_tanh;

	#if VM_TRACE
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	#endif

	int samp_len = 0;
	samples = new unsigned long int [clkcycles];
    //result_tanh = new unsigned long int [clkcycles];
	result_tanh = new unsigned long int [0];
	int valid_in = 1;
	int ready_in = 1;

	#if VM_TRACE
	top->trace (tfp, 99);
	tfp->open ("CORDIC_tanh.vcd");
	#endif

	//for(int i=0;i<clkcycles;i++){
	//for(int i=0;i<pow(2,12);i++){
		for(int j=0; j<100; j++) {
			if (top->val_o) {
				result_tanh[0] = top->tanh_o;
			}
			if(j==0) {
				
					top->ang_i = startquant;
					// samples[0] = startquant;
					// samp_len++;
					

					top->val_i = valid_in;
					top->ready_i = ready_in;

					result_tanh[0] = top->tanh_o;
					//startquant+=sample_width;
					int val_i = top->val_i;
					//int val_o = top->val_o;
					int ready_i = top->ready_i;
					int ready_o = top->ready_o;
			} else if (j > 10) {
				top->val_i = 0;
			}
			while(main_time<10){

				#if VM_TRACE
				tfp->dump (main_time+j*10);
				#endif

				if((main_time%10)==0){			
					top->clk_i = 1;
					}			
				
				if((main_time%10)==6){
					top->clk_i = 0;
				}
				top->eval();
				
				main_time++;
				
			}
			main_time = 0;
		}
	//}	

    // double aver_squa_err_tanh = 0;

	// double aver_err_sinh, aver_err_cosh, aver_err_tanh;

    // float maxerr_tanh = 0;

    // double max_err_samp_tanh;

	// for(int i=0;i<samp_len;i++){
	// 	float samp = samples[i]/pow(2,precision);

    //     double ideal_value_tanh = tanh(samp);

    //     double obser_value_tanh = result_tanh[i+(negprec+posiprec+1+2)]/pow(2,precision);

    //     float err_tanh = (ideal_value_tanh - obser_value_tanh)/ideal_value_tanh;

    //     double tanh_err = err_tanh*err_tanh;

    //     aver_squa_err_tanh+=tanh_err;

    //     if(maxerr_tanh<fabs(err_tanh)){
	// 		maxerr_tanh = err_tanh;
	// 		max_err_samp_tanh = samp;
	// 	}
	// }
	// aver_squa_err_tanh/=samp_len;

	double input_value_print = startquant/pow(2, precision);
	double ideal_value_tanh = tanh(startquant/pow(2,precision));
	double obser_value_tanh = result_tanh[0]/pow(2,precision);
	float err_tanh = (ideal_value_tanh - obser_value_tanh) / ideal_value_tanh;

	//float stan_dev_tanh = sqrt(aver_squa_err_tanh);
	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout<<"Input tested:"<<input_value_print<<std::endl;
	std::cout<<"Output expected:"<<ideal_value_tanh<<std::endl;
	//std::cout<<"Output received:"<<result_tanh[0]<<std::endl;
	std::cout<<"Output received:"<<obser_value_tanh<<std::endl;
	//std::cout<<"Maximum Vector tested:"<<maxquant<<std::endl;
	//std::cout<<"Sampling Interval:"<<sample_width<<std::endl;
	std::cout<<"Error:"<<err_tanh*100<<"%"<<std::endl;
	// std::cout<<"Maximum Error in Hyperbolic Tan:"<<maxerr_tanh<<"%"<<std::endl;
	// std::cout<<"Standard Deviation observed:"<<stan_dev_tanh<<std::endl;
	// std::cout<<"Maximum Error Vector:"<<max_err_samp_tanh<<std::endl;

	#if VM_TRACE
	tfp->close();
	#endif

	delete top;
	exit(0);
}
	
