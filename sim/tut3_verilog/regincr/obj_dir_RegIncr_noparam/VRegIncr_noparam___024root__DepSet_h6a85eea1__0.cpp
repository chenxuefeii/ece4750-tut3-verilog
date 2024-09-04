// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncr_noparam.h for the primary calling header

#include "VRegIncr_noparam__pch.h"
#include "VRegIncr_noparam___024root.h"

void VRegIncr_noparam___024root___eval_act(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___eval_act\n"); );
}

void VRegIncr_noparam___024root___nba_sequent__TOP__0(VRegIncr_noparam___024root* vlSelf);

void VRegIncr_noparam___024root___eval_nba(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegIncr_noparam___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRegIncr_noparam___024root___nba_sequent__TOP__0(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->RegIncr_noparam__DOT__v__DOT__reg_out = 
        ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->in_));
    vlSelf->out = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncr_noparam__DOT__v__DOT__reg_out)));
}

void VRegIncr_noparam___024root___eval_triggers__act(VRegIncr_noparam___024root* vlSelf);

bool VRegIncr_noparam___024root___eval_phase__act(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegIncr_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRegIncr_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegIncr_noparam___024root___eval_phase__nba(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegIncr_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncr_noparam___024root___dump_triggers__nba(VRegIncr_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncr_noparam___024root___dump_triggers__act(VRegIncr_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VRegIncr_noparam___024root___eval(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRegIncr_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tut3_verilog/regincr/RegIncr.v", 65, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRegIncr_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tut3_verilog/regincr/RegIncr.v", 65, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRegIncr_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRegIncr_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegIncr_noparam___024root___eval_debug_assertions(VRegIncr_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
