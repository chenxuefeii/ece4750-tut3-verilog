// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSortUnitFlat___05Fp_nbits_8.h for the primary calling header

#include "VSortUnitFlat___05Fp_nbits_8__pch.h"
#include "VSortUnitFlat___05Fp_nbits_8__Syms.h"
#include "VSortUnitFlat___05Fp_nbits_8___024root.h"

extern const VlWide<128>/*4095:0*/ VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_haead36df_0;
extern const VlWide<128>/*4095:0*/ VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_h803d56e6_0;

void VSortUnitFlat___05Fp_nbits_8___024root____Vdpiexp_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__line_trace_TOP(VSortUnitFlat___05Fp_nbits_8__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root____Vdpiexp_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1;
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace);
    CData/*0:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace);
    CData/*0:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace);
    CData/*0:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace);
    CData/*0:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace);
    CData/*0:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__val;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__val = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__trace);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__str;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__str);
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace;
    VL_ZERO_W(4096, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace);
    CData/*7:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__char;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__char = 0;
    IData/*31:0*/ __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__num;
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str
                  ,"{%x,%x,%x,%x}",0,8,vlSymsp->TOP.in0,
                  8,(IData)(vlSymsp->TOP.in1),8,vlSymsp->TOP.in2,
                  8,(IData)(vlSymsp->TOP.in3));
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str);
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val 
        = vlSymsp->TOP.in_val;
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace, trace_str);
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    } else if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__num 
            = (SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace);
    } else {
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__num 
            = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__0__trace);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, trace_str);
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U];
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U] 
        = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str
                  ,"{%x,%x,%x,%x}",0,8,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S1,
                  8,(IData)(vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S1),
                  8,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S1,
                  8,(IData)(vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S1));
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str);
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val 
        = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S1;
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace, trace_str);
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    } else if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__num 
            = (SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__9__trace);
    } else {
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__num 
            = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__6__trace);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, trace_str);
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U];
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U] 
        = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str
                  ,"{%x,%x,%x,%x}",0,8,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S2,
                  8,(IData)(vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S2),
                  8,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S2,
                  8,(IData)(vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S2));
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str);
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val 
        = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S2;
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace, trace_str);
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    } else if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__num 
            = (SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__15__trace);
    } else {
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__num 
            = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__12__trace);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, trace_str);
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U];
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U] 
        = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str
                  ,"{%x,%x,%x,%x}",0,8,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm0_S3,
                  8,(IData)(vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm1_S3),
                  8,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm2_S3,
                  8,(IData)(vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__elm3_S3));
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str);
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val 
        = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__val_S3;
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace, trace_str);
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__19__trace);
    } else if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__num 
            = (SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__21__trace);
    } else {
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__num 
            = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__22__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__18__trace);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
    vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
        = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str
                  ,"{%x,%x,%x,%x}",0,8,vlSymsp->TOP.out0,
                  8,(IData)(vlSymsp->TOP.out1),8,vlSymsp->TOP.out2,
                  8,(IData)(vlSymsp->TOP.out3));
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__str, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__str);
    __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__val 
        = vlSymsp->TOP.out_val;
    VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace, trace_str);
    SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__str);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__25__trace);
    } else if (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__val) {
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__str, VSortUnitFlat___05Fp_nbits_8__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_str__26__trace);
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__num 
            = (SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__27__trace);
    } else {
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__num 
            = SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace);
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace[0U];
        vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__char);
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace[0U] 
            = vlSymsp->TOP.SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_chars__28__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SortUnitFlat___05Fp_nbits_8__DOT__v__DOT__vc_trace__DOT__append_val_str__24__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__act(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
#endif  // VL_DEBUG

void VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__act(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSortUnitFlat___05Fp_nbits_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortUnitFlat___05Fp_nbits_8___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSortUnitFlat___05Fp_nbits_8___024root___dump_triggers__act(vlSelf);
    }
#endif
}
