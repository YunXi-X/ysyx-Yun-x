// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoder.h for the primary calling header

#include "verilated.h"

#include "Vcoder__Syms.h"
#include "Vcoder___024root.h"

void Vcoder___024root___ctor_var_reset(Vcoder___024root* vlSelf);

Vcoder___024root::Vcoder___024root(Vcoder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcoder___024root___ctor_var_reset(this);
}

void Vcoder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcoder___024root::~Vcoder___024root() {
}
