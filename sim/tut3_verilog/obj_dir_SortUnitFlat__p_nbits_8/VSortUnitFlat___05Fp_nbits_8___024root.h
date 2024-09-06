// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSortUnitFlat___05Fp_nbits_8.h for the primary calling header

#ifndef VERILATED_VSORTUNITFLAT___05FP_NBITS_8___024ROOT_H_
#define VERILATED_VSORTUNITFLAT___05FP_NBITS_8___024ROOT_H_  // guard

#include "verilated.h"


class VSortUnitFlat___05Fp_nbits_8__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSortUnitFlat___05Fp_nbits_8___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in0,7,0);
    VL_IN8(in1,7,0);
    VL_IN8(in2,7,0);
    VL_IN8(in3,7,0);
    VL_IN8(in_val,0,0);
    VL_OUT8(out0,7,0);
    VL_OUT8(out1,7,0);
    VL_OUT8(out2,7,0);
    VL_OUT8(out3,7,0);
    VL_OUT8(out_val,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S1;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S1;
    CData/*0:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S2;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S2;
    CData/*0:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S3;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S3;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S3;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VlWide<128>/*4095:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str;
    IData/*31:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSortUnitFlat___05Fp_nbits_8__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSortUnitFlat___05Fp_nbits_8___024root(VSortUnitFlat___05Fp_nbits_8__Syms* symsp, const char* v__name);
    ~VSortUnitFlat___05Fp_nbits_8___024root();
    VL_UNCOPYABLE(VSortUnitFlat___05Fp_nbits_8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
