// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VSortUnitFlat___05Fp_nbits_8.h"
#include "VSortUnitFlat___05Fp_nbits_8__Syms.h"
#include "verilated_dpi.h"


void VSortUnitFlat___05Fp_nbits_8::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root::line_trace\n"); );
    // Init
    VlWide<128>/*4095:0*/ trace_str__Vcvt;
    VL_ZERO_W(4096, trace_str__Vcvt);
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("line_trace");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VSortUnitFlat___05Fp_nbits_8__Vcb_line_trace_t __Vcb = (VSortUnitFlat___05Fp_nbits_8__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str + 0);
(*__Vcb)((VSortUnitFlat___05Fp_nbits_8__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    for (size_t trace_str__Vidx = 0; trace_str__Vidx < 1; ++trace_str__Vidx) VL_SET_SVBV_W(4096, trace_str + 128 * trace_str__Vidx, trace_str__Vcvt);
}
