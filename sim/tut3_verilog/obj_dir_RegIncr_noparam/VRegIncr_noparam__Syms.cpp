// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRegIncr_noparam__pch.h"
#include "VRegIncr_noparam.h"
#include "VRegIncr_noparam___024root.h"

void VRegIncr_noparam___024root____Vdpiexp_RegIncr_noparam__DOT__v__DOT__line_trace_TOP(VRegIncr_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VRegIncr_noparam__Syms::~VRegIncr_noparam__Syms()
{
}

VRegIncr_noparam__Syms::VRegIncr_noparam__Syms(VerilatedContext* contextp, const char* namep, VRegIncr_noparam* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2590);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_RegIncr_noparam__v.configure(this, name(), "RegIncr_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_RegIncr_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VRegIncr_noparam___024root____Vdpiexp_RegIncr_noparam__DOT__v__DOT__line_trace_TOP));
    }
}
