// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VBSG_TANH__SYMS_H_
#define _VBSG_TANH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vbsg_tanh.h"

// SYMS CLASS
class Vbsg_tanh__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vbsg_tanh*                     TOPp;
    
    // CREATORS
    Vbsg_tanh__Syms(Vbsg_tanh* topp, const char* namep);
    ~Vbsg_tanh__Syms() = default;
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
