// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_tanh.h for the primary calling header

#include "Vbsg_tanh.h"
#include "Vbsg_tanh__Syms.h"

//==========
CData/*1:0*/ Vbsg_tanh::__Vtable1_bsg_tanh__DOT__state_n[256];

VL_CTOR_IMP(Vbsg_tanh) {
    Vbsg_tanh__Syms* __restrict vlSymsp = __VlSymsp = new Vbsg_tanh__Syms(this, name());
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbsg_tanh::__Vconfigure(Vbsg_tanh__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vbsg_tanh::~Vbsg_tanh() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vbsg_tanh::_settle__TOP__2(Vbsg_tanh__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh::_settle__TOP__2\n"); );
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp14[5];
    // Body
    vlTOPp->val_o = (3U == (IData)(vlTOPp->bsg_tanh__DOT__state_r));
    vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_done 
        = (0x30U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt));
    vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld = 1U;
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_ld_lo = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            vlTOPp->bsg_tanh__DOT__divider__DOT__opB_ld_lo 
                = ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                   | ((2U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                      & ((3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                         | ((4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                            | ((5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                               | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))))));
        }
    } else {
        if ((8U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            vlTOPp->bsg_tanh__DOT__divider__DOT__opB_ld_lo = 0U;
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li 
        = ((4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
           & (0x30U > (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffffeU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (1U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
        = ((0xffe00000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U]) 
           | (0x1fffffU & (((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                             ? 1U : 0U) ? ((IData)(0x31e41U) 
                                           + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                            : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                               - (IData)(0x31e41U)))));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffffdU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (2U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
        = ((0x1fffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U]) 
           | (0xffe00000U & ((((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                ? 1U : 0U) ? ((IData)(0x2c548U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                  << 0xbU) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                    >> 0x15U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                    << 0xbU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                >> 0x15U)) 
                                  - (IData)(0x2c548U))) 
                             << 0x15U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0xfffffc00U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | (0x3ffU & ((((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                           ? 1U : 0U) ? ((IData)(0x2c548U) 
                                         + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                             << 0xbU) 
                                            | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                               >> 0x15U)))
                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                               << 0xbU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                           >> 0x15U)) 
                             - (IData)(0x2c548U))) 
                        >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffffbU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (4U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0x800003ffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | (0x7ffffc00U & ((((0x40000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                ? 1U : 0U) ? ((IData)(0x26c0eU) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                    >> 0xaU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                    << 0x16U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0xaU)) 
                                  - (IData)(0x26c0eU))) 
                             << 0xaU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffff7U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0x7fffffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | (0x80000000U & ((((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                ? 1U : 0U) ? ((IData)(0x21252U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                  << 1U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                    >> 0x1fU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                    << 1U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                              >> 0x1fU)) 
                                  - (IData)(0x21252U))) 
                             << 0x1fU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
        = ((0xfff00000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U]) 
           | (0xfffffU & ((((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                             ? 1U : 0U) ? ((IData)(0x21252U) 
                                           + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               << 1U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0x1fU)))
                            : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                 << 1U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                           >> 0x1fU)) 
                               - (IData)(0x21252U))) 
                          >> 1U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfffefU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
        = ((0xfffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U]) 
           | (0xfff00000U & ((((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                ? 1U : 0U) ? ((IData)(0x1b78cU) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                    >> 0x14U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                    << 0xcU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                >> 0x14U)) 
                                  - (IData)(0x1b78cU))) 
                             << 0x14U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0xfffffe00U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | (0x1ffU & ((((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                           ? 1U : 0U) ? ((IData)(0x1b78cU) 
                                         + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                             << 0xcU) 
                                            | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               >> 0x14U)))
                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                               << 0xcU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                           >> 0x14U)) 
                             - (IData)(0x1b78cU))) 
                        >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfffdfU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0xc00001ffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | (0x3ffffe00U & ((((0x20000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                ? 1U : 0U) ? ((IData)(0x15aa1U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                  << 0x17U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                    >> 9U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                    << 0x17U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 9U)) 
                                  - (IData)(0x15aa1U))) 
                             << 9U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfffbfU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0x3fffffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | (0xc0000000U & ((((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                ? 1U : 0U) ? ((IData)(0xf913U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                  << 2U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                    >> 0x1eU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                    << 2U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                              >> 0x1eU)) 
                                  - (IData)(0xf913U))) 
                             << 0x1eU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
        = ((0xfff80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U]) 
           | (0x7ffffU & ((((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                             ? 1U : 0U) ? ((IData)(0xf913U) 
                                           + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               << 2U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 0x1eU)))
                            : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                 << 2U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                           >> 0x1eU)) 
                               - (IData)(0xf913U))) 
                          >> 2U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfff7fU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
        = ((0x7ffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U]) 
           | (0xfff80000U & ((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                ? 1U : 0U) ? ((IData)(0x8c9fU) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                    >> 0x13U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                    << 0xdU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                >> 0x13U)) 
                                  - (IData)(0x8c9fU))) 
                             << 0x13U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0xffffff00U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | (0xffU & ((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                          ? 1U : 0U) ? ((IData)(0x8c9fU) 
                                        + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                            << 0xdU) 
                                           | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                              >> 0x13U)))
                         : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                              << 0xdU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                          >> 0x13U)) 
                            - (IData)(0x8c9fU))) >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffeffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0xe00000ffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | (0x1fffff00U & ((((0x10000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                ? 1U : 0U) ? ((IData)(0x4162U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    >> 8U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                    << 0x18U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 8U)) 
                                  - (IData)(0x4162U))) 
                             << 8U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffdffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0x1fffffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | (0xe0000000U & ((((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                ? 1U : 0U) ? ((IData)(0x202bU) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                  << 3U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    >> 0x1dU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                    << 3U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                              >> 0x1dU)) 
                                  - (IData)(0x202bU))) 
                             << 0x1dU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
        = ((0xfffc0000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U]) 
           | (0x3ffffU & ((((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                             ? 1U : 0U) ? ((IData)(0x202bU) 
                                           + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               << 3U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 0x1dU)))
                            : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                 << 3U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                           >> 0x1dU)) 
                               - (IData)(0x202bU))) 
                          >> 3U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffbffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x400U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
        = ((0x3ffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U]) 
           | (0xfffc0000U & ((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                ? 1U : 0U) ? ((IData)(0x1005U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                    >> 0x12U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                    << 0xeU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                >> 0x12U)) 
                                  - (IData)(0x1005U))) 
                             << 0x12U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xffffff80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | (0x7fU & ((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                          ? 1U : 0U) ? ((IData)(0x1005U) 
                                        + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                            << 0xeU) 
                                           | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                              >> 0x12U)))
                         : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                              << 0xeU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                          >> 0x12U)) 
                            - (IData)(0x1005U))) >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xff7ffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x800U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xf000007fU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | (0xfffff80U & ((((0x8000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                               ? 1U : 0U) ? ((IData)(0x1005U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 << 0x19U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                   >> 7U)))
                              : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                   << 0x19U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                >> 7U)) 
                                 - (IData)(0x1005U))) 
                            << 7U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfefffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x1000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xfffffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | (0xf0000000U & ((((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                ? 1U : 0U) ? ((IData)(0x800U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                  << 4U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                    >> 0x1cU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                    << 4U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                              >> 0x1cU)) 
                                  - (IData)(0x800U))) 
                             << 0x1cU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
        = ((0xfffe0000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U]) 
           | (0x1ffffU & ((((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                             ? 1U : 0U) ? ((IData)(0x800U) 
                                           + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               << 4U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 >> 0x1cU)))
                            : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                 << 4U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                           >> 0x1cU)) 
                               - (IData)(0x800U))) 
                          >> 4U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfdfffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x2000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
        = ((0x1ffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U]) 
           | (0xfffe0000U & ((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                ? 1U : 0U) ? ((IData)(0x400U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                  << 0xfU) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                    >> 0x11U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                    << 0xfU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                >> 0x11U)) 
                                  - (IData)(0x400U))) 
                             << 0x11U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
        = ((0xffffffc0U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U]) 
           | (0x3fU & ((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                          ? 1U : 0U) ? ((IData)(0x400U) 
                                        + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                            << 0xfU) 
                                           | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                              >> 0x11U)))
                         : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                              << 0xfU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                          >> 0x11U)) 
                            - (IData)(0x400U))) >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfbfffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
        = ((0xf800003fU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U]) 
           | (0x7ffffc0U & ((((0x4000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                               ? 1U : 0U) ? ((IData)(0x200U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 << 0x1aU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   >> 6U)))
                              : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                   << 0x1aU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                >> 6U)) 
                                 - (IData)(0x200U))) 
                            << 6U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xf7fffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
        = ((0x7ffffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U]) 
           | (0xf8000000U & ((((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                ? 1U : 0U) ? ((IData)(0x100U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                  << 5U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                    >> 0x1bU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                    << 5U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                              >> 0x1bU)) 
                                  - (IData)(0x100U))) 
                             << 0x1bU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
        = ((0xffff0000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU]) 
           | (0xffffU & ((((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                            ? 1U : 0U) ? ((IData)(0x100U) 
                                          + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                              << 5U) 
                                             | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                >> 0x1bU)))
                           : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                << 5U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                          >> 0x1bU)) 
                              - (IData)(0x100U))) >> 5U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xeffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
        = ((0xffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU]) 
           | (0xffff0000U & ((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                ? 1U : 0U) ? ((IData)(0x80U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                    >> 0x10U)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                    << 0x10U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 >> 0x10U)) 
                                  - (IData)(0x80U))) 
                             << 0x10U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0xffffffe0U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | (0x1fU & ((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                          ? 1U : 0U) ? ((IData)(0x80U) 
                                        + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                            << 0x10U) 
                                           | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                              >> 0x10U)))
                         : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                              << 0x10U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                           >> 0x10U)) 
                            - (IData)(0x80U))) >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xdffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0xfc00001fU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | (0x3ffffe0U & ((((0x2000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                               ? 1U : 0U) ? ((IData)(0x40U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 0x1bU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 5U)))
                              : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                   << 0x1bU) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                >> 5U)) 
                                 - (IData)(0x40U))) 
                            << 5U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xbffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0x3ffffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | (0xfc000000U & ((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                ? 1U : 0U) ? ((IData)(0x20U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                    << 6U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                              >> 0x1aU)) 
                                  - (IData)(0x20U))) 
                             << 0x1aU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = ((0xffff8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU]) 
           | (0x7fffU & ((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                            ? 1U : 0U) ? ((IData)(0x20U) 
                                          + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                              << 6U) 
                                             | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                >> 0x1aU)))
                           : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                << 6U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                              - (IData)(0x20U))) >> 6U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xbffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0x3ffffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | (0xfc000000U & ((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                ? 1U : 0U) ? ((IData)(0x10U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                    << 6U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                              >> 0x1aU)) 
                                  - (IData)(0x10U))) 
                             << 0x1aU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = ((0xffff8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU]) 
           | (0x7fffU & ((((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                            ? 1U : 0U) ? ((IData)(0x10U) 
                                          + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                              << 6U) 
                                             | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                >> 0x1aU)))
                           : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                << 6U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                              - (IData)(0x10U))) >> 6U)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0x7ffffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = ((0x7fffU & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU]) 
           | (0xffff8000U & ((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                ? 1U : 0U) ? ((IData)(0x10U) 
                                              + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                  << 0x11U) 
                                                 | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    >> 0xfU)))
                               : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                    << 0x11U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 >> 0xfU)) 
                                  - (IData)(0x10U))) 
                             << 0xfU)));
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xdU] 
        = (0xfU & ((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                      ? 1U : 0U) ? ((IData)(0x10U) 
                                    + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                        << 0x11U) | 
                                       (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                        >> 0xfU))) : 
                    (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                       << 0x11U) | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                    >> 0xfU)) - (IData)(0x10U))) 
                   >> 0x11U));
    if (((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U));
    }
    if (((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[1U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[1U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[1U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[1U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U));
    }
    if (((0x40000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[2U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[2U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[2U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[2U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U));
    }
    if (((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[3U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[3U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[3U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[3U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U));
    }
    if (((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[4U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[4U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[4U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[4U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U));
    }
    if (((0x20000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[5U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[5U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[5U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[5U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U));
    }
    if (((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[6U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[6U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[6U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[6U] 
            = ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U));
    }
    if (((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U));
    }
    if (((0x10000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U));
    }
    if (((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U));
    }
    if (((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U));
    }
    if (((0x8000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U));
    }
    if (((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U));
    }
    if (((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U));
    }
    if (((0x4000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U));
    }
    if (((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U));
    }
    if (((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U));
    }
    if (((0x2000000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x11U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x11U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x11U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x11U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU));
    }
    if (((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU));
    }
    if (((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
          ? 1U : 0U)) {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x13U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x13U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU));
    } else {
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x13U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU));
        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x13U] 
            = (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU));
    }
    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe 
        = (1U & ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                  >> 0x14U) & (~ ((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                  & (0U == (IData)(vlTOPp->bsg_tanh__DOT__state_r))))));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 2U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
            } else {
                if ((2U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                if ((6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 1U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 4U;
            } else {
                if ((2U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 1U;
                    } else {
                        if ((4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo 
                                = ((0x30U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))
                                    ? 2U : 1U);
                        } else {
                            if ((5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 2U;
                            } else {
                                if ((6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 4U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 4U;
            }
        } else {
            if ((1U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
                } else {
                    if ((3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
                    } else {
                        if ((4U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                if ((6U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo = 1U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo = 0U;
            } else {
                if ((2U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo = 1U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo = 0U;
                } else {
                    if ((3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo = 0U;
                    } else {
                        if ((4U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo = 1U;
                } else {
                    if ((3U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo 
                                    = ((6U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                       | (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo 
        = (1U & (~ (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo = 1U;
            } else {
                if ((2U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo 
        = (1U & (~ (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo = 1U;
            } else {
                if ((2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo = 1U;
                } else {
                    if ((3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo = 0U;
                    } else {
                        if ((4U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo 
                                = ((5U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                   & ((6U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                      | (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = 1U;
            }
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 1U;
            }
        } else {
            vlTOPp->bsg_tanh__DOT__divider__DOT__opC_ld_lo 
                = ((1U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                   & ((2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                      | ((3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                         | ((4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                            | ((5U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                               & (6U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))))));
        }
    } else {
        if ((8U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            vlTOPp->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 0U;
        }
    }
    vlTOPp->tanh_o = (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r);
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo 
                    = ((IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                >> 0x30U)) & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
            } else {
                if ((2U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                if ((6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((8U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 0U;
        }
    }
    vlTOPp->ready_o = ((0U == (IData)(vlTOPp->bsg_tanh__DOT__state_r)) 
                       & (~ (IData)(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out = 
        (0x1ffffffffffffULL & ((((vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                  ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                                 & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo)))) 
                                + ((vlTOPp->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                    ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                                   & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo))))) 
                               + (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo))));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->val_i) 
                             << 7U) | (((IData)(vlTOPp->ready_o) 
                                        << 6U) | ((
                                                   (0U 
                                                    == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                                   << 5U) 
                                                  | ((0x10U 
                                                      & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                                         >> 0x10U)) 
                                                     | (((8U 
                                                          == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                                         << 3U) 
                                                        | (((IData)(vlTOPp->ready_i) 
                                                            << 2U) 
                                                           | (IData)(vlTOPp->bsg_tanh__DOT__state_r)))))));
    vlTOPp->bsg_tanh__DOT__state_n = vlTOPp->__Vtable1_bsg_tanh__DOT__state_n
        [vlTOPp->__Vtableidx1];
    vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__next_state = 0U;
    if (((((((((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((0x100000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)) {
                vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__next_state = 1U;
            }
        } else {
            vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
                = ((1U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                    ? (((IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                 >> 0x30U)) & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r))
                        ? 2U : 3U) : ((2U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                       ? 3U : ((3U 
                                                == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                                    ? 
                                                   ((0x30U 
                                                     == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                                 >> 0x30U)))
                                                      ? 5U
                                                      : 6U)
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))) 
                                                          | (~ (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r))))
                                                       ? 8U
                                                       : 7U)
                                                      : 8U))))));
        }
    } else {
        if ((8U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
                = ((IData)(vlTOPp->ready_i) ? 0U : 8U);
        }
    }
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[0U] 
        = (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out);
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U] 
        = ((0xfffe0000U & ((IData)((QData)((IData)(
                                                   vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))) 
                           << 0x11U)) | (IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                 >> 0x20U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U] 
        = ((0x1ffffU & ((IData)((QData)((IData)(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))) 
                        >> 0xfU)) | (0xfffe0000U & 
                                     ((IData)(((QData)((IData)(
                                                               vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U] 
        = ((2U & ((IData)(((QData)((IData)(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                           >> 0x2fU)) << 1U)) | (0x1ffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                                             >> 0x20U)) 
                                                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[0U] 
        = (IData)(((0x1fffffffffffeULL & (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                          << 1U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                                >> 0x30U)))))));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[1U] 
        = ((0xfffe0000U & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out) 
                           << 0x11U)) | (IData)((((0x1fffffffffffeULL 
                                                   & (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                      << 1U)) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                                >> 0x30U)))))) 
                                                 >> 0x20U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[2U] 
        = ((0x1ffffU & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out) 
                        >> 0xfU)) | (0xfffe0000U & 
                                     ((IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U] 
        = ((0x1ffffU & ((0x1fffcU & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r) 
                                     << 2U)) | ((IData)(
                                                        (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                         >> 0x20U)) 
                                                >> 0xfU))) 
           | (0xfffe0000U & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r) 
                             << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[4U] 
        = ((0x1ffffU & ((3U & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r) 
                               >> 0x1eU)) | (0x1fffcU 
                                             & ((IData)(
                                                        (vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                         >> 0x20U)) 
                                                << 2U)))) 
           | (0xfffe0000U & ((IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                      >> 0x20U)) << 2U)));
    __Vtemp14[4U] = ((0x1ffffU & ((3U & ((IData)((0xffffffffffffULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                     << 0x10U))) 
                                         >> 0x1eU)) 
                                  | (0x1fffcU & ((IData)(
                                                         ((0xffffffffffffULL 
                                                           & ((QData)((IData)(
                                                                              vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                              << 0x10U)) 
                                                          >> 0x20U)) 
                                                 << 2U)))) 
                     | (0xfffe0000U & ((0x40000U & 
                                        ((IData)((1ULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                     >> 0x1fU))) 
                                         << 0x12U)) 
                                       | (0xfffe0000U 
                                          & ((IData)(
                                                     ((0xffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                          << 0x10U)) 
                                                      >> 0x20U)) 
                                             << 2U)))));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[0U] 
        = (IData)(((0x1fffffffffffeULL & (vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                          << 1U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                                                >> 0x30U))))))));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[1U] 
        = ((0xfffe0000U & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out) 
                           << 0x11U)) | (IData)((((0x1fffffffffffeULL 
                                                   & (vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                      << 1U)) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                                                >> 0x30U))))))) 
                                                 >> 0x20U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[2U] 
        = ((0x1ffffU & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out) 
                        >> 0xfU)) | (0xfffe0000U & 
                                     ((IData)((vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U] 
        = ((0x1ffffU & ((0x1fffcU & ((IData)((0xffffffffffffULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                 << 0x10U))) 
                                     << 2U)) | ((IData)(
                                                        (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                         >> 0x20U)) 
                                                >> 0xfU))) 
           | (0xfffe0000U & ((IData)((0xffffffffffffULL 
                                      & ((QData)((IData)(
                                                         vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                         << 0x10U))) 
                             << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[4U] 
        = __Vtemp14[4U];
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
        = (IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[0U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo))))))));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
        = ((0xfffe0000U & vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]) 
           | (IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[0U]))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo))))))) 
                      >> 0x20U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
        = ((0x1ffffU & vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]) 
           | (0xfffe0000U & ((IData)((0x1ffffffffffffULL 
                                      & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                              << 0xfU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                                >> 0x11U))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                                  >> 1U)))))))) 
                             << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
        = ((0x1ffffU & ((IData)((0x1ffffffffffffULL 
                                 & ((((QData)((IData)(
                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                      << 0x2fU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                                      >> 0x11U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                             >> 1U)))))))) 
                        >> 0xfU)) | (0xfffe0000U & 
                                     ((IData)(((0x1ffffffffffffULL 
                                                & ((((QData)((IData)(
                                                                     vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                                          >> 0x11U))) 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                                            >> 1U))))))) 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U] 
        = (0x1ffffU & ((IData)(((0x1ffffffffffffULL 
                                 & ((((QData)((IData)(
                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                      << 0x2fU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                                      >> 0x11U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                             >> 1U))))))) 
                                >> 0x20U)) >> 0xfU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
        = (IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[0U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo))))))));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
        = ((0xfffe0000U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U]) 
           | (IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[0U]))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo))))))) 
                      >> 0x20U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
        = ((0x1ffffU & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U]) 
           | (0xfffe0000U & ((IData)((0x1ffffffffffffULL 
                                      & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U])) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[2U])) 
                                              << 0xfU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[1U])) 
                                                >> 0x11U))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                  >> 1U)))))))) 
                             << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
        = ((0x1ffffU & ((IData)((0x1ffffffffffffULL 
                                 & ((((QData)((IData)(
                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U])) 
                                      << 0x2fU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[2U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[1U])) 
                                                      >> 0x11U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                             >> 1U)))))))) 
                        >> 0xfU)) | (0xfffe0000U & 
                                     ((IData)(((0x1ffffffffffffULL 
                                                & ((((QData)((IData)(
                                                                     vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[2U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[1U])) 
                                                          >> 0x11U))) 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                            >> 1U))))))) 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
        = ((0xfffffffcU & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U]) 
           | (0x1ffffU & ((IData)(((0x1ffffffffffffULL 
                                    & ((((QData)((IData)(
                                                         vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U])) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[2U])) 
                                            << 0xfU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[1U])) 
                                              >> 0x11U))) 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                >> 1U))))))) 
                                   >> 0x20U)) >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
        = ((3U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U]) 
           | (0xfffffffcU & ((IData)((0x1ffffffffffffULL 
                                      & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[4U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U])) 
                                             >> 2U)) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                  >> 2U)))))))) 
                             << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
        = ((3U & ((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                                   vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[4U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U])) 
                                                     >> 2U)) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                          >> 2U)))))))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((0x1ffffffffffffULL 
                                                         & ((((QData)((IData)(
                                                                              vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[4U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i[3U])) 
                                                                >> 2U)) 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                                >> 2U))))))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
        = (IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[0U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo))))))));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
        = ((0xfffe0000U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U]) 
           | (IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[0U]))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo))))))) 
                      >> 0x20U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
        = ((0x1ffffU & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U]) 
           | (0xfffe0000U & ((IData)((0x1ffffffffffffULL 
                                      & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U])) 
                                           << 0x2fU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[2U])) 
                                              << 0xfU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[1U])) 
                                                >> 0x11U))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                  >> 1U)))))))) 
                             << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
        = ((0x1ffffU & ((IData)((0x1ffffffffffffULL 
                                 & ((((QData)((IData)(
                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U])) 
                                      << 0x2fU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[2U])) 
                                                    << 0xfU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[1U])) 
                                                      >> 0x11U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                             >> 1U)))))))) 
                        >> 0xfU)) | (0xfffe0000U & 
                                     ((IData)(((0x1ffffffffffffULL 
                                                & ((((QData)((IData)(
                                                                     vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[2U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[1U])) 
                                                          >> 0x11U))) 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                            >> 1U))))))) 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
        = ((0xfffffffcU & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U]) 
           | (0x1ffffU & ((IData)(((0x1ffffffffffffULL 
                                    & ((((QData)((IData)(
                                                         vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U])) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[2U])) 
                                            << 0xfU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[1U])) 
                                              >> 0x11U))) 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                >> 1U))))))) 
                                   >> 0x20U)) >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
        = ((3U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U]) 
           | (0xfffffffcU & ((IData)((0x1ffffffffffffULL 
                                      & ((((QData)((IData)(
                                                           vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[4U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U])) 
                                             >> 2U)) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                  >> 2U)))))))) 
                             << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
        = ((3U & ((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                                   vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[4U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U])) 
                                                     >> 2U)) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                          >> 2U)))))))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((0x1ffffffffffffULL 
                                                         & ((((QData)((IData)(
                                                                              vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[4U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i[3U])) 
                                                                >> 2U)) 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                                >> 2U))))))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (1U & vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (2U & vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                    >> 0x1fU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (1U & vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((2U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((1U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (2U & vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (1U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (4U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (2U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[0U] 
                    >> 0x1fU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (1U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (4U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[2U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[1U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (2U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[3U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked[4U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (1U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | (4U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (2U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    << 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[0U] 
                    >> 0x1fU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (1U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather)) 
           | (4U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x11U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x12U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 2U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x13U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 3U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x14U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 4U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x15U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 5U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x16U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 6U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x17U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 7U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x18U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 8U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x19U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 9U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x1aU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 0xaU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x1bU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 0xbU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x1cU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 0xcU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x1dU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 0xdU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[2U] 
                    >> 0x1eU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 0xeU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (2U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U] 
                    << 1U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 0xfU)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((6U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (1U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[1U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((5U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (2U & vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[3U]));
    vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather 
        = ((3U & (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather)) 
           | (4U & (vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked[4U] 
                    >> 0x10U)));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffffffeULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | (IData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffffffdULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather)))) 
            << 1U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffffffbULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather)))) 
            << 2U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffffff7ULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather)))) 
            << 3U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffffffefULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather)))) 
            << 4U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffffffdfULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather)))) 
            << 5U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffffffbfULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather)))) 
            << 6U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffffff7fULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather)))) 
            << 7U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffffeffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather)))) 
            << 8U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffffdffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather)))) 
            << 9U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffffbffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather)))) 
            << 0xaU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffff7ffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather)))) 
            << 0xbU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffffefffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather)))) 
            << 0xcU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffffdfffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather)))) 
            << 0xdU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffffbfffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather)))) 
            << 0xeU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffff7fffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather)))) 
            << 0xfU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffeffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather)))) 
            << 0x10U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffdffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather)))) 
            << 0x11U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffffbffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather)))) 
            << 0x12U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffff7ffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather)))) 
            << 0x13U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffefffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather)))) 
            << 0x14U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffdfffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather)))) 
            << 0x15U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffffbfffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather)))) 
            << 0x16U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffff7fffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather)))) 
            << 0x17U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffeffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather)))) 
            << 0x18U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffdffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather)))) 
            << 0x19U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffffbffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather)))) 
            << 0x1aU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffff7ffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather)))) 
            << 0x1bU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffefffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather)))) 
            << 0x1cU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffdfffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather)))) 
            << 0x1dU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffffbfffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather)))) 
            << 0x1eU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffff7fffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather)))) 
            << 0x1fU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffeffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather)))) 
            << 0x20U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffdffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather)))) 
            << 0x21U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fffbffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather)))) 
            << 0x22U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fff7ffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather)))) 
            << 0x23U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffefffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather)))) 
            << 0x24U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffdfffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather)))) 
            << 0x25U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ffbfffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather)))) 
            << 0x26U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1ff7fffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather)))) 
            << 0x27U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1feffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather)))) 
            << 0x28U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fdffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather)))) 
            << 0x29U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1fbffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather)))) 
            << 0x2aU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1f7ffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather)))) 
            << 0x2bU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1efffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather)))) 
            << 0x2cU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1dfffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather)))) 
            << 0x2dU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x1bfffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather)))) 
            << 0x2eU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0x17fffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather)))) 
            << 0x2fU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux = 
        ((0xffffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather)))) 
            << 0x30U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffffeULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | (IData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffffdULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather)))) 
            << 1U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffffbULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather)))) 
            << 2U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffff7ULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather)))) 
            << 3U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffffefULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather)))) 
            << 4U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffffdfULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather)))) 
            << 5U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffffbfULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather)))) 
            << 6U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffff7fULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather)))) 
            << 7U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffeffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather)))) 
            << 8U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffdffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather)))) 
            << 9U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffbffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather)))) 
            << 0xaU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffff7ffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather)))) 
            << 0xbU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffefffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather)))) 
            << 0xcU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffdfffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather)))) 
            << 0xdU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffbfffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather)))) 
            << 0xeU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffff7fffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather)))) 
            << 0xfU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffeffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather)))) 
            << 0x10U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffdffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather)))) 
            << 0x11U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffbffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather)))) 
            << 0x12U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffff7ffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather)))) 
            << 0x13U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffefffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather)))) 
            << 0x14U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffdfffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather)))) 
            << 0x15U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffbfffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather)))) 
            << 0x16U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffff7fffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather)))) 
            << 0x17U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffeffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather)))) 
            << 0x18U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffdffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather)))) 
            << 0x19U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffbffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather)))) 
            << 0x1aU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffff7ffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather)))) 
            << 0x1bU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffefffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather)))) 
            << 0x1cU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffdfffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather)))) 
            << 0x1dU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffbfffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather)))) 
            << 0x1eU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffff7fffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather)))) 
            << 0x1fU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffeffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather)))) 
            << 0x20U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffdffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather)))) 
            << 0x21U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffbffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather)))) 
            << 0x22U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fff7ffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather)))) 
            << 0x23U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffefffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather)))) 
            << 0x24U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffdfffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather)))) 
            << 0x25U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffbfffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather)))) 
            << 0x26U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ff7fffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather)))) 
            << 0x27U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1feffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather)))) 
            << 0x28U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fdffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather)))) 
            << 0x29U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fbffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather)))) 
            << 0x2aU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1f7ffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather)))) 
            << 0x2bU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1efffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather)))) 
            << 0x2cU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1dfffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather)))) 
            << 0x2dU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1bfffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather)))) 
            << 0x2eU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x17fffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather)))) 
            << 0x2fU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0xffffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather)))) 
            << 0x30U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffffeULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | (IData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffffdULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather)))) 
            << 1U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffffbULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather)))) 
            << 2U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffff7ULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather)))) 
            << 3U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffffefULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather)))) 
            << 4U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffffdfULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather)))) 
            << 5U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffffbfULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather)))) 
            << 6U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffff7fULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather)))) 
            << 7U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffeffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather)))) 
            << 8U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffdffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather)))) 
            << 9U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffbffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather)))) 
            << 0xaU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffff7ffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather)))) 
            << 0xbU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffefffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather)))) 
            << 0xcU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffdfffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather)))) 
            << 0xdU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffbfffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather)))) 
            << 0xeU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffff7fffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather)))) 
            << 0xfU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffeffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather)))) 
            << 0x10U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffdffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather)))) 
            << 0x11U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffbffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather)))) 
            << 0x12U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffff7ffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather)))) 
            << 0x13U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffefffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather)))) 
            << 0x14U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffdfffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather)))) 
            << 0x15U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffbfffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather)))) 
            << 0x16U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffff7fffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather)))) 
            << 0x17U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffeffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather)))) 
            << 0x18U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffdffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather)))) 
            << 0x19U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffbffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather)))) 
            << 0x1aU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffff7ffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather)))) 
            << 0x1bU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffefffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather)))) 
            << 0x1cU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffdfffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather)))) 
            << 0x1dU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffbfffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather)))) 
            << 0x1eU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffff7fffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather)))) 
            << 0x1fU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffeffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather)))) 
            << 0x20U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffdffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather)))) 
            << 0x21U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffbffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather)))) 
            << 0x22U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fff7ffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather)))) 
            << 0x23U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffefffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather)))) 
            << 0x24U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffdfffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather)))) 
            << 0x25U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffbfffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather)))) 
            << 0x26U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ff7fffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather)))) 
            << 0x27U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1feffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather)))) 
            << 0x28U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fdffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather)))) 
            << 0x29U));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fbffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather)))) 
            << 0x2aU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1f7ffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather)))) 
            << 0x2bU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1efffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather)))) 
            << 0x2cU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1dfffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather)))) 
            << 0x2dU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1bfffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather)))) 
            << 0x2eU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x17fffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather)))) 
            << 0x2fU));
    vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0xffffffffffffULL & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((0U != (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather)))) 
            << 0x30U));
}

