// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegIncr2stage_noparam.h for the primary calling header

#ifndef VERILATED_VREGINCR2STAGE_NOPARAM___024ROOT_H_
#define VERILATED_VREGINCR2STAGE_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VRegIncr2stage_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegIncr2stage_noparam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in_,7,0);
    VL_OUT8(out,7,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ RegIncr2stage_noparam__DOT__v__DOT__reg_incr_0__DOT__reg_out;
    CData/*7:0*/ RegIncr2stage_noparam__DOT__v__DOT__reg_incr_1__DOT__reg_out;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VlWide<128>/*4095:0*/ RegIncr2stage_noparam__DOT__v__DOT__reg_incr_0__DOT__str;
    VlWide<128>/*4095:0*/ RegIncr2stage_noparam__DOT__v__DOT__reg_incr_1__DOT__str;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegIncr2stage_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegIncr2stage_noparam___024root(VRegIncr2stage_noparam__Syms* symsp, const char* v__name);
    ~VRegIncr2stage_noparam___024root();
    VL_UNCOPYABLE(VRegIncr2stage_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
