// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSORTUNITFLAT___05FP_NBITS_8__SYMS_H_
#define VERILATED_VSORTUNITFLAT___05FP_NBITS_8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSortUnitFlat___05Fp_nbits_8.h"

// INCLUDE MODULE CLASSES
#include "VSortUnitFlat___05Fp_nbits_8___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VSortUnitFlat___05Fp_nbits_8__Vcb_line_trace_t = void (*) (VSortUnitFlat___05Fp_nbits_8__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSortUnitFlat___05Fp_nbits_8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSortUnitFlat___05Fp_nbits_8* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSortUnitFlat___05Fp_nbits_8___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_SortUnitFlat___05Fp_nbits_8__v;

    // CONSTRUCTORS
    VSortUnitFlat___05Fp_nbits_8__Syms(VerilatedContext* contextp, const char* namep, VSortUnitFlat___05Fp_nbits_8* modelp);
    ~VSortUnitFlat___05Fp_nbits_8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
