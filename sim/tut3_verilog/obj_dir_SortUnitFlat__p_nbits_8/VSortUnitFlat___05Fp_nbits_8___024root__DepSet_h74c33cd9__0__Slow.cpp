// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSortUnitFlat___05Fp_nbits_8.h for the primary calling header

#include "VSortUnitFlat___05Fp_nbits_8__pch.h"
#include "VSortUnitFlat___05Fp_nbits_8___024root.h"

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___eval_static(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___eval_initial(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___eval_final(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___eval_settle(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tut3_verilog/sort/SortUnitFlat.v", 296, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___stl_sequent__TOP__0(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___eval_stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSortUnitFlat___05Fp_nbits_8___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___stl_sequent__TOP__0(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3;
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3 = 0;
    CData/*7:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3;
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3 = 0;
    // Body
    vlSelf->out0 = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S3;
    vlSelf->out3 = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S3;
    vlSelf->out_val = vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S3;
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
    vlSelf->out1 = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S3;
    vlSelf->out2 = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S3;
}

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);

VL_ATTR_COLD bool VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSortUnitFlat___05Fp_nbits_8___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__act(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__nba(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___ctor_var_reset(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->in0 = VL_RAND_RESET_I(8);
    vlSelf->in1 = VL_RAND_RESET_I(8);
    vlSelf->in2 = VL_RAND_RESET_I(8);
    vlSelf->in3 = VL_RAND_RESET_I(8);
    vlSelf->in_val = VL_RAND_RESET_I(1);
    vlSelf->out0 = VL_RAND_RESET_I(8);
    vlSelf->out1 = VL_RAND_RESET_I(8);
    vlSelf->out2 = VL_RAND_RESET_I(8);
    vlSelf->out3 = VL_RAND_RESET_I(8);
    vlSelf->out_val = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S1 = VL_RAND_RESET_I(1);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S1 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S2 = VL_RAND_RESET_I(1);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_next_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_next_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_next_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_next_S2 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S3 = VL_RAND_RESET_I(1);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S3 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3 = VL_RAND_RESET_I(8);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
