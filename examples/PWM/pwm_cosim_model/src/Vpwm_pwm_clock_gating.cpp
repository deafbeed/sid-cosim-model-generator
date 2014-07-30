// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm_pwm_clock_gating.h" // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm_pwm_clock_gating) {
    // Reset internal values
    // Reset structure values
    __PVT__gck = VL_RAND_RESET_I(1);
    __PVT__ck = VL_RAND_RESET_I(1);
    __PVT__en = VL_RAND_RESET_I(1);
    __PVT__se = VL_RAND_RESET_I(1);
    __PVT__ck_b = VL_RAND_RESET_I(1);
    __PVT__clk_enable = VL_RAND_RESET_I(1);
}

void Vpwm_pwm_clock_gating::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm_pwm_clock_gating::~Vpwm_pwm_clock_gating() {
}

//--------------------
// Internal Methods

void Vpwm_pwm_clock_gating::_settle__TOP__v__pwm_crm__pclk_gen__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_clock_gating::_settle__TOP__v__pwm_crm__pclk_gen__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck_b 
	= (1 & (~ (IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck)));
}

void Vpwm_pwm_clock_gating::_combo__TOP__v__pwm_crm__pclk_gen__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_clock_gating::_combo__TOP__v__pwm_crm__pclk_gen__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck_b 
	= (1 & (~ (IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck)));
}

void Vpwm_pwm_clock_gating::_combo__TOP__v__pwm_crm__pclk_gen__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_clock_gating::_combo__TOP__v__pwm_crm__pclk_gen__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_clock_gating.v:61
    if (vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck_b) {
	vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__clk_enable 
	    = ((IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__en) 
	       | (IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__se));
    }
}

void Vpwm_pwm_clock_gating::_settle__TOP__v__pwm_crm__pclk_gen__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_clock_gating::_settle__TOP__v__pwm_crm__pclk_gen__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_clock_gating.v:61
    if (vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck_b) {
	vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__clk_enable 
	    = ((IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__en) 
	       | (IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__se));
    }
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__gck = 
	((IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck) 
	 & (IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__clk_enable));
}

void Vpwm_pwm_clock_gating::_combo__TOP__v__pwm_crm__pclk_gen__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_clock_gating::_combo__TOP__v__pwm_crm__pclk_gen__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__gck = 
	((IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck) 
	 & (IData)(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__clk_enable));
}
