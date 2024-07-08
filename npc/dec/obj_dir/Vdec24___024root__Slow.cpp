// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec24.h for the primary calling header

#include "verilated.h"

#include "Vdec24__Syms.h"
#include "Vdec24___024root.h"

void Vdec24___024root___ctor_var_reset(Vdec24___024root* vlSelf);

Vdec24___024root::Vdec24___024root(Vdec24__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdec24___024root___ctor_var_reset(this);
}

void Vdec24___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdec24___024root::~Vdec24___024root() {
}
