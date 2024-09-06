// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSortUnitFlat___05Fp_nbits_8__pch.h"

//============================================================
// Constructors

VSortUnitFlat___05Fp_nbits_8::VSortUnitFlat___05Fp_nbits_8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSortUnitFlat___05Fp_nbits_8__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , in0{vlSymsp->TOP.in0}
    , in1{vlSymsp->TOP.in1}
    , in2{vlSymsp->TOP.in2}
    , in3{vlSymsp->TOP.in3}
    , in_val{vlSymsp->TOP.in_val}
    , out0{vlSymsp->TOP.out0}
    , out1{vlSymsp->TOP.out1}
    , out2{vlSymsp->TOP.out2}
    , out3{vlSymsp->TOP.out3}
    , out_val{vlSymsp->TOP.out_val}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSortUnitFlat___05Fp_nbits_8::VSortUnitFlat___05Fp_nbits_8(const char* _vcname__)
    : VSortUnitFlat___05Fp_nbits_8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSortUnitFlat___05Fp_nbits_8::~VSortUnitFlat___05Fp_nbits_8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSortUnitFlat___05Fp_nbits_8___024root___eval_debug_assertions(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
#endif  // VL_DEBUG
void VSortUnitFlat___05Fp_nbits_8___024root___eval_static(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
void VSortUnitFlat___05Fp_nbits_8___024root___eval_initial(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
void VSortUnitFlat___05Fp_nbits_8___024root___eval_settle(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);
void VSortUnitFlat___05Fp_nbits_8___024root___eval(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);

void VSortUnitFlat___05Fp_nbits_8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSortUnitFlat___05Fp_nbits_8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSortUnitFlat___05Fp_nbits_8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSortUnitFlat___05Fp_nbits_8___024root___eval_static(&(vlSymsp->TOP));
        VSortUnitFlat___05Fp_nbits_8___024root___eval_initial(&(vlSymsp->TOP));
        VSortUnitFlat___05Fp_nbits_8___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSortUnitFlat___05Fp_nbits_8___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSortUnitFlat___05Fp_nbits_8::eventsPending() { return false; }

uint64_t VSortUnitFlat___05Fp_nbits_8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSortUnitFlat___05Fp_nbits_8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSortUnitFlat___05Fp_nbits_8___024root___eval_final(VSortUnitFlat___05Fp_nbits_8___024root* vlSelf);

VL_ATTR_COLD void VSortUnitFlat___05Fp_nbits_8::final() {
    VSortUnitFlat___05Fp_nbits_8___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSortUnitFlat___05Fp_nbits_8::hierName() const { return vlSymsp->name(); }
const char* VSortUnitFlat___05Fp_nbits_8::modelName() const { return "VSortUnitFlat___05Fp_nbits_8"; }
unsigned VSortUnitFlat___05Fp_nbits_8::threads() const { return 1; }
void VSortUnitFlat___05Fp_nbits_8::prepareClone() const { contextp()->prepareClone(); }
void VSortUnitFlat___05Fp_nbits_8::atClone() const {
    contextp()->threadPoolpOnClone();
}