void Vbsg_tanh::_eval_initial(Vbsg_tanh__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh::_eval_initial\n"); );
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vbsg_tanh::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh::final\n"); );
    // Variables
    Vbsg_tanh__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbsg_tanh::_eval_settle(Vbsg_tanh__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh::_eval_settle\n"); );
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vbsg_tanh::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    ang_i = VL_RAND_RESET_I(21);
    ready_i = VL_RAND_RESET_I(1);
    val_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    tanh_o = VL_RAND_RESET_I(32);
    ready_o = VL_RAND_RESET_I(1);
    val_o = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__state_r = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__state_n = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__tanh_crop = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(672, bsg_tanh__DOT__sinhcosh__DOT__x);
    VL_RAND_RESET_W(672, bsg_tanh__DOT__sinhcosh__DOT__y);
    VL_RAND_RESET_W(441, bsg_tanh__DOT__sinhcosh__DOT__ang);
    bsg_tanh__DOT__sinhcosh__DOT__val = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(640, bsg_tanh__DOT__sinhcosh__DOT__x_ans);
    VL_RAND_RESET_W(640, bsg_tanh__DOT__sinhcosh__DOT__y_ans);
    VL_RAND_RESET_W(420, bsg_tanh__DOT__sinhcosh__DOT__ang_ans);
    bsg_tanh__DOT__sinhcosh__DOT__val_ans = VL_RAND_RESET_I(20);
    bsg_tanh__DOT__sinhcosh__DOT__stall_pipe = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__opA_sel_lo = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__opA_mux = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__add1_out = VL_RAND_RESET_Q(49);
    VL_RAND_RESET_W(98, bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i);
    bsg_tanh__DOT__divider__DOT__opB_mux = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__opC_mux = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__opB_sel_lo = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__opC_sel_lo = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__opA_ld_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__opB_ld_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__opC_ld_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__opA_inv_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__opB_inv_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__opA_clr_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__opB_clr_lo = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__add2_in0 = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__add2_in1 = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__adder1_cin_lo = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(147, bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i);
    VL_RAND_RESET_W(147, bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i);
    bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(98, bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather = VL_RAND_RESET_I(2);
    bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r = VL_RAND_RESET_Q(49);
    bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__control__DOT__state = VL_RAND_RESET_I(6);
    bsg_tanh__DOT__divider__DOT__control__DOT__next_state = VL_RAND_RESET_I(6);
    bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt = VL_RAND_RESET_I(6);
    bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li = VL_RAND_RESET_I(1);
    bsg_tanh__DOT__divider__DOT__control__DOT__calc_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(147, bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(147, bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather = VL_RAND_RESET_I(3);
    bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_bsg_tanh__DOT__state_n[0] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[1] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[2] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[3] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[4] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[5] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[6] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[7] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[8] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[9] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[10] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[11] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[12] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[13] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[14] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[15] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[16] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[17] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[18] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[19] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[20] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[21] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[22] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[23] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[24] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[25] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[26] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[27] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[28] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[29] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[30] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[31] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[32] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[33] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[34] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[35] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[36] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[37] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[38] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[39] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[40] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[41] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[42] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[43] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[44] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[45] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[46] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[47] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[48] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[49] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[50] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[51] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[52] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[53] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[54] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[55] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[56] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[57] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[58] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[59] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[60] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[61] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[62] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[63] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[64] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[65] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[66] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[67] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[68] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[69] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[70] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[71] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[72] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[73] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[74] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[75] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[76] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[77] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[78] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[79] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[80] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[81] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[82] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[83] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[84] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[85] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[86] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[87] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[88] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[89] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[90] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[91] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[92] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[93] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[94] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[95] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[96] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[97] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[98] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[99] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[100] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[101] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[102] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[103] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[104] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[105] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[106] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[107] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[108] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[109] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[110] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[111] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[112] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[113] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[114] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[115] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[116] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[117] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[118] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[119] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[120] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[121] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[122] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[123] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[124] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[125] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[126] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[127] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[128] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[129] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[130] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[131] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[132] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[133] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[134] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[135] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[136] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[137] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[138] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[139] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[140] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[141] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[142] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[143] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[144] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[145] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[146] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[147] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[148] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[149] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[150] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[151] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[152] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[153] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[154] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[155] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[156] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[157] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[158] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[159] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[160] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[161] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[162] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[163] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[164] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[165] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[166] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[167] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[168] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[169] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[170] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[171] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[172] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[173] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[174] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[175] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[176] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[177] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[178] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[179] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[180] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[181] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[182] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[183] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[184] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[185] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[186] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[187] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[188] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[189] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[190] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[191] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[192] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[193] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[194] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[195] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[196] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[197] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[198] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[199] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[200] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[201] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[202] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[203] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[204] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[205] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[206] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[207] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[208] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[209] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[210] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[211] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[212] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[213] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[214] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[215] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[216] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[217] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[218] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[219] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[220] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[221] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[222] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[223] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[224] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[225] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[226] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[227] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[228] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[229] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[230] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[231] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[232] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[233] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[234] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[235] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[236] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[237] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[238] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[239] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[240] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[241] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[242] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[243] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[244] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[245] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[246] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[247] = 0U;
    __Vtable1_bsg_tanh__DOT__state_n[248] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[249] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[250] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[251] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[252] = 1U;
    __Vtable1_bsg_tanh__DOT__state_n[253] = 2U;
    __Vtable1_bsg_tanh__DOT__state_n[254] = 3U;
    __Vtable1_bsg_tanh__DOT__state_n[255] = 0U;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
