// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncrNstage___05Fp_nstages_6.h for the primary calling header

#include "VRegIncrNstage___05Fp_nstages_6__pch.h"
#include "VRegIncrNstage___05Fp_nstages_6__Syms.h"
#include "VRegIncrNstage___05Fp_nstages_6___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___eval_triggers__stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
