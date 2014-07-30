// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm_pwm_crm.h"      // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm_pwm_crm) {
    VL_CELL (__PVT__pclk_gen, Vpwm_pwm_clock_gating);
    // Reset internal values
    // Reset structure values
    __PVT__pclk = VL_RAND_RESET_I(1);
    __PVT__ipg_clk = VL_RAND_RESET_I(1);
    __PVT__ipg_clk_highfreq = VL_RAND_RESET_I(1);
    __PVT__ipg_clk_32k = VL_RAND_RESET_I(1);
    __PVT__clksrc = VL_RAND_RESET_I(2);
    __PVT__prescaler = VL_RAND_RESET_I(12);
    __PVT__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __PVT__pwm_en = VL_RAND_RESET_I(1);
    __PVT__ipt_se_gatedclk = VL_RAND_RESET_I(1);
    __PVT__ipt_mode = VL_RAND_RESET_I(1);
    __PVT__count = VL_RAND_RESET_I(12);
    __PVT__prescaler_tmp = VL_RAND_RESET_I(12);
    __PVT__sys_clk = VL_RAND_RESET_I(1);
    __PVT__clksrc_scan = VL_RAND_RESET_I(2);
    __PVT__pclk_en = VL_RAND_RESET_I(1);
    __PVT__pre_match = VL_RAND_RESET_I(1);
    __Vdly__prescaler_tmp = VL_RAND_RESET_I(12);
    __Vdly__count = VL_RAND_RESET_I(12);
}

void Vpwm_pwm_crm::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm_pwm_crm::~Vpwm_pwm_crm() {
}

//--------------------
// Internal Methods

void Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__se = vlSymsp->TOP__v__pwm_crm.__PVT__ipt_se_gatedclk;
}

void Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__se = vlSymsp->TOP__v__pwm_crm.__PVT__ipt_se_gatedclk;
}

void Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan = VL_CONCAT_III(2,1,1, 
								(1 
								 & ((~ (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode)) 
								    & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc), 1))), 
								(1 
								 & ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode) 
								    | VL_BITSEL_IIII(1,2,1,32, (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc), 0))));
}

void Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan = VL_CONCAT_III(2,1,1, 
								(1 
								 & ((~ (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode)) 
								    & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc), 1))), 
								(1 
								 & ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode) 
								    | VL_BITSEL_IIII(1,2,1,32, (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc), 0))));
    // ALWAYS at rtl/pwm_crm.v:88
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
	vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk = 0;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
	    vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk 
		= vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
		vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk 
		    = vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_highfreq;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
		    vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk 
			= vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_32k;
		}
	    }
	}
    }
}

void Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_crm.v:88
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
	vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk = 0;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
	    vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk 
		= vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
		vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk 
		    = vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_highfreq;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan))) {
		    vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk 
			= vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_32k;
		}
	    }
	}
    }
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck = vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk;
}

void Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__6(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__6\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck = vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk;
}

void Vpwm_pwm_crm::_sequent__TOP__v__pwm_crm__7(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_sequent__TOP__v__pwm_crm__7\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__Vdly__count = vlSymsp->TOP__v__pwm_crm.__PVT__count;
    vlSymsp->TOP__v__pwm_crm.__Vdly__prescaler_tmp 
	= vlSymsp->TOP__v__pwm_crm.__PVT__prescaler_tmp;
    // ALWAYS at rtl/pwm_crm.v:100
    vlSymsp->TOP__v__pwm_crm.__Vdly__count = (0xfff 
					      & ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b)
						  ? 
						 ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__pre_match)
						   ? 0
						   : 
						  ((IData)(1) 
						   + (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__count)))
						  : 0));
    // ALWAYS at rtl/pwm_crm.v:77
    vlSymsp->TOP__v__pwm_crm.__Vdly__prescaler_tmp 
	= ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b)
	    ? (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler)
	    : 0);
    vlSymsp->TOP__v__pwm_crm.__PVT__count = vlSymsp->TOP__v__pwm_crm.__Vdly__count;
    vlSymsp->TOP__v__pwm_crm.__PVT__prescaler_tmp = vlSymsp->TOP__v__pwm_crm.__Vdly__prescaler_tmp;
}

void Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__8(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__8\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__pre_match = (((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__count) 
						  == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler)) 
						 | ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler) 
						    != (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler_tmp)));
}

void Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__9(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__9\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__pre_match = (((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__count) 
						  == (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler)) 
						 | ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler) 
						    != (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler_tmp)));
    vlSymsp->TOP__v__pwm_crm.__PVT__pclk_en = ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__pre_match) 
					       & (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en));
}

void Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__10(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__10\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__pclk_en = ((IData)(vlSymsp->TOP__v__pwm_crm.__PVT__pre_match) 
					       & (IData)(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en));
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__en = vlSymsp->TOP__v__pwm_crm.__PVT__pclk_en;
}

void Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__11(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__11\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__en = vlSymsp->TOP__v__pwm_crm.__PVT__pclk_en;
}

void Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__12(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_combo__TOP__v__pwm_crm__12\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__pclk = vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__gck;
}

void Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__13(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_crm::_settle__TOP__v__pwm_crm__13\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__pclk = vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__gck;
}
