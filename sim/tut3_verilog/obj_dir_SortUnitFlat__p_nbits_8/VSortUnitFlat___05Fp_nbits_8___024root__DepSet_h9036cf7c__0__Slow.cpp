// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSortUnitFlat___05Fp_nbits_8.h for the primary calling header

#include "VSortUnitFlat___05Fp_nbits_8__pch.h"
#include "VSortUnitFlat___05Fp_nbits_8__Syms.h"
#include "VSortUnitFlat___05Fp_nbits_8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__stl(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
