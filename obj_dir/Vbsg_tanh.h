// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBSG_TANH_H_
#define _VBSG_TANH_H_  // guard

#include "verilated.h"

//==========

class Vbsg_tanh__Syms;
class Vbsg_tanh_VerilatedVcd;


//----------

VL_MODULE(Vbsg_tanh) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(ready_i,0,0);
    VL_IN8(val_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(val_o,0,0);
    VL_IN(ang_i,20,0);
    VL_OUT(tanh_o,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ bsg_tanh__DOT__state_r;
        CData/*1:0*/ bsg_tanh__DOT__state_n;
        CData/*0:0*/ bsg_tanh__DOT__sinhcosh__DOT__stall_pipe;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__latch_signed_div_lo;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__opA_sel_lo;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__opB_sel_lo;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__opC_sel_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_ld_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_ld_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opC_ld_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_inv_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_inv_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_clr_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_clr_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__adder1_cin_lo;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather;
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather;
    };
    struct {
        CData/*1:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r;
        CData/*5:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__state;
        CData/*5:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__next_state;
        CData/*5:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li;
        CData/*0:0*/ bsg_tanh__DOT__divider__DOT__control__DOT__calc_done;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather;
    };
    struct {
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather;
        CData/*2:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather;
        WData/*671:0*/ bsg_tanh__DOT__sinhcosh__DOT__x[21];
        WData/*671:0*/ bsg_tanh__DOT__sinhcosh__DOT__y[21];
        WData/*440:0*/ bsg_tanh__DOT__sinhcosh__DOT__ang[14];
        IData/*20:0*/ bsg_tanh__DOT__sinhcosh__DOT__val;
        WData/*639:0*/ bsg_tanh__DOT__sinhcosh__DOT__x_ans[20];
        WData/*639:0*/ bsg_tanh__DOT__sinhcosh__DOT__y_ans[20];
        WData/*419:0*/ bsg_tanh__DOT__sinhcosh__DOT__ang_ans[14];
        IData/*19:0*/ bsg_tanh__DOT__sinhcosh__DOT__val_ans;
        QData/*47:0*/ bsg_tanh__DOT__tanh_crop;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opA_mux;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__add1_out;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opB_mux;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opC_mux;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__add2_in0;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__add2_in1;
        WData/*97:0*/ bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[4];
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r;
        QData/*48:0*/ bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r;
    };
    struct {
        WData/*146:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[5];
        WData/*146:0*/ bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[5];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    WData/*97:0*/ bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[4];
    WData/*146:0*/ bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[5];
    WData/*146:0*/ bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[5];
    CData/*0:0*/ __Vm_traceActivity[2];
    static CData/*1:0*/ __Vtable1_bsg_tanh__DOT__state_n[256];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vbsg_tanh__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbsg_tanh);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vbsg_tanh(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbsg_tanh();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vbsg_tanh__Syms* __restrict vlSymsp);
    void __Vconfigure(Vbsg_tanh__Syms* symsp, bool first);
  private:
    static QData _change_request(Vbsg_tanh__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vbsg_tanh__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vbsg_tanh__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vbsg_tanh__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vbsg_tanh__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vbsg_tanh__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vbsg_tanh__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vbsg_tanh__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
