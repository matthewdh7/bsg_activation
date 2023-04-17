// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_tanh__Syms.h"


//======================

void Vbsg_tanh::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vbsg_tanh::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vbsg_tanh::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vbsg_tanh::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vbsg_tanh::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+556,"clk_i", false,-1);
        tracep->declBus(c+557,"ang_i", false,-1, 20,0);
        tracep->declBit(c+558,"ready_i", false,-1);
        tracep->declBit(c+559,"val_i", false,-1);
        tracep->declBit(c+560,"reset_i", false,-1);
        tracep->declBus(c+561,"tanh_o", false,-1, 31,0);
        tracep->declBit(c+562,"ready_o", false,-1);
        tracep->declBit(c+563,"val_o", false,-1);
        tracep->declBus(c+566,"bsg_tanh neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+567,"bsg_tanh posi_prec_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh extr_iter_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh ang_width_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh clk_i", false,-1);
        tracep->declBus(c+557,"bsg_tanh ang_i", false,-1, 20,0);
        tracep->declBit(c+558,"bsg_tanh ready_i", false,-1);
        tracep->declBit(c+559,"bsg_tanh val_i", false,-1);
        tracep->declBit(c+560,"bsg_tanh reset_i", false,-1);
        tracep->declBus(c+561,"bsg_tanh tanh_o", false,-1, 31,0);
        tracep->declBit(c+562,"bsg_tanh ready_o", false,-1);
        tracep->declBit(c+563,"bsg_tanh val_o", false,-1);
        tracep->declBus(c+1,"bsg_tanh sinh", false,-1, 31,0);
        tracep->declBus(c+2,"bsg_tanh cosh", false,-1, 31,0);
        tracep->declBit(c+3,"bsg_tanh sincosReady", false,-1);
        tracep->declBit(c+4,"bsg_tanh sincosDone", false,-1);
        tracep->declBit(c+5,"bsg_tanh tanReady", false,-1);
        tracep->declBit(c+6,"bsg_tanh tanDone", false,-1);
        tracep->declBus(c+7,"bsg_tanh state_r", false,-1, 1,0);
        tracep->declBus(c+564,"bsg_tanh state_n", false,-1, 1,0);
        tracep->declBus(c+571,"bsg_tanh SHFT_AMT", false,-1, 31,0);
        tracep->declQuad(c+8,"bsg_tanh sinh_shifted", false,-1, 47,0);
        tracep->declQuad(c+10,"bsg_tanh tanh_shifted", false,-1, 47,0);
        tracep->declQuad(c+12,"bsg_tanh remainder_o", false,-1, 47,0);
        tracep->declQuad(c+572,"bsg_tanh tanh_crop", false,-1, 47,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+567,"bsg_tanh sinhcosh posi_prec_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh sinhcosh extr_iter_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh ang_width_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh sinhcosh clk_i", false,-1);
        tracep->declBus(c+557,"bsg_tanh sinhcosh ang_i", false,-1, 20,0);
        tracep->declBit(c+14,"bsg_tanh sinhcosh ready_i", false,-1);
        tracep->declBit(c+559,"bsg_tanh sinhcosh val_i", false,-1);
        tracep->declBus(c+1,"bsg_tanh sinhcosh sinh_o", false,-1, 31,0);
        tracep->declBus(c+2,"bsg_tanh sinhcosh cosh_o", false,-1, 31,0);
        tracep->declBit(c+3,"bsg_tanh sinhcosh ready_o", false,-1);
        tracep->declBit(c+4,"bsg_tanh sinhcosh val_o", false,-1);
        tracep->declArray(c+15,"bsg_tanh sinhcosh x", false,-1, 671,0);
        tracep->declArray(c+36,"bsg_tanh sinhcosh y", false,-1, 671,0);
        tracep->declArray(c+57,"bsg_tanh sinhcosh ang", false,-1, 440,0);
        tracep->declBus(c+71,"bsg_tanh sinhcosh val", false,-1, 20,0);
        tracep->declArray(c+72,"bsg_tanh sinhcosh x_ans", false,-1, 639,0);
        tracep->declArray(c+92,"bsg_tanh sinhcosh y_ans", false,-1, 639,0);
        tracep->declArray(c+112,"bsg_tanh sinhcosh ang_ans", false,-1, 419,0);
        tracep->declBus(c+126,"bsg_tanh sinhcosh val_ans", false,-1, 19,0);
        tracep->declBit(c+127,"bsg_tanh sinhcosh stall_pipe", false,-1);
        tracep->declArray(c+574,"bsg_tanh sinhcosh ang_lookup_lp", false,-1, 398,0);
        tracep->declBus(c+587,"bsg_tanh sinhcosh x_start", false,-1, 31,0);
        tracep->declBus(c+588,"bsg_tanh sinhcosh y_start", false,-1, 31,0);
        tracep->declBus(c+588,"bsg_tanh sinhcosh stage_neg[0] cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_neg[0] cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_neg[0] cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_neg[0] cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+128,"bsg_tanh sinhcosh stage_neg[0] cs x_i", false,-1, 31,0);
        tracep->declBus(c+129,"bsg_tanh sinhcosh stage_neg[0] cs y_i", false,-1, 31,0);
        tracep->declBus(c+130,"bsg_tanh sinhcosh stage_neg[0] cs ang_i", false,-1, 20,0);
        tracep->declBus(c+589,"bsg_tanh sinhcosh stage_neg[0] cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+131,"bsg_tanh sinhcosh stage_neg[0] cs val_i", false,-1);
        tracep->declBus(c+132,"bsg_tanh sinhcosh stage_neg[0] cs x_o", false,-1, 31,0);
        tracep->declBus(c+133,"bsg_tanh sinhcosh stage_neg[0] cs y_o", false,-1, 31,0);
        tracep->declBus(c+134,"bsg_tanh sinhcosh stage_neg[0] cs ang_o", false,-1, 20,0);
        tracep->declBit(c+131,"bsg_tanh sinhcosh stage_neg[0] cs val_o", false,-1);
        tracep->declBus(c+135,"bsg_tanh sinhcosh stage_neg[0] cs y_shift", false,-1, 31,0);
        tracep->declBus(c+136,"bsg_tanh sinhcosh stage_neg[0] cs x_shift", false,-1, 31,0);
        tracep->declBit(c+137,"bsg_tanh sinhcosh stage_neg[0] cs rot_op", false,-1);
        tracep->declBus(c+590,"bsg_tanh sinhcosh stage_neg[1] cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_neg[1] cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_neg[1] cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_neg[1] cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+138,"bsg_tanh sinhcosh stage_neg[1] cs x_i", false,-1, 31,0);
        tracep->declBus(c+139,"bsg_tanh sinhcosh stage_neg[1] cs y_i", false,-1, 31,0);
        tracep->declBus(c+140,"bsg_tanh sinhcosh stage_neg[1] cs ang_i", false,-1, 20,0);
        tracep->declBus(c+591,"bsg_tanh sinhcosh stage_neg[1] cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+141,"bsg_tanh sinhcosh stage_neg[1] cs val_i", false,-1);
        tracep->declBus(c+142,"bsg_tanh sinhcosh stage_neg[1] cs x_o", false,-1, 31,0);
        tracep->declBus(c+143,"bsg_tanh sinhcosh stage_neg[1] cs y_o", false,-1, 31,0);
        tracep->declBus(c+144,"bsg_tanh sinhcosh stage_neg[1] cs ang_o", false,-1, 20,0);
        tracep->declBit(c+141,"bsg_tanh sinhcosh stage_neg[1] cs val_o", false,-1);
        tracep->declBus(c+145,"bsg_tanh sinhcosh stage_neg[1] cs y_shift", false,-1, 31,0);
        tracep->declBus(c+146,"bsg_tanh sinhcosh stage_neg[1] cs x_shift", false,-1, 31,0);
        tracep->declBit(c+147,"bsg_tanh sinhcosh stage_neg[1] cs rot_op", false,-1);
        tracep->declBus(c+592,"bsg_tanh sinhcosh stage_neg[2] cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_neg[2] cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_neg[2] cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_neg[2] cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+148,"bsg_tanh sinhcosh stage_neg[2] cs x_i", false,-1, 31,0);
        tracep->declBus(c+149,"bsg_tanh sinhcosh stage_neg[2] cs y_i", false,-1, 31,0);
        tracep->declBus(c+150,"bsg_tanh sinhcosh stage_neg[2] cs ang_i", false,-1, 20,0);
        tracep->declBus(c+593,"bsg_tanh sinhcosh stage_neg[2] cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+151,"bsg_tanh sinhcosh stage_neg[2] cs val_i", false,-1);
        tracep->declBus(c+152,"bsg_tanh sinhcosh stage_neg[2] cs x_o", false,-1, 31,0);
        tracep->declBus(c+153,"bsg_tanh sinhcosh stage_neg[2] cs y_o", false,-1, 31,0);
        tracep->declBus(c+154,"bsg_tanh sinhcosh stage_neg[2] cs ang_o", false,-1, 20,0);
        tracep->declBit(c+151,"bsg_tanh sinhcosh stage_neg[2] cs val_o", false,-1);
        tracep->declBus(c+155,"bsg_tanh sinhcosh stage_neg[2] cs y_shift", false,-1, 31,0);
        tracep->declBus(c+156,"bsg_tanh sinhcosh stage_neg[2] cs x_shift", false,-1, 31,0);
        tracep->declBit(c+157,"bsg_tanh sinhcosh stage_neg[2] cs rot_op", false,-1);
        tracep->declBus(c+594,"bsg_tanh sinhcosh stage_neg[3] cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_neg[3] cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_neg[3] cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_neg[3] cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+158,"bsg_tanh sinhcosh stage_neg[3] cs x_i", false,-1, 31,0);
        tracep->declBus(c+159,"bsg_tanh sinhcosh stage_neg[3] cs y_i", false,-1, 31,0);
        tracep->declBus(c+160,"bsg_tanh sinhcosh stage_neg[3] cs ang_i", false,-1, 20,0);
        tracep->declBus(c+595,"bsg_tanh sinhcosh stage_neg[3] cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+161,"bsg_tanh sinhcosh stage_neg[3] cs val_i", false,-1);
        tracep->declBus(c+162,"bsg_tanh sinhcosh stage_neg[3] cs x_o", false,-1, 31,0);
        tracep->declBus(c+163,"bsg_tanh sinhcosh stage_neg[3] cs y_o", false,-1, 31,0);
        tracep->declBus(c+164,"bsg_tanh sinhcosh stage_neg[3] cs ang_o", false,-1, 20,0);
        tracep->declBit(c+161,"bsg_tanh sinhcosh stage_neg[3] cs val_o", false,-1);
        tracep->declBus(c+165,"bsg_tanh sinhcosh stage_neg[3] cs y_shift", false,-1, 31,0);
        tracep->declBus(c+166,"bsg_tanh sinhcosh stage_neg[3] cs x_shift", false,-1, 31,0);
        tracep->declBit(c+167,"bsg_tanh sinhcosh stage_neg[3] cs rot_op", false,-1);
        tracep->declBus(c+596,"bsg_tanh sinhcosh stage_neg[4] cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_neg[4] cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_neg[4] cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_neg[4] cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+168,"bsg_tanh sinhcosh stage_neg[4] cs x_i", false,-1, 31,0);
        tracep->declBus(c+169,"bsg_tanh sinhcosh stage_neg[4] cs y_i", false,-1, 31,0);
        tracep->declBus(c+170,"bsg_tanh sinhcosh stage_neg[4] cs ang_i", false,-1, 20,0);
        tracep->declBus(c+597,"bsg_tanh sinhcosh stage_neg[4] cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+171,"bsg_tanh sinhcosh stage_neg[4] cs val_i", false,-1);
        tracep->declBus(c+172,"bsg_tanh sinhcosh stage_neg[4] cs x_o", false,-1, 31,0);
        tracep->declBus(c+173,"bsg_tanh sinhcosh stage_neg[4] cs y_o", false,-1, 31,0);
        tracep->declBus(c+174,"bsg_tanh sinhcosh stage_neg[4] cs ang_o", false,-1, 20,0);
        tracep->declBit(c+171,"bsg_tanh sinhcosh stage_neg[4] cs val_o", false,-1);
        tracep->declBus(c+175,"bsg_tanh sinhcosh stage_neg[4] cs y_shift", false,-1, 31,0);
        tracep->declBus(c+176,"bsg_tanh sinhcosh stage_neg[4] cs x_shift", false,-1, 31,0);
        tracep->declBit(c+177,"bsg_tanh sinhcosh stage_neg[4] cs rot_op", false,-1);
        tracep->declBus(c+598,"bsg_tanh sinhcosh stage_neg[5] cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_neg[5] cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_neg[5] cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_neg[5] cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+178,"bsg_tanh sinhcosh stage_neg[5] cs x_i", false,-1, 31,0);
        tracep->declBus(c+179,"bsg_tanh sinhcosh stage_neg[5] cs y_i", false,-1, 31,0);
        tracep->declBus(c+180,"bsg_tanh sinhcosh stage_neg[5] cs ang_i", false,-1, 20,0);
        tracep->declBus(c+599,"bsg_tanh sinhcosh stage_neg[5] cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+181,"bsg_tanh sinhcosh stage_neg[5] cs val_i", false,-1);
        tracep->declBus(c+182,"bsg_tanh sinhcosh stage_neg[5] cs x_o", false,-1, 31,0);
        tracep->declBus(c+183,"bsg_tanh sinhcosh stage_neg[5] cs y_o", false,-1, 31,0);
        tracep->declBus(c+184,"bsg_tanh sinhcosh stage_neg[5] cs ang_o", false,-1, 20,0);
        tracep->declBit(c+181,"bsg_tanh sinhcosh stage_neg[5] cs val_o", false,-1);
        tracep->declBus(c+185,"bsg_tanh sinhcosh stage_neg[5] cs y_shift", false,-1, 31,0);
        tracep->declBus(c+186,"bsg_tanh sinhcosh stage_neg[5] cs x_shift", false,-1, 31,0);
        tracep->declBit(c+187,"bsg_tanh sinhcosh stage_neg[5] cs rot_op", false,-1);
        tracep->declBus(c+600,"bsg_tanh sinhcosh stage_neg[6] cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_neg[6] cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_neg[6] cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_neg[6] cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+188,"bsg_tanh sinhcosh stage_neg[6] cs x_i", false,-1, 31,0);
        tracep->declBus(c+189,"bsg_tanh sinhcosh stage_neg[6] cs y_i", false,-1, 31,0);
        tracep->declBus(c+190,"bsg_tanh sinhcosh stage_neg[6] cs ang_i", false,-1, 20,0);
        tracep->declBus(c+601,"bsg_tanh sinhcosh stage_neg[6] cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+191,"bsg_tanh sinhcosh stage_neg[6] cs val_i", false,-1);
        tracep->declBus(c+192,"bsg_tanh sinhcosh stage_neg[6] cs x_o", false,-1, 31,0);
        tracep->declBus(c+193,"bsg_tanh sinhcosh stage_neg[6] cs y_o", false,-1, 31,0);
        tracep->declBus(c+194,"bsg_tanh sinhcosh stage_neg[6] cs ang_o", false,-1, 20,0);
        tracep->declBit(c+191,"bsg_tanh sinhcosh stage_neg[6] cs val_o", false,-1);
        tracep->declBus(c+195,"bsg_tanh sinhcosh stage_neg[6] cs y_shift", false,-1, 31,0);
        tracep->declBus(c+196,"bsg_tanh sinhcosh stage_neg[6] cs x_shift", false,-1, 31,0);
        tracep->declBit(c+197,"bsg_tanh sinhcosh stage_neg[6] cs rot_op", false,-1);
        tracep->declBus(c+602,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+198,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs x_i", false,-1, 31,0);
        tracep->declBus(c+199,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs y_i", false,-1, 31,0);
        tracep->declBus(c+200,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+603,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+201,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs val_i", false,-1);
        tracep->declBus(c+202,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs x_o", false,-1, 31,0);
        tracep->declBus(c+203,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs y_o", false,-1, 31,0);
        tracep->declBus(c+204,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+201,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs val_o", false,-1);
        tracep->declBus(c+205,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+206,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+207,"bsg_tanh sinhcosh stage_pos[7] genblk3 cs rot_op", false,-1);
        tracep->declBus(c+604,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+208,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs x_i", false,-1, 31,0);
        tracep->declBus(c+209,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs y_i", false,-1, 31,0);
        tracep->declBus(c+210,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+605,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+211,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs val_i", false,-1);
        tracep->declBus(c+212,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs x_o", false,-1, 31,0);
        tracep->declBus(c+213,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs y_o", false,-1, 31,0);
        tracep->declBus(c+214,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+211,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs val_o", false,-1);
        tracep->declBus(c+215,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+216,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+217,"bsg_tanh sinhcosh stage_pos[8] genblk3 cs rot_op", false,-1);
        tracep->declBus(c+606,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+218,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs x_i", false,-1, 31,0);
        tracep->declBus(c+219,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs y_i", false,-1, 31,0);
        tracep->declBus(c+220,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+607,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+221,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs val_i", false,-1);
        tracep->declBus(c+222,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs x_o", false,-1, 31,0);
        tracep->declBus(c+223,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs y_o", false,-1, 31,0);
        tracep->declBus(c+224,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+221,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs val_o", false,-1);
        tracep->declBus(c+225,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+226,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+227,"bsg_tanh sinhcosh stage_pos[9] genblk3 cs rot_op", false,-1);
        tracep->declBus(c+608,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+228,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs x_i", false,-1, 31,0);
        tracep->declBus(c+229,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs y_i", false,-1, 31,0);
        tracep->declBus(c+230,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+609,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+231,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs val_i", false,-1);
        tracep->declBus(c+232,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs x_o", false,-1, 31,0);
        tracep->declBus(c+233,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs y_o", false,-1, 31,0);
        tracep->declBus(c+234,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+231,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs val_o", false,-1);
        tracep->declBus(c+235,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+236,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+237,"bsg_tanh sinhcosh stage_pos[10] genblk1 cs rot_op", false,-1);
        tracep->declBus(c+608,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep ang_width_p", false,-1, 31,0);
        tracep->declBus(c+238,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep x_i", false,-1, 31,0);
        tracep->declBus(c+239,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep y_i", false,-1, 31,0);
        tracep->declBus(c+240,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep ang_i", false,-1, 20,0);
        tracep->declBus(c+609,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+241,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep val_i", false,-1);
        tracep->declBus(c+242,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep x_o", false,-1, 31,0);
        tracep->declBus(c+243,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep y_o", false,-1, 31,0);
        tracep->declBus(c+244,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep ang_o", false,-1, 20,0);
        tracep->declBit(c+241,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep val_o", false,-1);
        tracep->declBus(c+245,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep y_shift", false,-1, 31,0);
        tracep->declBus(c+246,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep x_shift", false,-1, 31,0);
        tracep->declBit(c+247,"bsg_tanh sinhcosh stage_pos[10] genblk1 csrep rot_op", false,-1);
        tracep->declBus(c+610,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+248,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs x_i", false,-1, 31,0);
        tracep->declBus(c+249,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs y_i", false,-1, 31,0);
        tracep->declBus(c+250,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+611,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+251,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs val_i", false,-1);
        tracep->declBus(c+252,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs x_o", false,-1, 31,0);
        tracep->declBus(c+253,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs y_o", false,-1, 31,0);
        tracep->declBus(c+254,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+251,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs val_o", false,-1);
        tracep->declBus(c+255,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+256,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+257,"bsg_tanh sinhcosh stage_pos[11] genblk2 cs rot_op", false,-1);
        tracep->declBus(c+612,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+258,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs x_i", false,-1, 31,0);
        tracep->declBus(c+259,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs y_i", false,-1, 31,0);
        tracep->declBus(c+260,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+613,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+261,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs val_i", false,-1);
        tracep->declBus(c+262,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs x_o", false,-1, 31,0);
        tracep->declBus(c+263,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs y_o", false,-1, 31,0);
        tracep->declBus(c+264,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+261,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs val_o", false,-1);
        tracep->declBus(c+265,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+266,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+267,"bsg_tanh sinhcosh stage_pos[12] genblk2 cs rot_op", false,-1);
        tracep->declBus(c+614,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+268,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs x_i", false,-1, 31,0);
        tracep->declBus(c+269,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs y_i", false,-1, 31,0);
        tracep->declBus(c+270,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+615,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+271,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs val_i", false,-1);
        tracep->declBus(c+272,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs x_o", false,-1, 31,0);
        tracep->declBus(c+273,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs y_o", false,-1, 31,0);
        tracep->declBus(c+274,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+271,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs val_o", false,-1);
        tracep->declBus(c+275,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+276,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+277,"bsg_tanh sinhcosh stage_pos[13] genblk2 cs rot_op", false,-1);
        tracep->declBus(c+616,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+278,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs x_i", false,-1, 31,0);
        tracep->declBus(c+279,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs y_i", false,-1, 31,0);
        tracep->declBus(c+280,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+617,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+281,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs val_i", false,-1);
        tracep->declBus(c+282,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs x_o", false,-1, 31,0);
        tracep->declBus(c+283,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs y_o", false,-1, 31,0);
        tracep->declBus(c+284,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+281,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs val_o", false,-1);
        tracep->declBus(c+285,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+286,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+287,"bsg_tanh sinhcosh stage_pos[14] genblk2 cs rot_op", false,-1);
        tracep->declBus(c+618,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+288,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs x_i", false,-1, 31,0);
        tracep->declBus(c+289,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs y_i", false,-1, 31,0);
        tracep->declBus(c+290,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+619,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+291,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs val_i", false,-1);
        tracep->declBus(c+292,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs x_o", false,-1, 31,0);
        tracep->declBus(c+293,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs y_o", false,-1, 31,0);
        tracep->declBus(c+294,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+291,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs val_o", false,-1);
        tracep->declBus(c+295,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+296,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+297,"bsg_tanh sinhcosh stage_pos[15] genblk2 cs rot_op", false,-1);
        tracep->declBus(c+620,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+298,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs x_i", false,-1, 31,0);
        tracep->declBus(c+299,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs y_i", false,-1, 31,0);
        tracep->declBus(c+300,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+621,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+301,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs val_i", false,-1);
        tracep->declBus(c+302,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs x_o", false,-1, 31,0);
        tracep->declBus(c+303,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs y_o", false,-1, 31,0);
        tracep->declBus(c+304,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+301,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs val_o", false,-1);
        tracep->declBus(c+305,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+306,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+307,"bsg_tanh sinhcosh stage_pos[16] genblk2 cs rot_op", false,-1);
        tracep->declBus(c+622,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+308,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs x_i", false,-1, 31,0);
        tracep->declBus(c+309,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs y_i", false,-1, 31,0);
        tracep->declBus(c+310,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+623,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+311,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs val_i", false,-1);
        tracep->declBus(c+312,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs x_o", false,-1, 31,0);
        tracep->declBus(c+313,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs y_o", false,-1, 31,0);
        tracep->declBus(c+314,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+311,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs val_o", false,-1);
        tracep->declBus(c+315,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+316,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+317,"bsg_tanh sinhcosh stage_pos[17] genblk2 cs rot_op", false,-1);
        tracep->declBus(c+624,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs ang_width_p", false,-1, 31,0);
        tracep->declBus(c+308,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs x_i", false,-1, 31,0);
        tracep->declBus(c+309,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs y_i", false,-1, 31,0);
        tracep->declBus(c+310,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs ang_i", false,-1, 20,0);
        tracep->declBus(c+625,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+311,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs val_i", false,-1);
        tracep->declBus(c+318,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs x_o", false,-1, 31,0);
        tracep->declBus(c+319,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs y_o", false,-1, 31,0);
        tracep->declBus(c+320,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs ang_o", false,-1, 20,0);
        tracep->declBit(c+311,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs val_o", false,-1);
        tracep->declBus(c+321,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs y_shift", false,-1, 31,0);
        tracep->declBus(c+322,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs x_shift", false,-1, 31,0);
        tracep->declBit(c+317,"bsg_tanh sinhcosh stage_pos[18] genblk1 cs rot_op", false,-1);
        tracep->declBus(c+624,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep stage_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep neg_prec_p", false,-1, 31,0);
        tracep->declBus(c+569,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep ans_width_p", false,-1, 31,0);
        tracep->declBus(c+570,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep ang_width_p", false,-1, 31,0);
        tracep->declBus(c+323,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep x_i", false,-1, 31,0);
        tracep->declBus(c+324,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep y_i", false,-1, 31,0);
        tracep->declBus(c+325,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep ang_i", false,-1, 20,0);
        tracep->declBus(c+625,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep ang_lookup_i", false,-1, 20,0);
        tracep->declBit(c+326,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep val_i", false,-1);
        tracep->declBus(c+327,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep x_o", false,-1, 31,0);
        tracep->declBus(c+328,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep y_o", false,-1, 31,0);
        tracep->declBus(c+329,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep ang_o", false,-1, 20,0);
        tracep->declBit(c+326,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep val_o", false,-1);
        tracep->declBus(c+330,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep y_shift", false,-1, 31,0);
        tracep->declBus(c+331,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep x_shift", false,-1, 31,0);
        tracep->declBit(c+332,"bsg_tanh sinhcosh stage_pos[18] genblk1 csrep rot_op", false,-1);
        tracep->declBus(c+626,"bsg_tanh divider width_p", false,-1, 31,0);
        tracep->declBus(c+627,"bsg_tanh divider bitstack_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider bits_per_iter_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh divider clk_i", false,-1);
        tracep->declBit(c+560,"bsg_tanh divider reset_i", false,-1);
        tracep->declBit(c+4,"bsg_tanh divider v_i", false,-1);
        tracep->declBit(c+5,"bsg_tanh divider ready_and_o", false,-1);
        tracep->declQuad(c+8,"bsg_tanh divider dividend_i", false,-1, 47,0);
        tracep->declQuad(c+333,"bsg_tanh divider divisor_i", false,-1, 47,0);
        tracep->declBit(c+628,"bsg_tanh divider signed_div_i", false,-1);
        tracep->declBit(c+6,"bsg_tanh divider v_o", false,-1);
        tracep->declQuad(c+10,"bsg_tanh divider quotient_o", false,-1, 47,0);
        tracep->declQuad(c+12,"bsg_tanh divider remainder_o", false,-1, 47,0);
        tracep->declBit(c+558,"bsg_tanh divider yumi_i", false,-1);
        tracep->declQuad(c+335,"bsg_tanh divider opA_r", false,-1, 48,0);
        tracep->declQuad(c+337,"bsg_tanh divider opC_r", false,-1, 48,0);
        tracep->declBit(c+339,"bsg_tanh divider signed_div_r", false,-1);
        tracep->declBit(c+340,"bsg_tanh divider divisor_msb", false,-1);
        tracep->declBit(c+341,"bsg_tanh divider dividend_msb", false,-1);
        tracep->declBit(c+342,"bsg_tanh divider latch_signed_div_lo", false,-1);
        tracep->declBit(c+343,"bsg_tanh divider zero_divisor_li", false,-1);
        tracep->declBus(c+344,"bsg_tanh divider opA_sel_lo", false,-1, 1,0);
        tracep->declQuad(c+345,"bsg_tanh divider opA_mux", false,-1, 48,0);
        tracep->declQuad(c+347,"bsg_tanh divider add1_out", false,-1, 48,0);
        tracep->declQuad(c+629,"bsg_tanh divider add2_out", false,-1, 48,0);
        tracep->declQuad(c+349,"bsg_tanh divider opB_mux", false,-1, 48,0);
        tracep->declQuad(c+351,"bsg_tanh divider opC_mux", false,-1, 48,0);
        tracep->declBus(c+353,"bsg_tanh divider opB_sel_lo", false,-1, 2,0);
        tracep->declBus(c+354,"bsg_tanh divider opC_sel_lo", false,-1, 2,0);
        tracep->declBit(c+355,"bsg_tanh divider opA_ld_lo", false,-1);
        tracep->declBit(c+356,"bsg_tanh divider opB_ld_lo", false,-1);
        tracep->declQuad(c+357,"bsg_tanh divider opB_r", false,-1, 48,0);
        tracep->declBit(c+359,"bsg_tanh divider opC_ld_lo", false,-1);
        tracep->declBit(c+360,"bsg_tanh divider opA_inv_lo", false,-1);
        tracep->declBit(c+361,"bsg_tanh divider opB_inv_lo", false,-1);
        tracep->declBit(c+362,"bsg_tanh divider opA_clr_lo", false,-1);
        tracep->declBit(c+363,"bsg_tanh divider opB_clr_lo", false,-1);
        tracep->declQuad(c+364,"bsg_tanh divider add1_in0", false,-1, 48,0);
        tracep->declQuad(c+366,"bsg_tanh divider add1_in1", false,-1, 48,0);
        tracep->declQuad(c+631,"bsg_tanh divider add2_in0", false,-1, 48,0);
        tracep->declQuad(c+633,"bsg_tanh divider add2_in1", false,-1, 48,0);
        tracep->declBit(c+368,"bsg_tanh divider adder1_cin_lo", false,-1);
        tracep->declBus(c+568,"bsg_tanh divider req_reg width_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider req_reg harden_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider req_reg strength_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh divider req_reg clk_i", false,-1);
        tracep->declBus(c+628,"bsg_tanh divider req_reg data_i", false,-1, 0,0);
        tracep->declBit(c+342,"bsg_tanh divider req_reg en_i", false,-1);
        tracep->declBus(c+339,"bsg_tanh divider req_reg data_o", false,-1, 0,0);
        tracep->declBus(c+339,"bsg_tanh divider req_reg data_r", false,-1, 0,0);
        tracep->declBus(c+635,"bsg_tanh divider muxA width_p", false,-1, 31,0);
        tracep->declBus(c+636,"bsg_tanh divider muxA els_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider muxA harden_p", false,-1, 31,0);
        tracep->declArray(c+369,"bsg_tanh divider muxA data_i", false,-1, 97,0);
        tracep->declBus(c+344,"bsg_tanh divider muxA sel_one_hot_i", false,-1, 1,0);
        tracep->declQuad(c+345,"bsg_tanh divider muxA data_o", false,-1, 48,0);
        tracep->declArray(c+373,"bsg_tanh divider muxA data_masked", false,-1, 97,0);
        tracep->declBus(c+377,"bsg_tanh divider muxA reduce[0] gather", false,-1, 1,0);
        tracep->declBus(c+378,"bsg_tanh divider muxA reduce[1] gather", false,-1, 1,0);
        tracep->declBus(c+379,"bsg_tanh divider muxA reduce[2] gather", false,-1, 1,0);
        tracep->declBus(c+380,"bsg_tanh divider muxA reduce[3] gather", false,-1, 1,0);
        tracep->declBus(c+381,"bsg_tanh divider muxA reduce[4] gather", false,-1, 1,0);
        tracep->declBus(c+382,"bsg_tanh divider muxA reduce[5] gather", false,-1, 1,0);
        tracep->declBus(c+383,"bsg_tanh divider muxA reduce[6] gather", false,-1, 1,0);
        tracep->declBus(c+384,"bsg_tanh divider muxA reduce[7] gather", false,-1, 1,0);
        tracep->declBus(c+385,"bsg_tanh divider muxA reduce[8] gather", false,-1, 1,0);
        tracep->declBus(c+386,"bsg_tanh divider muxA reduce[9] gather", false,-1, 1,0);
        tracep->declBus(c+387,"bsg_tanh divider muxA reduce[10] gather", false,-1, 1,0);
        tracep->declBus(c+388,"bsg_tanh divider muxA reduce[11] gather", false,-1, 1,0);
        tracep->declBus(c+389,"bsg_tanh divider muxA reduce[12] gather", false,-1, 1,0);
        tracep->declBus(c+390,"bsg_tanh divider muxA reduce[13] gather", false,-1, 1,0);
        tracep->declBus(c+391,"bsg_tanh divider muxA reduce[14] gather", false,-1, 1,0);
        tracep->declBus(c+392,"bsg_tanh divider muxA reduce[15] gather", false,-1, 1,0);
        tracep->declBus(c+393,"bsg_tanh divider muxA reduce[16] gather", false,-1, 1,0);
        tracep->declBus(c+394,"bsg_tanh divider muxA reduce[17] gather", false,-1, 1,0);
        tracep->declBus(c+395,"bsg_tanh divider muxA reduce[18] gather", false,-1, 1,0);
        tracep->declBus(c+396,"bsg_tanh divider muxA reduce[19] gather", false,-1, 1,0);
        tracep->declBus(c+397,"bsg_tanh divider muxA reduce[20] gather", false,-1, 1,0);
        tracep->declBus(c+398,"bsg_tanh divider muxA reduce[21] gather", false,-1, 1,0);
        tracep->declBus(c+399,"bsg_tanh divider muxA reduce[22] gather", false,-1, 1,0);
        tracep->declBus(c+400,"bsg_tanh divider muxA reduce[23] gather", false,-1, 1,0);
        tracep->declBus(c+401,"bsg_tanh divider muxA reduce[24] gather", false,-1, 1,0);
        tracep->declBus(c+402,"bsg_tanh divider muxA reduce[25] gather", false,-1, 1,0);
        tracep->declBus(c+403,"bsg_tanh divider muxA reduce[26] gather", false,-1, 1,0);
        tracep->declBus(c+404,"bsg_tanh divider muxA reduce[27] gather", false,-1, 1,0);
        tracep->declBus(c+405,"bsg_tanh divider muxA reduce[28] gather", false,-1, 1,0);
        tracep->declBus(c+406,"bsg_tanh divider muxA reduce[29] gather", false,-1, 1,0);
        tracep->declBus(c+407,"bsg_tanh divider muxA reduce[30] gather", false,-1, 1,0);
        tracep->declBus(c+408,"bsg_tanh divider muxA reduce[31] gather", false,-1, 1,0);
        tracep->declBus(c+409,"bsg_tanh divider muxA reduce[32] gather", false,-1, 1,0);
        tracep->declBus(c+410,"bsg_tanh divider muxA reduce[33] gather", false,-1, 1,0);
        tracep->declBus(c+411,"bsg_tanh divider muxA reduce[34] gather", false,-1, 1,0);
        tracep->declBus(c+412,"bsg_tanh divider muxA reduce[35] gather", false,-1, 1,0);
        tracep->declBus(c+413,"bsg_tanh divider muxA reduce[36] gather", false,-1, 1,0);
        tracep->declBus(c+414,"bsg_tanh divider muxA reduce[37] gather", false,-1, 1,0);
        tracep->declBus(c+415,"bsg_tanh divider muxA reduce[38] gather", false,-1, 1,0);
        tracep->declBus(c+416,"bsg_tanh divider muxA reduce[39] gather", false,-1, 1,0);
        tracep->declBus(c+417,"bsg_tanh divider muxA reduce[40] gather", false,-1, 1,0);
        tracep->declBus(c+418,"bsg_tanh divider muxA reduce[41] gather", false,-1, 1,0);
        tracep->declBus(c+419,"bsg_tanh divider muxA reduce[42] gather", false,-1, 1,0);
        tracep->declBus(c+420,"bsg_tanh divider muxA reduce[43] gather", false,-1, 1,0);
        tracep->declBus(c+421,"bsg_tanh divider muxA reduce[44] gather", false,-1, 1,0);
        tracep->declBus(c+422,"bsg_tanh divider muxA reduce[45] gather", false,-1, 1,0);
        tracep->declBus(c+423,"bsg_tanh divider muxA reduce[46] gather", false,-1, 1,0);
        tracep->declBus(c+424,"bsg_tanh divider muxA reduce[47] gather", false,-1, 1,0);
        tracep->declBus(c+425,"bsg_tanh divider muxA reduce[48] gather", false,-1, 1,0);
        tracep->declBus(c+635,"bsg_tanh divider opA_reg width_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider opA_reg harden_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider opA_reg strength_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh divider opA_reg clk_i", false,-1);
        tracep->declQuad(c+345,"bsg_tanh divider opA_reg data_i", false,-1, 48,0);
        tracep->declBit(c+355,"bsg_tanh divider opA_reg en_i", false,-1);
        tracep->declQuad(c+335,"bsg_tanh divider opA_reg data_o", false,-1, 48,0);
        tracep->declQuad(c+335,"bsg_tanh divider opA_reg data_r", false,-1, 48,0);
        tracep->declBus(c+635,"bsg_tanh divider opB_reg width_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider opB_reg harden_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider opB_reg strength_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh divider opB_reg clk_i", false,-1);
        tracep->declQuad(c+349,"bsg_tanh divider opB_reg data_i", false,-1, 48,0);
        tracep->declBit(c+356,"bsg_tanh divider opB_reg en_i", false,-1);
        tracep->declQuad(c+357,"bsg_tanh divider opB_reg data_o", false,-1, 48,0);
        tracep->declQuad(c+357,"bsg_tanh divider opB_reg data_r", false,-1, 48,0);
        tracep->declBus(c+635,"bsg_tanh divider opC_reg width_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider opC_reg harden_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider opC_reg strength_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh divider opC_reg clk_i", false,-1);
        tracep->declQuad(c+351,"bsg_tanh divider opC_reg data_i", false,-1, 48,0);
        tracep->declBit(c+359,"bsg_tanh divider opC_reg en_i", false,-1);
        tracep->declQuad(c+337,"bsg_tanh divider opC_reg data_o", false,-1, 48,0);
        tracep->declQuad(c+337,"bsg_tanh divider opC_reg data_r", false,-1, 48,0);
        tracep->declBus(c+635,"bsg_tanh divider adder1 width_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider adder1 harden_p", false,-1, 31,0);
        tracep->declQuad(c+364,"bsg_tanh divider adder1 a_i", false,-1, 48,0);
        tracep->declQuad(c+366,"bsg_tanh divider adder1 b_i", false,-1, 48,0);
        tracep->declBit(c+368,"bsg_tanh divider adder1 cin_i", false,-1);
        tracep->declQuad(c+347,"bsg_tanh divider adder1 o", false,-1, 48,0);
        tracep->declBus(c+626,"bsg_tanh divider control width_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider control bits_per_iter_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh divider control clk_i", false,-1);
        tracep->declBit(c+560,"bsg_tanh divider control reset_i", false,-1);
        tracep->declBit(c+4,"bsg_tanh divider control v_i", false,-1);
        tracep->declBit(c+5,"bsg_tanh divider control ready_and_o", false,-1);
        tracep->declBit(c+343,"bsg_tanh divider control zero_divisor_i", false,-1);
        tracep->declBit(c+339,"bsg_tanh divider control signed_div_r_i", false,-1);
        tracep->declBit(c+426,"bsg_tanh divider control adder1_result_is_neg_i", false,-1);
        tracep->declBit(c+637,"bsg_tanh divider control adder2_result_is_neg_i", false,-1);
        tracep->declBit(c+427,"bsg_tanh divider control opA_is_neg_i", false,-1);
        tracep->declBit(c+428,"bsg_tanh divider control opC_is_neg_i", false,-1);
        tracep->declBus(c+344,"bsg_tanh divider control opA_sel_o", false,-1, 1,0);
        tracep->declBit(c+355,"bsg_tanh divider control opA_ld_o", false,-1);
        tracep->declBit(c+360,"bsg_tanh divider control opA_inv_o", false,-1);
        tracep->declBit(c+362,"bsg_tanh divider control opA_clr_l_o", false,-1);
        tracep->declBus(c+353,"bsg_tanh divider control opB_sel_o", false,-1, 2,0);
        tracep->declBit(c+356,"bsg_tanh divider control opB_ld_o", false,-1);
        tracep->declBit(c+361,"bsg_tanh divider control opB_inv_o", false,-1);
        tracep->declBit(c+363,"bsg_tanh divider control opB_clr_l_o", false,-1);
        tracep->declBus(c+354,"bsg_tanh divider control opC_sel_o", false,-1, 2,0);
        tracep->declBit(c+359,"bsg_tanh divider control opC_ld_o", false,-1);
        tracep->declBit(c+342,"bsg_tanh divider control latch_signed_div_o", false,-1);
        tracep->declBit(c+368,"bsg_tanh divider control adder1_cin_o", false,-1);
        tracep->declBit(c+6,"bsg_tanh divider control v_o", false,-1);
        tracep->declBit(c+558,"bsg_tanh divider control yumi_i", false,-1);
        tracep->declBit(c+429,"bsg_tanh divider control q_neg_r", false,-1);
        tracep->declBit(c+430,"bsg_tanh divider control r_neg_r", false,-1);
        tracep->declBit(c+431,"bsg_tanh divider control neg_ld", false,-1);
        tracep->declBit(c+432,"bsg_tanh divider control add1_neg_last_r", false,-1);
        tracep->declBit(c+433,"bsg_tanh divider control add2_neg_last_r", false,-1);
        tracep->declBus(c+434,"bsg_tanh divider control state", false,-1, 5,0);
        tracep->declBus(c+565,"bsg_tanh divider control next_state", false,-1, 5,0);
        tracep->declBus(c+435,"bsg_tanh divider control calc_cnt", false,-1, 5,0);
        tracep->declBit(c+436,"bsg_tanh divider control calc_up_li", false,-1);
        tracep->declBit(c+437,"bsg_tanh divider control calc_done", false,-1);
        tracep->declBus(c+626,"bsg_tanh divider control calc_counter max_val_p", false,-1, 31,0);
        tracep->declBus(c+627,"bsg_tanh divider control calc_counter init_val_p", false,-1, 31,0);
        tracep->declBus(c+566,"bsg_tanh divider control calc_counter ptr_width_lp", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider control calc_counter disable_overflow_warning_p", false,-1, 31,0);
        tracep->declBit(c+556,"bsg_tanh divider control calc_counter clk_i", false,-1);
        tracep->declBit(c+560,"bsg_tanh divider control calc_counter reset_i", false,-1);
        tracep->declBit(c+437,"bsg_tanh divider control calc_counter clear_i", false,-1);
        tracep->declBit(c+436,"bsg_tanh divider control calc_counter up_i", false,-1);
        tracep->declBus(c+435,"bsg_tanh divider control calc_counter count_o", false,-1, 5,0);
        tracep->declBus(c+635,"bsg_tanh divider genblk2 muxB width_p", false,-1, 31,0);
        tracep->declBus(c+638,"bsg_tanh divider genblk2 muxB els_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider genblk2 muxB harden_p", false,-1, 31,0);
        tracep->declArray(c+438,"bsg_tanh divider genblk2 muxB data_i", false,-1, 146,0);
        tracep->declBus(c+353,"bsg_tanh divider genblk2 muxB sel_one_hot_i", false,-1, 2,0);
        tracep->declQuad(c+349,"bsg_tanh divider genblk2 muxB data_o", false,-1, 48,0);
        tracep->declArray(c+443,"bsg_tanh divider genblk2 muxB data_masked", false,-1, 146,0);
        tracep->declBus(c+448,"bsg_tanh divider genblk2 muxB reduce[0] gather", false,-1, 2,0);
        tracep->declBus(c+449,"bsg_tanh divider genblk2 muxB reduce[1] gather", false,-1, 2,0);
        tracep->declBus(c+450,"bsg_tanh divider genblk2 muxB reduce[2] gather", false,-1, 2,0);
        tracep->declBus(c+451,"bsg_tanh divider genblk2 muxB reduce[3] gather", false,-1, 2,0);
        tracep->declBus(c+452,"bsg_tanh divider genblk2 muxB reduce[4] gather", false,-1, 2,0);
        tracep->declBus(c+453,"bsg_tanh divider genblk2 muxB reduce[5] gather", false,-1, 2,0);
        tracep->declBus(c+454,"bsg_tanh divider genblk2 muxB reduce[6] gather", false,-1, 2,0);
        tracep->declBus(c+455,"bsg_tanh divider genblk2 muxB reduce[7] gather", false,-1, 2,0);
        tracep->declBus(c+456,"bsg_tanh divider genblk2 muxB reduce[8] gather", false,-1, 2,0);
        tracep->declBus(c+457,"bsg_tanh divider genblk2 muxB reduce[9] gather", false,-1, 2,0);
        tracep->declBus(c+458,"bsg_tanh divider genblk2 muxB reduce[10] gather", false,-1, 2,0);
        tracep->declBus(c+459,"bsg_tanh divider genblk2 muxB reduce[11] gather", false,-1, 2,0);
        tracep->declBus(c+460,"bsg_tanh divider genblk2 muxB reduce[12] gather", false,-1, 2,0);
        tracep->declBus(c+461,"bsg_tanh divider genblk2 muxB reduce[13] gather", false,-1, 2,0);
        tracep->declBus(c+462,"bsg_tanh divider genblk2 muxB reduce[14] gather", false,-1, 2,0);
        tracep->declBus(c+463,"bsg_tanh divider genblk2 muxB reduce[15] gather", false,-1, 2,0);
        tracep->declBus(c+464,"bsg_tanh divider genblk2 muxB reduce[16] gather", false,-1, 2,0);
        tracep->declBus(c+465,"bsg_tanh divider genblk2 muxB reduce[17] gather", false,-1, 2,0);
        tracep->declBus(c+466,"bsg_tanh divider genblk2 muxB reduce[18] gather", false,-1, 2,0);
        tracep->declBus(c+467,"bsg_tanh divider genblk2 muxB reduce[19] gather", false,-1, 2,0);
        tracep->declBus(c+468,"bsg_tanh divider genblk2 muxB reduce[20] gather", false,-1, 2,0);
        tracep->declBus(c+469,"bsg_tanh divider genblk2 muxB reduce[21] gather", false,-1, 2,0);
        tracep->declBus(c+470,"bsg_tanh divider genblk2 muxB reduce[22] gather", false,-1, 2,0);
        tracep->declBus(c+471,"bsg_tanh divider genblk2 muxB reduce[23] gather", false,-1, 2,0);
        tracep->declBus(c+472,"bsg_tanh divider genblk2 muxB reduce[24] gather", false,-1, 2,0);
        tracep->declBus(c+473,"bsg_tanh divider genblk2 muxB reduce[25] gather", false,-1, 2,0);
        tracep->declBus(c+474,"bsg_tanh divider genblk2 muxB reduce[26] gather", false,-1, 2,0);
        tracep->declBus(c+475,"bsg_tanh divider genblk2 muxB reduce[27] gather", false,-1, 2,0);
        tracep->declBus(c+476,"bsg_tanh divider genblk2 muxB reduce[28] gather", false,-1, 2,0);
        tracep->declBus(c+477,"bsg_tanh divider genblk2 muxB reduce[29] gather", false,-1, 2,0);
        tracep->declBus(c+478,"bsg_tanh divider genblk2 muxB reduce[30] gather", false,-1, 2,0);
        tracep->declBus(c+479,"bsg_tanh divider genblk2 muxB reduce[31] gather", false,-1, 2,0);
        tracep->declBus(c+480,"bsg_tanh divider genblk2 muxB reduce[32] gather", false,-1, 2,0);
        tracep->declBus(c+481,"bsg_tanh divider genblk2 muxB reduce[33] gather", false,-1, 2,0);
        tracep->declBus(c+482,"bsg_tanh divider genblk2 muxB reduce[34] gather", false,-1, 2,0);
        tracep->declBus(c+483,"bsg_tanh divider genblk2 muxB reduce[35] gather", false,-1, 2,0);
        tracep->declBus(c+484,"bsg_tanh divider genblk2 muxB reduce[36] gather", false,-1, 2,0);
        tracep->declBus(c+485,"bsg_tanh divider genblk2 muxB reduce[37] gather", false,-1, 2,0);
        tracep->declBus(c+486,"bsg_tanh divider genblk2 muxB reduce[38] gather", false,-1, 2,0);
        tracep->declBus(c+487,"bsg_tanh divider genblk2 muxB reduce[39] gather", false,-1, 2,0);
        tracep->declBus(c+488,"bsg_tanh divider genblk2 muxB reduce[40] gather", false,-1, 2,0);
        tracep->declBus(c+489,"bsg_tanh divider genblk2 muxB reduce[41] gather", false,-1, 2,0);
        tracep->declBus(c+490,"bsg_tanh divider genblk2 muxB reduce[42] gather", false,-1, 2,0);
        tracep->declBus(c+491,"bsg_tanh divider genblk2 muxB reduce[43] gather", false,-1, 2,0);
        tracep->declBus(c+492,"bsg_tanh divider genblk2 muxB reduce[44] gather", false,-1, 2,0);
        tracep->declBus(c+493,"bsg_tanh divider genblk2 muxB reduce[45] gather", false,-1, 2,0);
        tracep->declBus(c+494,"bsg_tanh divider genblk2 muxB reduce[46] gather", false,-1, 2,0);
        tracep->declBus(c+495,"bsg_tanh divider genblk2 muxB reduce[47] gather", false,-1, 2,0);
        tracep->declBus(c+496,"bsg_tanh divider genblk2 muxB reduce[48] gather", false,-1, 2,0);
        tracep->declBus(c+635,"bsg_tanh divider genblk2 muxC width_p", false,-1, 31,0);
        tracep->declBus(c+638,"bsg_tanh divider genblk2 muxC els_p", false,-1, 31,0);
        tracep->declBus(c+568,"bsg_tanh divider genblk2 muxC harden_p", false,-1, 31,0);
        tracep->declArray(c+497,"bsg_tanh divider genblk2 muxC data_i", false,-1, 146,0);
        tracep->declBus(c+354,"bsg_tanh divider genblk2 muxC sel_one_hot_i", false,-1, 2,0);
        tracep->declQuad(c+351,"bsg_tanh divider genblk2 muxC data_o", false,-1, 48,0);
        tracep->declArray(c+502,"bsg_tanh divider genblk2 muxC data_masked", false,-1, 146,0);
        tracep->declBus(c+507,"bsg_tanh divider genblk2 muxC reduce[0] gather", false,-1, 2,0);
        tracep->declBus(c+508,"bsg_tanh divider genblk2 muxC reduce[1] gather", false,-1, 2,0);
        tracep->declBus(c+509,"bsg_tanh divider genblk2 muxC reduce[2] gather", false,-1, 2,0);
        tracep->declBus(c+510,"bsg_tanh divider genblk2 muxC reduce[3] gather", false,-1, 2,0);
        tracep->declBus(c+511,"bsg_tanh divider genblk2 muxC reduce[4] gather", false,-1, 2,0);
        tracep->declBus(c+512,"bsg_tanh divider genblk2 muxC reduce[5] gather", false,-1, 2,0);
        tracep->declBus(c+513,"bsg_tanh divider genblk2 muxC reduce[6] gather", false,-1, 2,0);
        tracep->declBus(c+514,"bsg_tanh divider genblk2 muxC reduce[7] gather", false,-1, 2,0);
        tracep->declBus(c+515,"bsg_tanh divider genblk2 muxC reduce[8] gather", false,-1, 2,0);
        tracep->declBus(c+516,"bsg_tanh divider genblk2 muxC reduce[9] gather", false,-1, 2,0);
        tracep->declBus(c+517,"bsg_tanh divider genblk2 muxC reduce[10] gather", false,-1, 2,0);
        tracep->declBus(c+518,"bsg_tanh divider genblk2 muxC reduce[11] gather", false,-1, 2,0);
        tracep->declBus(c+519,"bsg_tanh divider genblk2 muxC reduce[12] gather", false,-1, 2,0);
        tracep->declBus(c+520,"bsg_tanh divider genblk2 muxC reduce[13] gather", false,-1, 2,0);
        tracep->declBus(c+521,"bsg_tanh divider genblk2 muxC reduce[14] gather", false,-1, 2,0);
        tracep->declBus(c+522,"bsg_tanh divider genblk2 muxC reduce[15] gather", false,-1, 2,0);
        tracep->declBus(c+523,"bsg_tanh divider genblk2 muxC reduce[16] gather", false,-1, 2,0);
        tracep->declBus(c+524,"bsg_tanh divider genblk2 muxC reduce[17] gather", false,-1, 2,0);
        tracep->declBus(c+525,"bsg_tanh divider genblk2 muxC reduce[18] gather", false,-1, 2,0);
        tracep->declBus(c+526,"bsg_tanh divider genblk2 muxC reduce[19] gather", false,-1, 2,0);
        tracep->declBus(c+527,"bsg_tanh divider genblk2 muxC reduce[20] gather", false,-1, 2,0);
        tracep->declBus(c+528,"bsg_tanh divider genblk2 muxC reduce[21] gather", false,-1, 2,0);
        tracep->declBus(c+529,"bsg_tanh divider genblk2 muxC reduce[22] gather", false,-1, 2,0);
        tracep->declBus(c+530,"bsg_tanh divider genblk2 muxC reduce[23] gather", false,-1, 2,0);
        tracep->declBus(c+531,"bsg_tanh divider genblk2 muxC reduce[24] gather", false,-1, 2,0);
        tracep->declBus(c+532,"bsg_tanh divider genblk2 muxC reduce[25] gather", false,-1, 2,0);
        tracep->declBus(c+533,"bsg_tanh divider genblk2 muxC reduce[26] gather", false,-1, 2,0);
        tracep->declBus(c+534,"bsg_tanh divider genblk2 muxC reduce[27] gather", false,-1, 2,0);
        tracep->declBus(c+535,"bsg_tanh divider genblk2 muxC reduce[28] gather", false,-1, 2,0);
        tracep->declBus(c+536,"bsg_tanh divider genblk2 muxC reduce[29] gather", false,-1, 2,0);
        tracep->declBus(c+537,"bsg_tanh divider genblk2 muxC reduce[30] gather", false,-1, 2,0);
        tracep->declBus(c+538,"bsg_tanh divider genblk2 muxC reduce[31] gather", false,-1, 2,0);
        tracep->declBus(c+539,"bsg_tanh divider genblk2 muxC reduce[32] gather", false,-1, 2,0);
        tracep->declBus(c+540,"bsg_tanh divider genblk2 muxC reduce[33] gather", false,-1, 2,0);
        tracep->declBus(c+541,"bsg_tanh divider genblk2 muxC reduce[34] gather", false,-1, 2,0);
        tracep->declBus(c+542,"bsg_tanh divider genblk2 muxC reduce[35] gather", false,-1, 2,0);
        tracep->declBus(c+543,"bsg_tanh divider genblk2 muxC reduce[36] gather", false,-1, 2,0);
        tracep->declBus(c+544,"bsg_tanh divider genblk2 muxC reduce[37] gather", false,-1, 2,0);
        tracep->declBus(c+545,"bsg_tanh divider genblk2 muxC reduce[38] gather", false,-1, 2,0);
        tracep->declBus(c+546,"bsg_tanh divider genblk2 muxC reduce[39] gather", false,-1, 2,0);
        tracep->declBus(c+547,"bsg_tanh divider genblk2 muxC reduce[40] gather", false,-1, 2,0);
        tracep->declBus(c+548,"bsg_tanh divider genblk2 muxC reduce[41] gather", false,-1, 2,0);
        tracep->declBus(c+549,"bsg_tanh divider genblk2 muxC reduce[42] gather", false,-1, 2,0);
        tracep->declBus(c+550,"bsg_tanh divider genblk2 muxC reduce[43] gather", false,-1, 2,0);
        tracep->declBus(c+551,"bsg_tanh divider genblk2 muxC reduce[44] gather", false,-1, 2,0);
        tracep->declBus(c+552,"bsg_tanh divider genblk2 muxC reduce[45] gather", false,-1, 2,0);
        tracep->declBus(c+553,"bsg_tanh divider genblk2 muxC reduce[46] gather", false,-1, 2,0);
        tracep->declBus(c+554,"bsg_tanh divider genblk2 muxC reduce[47] gather", false,-1, 2,0);
        tracep->declBus(c+555,"bsg_tanh divider genblk2 muxC reduce[48] gather", false,-1, 2,0);
    }
}

void Vbsg_tanh::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vbsg_tanh::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vbsg_tanh::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*415:0*/ __Vtemp15[13];
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U]),32);
        tracep->fullIData(oldp+2,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]),32);
        tracep->fullBit(oldp+3,((1U & (~ (IData)(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))));
        tracep->fullBit(oldp+4,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                       >> 0x14U))));
        tracep->fullBit(oldp+5,((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
        tracep->fullBit(oldp+6,((8U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
        tracep->fullCData(oldp+7,(vlTOPp->bsg_tanh__DOT__state_r),2);
        tracep->fullQData(oldp+8,((0xffffffffffffULL 
                                   & ((QData)((IData)(
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                      << 0x10U))),48);
        tracep->fullQData(oldp+10,((0xffffffffffffULL 
                                    & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
        tracep->fullQData(oldp+12,((0xffffffffffffULL 
                                    & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
        tracep->fullBit(oldp+14,(((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                  & (0U == (IData)(vlTOPp->bsg_tanh__DOT__state_r)))));
        tracep->fullWData(oldp+15,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x),672);
        tracep->fullWData(oldp+36,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y),672);
        tracep->fullWData(oldp+57,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang),441);
        tracep->fullIData(oldp+71,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val),21);
        tracep->fullWData(oldp+72,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans),640);
        tracep->fullWData(oldp+92,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans),640);
        tracep->fullWData(oldp+112,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans),420);
        tracep->fullIData(oldp+126,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans),20);
        tracep->fullBit(oldp+127,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe));
        tracep->fullIData(oldp+128,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]),32);
        tracep->fullIData(oldp+129,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]),32);
        tracep->fullIData(oldp+130,((0x1fffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])),21);
        tracep->fullBit(oldp+131,((1U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)));
        tracep->fullIData(oldp+132,((((0x100000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
        tracep->fullIData(oldp+133,((((0x100000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
        tracep->fullIData(oldp+134,((0x1fffffU & ((
                                                   (0x100000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x31e41U) 
                                                   + 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                   : 
                                                  (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                   - (IData)(0x31e41U))))),21);
        tracep->fullIData(oldp+135,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)),32);
        tracep->fullIData(oldp+136,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)),32);
        tracep->fullBit(oldp+137,(((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+138,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]),32);
        tracep->fullIData(oldp+139,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]),32);
        tracep->fullIData(oldp+140,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                   << 0xbU) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                     >> 0x15U)))),21);
        tracep->fullBit(oldp+141,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 1U))));
        tracep->fullIData(oldp+142,((((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
        tracep->fullIData(oldp+143,((((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
        tracep->fullIData(oldp+144,((0x1fffffU & ((
                                                   (0x200U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x2c548U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                       >> 0x15U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                       >> 0x15U)) 
                                                   - (IData)(0x2c548U))))),21);
        tracep->fullIData(oldp+145,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)),32);
        tracep->fullIData(oldp+146,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)),32);
        tracep->fullBit(oldp+147,(((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+148,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]),32);
        tracep->fullIData(oldp+149,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]),32);
        tracep->fullIData(oldp+150,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     >> 0xaU)))),21);
        tracep->fullBit(oldp+151,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 2U))));
        tracep->fullIData(oldp+152,((((0x40000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
        tracep->fullIData(oldp+153,((((0x40000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
        tracep->fullIData(oldp+154,((0x1fffffU & ((
                                                   (0x40000000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x26c0eU) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0xaU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0xaU)) 
                                                   - (IData)(0x26c0eU))))),21);
        tracep->fullIData(oldp+155,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)),32);
        tracep->fullIData(oldp+156,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)),32);
        tracep->fullBit(oldp+157,(((0x40000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+158,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]),32);
        tracep->fullIData(oldp+159,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]),32);
        tracep->fullIData(oldp+160,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                   << 1U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     >> 0x1fU)))),21);
        tracep->fullBit(oldp+161,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 3U))));
        tracep->fullIData(oldp+162,((((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
        tracep->fullIData(oldp+163,((((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
        tracep->fullIData(oldp+164,((0x1fffffU & ((
                                                   (0x80000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x21252U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 1U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0x1fU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 1U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0x1fU)) 
                                                   - (IData)(0x21252U))))),21);
        tracep->fullIData(oldp+165,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)),32);
        tracep->fullIData(oldp+166,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)),32);
        tracep->fullBit(oldp+167,(((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+168,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]),32);
        tracep->fullIData(oldp+169,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]),32);
        tracep->fullIData(oldp+170,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                     >> 0x14U)))),21);
        tracep->fullBit(oldp+171,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 4U))));
        tracep->fullIData(oldp+172,((((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
        tracep->fullIData(oldp+173,((((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
        tracep->fullIData(oldp+174,((0x1fffffU & ((
                                                   (0x100U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x1b78cU) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                       >> 0x14U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                       >> 0x14U)) 
                                                   - (IData)(0x1b78cU))))),21);
        tracep->fullIData(oldp+175,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)),32);
        tracep->fullIData(oldp+176,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)),32);
        tracep->fullBit(oldp+177,(((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+178,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]),32);
        tracep->fullIData(oldp+179,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]),32);
        tracep->fullIData(oldp+180,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     >> 9U)))),21);
        tracep->fullBit(oldp+181,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 5U))));
        tracep->fullIData(oldp+182,((((0x20000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
        tracep->fullIData(oldp+183,((((0x20000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
        tracep->fullIData(oldp+184,((0x1fffffU & ((
                                                   (0x20000000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x15aa1U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 0x17U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 9U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 0x17U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 9U)) 
                                                   - (IData)(0x15aa1U))))),21);
        tracep->fullIData(oldp+185,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)),32);
        tracep->fullIData(oldp+186,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)),32);
        tracep->fullBit(oldp+187,(((0x20000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+188,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]),32);
        tracep->fullIData(oldp+189,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]),32);
        tracep->fullIData(oldp+190,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                   << 2U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     >> 0x1eU)))),21);
        tracep->fullBit(oldp+191,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 6U))));
        tracep->fullIData(oldp+192,((((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
        tracep->fullIData(oldp+193,((((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                       ? 1U : 0U) ? 
                                     ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                       - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U))
                                      : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                          + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
        tracep->fullIData(oldp+194,((0x1fffffU & ((
                                                   (0x40000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0xf913U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 2U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 0x1eU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 2U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 0x1eU)) 
                                                   - (IData)(0xf913U))))),21);
        tracep->fullIData(oldp+195,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)),32);
        tracep->fullIData(oldp+196,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)),32);
        tracep->fullBit(oldp+197,(((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+198,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U]),32);
        tracep->fullIData(oldp+199,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U]),32);
        tracep->fullIData(oldp+200,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                     >> 0x13U)))),21);
        tracep->fullBit(oldp+201,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 7U))));
        tracep->fullIData(oldp+202,((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
        tracep->fullIData(oldp+203,((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
        tracep->fullIData(oldp+204,((0x1fffffU & ((
                                                   (0x80U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x8c9fU) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                       >> 0x13U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                       >> 0x13U)) 
                                                   - (IData)(0x8c9fU))))),21);
        tracep->fullIData(oldp+205,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)),32);
        tracep->fullIData(oldp+206,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)),32);
        tracep->fullBit(oldp+207,(((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+208,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U]),32);
        tracep->fullIData(oldp+209,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U]),32);
        tracep->fullIData(oldp+210,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     >> 8U)))),21);
        tracep->fullBit(oldp+211,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 8U))));
        tracep->fullIData(oldp+212,((((0x10000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
        tracep->fullIData(oldp+213,((((0x10000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
        tracep->fullIData(oldp+214,((0x1fffffU & ((
                                                   (0x10000000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x4162U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 8U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 8U)) 
                                                   - (IData)(0x4162U))))),21);
        tracep->fullIData(oldp+215,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)),32);
        tracep->fullIData(oldp+216,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)),32);
        tracep->fullBit(oldp+217,(((0x10000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+218,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U]),32);
        tracep->fullIData(oldp+219,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U]),32);
        tracep->fullIData(oldp+220,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                   << 3U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     >> 0x1dU)))),21);
        tracep->fullBit(oldp+221,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 9U))));
        tracep->fullIData(oldp+222,((((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
        tracep->fullIData(oldp+223,((((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
        tracep->fullIData(oldp+224,((0x1fffffU & ((
                                                   (0x20000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x202bU) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 3U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 0x1dU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 3U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 0x1dU)) 
                                                   - (IData)(0x202bU))))),21);
        tracep->fullIData(oldp+225,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)),32);
        tracep->fullIData(oldp+226,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)),32);
        tracep->fullBit(oldp+227,(((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+228,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU]),32);
        tracep->fullIData(oldp+229,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU]),32);
        tracep->fullIData(oldp+230,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                     >> 0x12U)))),21);
        tracep->fullBit(oldp+231,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0xaU))));
        tracep->fullIData(oldp+232,((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
        tracep->fullIData(oldp+233,((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
        tracep->fullIData(oldp+234,((0x1fffffU & ((
                                                   (0x40U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x1005U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0xeU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                       >> 0x12U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0xeU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                       >> 0x12U)) 
                                                   - (IData)(0x1005U))))),21);
        tracep->fullIData(oldp+235,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
        tracep->fullIData(oldp+236,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
        tracep->fullBit(oldp+237,(((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+238,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU]),32);
        tracep->fullIData(oldp+239,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU]),32);
        tracep->fullIData(oldp+240,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                   << 0x19U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     >> 7U)))),21);
        tracep->fullBit(oldp+241,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0xbU))));
        tracep->fullIData(oldp+242,((((0x8000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
        tracep->fullIData(oldp+243,((((0x8000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
        tracep->fullIData(oldp+244,((0x1fffffU & ((
                                                   (0x8000000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x1005U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 0x19U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 7U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 0x19U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 7U)) 
                                                   - (IData)(0x1005U))))),21);
        tracep->fullIData(oldp+245,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
        tracep->fullIData(oldp+246,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
        tracep->fullBit(oldp+247,(((0x8000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+248,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU]),32);
        tracep->fullIData(oldp+249,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU]),32);
        tracep->fullIData(oldp+250,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                   << 4U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     >> 0x1cU)))),21);
        tracep->fullBit(oldp+251,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0xcU))));
        tracep->fullIData(oldp+252,((((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
        tracep->fullIData(oldp+253,((((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
        tracep->fullIData(oldp+254,((0x1fffffU & ((
                                                   (0x10000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x800U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 4U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 0x1cU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 4U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 0x1cU)) 
                                                   - (IData)(0x800U))))),21);
        tracep->fullIData(oldp+255,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
        tracep->fullIData(oldp+256,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
        tracep->fullBit(oldp+257,(((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+258,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU]),32);
        tracep->fullIData(oldp+259,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU]),32);
        tracep->fullIData(oldp+260,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     >> 0x11U)))),21);
        tracep->fullBit(oldp+261,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0xdU))));
        tracep->fullIData(oldp+262,((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
        tracep->fullIData(oldp+263,((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
        tracep->fullIData(oldp+264,((0x1fffffU & ((
                                                   (0x20U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x400U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0xfU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                       >> 0x11U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0xfU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                       >> 0x11U)) 
                                                   - (IData)(0x400U))))),21);
        tracep->fullIData(oldp+265,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
        tracep->fullIData(oldp+266,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
        tracep->fullBit(oldp+267,(((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+268,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU]),32);
        tracep->fullIData(oldp+269,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU]),32);
        tracep->fullIData(oldp+270,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     >> 6U)))),21);
        tracep->fullBit(oldp+271,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0xeU))));
        tracep->fullIData(oldp+272,((((0x4000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
        tracep->fullIData(oldp+273,((((0x4000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
        tracep->fullIData(oldp+274,((0x1fffffU & ((
                                                   (0x4000000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x200U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 6U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 6U)) 
                                                   - (IData)(0x200U))))),21);
        tracep->fullIData(oldp+275,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
        tracep->fullIData(oldp+276,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
        tracep->fullBit(oldp+277,(((0x4000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+278,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU]),32);
        tracep->fullIData(oldp+279,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU]),32);
        tracep->fullIData(oldp+280,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                   << 5U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     >> 0x1bU)))),21);
        tracep->fullBit(oldp+281,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0xfU))));
        tracep->fullIData(oldp+282,((((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
        tracep->fullIData(oldp+283,((((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
        tracep->fullIData(oldp+284,((0x1fffffU & ((
                                                   (0x8000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 5U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 0x1bU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 5U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 0x1bU)) 
                                                   - (IData)(0x100U))))),21);
        tracep->fullIData(oldp+285,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
        tracep->fullIData(oldp+286,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
        tracep->fullBit(oldp+287,(((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+288,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U]),32);
        tracep->fullIData(oldp+289,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U]),32);
        tracep->fullIData(oldp+290,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     >> 0x10U)))),21);
        tracep->fullBit(oldp+291,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0x10U))));
        tracep->fullIData(oldp+292,((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
        tracep->fullIData(oldp+293,((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
        tracep->fullIData(oldp+294,((0x1fffffU & ((
                                                   (0x10U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x80U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x10U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                       >> 0x10U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x10U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                       >> 0x10U)) 
                                                   - (IData)(0x80U))))),21);
        tracep->fullIData(oldp+295,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
        tracep->fullIData(oldp+296,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
        tracep->fullBit(oldp+297,(((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+298,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U]),32);
        tracep->fullIData(oldp+299,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U]),32);
        tracep->fullIData(oldp+300,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                   << 0x1bU) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     >> 5U)))),21);
        tracep->fullBit(oldp+301,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0x11U))));
        tracep->fullIData(oldp+302,((((0x2000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
        tracep->fullIData(oldp+303,((((0x2000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
        tracep->fullIData(oldp+304,((0x1fffffU & ((
                                                   (0x2000000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x40U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 5U)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 5U)) 
                                                   - (IData)(0x40U))))),21);
        tracep->fullIData(oldp+305,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
        tracep->fullIData(oldp+306,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
        tracep->fullBit(oldp+307,(((0x2000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+308,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U]),32);
        tracep->fullIData(oldp+309,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U]),32);
        tracep->fullIData(oldp+310,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                   << 6U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     >> 0x1aU)))),21);
        tracep->fullBit(oldp+311,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0x12U))));
        tracep->fullIData(oldp+312,((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
        tracep->fullIData(oldp+313,((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
        tracep->fullIData(oldp+314,((0x1fffffU & ((
                                                   (0x4000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x20U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)) 
                                                   - (IData)(0x20U))))),21);
        tracep->fullIData(oldp+315,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
        tracep->fullIData(oldp+316,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
        tracep->fullBit(oldp+317,(((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+318,((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
        tracep->fullIData(oldp+319,((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
        tracep->fullIData(oldp+320,((0x1fffffU & ((
                                                   (0x4000U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)) 
                                                   - (IData)(0x10U))))),21);
        tracep->fullIData(oldp+321,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
        tracep->fullIData(oldp+322,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
        tracep->fullIData(oldp+323,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U]),32);
        tracep->fullIData(oldp+324,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U]),32);
        tracep->fullIData(oldp+325,((0x1fffffU & ((
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                   << 0x11U) 
                                                  | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     >> 0xfU)))),21);
        tracep->fullBit(oldp+326,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                         >> 0x13U))));
        tracep->fullIData(oldp+327,((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
        tracep->fullIData(oldp+328,((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                       ? 1U : 0U) ? 
                                     (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                      : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
        tracep->fullIData(oldp+329,((0x1fffffU & ((
                                                   (8U 
                                                    & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                                    ? 1U
                                                    : 0U)
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)))
                                                   : 
                                                  (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)) 
                                                   - (IData)(0x10U))))),21);
        tracep->fullIData(oldp+330,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
        tracep->fullIData(oldp+331,(VL_SHIFTRS_III(32,32,32, 
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
        tracep->fullBit(oldp+332,(((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                    ? 1U : 0U)));
        tracep->fullQData(oldp+333,((QData)((IData)(
                                                    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))),48);
        tracep->fullQData(oldp+335,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r),49);
        tracep->fullQData(oldp+337,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r),49);
        tracep->fullBit(oldp+339,(vlTOPp->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
        tracep->fullBit(oldp+340,((1U & (IData)(((QData)((IData)(
                                                                 vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                                 >> 0x2fU)))));
        tracep->fullBit(oldp+341,((1U & (IData)((1ULL 
                                                 & ((QData)((IData)(
                                                                    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                    >> 0x1fU))))));
        tracep->fullBit(oldp+342,(vlTOPp->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo));
        tracep->fullBit(oldp+343,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))))));
        tracep->fullCData(oldp+344,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo),2);
        tracep->fullQData(oldp+345,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux),49);
        tracep->fullQData(oldp+347,(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out),49);
        tracep->fullQData(oldp+349,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux),49);
        tracep->fullQData(oldp+351,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux),49);
        tracep->fullCData(oldp+353,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo),3);
        tracep->fullCData(oldp+354,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo),3);
        tracep->fullBit(oldp+355,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo));
        tracep->fullBit(oldp+356,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_ld_lo));
        tracep->fullQData(oldp+357,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r),49);
        tracep->fullBit(oldp+359,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_ld_lo));
        tracep->fullBit(oldp+360,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo));
        tracep->fullBit(oldp+361,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo));
        tracep->fullBit(oldp+362,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo));
        tracep->fullBit(oldp+363,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo));
        tracep->fullQData(oldp+364,((0x1ffffffffffffULL 
                                     & ((vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                         ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                                        & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo)))))),49);
        tracep->fullQData(oldp+366,((0x1ffffffffffffULL 
                                     & ((vlTOPp->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                         ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                                        & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo)))))),49);
        tracep->fullBit(oldp+368,(vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo));
        tracep->fullWData(oldp+369,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i),98);
        tracep->fullWData(oldp+373,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked),98);
        tracep->fullCData(oldp+377,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather),2);
        tracep->fullCData(oldp+378,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather),2);
        tracep->fullCData(oldp+379,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather),2);
        tracep->fullCData(oldp+380,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather),2);
        tracep->fullCData(oldp+381,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather),2);
        tracep->fullCData(oldp+382,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather),2);
        tracep->fullCData(oldp+383,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather),2);
        tracep->fullCData(oldp+384,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather),2);
        tracep->fullCData(oldp+385,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather),2);
        tracep->fullCData(oldp+386,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather),2);
        tracep->fullCData(oldp+387,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather),2);
        tracep->fullCData(oldp+388,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather),2);
        tracep->fullCData(oldp+389,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather),2);
        tracep->fullCData(oldp+390,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather),2);
        tracep->fullCData(oldp+391,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather),2);
        tracep->fullCData(oldp+392,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather),2);
        tracep->fullCData(oldp+393,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather),2);
        tracep->fullCData(oldp+394,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather),2);
        tracep->fullCData(oldp+395,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather),2);
        tracep->fullCData(oldp+396,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather),2);
        tracep->fullCData(oldp+397,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather),2);
        tracep->fullCData(oldp+398,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather),2);
        tracep->fullCData(oldp+399,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather),2);
        tracep->fullCData(oldp+400,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather),2);
        tracep->fullCData(oldp+401,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather),2);
        tracep->fullCData(oldp+402,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather),2);
        tracep->fullCData(oldp+403,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather),2);
        tracep->fullCData(oldp+404,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather),2);
        tracep->fullCData(oldp+405,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather),2);
        tracep->fullCData(oldp+406,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather),2);
        tracep->fullCData(oldp+407,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather),2);
        tracep->fullCData(oldp+408,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather),2);
        tracep->fullCData(oldp+409,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather),2);
        tracep->fullCData(oldp+410,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather),2);
        tracep->fullCData(oldp+411,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather),2);
        tracep->fullCData(oldp+412,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather),2);
        tracep->fullCData(oldp+413,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather),2);
        tracep->fullCData(oldp+414,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather),2);
        tracep->fullCData(oldp+415,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather),2);
        tracep->fullCData(oldp+416,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather),2);
        tracep->fullCData(oldp+417,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather),2);
        tracep->fullCData(oldp+418,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather),2);
        tracep->fullCData(oldp+419,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather),2);
        tracep->fullCData(oldp+420,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather),2);
        tracep->fullCData(oldp+421,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather),2);
        tracep->fullCData(oldp+422,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather),2);
        tracep->fullCData(oldp+423,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather),2);
        tracep->fullCData(oldp+424,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather),2);
        tracep->fullCData(oldp+425,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather),2);
        tracep->fullBit(oldp+426,((1U & (IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                 >> 0x30U)))));
        tracep->fullBit(oldp+427,((1U & (IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                                 >> 0x30U)))));
        tracep->fullBit(oldp+428,((1U & (IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                 >> 0x30U)))));
        tracep->fullBit(oldp+429,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r));
        tracep->fullBit(oldp+430,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
        tracep->fullBit(oldp+431,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld));
        tracep->fullBit(oldp+432,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r));
        tracep->fullBit(oldp+433,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r));
        tracep->fullCData(oldp+434,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state),6);
        tracep->fullCData(oldp+435,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt),6);
        tracep->fullBit(oldp+436,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li));
        tracep->fullBit(oldp+437,((0x30U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))));
        tracep->fullWData(oldp+438,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i),147);
        tracep->fullWData(oldp+443,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked),147);
        tracep->fullCData(oldp+448,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather),3);
        tracep->fullCData(oldp+449,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather),3);
        tracep->fullCData(oldp+450,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather),3);
        tracep->fullCData(oldp+451,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather),3);
        tracep->fullCData(oldp+452,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather),3);
        tracep->fullCData(oldp+453,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather),3);
        tracep->fullCData(oldp+454,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather),3);
        tracep->fullCData(oldp+455,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather),3);
        tracep->fullCData(oldp+456,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather),3);
        tracep->fullCData(oldp+457,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather),3);
        tracep->fullCData(oldp+458,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather),3);
        tracep->fullCData(oldp+459,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather),3);
        tracep->fullCData(oldp+460,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather),3);
        tracep->fullCData(oldp+461,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather),3);
        tracep->fullCData(oldp+462,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather),3);
        tracep->fullCData(oldp+463,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather),3);
        tracep->fullCData(oldp+464,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather),3);
        tracep->fullCData(oldp+465,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather),3);
        tracep->fullCData(oldp+466,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather),3);
        tracep->fullCData(oldp+467,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather),3);
        tracep->fullCData(oldp+468,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather),3);
        tracep->fullCData(oldp+469,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather),3);
        tracep->fullCData(oldp+470,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather),3);
        tracep->fullCData(oldp+471,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather),3);
        tracep->fullCData(oldp+472,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather),3);
        tracep->fullCData(oldp+473,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather),3);
        tracep->fullCData(oldp+474,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather),3);
        tracep->fullCData(oldp+475,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather),3);
        tracep->fullCData(oldp+476,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather),3);
        tracep->fullCData(oldp+477,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather),3);
        tracep->fullCData(oldp+478,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather),3);
        tracep->fullCData(oldp+479,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather),3);
        tracep->fullCData(oldp+480,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather),3);
        tracep->fullCData(oldp+481,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather),3);
        tracep->fullCData(oldp+482,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather),3);
        tracep->fullCData(oldp+483,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather),3);
        tracep->fullCData(oldp+484,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather),3);
        tracep->fullCData(oldp+485,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather),3);
        tracep->fullCData(oldp+486,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather),3);
        tracep->fullCData(oldp+487,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather),3);
        tracep->fullCData(oldp+488,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather),3);
        tracep->fullCData(oldp+489,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather),3);
        tracep->fullCData(oldp+490,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather),3);
        tracep->fullCData(oldp+491,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather),3);
        tracep->fullCData(oldp+492,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather),3);
        tracep->fullCData(oldp+493,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather),3);
        tracep->fullCData(oldp+494,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather),3);
        tracep->fullCData(oldp+495,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather),3);
        tracep->fullCData(oldp+496,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather),3);
        tracep->fullWData(oldp+497,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i),147);
        tracep->fullWData(oldp+502,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked),147);
        tracep->fullCData(oldp+507,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather),3);
        tracep->fullCData(oldp+508,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather),3);
        tracep->fullCData(oldp+509,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather),3);
        tracep->fullCData(oldp+510,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather),3);
        tracep->fullCData(oldp+511,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather),3);
        tracep->fullCData(oldp+512,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather),3);
        tracep->fullCData(oldp+513,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather),3);
        tracep->fullCData(oldp+514,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather),3);
        tracep->fullCData(oldp+515,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather),3);
        tracep->fullCData(oldp+516,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather),3);
        tracep->fullCData(oldp+517,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather),3);
        tracep->fullCData(oldp+518,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather),3);
        tracep->fullCData(oldp+519,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather),3);
        tracep->fullCData(oldp+520,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather),3);
        tracep->fullCData(oldp+521,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather),3);
        tracep->fullCData(oldp+522,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather),3);
        tracep->fullCData(oldp+523,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather),3);
        tracep->fullCData(oldp+524,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather),3);
        tracep->fullCData(oldp+525,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather),3);
        tracep->fullCData(oldp+526,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather),3);
        tracep->fullCData(oldp+527,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather),3);
        tracep->fullCData(oldp+528,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather),3);
        tracep->fullCData(oldp+529,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather),3);
        tracep->fullCData(oldp+530,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather),3);
        tracep->fullCData(oldp+531,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather),3);
        tracep->fullCData(oldp+532,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather),3);
        tracep->fullCData(oldp+533,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather),3);
        tracep->fullCData(oldp+534,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather),3);
        tracep->fullCData(oldp+535,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather),3);
        tracep->fullCData(oldp+536,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather),3);
        tracep->fullCData(oldp+537,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather),3);
        tracep->fullCData(oldp+538,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather),3);
        tracep->fullCData(oldp+539,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather),3);
        tracep->fullCData(oldp+540,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather),3);
        tracep->fullCData(oldp+541,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather),3);
        tracep->fullCData(oldp+542,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather),3);
        tracep->fullCData(oldp+543,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather),3);
        tracep->fullCData(oldp+544,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather),3);
        tracep->fullCData(oldp+545,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather),3);
        tracep->fullCData(oldp+546,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather),3);
        tracep->fullCData(oldp+547,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather),3);
        tracep->fullCData(oldp+548,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather),3);
        tracep->fullCData(oldp+549,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather),3);
        tracep->fullCData(oldp+550,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather),3);
        tracep->fullCData(oldp+551,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather),3);
        tracep->fullCData(oldp+552,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather),3);
        tracep->fullCData(oldp+553,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather),3);
        tracep->fullCData(oldp+554,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather),3);
        tracep->fullCData(oldp+555,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather),3);
        tracep->fullBit(oldp+556,(vlTOPp->clk_i));
        tracep->fullIData(oldp+557,(vlTOPp->ang_i),21);
        tracep->fullBit(oldp+558,(vlTOPp->ready_i));
        tracep->fullBit(oldp+559,(vlTOPp->val_i));
        tracep->fullBit(oldp+560,(vlTOPp->reset_i));
        tracep->fullIData(oldp+561,(vlTOPp->tanh_o),32);
        tracep->fullBit(oldp+562,(vlTOPp->ready_o));
        tracep->fullBit(oldp+563,(vlTOPp->val_o));
        tracep->fullCData(oldp+564,(vlTOPp->bsg_tanh__DOT__state_n),2);
        tracep->fullCData(oldp+565,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__next_state),6);
        tracep->fullIData(oldp+566,(6U),32);
        tracep->fullIData(oldp+567,(0xcU),32);
        tracep->fullIData(oldp+568,(1U),32);
        tracep->fullIData(oldp+569,(0x20U),32);
        tracep->fullIData(oldp+570,(0x15U),32);
        tracep->fullIData(oldp+571,(0x10U),32);
        tracep->fullQData(oldp+572,(vlTOPp->bsg_tanh__DOT__tanh_crop),48);
        __Vtemp15[0U] = 0xa9031e41U;
        __Vtemp15[1U] = 0x9b03858U;
        __Vtemp15[2U] = 0x78c10929U;
        __Vtemp15[3U] = 0xc2b5421bU;
        __Vtemp15[4U] = 0x64f83e44U;
        __Vtemp15[5U] = 0x60416204U;
        __Vtemp15[6U] = 0x40140405U;
        __Vtemp15[7U] = 0x40000U;
        __Vtemp15[8U] = 0x4000040U;
        __Vtemp15[9U] = 0x4000U;
        __Vtemp15[0xaU] = 0x400004U;
        __Vtemp15[0xbU] = 0x40000400U;
        __Vtemp15[0xcU] = 0U;
        tracep->fullWData(oldp+574,(__Vtemp15),399);
        tracep->fullIData(oldp+587,(0x57ce0293U),32);
        tracep->fullIData(oldp+588,(0U),32);
        tracep->fullIData(oldp+589,(0x31e41U),21);
        tracep->fullIData(oldp+590,(1U),32);
        tracep->fullIData(oldp+591,(0x2c548U),21);
        tracep->fullIData(oldp+592,(2U),32);
        tracep->fullIData(oldp+593,(0x26c0eU),21);
        tracep->fullIData(oldp+594,(3U),32);
        tracep->fullIData(oldp+595,(0x21252U),21);
        tracep->fullIData(oldp+596,(4U),32);
        tracep->fullIData(oldp+597,(0x1b78cU),21);
        tracep->fullIData(oldp+598,(5U),32);
        tracep->fullIData(oldp+599,(0x15aa1U),21);
        tracep->fullIData(oldp+600,(6U),32);
        tracep->fullIData(oldp+601,(0xf913U),21);
        tracep->fullIData(oldp+602,(7U),32);
        tracep->fullIData(oldp+603,(0x8c9fU),21);
        tracep->fullIData(oldp+604,(8U),32);
        tracep->fullIData(oldp+605,(0x4162U),21);
        tracep->fullIData(oldp+606,(9U),32);
        tracep->fullIData(oldp+607,(0x202bU),21);
        tracep->fullIData(oldp+608,(0xaU),32);
        tracep->fullIData(oldp+609,(0x1005U),21);
        tracep->fullIData(oldp+610,(0xbU),32);
        tracep->fullIData(oldp+611,(0x800U),21);
        tracep->fullIData(oldp+612,(0xcU),32);
        tracep->fullIData(oldp+613,(0x400U),21);
        tracep->fullIData(oldp+614,(0xdU),32);
        tracep->fullIData(oldp+615,(0x200U),21);
        tracep->fullIData(oldp+616,(0xeU),32);
        tracep->fullIData(oldp+617,(0x100U),21);
        tracep->fullIData(oldp+618,(0xfU),32);
        tracep->fullIData(oldp+619,(0x80U),21);
        tracep->fullIData(oldp+620,(0x10U),32);
        tracep->fullIData(oldp+621,(0x40U),21);
        tracep->fullIData(oldp+622,(0x11U),32);
        tracep->fullIData(oldp+623,(0x20U),21);
        tracep->fullIData(oldp+624,(0x12U),32);
        tracep->fullIData(oldp+625,(0x10U),21);
        tracep->fullIData(oldp+626,(0x30U),32);
        tracep->fullIData(oldp+627,(0U),32);
        tracep->fullBit(oldp+628,(1U));
        tracep->fullQData(oldp+629,(0ULL),49);
        tracep->fullQData(oldp+631,(vlTOPp->bsg_tanh__DOT__divider__DOT__add2_in0),49);
        tracep->fullQData(oldp+633,(vlTOPp->bsg_tanh__DOT__divider__DOT__add2_in1),49);
        tracep->fullIData(oldp+635,(0x31U),32);
        tracep->fullIData(oldp+636,(2U),32);
        tracep->fullBit(oldp+637,(0U));
        tracep->fullIData(oldp+638,(3U),32);
    }
}
