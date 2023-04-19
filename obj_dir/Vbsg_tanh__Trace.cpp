// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_tanh__Syms.h"


void Vbsg_tanh::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vbsg_tanh::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U]),32);
            tracep->chgIData(oldp+1,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]),32);
            tracep->chgBit(oldp+2,((1U & (~ (IData)(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))));
            tracep->chgBit(oldp+3,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                          >> 0x14U))));
            tracep->chgBit(oldp+4,((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
            tracep->chgBit(oldp+5,((8U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
            tracep->chgCData(oldp+6,(vlTOPp->bsg_tanh__DOT__state_r),2);
            tracep->chgQData(oldp+7,((0xffffffffffffULL 
                                      & ((QData)((IData)(
                                                         vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                         << 0x10U))),48);
            tracep->chgQData(oldp+9,((0xffffffffffffULL 
                                      & vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
            tracep->chgQData(oldp+11,((0xffffffffffffULL 
                                       & vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
            tracep->chgBit(oldp+13,(((0U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                     & (0U == (IData)(vlTOPp->bsg_tanh__DOT__state_r)))));
            tracep->chgWData(oldp+14,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x),672);
            tracep->chgWData(oldp+35,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y),672);
            tracep->chgWData(oldp+56,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang),441);
            tracep->chgIData(oldp+70,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val),21);
            tracep->chgWData(oldp+71,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x_ans),640);
            tracep->chgWData(oldp+91,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y_ans),640);
            tracep->chgWData(oldp+111,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang_ans),420);
            tracep->chgIData(oldp+125,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val_ans),20);
            tracep->chgBit(oldp+126,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe));
            tracep->chgIData(oldp+127,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]),32);
            tracep->chgIData(oldp+128,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]),32);
            tracep->chgIData(oldp+129,((0x1fffffU & 
                                        vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])),21);
            tracep->chgBit(oldp+130,((1U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val)));
            tracep->chgIData(oldp+131,((((0x100000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
            tracep->chgIData(oldp+132,((((0x100000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
            tracep->chgIData(oldp+133,((0x1fffffU & 
                                        (((0x100000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x31e41U) 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                          : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                             - (IData)(0x31e41U))))),21);
            tracep->chgIData(oldp+134,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)),32);
            tracep->chgIData(oldp+135,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)),32);
            tracep->chgBit(oldp+136,(((0x100000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+137,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]),32);
            tracep->chgIData(oldp+138,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]),32);
            tracep->chgIData(oldp+139,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                          << 0xbU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                            >> 0x15U)))),21);
            tracep->chgBit(oldp+140,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 1U))));
            tracep->chgIData(oldp+141,((((0x200U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
            tracep->chgIData(oldp+142,((((0x200U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
            tracep->chgIData(oldp+143,((0x1fffffU & 
                                        (((0x200U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x2c548U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 << 0xbU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                   >> 0x15U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                               << 0xbU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                 >> 0x15U)) 
                                             - (IData)(0x2c548U))))),21);
            tracep->chgIData(oldp+144,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)),32);
            tracep->chgIData(oldp+145,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)),32);
            tracep->chgBit(oldp+146,(((0x200U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+147,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]),32);
            tracep->chgIData(oldp+148,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]),32);
            tracep->chgIData(oldp+149,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                          << 0x16U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                            >> 0xaU)))),21);
            tracep->chgBit(oldp+150,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 2U))));
            tracep->chgIData(oldp+151,((((0x40000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
            tracep->chgIData(oldp+152,((((0x40000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
            tracep->chgIData(oldp+153,((0x1fffffU & 
                                        (((0x40000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x26c0eU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                 << 0x16U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                   >> 0xaU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               << 0x16U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0xaU)) 
                                             - (IData)(0x26c0eU))))),21);
            tracep->chgIData(oldp+154,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)),32);
            tracep->chgIData(oldp+155,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)),32);
            tracep->chgBit(oldp+156,(((0x40000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+157,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]),32);
            tracep->chgIData(oldp+158,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]),32);
            tracep->chgIData(oldp+159,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                          << 1U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                          >> 0x1fU)))),21);
            tracep->chgBit(oldp+160,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 3U))));
            tracep->chgIData(oldp+161,((((0x80000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
            tracep->chgIData(oldp+162,((((0x80000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
            tracep->chgIData(oldp+163,((0x1fffffU & 
                                        (((0x80000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x21252U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                 << 1U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                   >> 0x1fU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               << 1U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0x1fU)) 
                                             - (IData)(0x21252U))))),21);
            tracep->chgIData(oldp+164,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)),32);
            tracep->chgIData(oldp+165,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)),32);
            tracep->chgBit(oldp+166,(((0x80000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+167,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]),32);
            tracep->chgIData(oldp+168,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]),32);
            tracep->chgIData(oldp+169,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                          << 0xcU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                            >> 0x14U)))),21);
            tracep->chgBit(oldp+170,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 4U))));
            tracep->chgIData(oldp+171,((((0x100U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
            tracep->chgIData(oldp+172,((((0x100U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
            tracep->chgIData(oldp+173,((0x1fffffU & 
                                        (((0x100U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x1b78cU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 << 0xcU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                   >> 0x14U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                               << 0xcU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                 >> 0x14U)) 
                                             - (IData)(0x1b78cU))))),21);
            tracep->chgIData(oldp+174,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)),32);
            tracep->chgIData(oldp+175,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)),32);
            tracep->chgBit(oldp+176,(((0x100U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+177,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]),32);
            tracep->chgIData(oldp+178,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]),32);
            tracep->chgIData(oldp+179,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                          << 0x17U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                            >> 9U)))),21);
            tracep->chgBit(oldp+180,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 5U))));
            tracep->chgIData(oldp+181,((((0x20000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
            tracep->chgIData(oldp+182,((((0x20000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
            tracep->chgIData(oldp+183,((0x1fffffU & 
                                        (((0x20000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x15aa1U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                 << 0x17U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                   >> 9U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               << 0x17U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 9U)) 
                                             - (IData)(0x15aa1U))))),21);
            tracep->chgIData(oldp+184,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)),32);
            tracep->chgIData(oldp+185,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)),32);
            tracep->chgBit(oldp+186,(((0x20000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+187,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]),32);
            tracep->chgIData(oldp+188,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]),32);
            tracep->chgIData(oldp+189,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                          << 2U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                          >> 0x1eU)))),21);
            tracep->chgBit(oldp+190,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 6U))));
            tracep->chgIData(oldp+191,((((0x40000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
            tracep->chgIData(oldp+192,((((0x40000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                          ? 1U : 0U)
                                         ? ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                             - vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U))
                                         : ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                             + vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
            tracep->chgIData(oldp+193,((0x1fffffU & 
                                        (((0x40000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                           ? 1U : 0U)
                                          ? ((IData)(0xf913U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                 << 2U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                   >> 0x1eU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               << 2U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 0x1eU)) 
                                             - (IData)(0xf913U))))),21);
            tracep->chgIData(oldp+194,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)),32);
            tracep->chgIData(oldp+195,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)),32);
            tracep->chgBit(oldp+196,(((0x40000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+197,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U]),32);
            tracep->chgIData(oldp+198,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U]),32);
            tracep->chgIData(oldp+199,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                          << 0xdU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                            >> 0x13U)))),21);
            tracep->chgBit(oldp+200,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 7U))));
            tracep->chgIData(oldp+201,((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
            tracep->chgIData(oldp+202,((((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
            tracep->chgIData(oldp+203,((0x1fffffU & 
                                        (((0x80U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x8c9fU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 << 0xdU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                   >> 0x13U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                               << 0xdU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                 >> 0x13U)) 
                                             - (IData)(0x8c9fU))))),21);
            tracep->chgIData(oldp+204,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)),32);
            tracep->chgIData(oldp+205,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)),32);
            tracep->chgBit(oldp+206,(((0x80U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+207,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U]),32);
            tracep->chgIData(oldp+208,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U]),32);
            tracep->chgIData(oldp+209,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                          << 0x18U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                            >> 8U)))),21);
            tracep->chgBit(oldp+210,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 8U))));
            tracep->chgIData(oldp+211,((((0x10000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
            tracep->chgIData(oldp+212,((((0x10000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
            tracep->chgIData(oldp+213,((0x1fffffU & 
                                        (((0x10000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x4162U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                 << 0x18U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                   >> 8U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               << 0x18U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 8U)) 
                                             - (IData)(0x4162U))))),21);
            tracep->chgIData(oldp+214,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)),32);
            tracep->chgIData(oldp+215,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)),32);
            tracep->chgBit(oldp+216,(((0x10000000U 
                                       & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+217,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U]),32);
            tracep->chgIData(oldp+218,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U]),32);
            tracep->chgIData(oldp+219,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                          << 3U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                          >> 0x1dU)))),21);
            tracep->chgBit(oldp+220,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 9U))));
            tracep->chgIData(oldp+221,((((0x20000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
            tracep->chgIData(oldp+222,((((0x20000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
            tracep->chgIData(oldp+223,((0x1fffffU & 
                                        (((0x20000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x202bU) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                 << 3U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                   >> 0x1dU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               << 3U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 0x1dU)) 
                                             - (IData)(0x202bU))))),21);
            tracep->chgIData(oldp+224,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)),32);
            tracep->chgIData(oldp+225,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)),32);
            tracep->chgBit(oldp+226,(((0x20000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+227,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU]),32);
            tracep->chgIData(oldp+228,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU]),32);
            tracep->chgIData(oldp+229,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                          << 0xeU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                            >> 0x12U)))),21);
            tracep->chgBit(oldp+230,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xaU))));
            tracep->chgIData(oldp+231,((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
            tracep->chgIData(oldp+232,((((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
            tracep->chgIData(oldp+233,((0x1fffffU & 
                                        (((0x40U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x1005U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 << 0xeU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                   >> 0x12U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                               << 0xeU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                 >> 0x12U)) 
                                             - (IData)(0x1005U))))),21);
            tracep->chgIData(oldp+234,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
            tracep->chgIData(oldp+235,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
            tracep->chgBit(oldp+236,(((0x40U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+237,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU]),32);
            tracep->chgIData(oldp+238,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU]),32);
            tracep->chgIData(oldp+239,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                          << 0x19U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                            >> 7U)))),21);
            tracep->chgBit(oldp+240,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xbU))));
            tracep->chgIData(oldp+241,((((0x8000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
            tracep->chgIData(oldp+242,((((0x8000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
            tracep->chgIData(oldp+243,((0x1fffffU & 
                                        (((0x8000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x1005U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 << 0x19U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                   >> 7U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               << 0x19U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 >> 7U)) 
                                             - (IData)(0x1005U))))),21);
            tracep->chgIData(oldp+244,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
            tracep->chgIData(oldp+245,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
            tracep->chgBit(oldp+246,(((0x8000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+247,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU]),32);
            tracep->chgIData(oldp+248,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU]),32);
            tracep->chgIData(oldp+249,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                          << 4U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                          >> 0x1cU)))),21);
            tracep->chgBit(oldp+250,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xcU))));
            tracep->chgIData(oldp+251,((((0x10000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
            tracep->chgIData(oldp+252,((((0x10000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
            tracep->chgIData(oldp+253,((0x1fffffU & 
                                        (((0x10000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x800U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 << 4U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                   >> 0x1cU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               << 4U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 >> 0x1cU)) 
                                             - (IData)(0x800U))))),21);
            tracep->chgIData(oldp+254,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
            tracep->chgIData(oldp+255,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
            tracep->chgBit(oldp+256,(((0x10000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+257,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU]),32);
            tracep->chgIData(oldp+258,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU]),32);
            tracep->chgIData(oldp+259,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                          << 0xfU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                            >> 0x11U)))),21);
            tracep->chgBit(oldp+260,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xdU))));
            tracep->chgIData(oldp+261,((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
            tracep->chgIData(oldp+262,((((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
            tracep->chgIData(oldp+263,((0x1fffffU & 
                                        (((0x20U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x400U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                 << 0xfU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                   >> 0x11U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                               << 0xfU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 >> 0x11U)) 
                                             - (IData)(0x400U))))),21);
            tracep->chgIData(oldp+264,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
            tracep->chgIData(oldp+265,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
            tracep->chgBit(oldp+266,(((0x20U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+267,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU]),32);
            tracep->chgIData(oldp+268,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU]),32);
            tracep->chgIData(oldp+269,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                          << 0x1aU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                            >> 6U)))),21);
            tracep->chgBit(oldp+270,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xeU))));
            tracep->chgIData(oldp+271,((((0x4000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
            tracep->chgIData(oldp+272,((((0x4000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
            tracep->chgIData(oldp+273,((0x1fffffU & 
                                        (((0x4000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                           ? 1U : 0U)
                                          ? ((IData)(0x200U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 << 0x1aU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   >> 6U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                               << 0x1aU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                 >> 6U)) 
                                             - (IData)(0x200U))))),21);
            tracep->chgIData(oldp+274,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
            tracep->chgIData(oldp+275,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
            tracep->chgBit(oldp+276,(((0x4000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+277,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU]),32);
            tracep->chgIData(oldp+278,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU]),32);
            tracep->chgIData(oldp+279,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                          << 5U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                          >> 0x1bU)))),21);
            tracep->chgBit(oldp+280,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0xfU))));
            tracep->chgIData(oldp+281,((((0x8000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
            tracep->chgIData(oldp+282,((((0x8000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
            tracep->chgIData(oldp+283,((0x1fffffU & 
                                        (((0x8000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x100U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 << 5U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   >> 0x1bU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                               << 5U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                 >> 0x1bU)) 
                                             - (IData)(0x100U))))),21);
            tracep->chgIData(oldp+284,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
            tracep->chgIData(oldp+285,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
            tracep->chgBit(oldp+286,(((0x8000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+287,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U]),32);
            tracep->chgIData(oldp+288,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U]),32);
            tracep->chgIData(oldp+289,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          << 0x10U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                            >> 0x10U)))),21);
            tracep->chgBit(oldp+290,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x10U))));
            tracep->chgIData(oldp+291,((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
            tracep->chgIData(oldp+292,((((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
            tracep->chgIData(oldp+293,((0x1fffffU & 
                                        (((0x10U & 
                                           vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x80U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 << 0x10U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                   >> 0x10U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                               << 0x10U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 >> 0x10U)) 
                                             - (IData)(0x80U))))),21);
            tracep->chgIData(oldp+294,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
            tracep->chgIData(oldp+295,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
            tracep->chgBit(oldp+296,(((0x10U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+297,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U]),32);
            tracep->chgIData(oldp+298,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U]),32);
            tracep->chgIData(oldp+299,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                          << 0x1bU) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                            >> 5U)))),21);
            tracep->chgBit(oldp+300,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x11U))));
            tracep->chgIData(oldp+301,((((0x2000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
            tracep->chgIData(oldp+302,((((0x2000000U 
                                          & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
            tracep->chgIData(oldp+303,((0x1fffffU & 
                                        (((0x2000000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x40U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 0x1bU) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 5U)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               << 0x1bU) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 >> 5U)) 
                                             - (IData)(0x40U))))),21);
            tracep->chgIData(oldp+304,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
            tracep->chgIData(oldp+305,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
            tracep->chgBit(oldp+306,(((0x2000000U & 
                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+307,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U]),32);
            tracep->chgIData(oldp+308,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U]),32);
            tracep->chgIData(oldp+309,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                          << 6U) | 
                                         (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)))),21);
            tracep->chgBit(oldp+310,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x12U))));
            tracep->chgIData(oldp+311,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
            tracep->chgIData(oldp+312,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
            tracep->chgIData(oldp+313,((0x1fffffU & 
                                        (((0x4000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x20U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 6U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 0x1aU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               << 6U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 >> 0x1aU)) 
                                             - (IData)(0x20U))))),21);
            tracep->chgIData(oldp+314,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
            tracep->chgIData(oldp+315,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
            tracep->chgBit(oldp+316,(((0x4000U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? 1U : 0U)));
            tracep->chgIData(oldp+317,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
            tracep->chgIData(oldp+318,((((0x4000U & 
                                          vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
            tracep->chgIData(oldp+319,((0x1fffffU & 
                                        (((0x4000U 
                                           & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x10U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 6U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 0x1aU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               << 6U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 >> 0x1aU)) 
                                             - (IData)(0x10U))))),21);
            tracep->chgIData(oldp+320,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
            tracep->chgIData(oldp+321,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
            tracep->chgIData(oldp+322,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U]),32);
            tracep->chgIData(oldp+323,(vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U]),32);
            tracep->chgIData(oldp+324,((0x1fffffU & 
                                        ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                          << 0x11U) 
                                         | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                            >> 0xfU)))),21);
            tracep->chgBit(oldp+325,((1U & (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__val 
                                            >> 0x13U))));
            tracep->chgIData(oldp+326,((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
            tracep->chgIData(oldp+327,((((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                          ? 1U : 0U)
                                         ? (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                            - VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                         : (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                            + VL_SHIFTRS_III(32,32,32, 
                                                             vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
            tracep->chgIData(oldp+328,((0x1fffffU & 
                                        (((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                           ? 1U : 0U)
                                          ? ((IData)(0x10U) 
                                             + ((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                 << 0x11U) 
                                                | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                   >> 0xfU)))
                                          : (((vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                               << 0x11U) 
                                              | (vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 >> 0xfU)) 
                                             - (IData)(0x10U))))),21);
            tracep->chgIData(oldp+329,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
            tracep->chgIData(oldp+330,(VL_SHIFTRS_III(32,32,32, 
                                                      vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
            tracep->chgBit(oldp+331,(((8U & vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+332,((QData)((IData)(
                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))),48);
            tracep->chgQData(oldp+334,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r),49);
            tracep->chgQData(oldp+336,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r),49);
            tracep->chgBit(oldp+338,(vlTOPp->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
            tracep->chgBit(oldp+339,((1U & (IData)(
                                                   ((QData)((IData)(
                                                                    vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+340,((1U & (IData)(
                                                   (1ULL 
                                                    & ((QData)((IData)(
                                                                       vlTOPp->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+341,(vlTOPp->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo));
            tracep->chgBit(oldp+342,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))))));
            tracep->chgCData(oldp+343,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_sel_lo),2);
            tracep->chgQData(oldp+344,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_mux),49);
            tracep->chgQData(oldp+346,(vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out),49);
            tracep->chgQData(oldp+348,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_mux),49);
            tracep->chgQData(oldp+350,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_mux),49);
            tracep->chgCData(oldp+352,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_sel_lo),3);
            tracep->chgCData(oldp+353,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_sel_lo),3);
            tracep->chgBit(oldp+354,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_ld_lo));
            tracep->chgBit(oldp+355,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_ld_lo));
            tracep->chgQData(oldp+356,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r),49);
            tracep->chgBit(oldp+358,(vlTOPp->bsg_tanh__DOT__divider__DOT__opC_ld_lo));
            tracep->chgBit(oldp+359,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo));
            tracep->chgBit(oldp+360,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo));
            tracep->chgBit(oldp+361,(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo));
            tracep->chgBit(oldp+362,(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo));
            tracep->chgQData(oldp+363,((0x1ffffffffffffULL 
                                        & ((vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                            ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                                           & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opA_clr_lo)))))),49);
            tracep->chgQData(oldp+365,((0x1ffffffffffffULL 
                                        & ((vlTOPp->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                            ^ (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                                           & (- (QData)((IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__opB_clr_lo)))))),49);
            tracep->chgBit(oldp+367,(vlTOPp->bsg_tanh__DOT__divider__DOT__adder1_cin_lo));
            tracep->chgWData(oldp+368,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i),98);
            tracep->chgWData(oldp+372,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked),98);
            tracep->chgCData(oldp+376,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__0__KET____DOT__gather),2);
            tracep->chgCData(oldp+377,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__1__KET____DOT__gather),2);
            tracep->chgCData(oldp+378,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__2__KET____DOT__gather),2);
            tracep->chgCData(oldp+379,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__3__KET____DOT__gather),2);
            tracep->chgCData(oldp+380,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__4__KET____DOT__gather),2);
            tracep->chgCData(oldp+381,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__5__KET____DOT__gather),2);
            tracep->chgCData(oldp+382,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__6__KET____DOT__gather),2);
            tracep->chgCData(oldp+383,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__7__KET____DOT__gather),2);
            tracep->chgCData(oldp+384,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__8__KET____DOT__gather),2);
            tracep->chgCData(oldp+385,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__9__KET____DOT__gather),2);
            tracep->chgCData(oldp+386,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__10__KET____DOT__gather),2);
            tracep->chgCData(oldp+387,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__11__KET____DOT__gather),2);
            tracep->chgCData(oldp+388,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__12__KET____DOT__gather),2);
            tracep->chgCData(oldp+389,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__13__KET____DOT__gather),2);
            tracep->chgCData(oldp+390,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__14__KET____DOT__gather),2);
            tracep->chgCData(oldp+391,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__15__KET____DOT__gather),2);
            tracep->chgCData(oldp+392,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__16__KET____DOT__gather),2);
            tracep->chgCData(oldp+393,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__17__KET____DOT__gather),2);
            tracep->chgCData(oldp+394,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__18__KET____DOT__gather),2);
            tracep->chgCData(oldp+395,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__19__KET____DOT__gather),2);
            tracep->chgCData(oldp+396,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__20__KET____DOT__gather),2);
            tracep->chgCData(oldp+397,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__21__KET____DOT__gather),2);
            tracep->chgCData(oldp+398,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__22__KET____DOT__gather),2);
            tracep->chgCData(oldp+399,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__23__KET____DOT__gather),2);
            tracep->chgCData(oldp+400,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__24__KET____DOT__gather),2);
            tracep->chgCData(oldp+401,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__25__KET____DOT__gather),2);
            tracep->chgCData(oldp+402,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__26__KET____DOT__gather),2);
            tracep->chgCData(oldp+403,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__27__KET____DOT__gather),2);
            tracep->chgCData(oldp+404,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__28__KET____DOT__gather),2);
            tracep->chgCData(oldp+405,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__29__KET____DOT__gather),2);
            tracep->chgCData(oldp+406,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__30__KET____DOT__gather),2);
            tracep->chgCData(oldp+407,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__31__KET____DOT__gather),2);
            tracep->chgCData(oldp+408,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__32__KET____DOT__gather),2);
            tracep->chgCData(oldp+409,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__33__KET____DOT__gather),2);
            tracep->chgCData(oldp+410,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__34__KET____DOT__gather),2);
            tracep->chgCData(oldp+411,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__35__KET____DOT__gather),2);
            tracep->chgCData(oldp+412,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__36__KET____DOT__gather),2);
            tracep->chgCData(oldp+413,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__37__KET____DOT__gather),2);
            tracep->chgCData(oldp+414,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__38__KET____DOT__gather),2);
            tracep->chgCData(oldp+415,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__39__KET____DOT__gather),2);
            tracep->chgCData(oldp+416,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__40__KET____DOT__gather),2);
            tracep->chgCData(oldp+417,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__41__KET____DOT__gather),2);
            tracep->chgCData(oldp+418,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__42__KET____DOT__gather),2);
            tracep->chgCData(oldp+419,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__43__KET____DOT__gather),2);
            tracep->chgCData(oldp+420,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__44__KET____DOT__gather),2);
            tracep->chgCData(oldp+421,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__45__KET____DOT__gather),2);
            tracep->chgCData(oldp+422,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__46__KET____DOT__gather),2);
            tracep->chgCData(oldp+423,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__47__KET____DOT__gather),2);
            tracep->chgCData(oldp+424,(vlTOPp->bsg_tanh__DOT__divider__DOT__muxA__DOT__reduce__BRA__48__KET____DOT__gather),2);
            tracep->chgBit(oldp+425,((1U & (IData)(
                                                   (vlTOPp->bsg_tanh__DOT__divider__DOT__add1_out 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+426,((1U & (IData)(
                                                   (vlTOPp->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   (vlTOPp->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+428,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r));
            tracep->chgBit(oldp+429,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
            tracep->chgBit(oldp+430,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld));
            tracep->chgBit(oldp+431,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r));
            tracep->chgBit(oldp+432,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r));
            tracep->chgCData(oldp+433,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__state),6);
            tracep->chgCData(oldp+434,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt),6);
            tracep->chgBit(oldp+435,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li));
            tracep->chgBit(oldp+436,((0x30U == (IData)(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))));
            tracep->chgWData(oldp+437,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxB__data_i),147);
            tracep->chgWData(oldp+442,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__data_masked),147);
            tracep->chgCData(oldp+447,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__0__KET____DOT__gather),3);
            tracep->chgCData(oldp+448,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__1__KET____DOT__gather),3);
            tracep->chgCData(oldp+449,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__2__KET____DOT__gather),3);
            tracep->chgCData(oldp+450,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__3__KET____DOT__gather),3);
            tracep->chgCData(oldp+451,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__4__KET____DOT__gather),3);
            tracep->chgCData(oldp+452,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__5__KET____DOT__gather),3);
            tracep->chgCData(oldp+453,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__6__KET____DOT__gather),3);
            tracep->chgCData(oldp+454,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__7__KET____DOT__gather),3);
            tracep->chgCData(oldp+455,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__8__KET____DOT__gather),3);
            tracep->chgCData(oldp+456,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__9__KET____DOT__gather),3);
            tracep->chgCData(oldp+457,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__10__KET____DOT__gather),3);
            tracep->chgCData(oldp+458,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__11__KET____DOT__gather),3);
            tracep->chgCData(oldp+459,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__12__KET____DOT__gather),3);
            tracep->chgCData(oldp+460,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__13__KET____DOT__gather),3);
            tracep->chgCData(oldp+461,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__14__KET____DOT__gather),3);
            tracep->chgCData(oldp+462,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__15__KET____DOT__gather),3);
            tracep->chgCData(oldp+463,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__16__KET____DOT__gather),3);
            tracep->chgCData(oldp+464,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__17__KET____DOT__gather),3);
            tracep->chgCData(oldp+465,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__18__KET____DOT__gather),3);
            tracep->chgCData(oldp+466,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__19__KET____DOT__gather),3);
            tracep->chgCData(oldp+467,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__20__KET____DOT__gather),3);
            tracep->chgCData(oldp+468,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__21__KET____DOT__gather),3);
            tracep->chgCData(oldp+469,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__22__KET____DOT__gather),3);
            tracep->chgCData(oldp+470,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__23__KET____DOT__gather),3);
            tracep->chgCData(oldp+471,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__24__KET____DOT__gather),3);
            tracep->chgCData(oldp+472,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__25__KET____DOT__gather),3);
            tracep->chgCData(oldp+473,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__26__KET____DOT__gather),3);
            tracep->chgCData(oldp+474,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__27__KET____DOT__gather),3);
            tracep->chgCData(oldp+475,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__28__KET____DOT__gather),3);
            tracep->chgCData(oldp+476,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__29__KET____DOT__gather),3);
            tracep->chgCData(oldp+477,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__30__KET____DOT__gather),3);
            tracep->chgCData(oldp+478,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__31__KET____DOT__gather),3);
            tracep->chgCData(oldp+479,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__32__KET____DOT__gather),3);
            tracep->chgCData(oldp+480,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__33__KET____DOT__gather),3);
            tracep->chgCData(oldp+481,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__34__KET____DOT__gather),3);
            tracep->chgCData(oldp+482,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__35__KET____DOT__gather),3);
            tracep->chgCData(oldp+483,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__36__KET____DOT__gather),3);
            tracep->chgCData(oldp+484,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__37__KET____DOT__gather),3);
            tracep->chgCData(oldp+485,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__38__KET____DOT__gather),3);
            tracep->chgCData(oldp+486,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__39__KET____DOT__gather),3);
            tracep->chgCData(oldp+487,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__40__KET____DOT__gather),3);
            tracep->chgCData(oldp+488,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__41__KET____DOT__gather),3);
            tracep->chgCData(oldp+489,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__42__KET____DOT__gather),3);
            tracep->chgCData(oldp+490,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__43__KET____DOT__gather),3);
            tracep->chgCData(oldp+491,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__44__KET____DOT__gather),3);
            tracep->chgCData(oldp+492,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__45__KET____DOT__gather),3);
            tracep->chgCData(oldp+493,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__46__KET____DOT__gather),3);
            tracep->chgCData(oldp+494,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__47__KET____DOT__gather),3);
            tracep->chgCData(oldp+495,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxB__DOT__reduce__BRA__48__KET____DOT__gather),3);
            tracep->chgWData(oldp+496,(vlTOPp->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk2__DOT__muxC__data_i),147);
            tracep->chgWData(oldp+501,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__data_masked),147);
            tracep->chgCData(oldp+506,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__0__KET____DOT__gather),3);
            tracep->chgCData(oldp+507,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__1__KET____DOT__gather),3);
            tracep->chgCData(oldp+508,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__2__KET____DOT__gather),3);
            tracep->chgCData(oldp+509,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__3__KET____DOT__gather),3);
            tracep->chgCData(oldp+510,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__4__KET____DOT__gather),3);
            tracep->chgCData(oldp+511,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__5__KET____DOT__gather),3);
            tracep->chgCData(oldp+512,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__6__KET____DOT__gather),3);
            tracep->chgCData(oldp+513,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__7__KET____DOT__gather),3);
            tracep->chgCData(oldp+514,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__8__KET____DOT__gather),3);
            tracep->chgCData(oldp+515,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__9__KET____DOT__gather),3);
            tracep->chgCData(oldp+516,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__10__KET____DOT__gather),3);
            tracep->chgCData(oldp+517,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__11__KET____DOT__gather),3);
            tracep->chgCData(oldp+518,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__12__KET____DOT__gather),3);
            tracep->chgCData(oldp+519,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__13__KET____DOT__gather),3);
            tracep->chgCData(oldp+520,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__14__KET____DOT__gather),3);
            tracep->chgCData(oldp+521,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__15__KET____DOT__gather),3);
            tracep->chgCData(oldp+522,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__16__KET____DOT__gather),3);
            tracep->chgCData(oldp+523,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__17__KET____DOT__gather),3);
            tracep->chgCData(oldp+524,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__18__KET____DOT__gather),3);
            tracep->chgCData(oldp+525,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__19__KET____DOT__gather),3);
            tracep->chgCData(oldp+526,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__20__KET____DOT__gather),3);
            tracep->chgCData(oldp+527,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__21__KET____DOT__gather),3);
            tracep->chgCData(oldp+528,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__22__KET____DOT__gather),3);
            tracep->chgCData(oldp+529,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__23__KET____DOT__gather),3);
            tracep->chgCData(oldp+530,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__24__KET____DOT__gather),3);
            tracep->chgCData(oldp+531,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__25__KET____DOT__gather),3);
            tracep->chgCData(oldp+532,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__26__KET____DOT__gather),3);
            tracep->chgCData(oldp+533,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__27__KET____DOT__gather),3);
            tracep->chgCData(oldp+534,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__28__KET____DOT__gather),3);
            tracep->chgCData(oldp+535,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__29__KET____DOT__gather),3);
            tracep->chgCData(oldp+536,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__30__KET____DOT__gather),3);
            tracep->chgCData(oldp+537,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__31__KET____DOT__gather),3);
            tracep->chgCData(oldp+538,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__32__KET____DOT__gather),3);
            tracep->chgCData(oldp+539,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__33__KET____DOT__gather),3);
            tracep->chgCData(oldp+540,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__34__KET____DOT__gather),3);
            tracep->chgCData(oldp+541,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__35__KET____DOT__gather),3);
            tracep->chgCData(oldp+542,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__36__KET____DOT__gather),3);
            tracep->chgCData(oldp+543,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__37__KET____DOT__gather),3);
            tracep->chgCData(oldp+544,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__38__KET____DOT__gather),3);
            tracep->chgCData(oldp+545,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__39__KET____DOT__gather),3);
            tracep->chgCData(oldp+546,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__40__KET____DOT__gather),3);
            tracep->chgCData(oldp+547,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__41__KET____DOT__gather),3);
            tracep->chgCData(oldp+548,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__42__KET____DOT__gather),3);
            tracep->chgCData(oldp+549,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__43__KET____DOT__gather),3);
            tracep->chgCData(oldp+550,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__44__KET____DOT__gather),3);
            tracep->chgCData(oldp+551,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__45__KET____DOT__gather),3);
            tracep->chgCData(oldp+552,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__46__KET____DOT__gather),3);
            tracep->chgCData(oldp+553,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__47__KET____DOT__gather),3);
            tracep->chgCData(oldp+554,(vlTOPp->bsg_tanh__DOT__divider__DOT__genblk2__DOT__muxC__DOT__reduce__BRA__48__KET____DOT__gather),3);
        }
        tracep->chgBit(oldp+555,(vlTOPp->clk_i));
        tracep->chgIData(oldp+556,(vlTOPp->ang_i),21);
        tracep->chgBit(oldp+557,(vlTOPp->ready_i));
        tracep->chgBit(oldp+558,(vlTOPp->val_i));
        tracep->chgBit(oldp+559,(vlTOPp->reset_i));
        tracep->chgIData(oldp+560,(vlTOPp->tanh_o),32);
        tracep->chgBit(oldp+561,(vlTOPp->ready_o));
        tracep->chgBit(oldp+562,(vlTOPp->val_o));
        tracep->chgCData(oldp+563,(vlTOPp->bsg_tanh__DOT__state_n),2);
        tracep->chgCData(oldp+564,(vlTOPp->bsg_tanh__DOT__divider__DOT__control__DOT__next_state),6);
    }
}

void Vbsg_tanh::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vbsg_tanh__Syms* __restrict vlSymsp = static_cast<Vbsg_tanh__Syms*>(userp);
    Vbsg_tanh* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
