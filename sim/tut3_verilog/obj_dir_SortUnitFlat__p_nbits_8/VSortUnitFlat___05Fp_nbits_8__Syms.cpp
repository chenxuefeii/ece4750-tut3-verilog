// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSortUnitFlat___05Fp_nbits_8__pch.h"
#include "VSortUnitFlat___05Fp_nbits_8.h"
#include "VSortUnitFlat___05Fp_nbits_8___024root.h"

void VSortUnitFlat___05Fp_nbits_8___024root____Vdpiexp_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__line_trace_TOP(VSortUnitFlat___05Fp_nbits_8__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VSortUnitFlat___05Fp_nbits_8__Syms::~VSortUnitFlat___05Fp_nbits_8__Syms()
{
}

VSortUnitFlat___05Fp_nbits_8__Syms::VSortUnitFlat___05Fp_nbits_8__Syms(VerilatedContext* contextp, const char* namep, VSortUnitFlat___05Fp_nbits_8* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(26197);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_SortUnitFlat___05Fp_nbits_8__v.configure(this, name(), "SortUnitFlat__p_nbits_8.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_SortUnitFlat___05Fp_nbits_8__v.exportInsert(__Vfinal, "line_trace", (void*)(&VSortUnitFlat___05Fp_nbits_8___024root____Vdpiexp_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__line_trace_TOP));
    }
}
