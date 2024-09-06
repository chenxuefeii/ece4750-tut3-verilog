// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSortUnitFlat___05Fp_nbits_8.h for the primary calling header

#include "VSortUnitFlat___05Fp_nbits_8__pch.h"
#include "VSortUnitFlat___05Fp_nbits_8___024root.h"

void VSortUnitFlat___05Fp_nbits_8___024root___eval_act(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_act\n"); );
}

void VSortUnitFlat___05Fp_nbits_8___024root___nba_sequent__TOP__0(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);

void VSortUnitFlat___05Fp_nbits_8___024root___eval_nba(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSortUnitFlat___05Fp_nbits_8___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSortUnitFlat___05Fp_nbits_8___024root___nba_sequent__TOP__0(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3;
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3 = 0;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3;
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3 = 0;
    // Body
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S3 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S2;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S3 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S2;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1 
        = vlSelf->in3;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1 
        = vlSelf->in1;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1 
        = vlSelf->in0;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1 
        = vlSelf->in2;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S1;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S1;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S1;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S1;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S2;
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3 
        = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S2;
    if (vlSelf->reset) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S3 = 0U;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S2 = 0U;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S1 = 0U;
    } else {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S3 
            = (1U & (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S2));
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S2 
            = (1U & (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S1));
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S1 
            = (1U & (IData)(vlSelf->in_val));
    }
    vlSelf->out3 = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S3;
    vlSelf->out0 = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S3;
    if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1) 
         <= (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1;
    } else if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1) 
                > (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1;
    } else {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S1 = 0U;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S1 = 0U;
    }
    if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1) 
         <= (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1;
    } else if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1) 
                > (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S1 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1;
    } else {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S1 = 0U;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S1 = 0U;
    }
    if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2) 
         <= (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2;
    } else if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2) 
                > (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2;
    } else {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S2 = 0U;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S2 = 0U;
    }
    if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2) 
         <= (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2;
    } else if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2) 
                > (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2))) {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S2 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2;
    } else {
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S2 = 0U;
        vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S2 = 0U;
    }
    if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3) 
         <= (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3))) {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3;
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3;
    } else if (((IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3) 
                > (IData)(vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3))) {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3;
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3 
            = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3;
    } else {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3 = 0U;
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3 = 0U;
    }
    vlSelf->out_val = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S3;
    vlSelf->out1 = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3;
    vlSelf->out2 = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3;
}

void VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__act(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);

bool VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__act(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSortUnitFlat___05Fp_nbits_8___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__nba(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSortUnitFlat___05Fp_nbits_8___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__nba(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__act(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
#endif  // VL_DEBUG

void VSortUnitFlat___05Fp_nbits_8___024root___eval(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tut3_verilog/sort/SortUnitFlat.v", 296, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tut3_verilog/sort/SortUnitFlat.v", 296, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSortUnitFlat___05Fp_nbits_8___024root___eval_debug_assertions(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->in_val & 0xfeU))) {
        Verilated::overWidthError("in_val");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
