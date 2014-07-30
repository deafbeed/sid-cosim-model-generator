// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm_pwm_fifo.h"     // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm_pwm_fifo) {
    // Reset internal values
    // Reset structure values
    __PVT__sample = VL_RAND_RESET_I(16);
    __PVT__fifo_av = VL_RAND_RESET_I(3);
    __PVT__fifo_empty = VL_RAND_RESET_I(1);
    __PVT__full = VL_RAND_RESET_I(1);
    __PVT__ips_wdata = VL_RAND_RESET_I(32);
    __PVT__rstgen_rst_b = VL_RAND_RESET_I(1);
    __PVT__read = VL_RAND_RESET_I(1);
    __PVT__bctr = VL_RAND_RESET_I(1);
    __PVT__hctr = VL_RAND_RESET_I(1);
    __PVT__fifo_watermark = VL_RAND_RESET_I(2);
    __PVT__ipg_clk_s = VL_RAND_RESET_I(1);
    __PVT__ipg_clk = VL_RAND_RESET_I(1);
    __PVT__pclk = VL_RAND_RESET_I(1);
    __PVT__write_pwmsam = VL_RAND_RESET_I(1);
    __PVT__datain = VL_RAND_RESET_I(16);
    __PVT__data0 = VL_RAND_RESET_I(16);
    __PVT__data1 = VL_RAND_RESET_I(16);
    __PVT__data2 = VL_RAND_RESET_I(16);
    __PVT__data3 = VL_RAND_RESET_I(16);
    __PVT__read_ptr = VL_RAND_RESET_I(2);
    __PVT__write_ptr = VL_RAND_RESET_I(2);
    __PVT__write_flag = VL_RAND_RESET_I(1);
    __PVT__read_flag = VL_RAND_RESET_I(1);
    __PVT__fifo_wm_cross = VL_RAND_RESET_I(1);
    __PVT__fifo_wm_cross1 = VL_RAND_RESET_I(1);
    __PVT__fifo_full_reg = VL_RAND_RESET_I(1);
    __PVT__fifo_flag = VL_RAND_RESET_I(1);
    __PVT__sample_ptr = VL_RAND_RESET_I(2);
    __PVT__sample_update = VL_RAND_RESET_I(1);
    __PVT__empty = VL_RAND_RESET_I(1);
    __PVT__fifo_0data = VL_RAND_RESET_I(1);
    __PVT__fifo_1data = VL_RAND_RESET_I(1);
    __PVT__fifo_2data = VL_RAND_RESET_I(1);
    __PVT__fifo_3data = VL_RAND_RESET_I(1);
    __PVT__fifo_1_or_more_empty = VL_RAND_RESET_I(1);
    __PVT__fifo_2_or_more_empty = VL_RAND_RESET_I(1);
    __PVT__fifo_3_or_more_empty = VL_RAND_RESET_I(1);
    __PVT__fifo_4_empty = VL_RAND_RESET_I(1);
    __PVT__fifo_full = VL_RAND_RESET_I(1);
    __Vdly__fifo_full_reg = VL_RAND_RESET_I(1);
    __Vdly__fifo_wm_cross1 = VL_RAND_RESET_I(1);
    __Vdly__read_flag = VL_RAND_RESET_I(1);
    __Vdly__read_ptr = VL_RAND_RESET_I(2);
    __Vdly__write_flag = VL_RAND_RESET_I(1);
    __Vdly__data0 = VL_RAND_RESET_I(16);
    __Vdly__data1 = VL_RAND_RESET_I(16);
    __Vdly__data2 = VL_RAND_RESET_I(16);
    __Vdly__data3 = VL_RAND_RESET_I(16);
    __Vdly__write_ptr = VL_RAND_RESET_I(2);
}

void Vpwm_pwm_fifo::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm_pwm_fifo::~Vpwm_pwm_fifo() {
}

//--------------------
// Internal Methods

void Vpwm_pwm_fifo::_sequent__TOP__v__pwm_fifo__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_sequent__TOP__v__pwm_fifo__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__Vdly__fifo_full_reg 
	= vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full_reg;
    // ALWAYS at rtl/pwm_fifo.v:107
    vlSymsp->TOP__v__pwm_fifo.__Vdly__fifo_full_reg 
	= ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b) 
	   & (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full_reg 
	= vlSymsp->TOP__v__pwm_fifo.__Vdly__fifo_full_reg;
}

void Vpwm_pwm_fifo::_sequent__TOP__v__pwm_fifo__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_sequent__TOP__v__pwm_fifo__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__Vdly__data0 = vlSymsp->TOP__v__pwm_fifo.__PVT__data0;
    vlSymsp->TOP__v__pwm_fifo.__Vdly__data1 = vlSymsp->TOP__v__pwm_fifo.__PVT__data1;
    vlSymsp->TOP__v__pwm_fifo.__Vdly__data2 = vlSymsp->TOP__v__pwm_fifo.__PVT__data2;
    vlSymsp->TOP__v__pwm_fifo.__Vdly__data3 = vlSymsp->TOP__v__pwm_fifo.__PVT__data3;
    vlSymsp->TOP__v__pwm_fifo.__Vdly__write_ptr = vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr;
    vlSymsp->TOP__v__pwm_fifo.__Vdly__write_flag = vlSymsp->TOP__v__pwm_fifo.__PVT__write_flag;
    // ALWAYS at rtl/pwm_fifo.v:173
    if (vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b) {
	if (((~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__full)) 
	     & (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_pwmsam))) {
	    if ((0 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))) {
		vlSymsp->TOP__v__pwm_fifo.__Vdly__data0 
		    = vlSymsp->TOP__v__pwm_fifo.__PVT__datain;
	    } else {
		if ((1 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))) {
		    vlSymsp->TOP__v__pwm_fifo.__Vdly__data1 
			= vlSymsp->TOP__v__pwm_fifo.__PVT__datain;
		} else {
		    if ((2 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))) {
			vlSymsp->TOP__v__pwm_fifo.__Vdly__data2 
			    = vlSymsp->TOP__v__pwm_fifo.__PVT__datain;
		    } else {
			if ((3 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))) {
			    vlSymsp->TOP__v__pwm_fifo.__Vdly__data3 
				= vlSymsp->TOP__v__pwm_fifo.__PVT__datain;
			}
		    }
		}
	    }
	    vlSymsp->TOP__v__pwm_fifo.__Vdly__write_ptr 
		= (3 & ((IData)(1) + (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)));
	}
    } else {
	vlSymsp->TOP__v__pwm_fifo.__Vdly__data0 = 0;
	vlSymsp->TOP__v__pwm_fifo.__Vdly__data1 = 0;
	vlSymsp->TOP__v__pwm_fifo.__Vdly__data2 = 0;
	vlSymsp->TOP__v__pwm_fifo.__Vdly__data3 = 0;
	vlSymsp->TOP__v__pwm_fifo.__Vdly__write_ptr = 0;
    }
    // ALWAYS at rtl/pwm_fifo.v:153
    if (vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b) {
	if ((((~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__full)) 
	      & (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_pwmsam)) 
	     & (3 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)))) {
	    vlSymsp->TOP__v__pwm_fifo.__Vdly__write_flag 
		= (1 & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_flag)));
	}
    } else {
	vlSymsp->TOP__v__pwm_fifo.__Vdly__write_flag = 0;
    }
    vlSymsp->TOP__v__pwm_fifo.__PVT__data0 = vlSymsp->TOP__v__pwm_fifo.__Vdly__data0;
    vlSymsp->TOP__v__pwm_fifo.__PVT__data1 = vlSymsp->TOP__v__pwm_fifo.__Vdly__data1;
    vlSymsp->TOP__v__pwm_fifo.__PVT__data2 = vlSymsp->TOP__v__pwm_fifo.__Vdly__data2;
    vlSymsp->TOP__v__pwm_fifo.__PVT__data3 = vlSymsp->TOP__v__pwm_fifo.__Vdly__data3;
    vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr = vlSymsp->TOP__v__pwm_fifo.__Vdly__write_ptr;
    vlSymsp->TOP__v__pwm_fifo.__PVT__write_flag = vlSymsp->TOP__v__pwm_fifo.__Vdly__write_flag;
}

void Vpwm_pwm_fifo::_combo__TOP__v__pwm_fifo__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_combo__TOP__v__pwm_fifo__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_fifo.v:218
    if ((0 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
	vlSymsp->TOP__v__pwm_fifo.__PVT__datain = (0xffff 
						   & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0, 0x10));
    } else {
	if ((1 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
	    vlSymsp->TOP__v__pwm_fifo.__PVT__datain 
		= (0xffff & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0x10, 0x10));
	} else {
	    if ((2 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
		vlSymsp->TOP__v__pwm_fifo.__PVT__datain 
		    = VL_CONCAT_III(16,8,8, (0xff & 
					     VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0, 8)), 
				    (0xff & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 8, 8)));
	    } else {
		if ((3 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
		    vlSymsp->TOP__v__pwm_fifo.__PVT__datain 
			= VL_CONCAT_III(16,8,8, (0xff 
						 & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0x10, 8)), 
					(0xff & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0x18, 8)));
		}
	    }
	}
    }
}

void Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_fifo.v:218
    if ((0 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
	vlSymsp->TOP__v__pwm_fifo.__PVT__datain = (0xffff 
						   & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0, 0x10));
    } else {
	if ((1 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
	    vlSymsp->TOP__v__pwm_fifo.__PVT__datain 
		= (0xffff & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0x10, 0x10));
	} else {
	    if ((2 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
		vlSymsp->TOP__v__pwm_fifo.__PVT__datain 
		    = VL_CONCAT_III(16,8,8, (0xff & 
					     VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0, 8)), 
				    (0xff & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 8, 8)));
	    } else {
		if ((3 == VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr), (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr)))) {
		    vlSymsp->TOP__v__pwm_fifo.__PVT__datain 
			= VL_CONCAT_III(16,8,8, (0xff 
						 & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0x10, 8)), 
					(0xff & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata, 0x18, 8)));
		}
	    }
	}
    }
}

void Vpwm_pwm_fifo::_sequent__TOP__v__pwm_fifo__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_sequent__TOP__v__pwm_fifo__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__Vdly__fifo_wm_cross1 
	= vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross1;
    vlSymsp->TOP__v__pwm_fifo.__Vdly__read_ptr = vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr;
    vlSymsp->TOP__v__pwm_fifo.__Vdly__read_flag = vlSymsp->TOP__v__pwm_fifo.__PVT__read_flag;
    // ALWAYS at rtl/pwm_fifo.v:144
    vlSymsp->TOP__v__pwm_fifo.__Vdly__fifo_wm_cross1 
	= ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b) 
	   & (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross));
    // ALWAYS at rtl/pwm_fifo.v:197
    if (vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b) {
	if (vlSymsp->TOP__v__pwm_fifo.__PVT__sample_update) {
	    vlSymsp->TOP__v__pwm_fifo.__Vdly__read_ptr 
		= (3 & ((IData)(1) + (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)));
	}
    } else {
	vlSymsp->TOP__v__pwm_fifo.__Vdly__read_ptr = 0;
    }
    // ALWAYS at rtl/pwm_fifo.v:163
    if (vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b) {
	if (((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_update) 
	     & (3 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))) {
	    vlSymsp->TOP__v__pwm_fifo.__Vdly__read_flag 
		= (1 & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_flag)));
	}
    } else {
	vlSymsp->TOP__v__pwm_fifo.__Vdly__read_flag = 0;
    }
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross1 
	= vlSymsp->TOP__v__pwm_fifo.__Vdly__fifo_wm_cross1;
    vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr = vlSymsp->TOP__v__pwm_fifo.__Vdly__read_ptr;
    vlSymsp->TOP__v__pwm_fifo.__PVT__read_flag = vlSymsp->TOP__v__pwm_fifo.__Vdly__read_flag;
}

void Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__6(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__6\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_flag) 
						  ^ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_flag));
}

void Vpwm_pwm_fifo::_multiclk__TOP__v__pwm_fifo__7(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_multiclk__TOP__v__pwm_fifo__7\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_flag) 
						  ^ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_flag));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3data = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						    ? 
						   (1 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						    : 
						   (3 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						    ? 
						   (2 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						    : 
						   (2 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_av = (7 & 
						((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						  ? 
						 ((IData)(4) 
						  - 
						  (VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)) 
						   - 
						   VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						  : 
						 (VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)) 
						  - 
						  VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						    ? 
						   (3 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						    : 
						   (1 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full = (((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
						   == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)) 
						  & (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag));
    vlSymsp->TOP__v__pwm_fifo.__PVT__empty = (((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
					       == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)) 
					      & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)));
}

void Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__8(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__8\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3data = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						    ? 
						   (1 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						    : 
						   (3 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						    ? 
						   (2 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						    : 
						   (2 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_av = (7 & 
						((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						  ? 
						 ((IData)(4) 
						  - 
						  (VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)) 
						   - 
						   VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						  : 
						 (VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)) 
						  - 
						  VL_EXTEND_II(3,2, (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)
						    ? 
						   (3 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr))))
						    : 
						   (1 
						    == 
						    (3 
						     & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr) 
							- (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)))));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full = (((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
						   == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)) 
						  & (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag));
    vlSymsp->TOP__v__pwm_fifo.__PVT__empty = (((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
					       == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr)) 
					      & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag)));
    vlSymsp->TOP__v__pwm_fifo.__PVT__full = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full_reg) 
					     | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data = vlSymsp->TOP__v__pwm_fifo.__PVT__empty;
    vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr = (3 
						   & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__empty)
						       ? 
						      ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
						       - (IData)(1))
						       : (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)));
}

void Vpwm_pwm_fifo::_multiclk__TOP__v__pwm_fifo__9(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_multiclk__TOP__v__pwm_fifo__9\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data = vlSymsp->TOP__v__pwm_fifo.__PVT__empty;
    vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr = (3 
						   & ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__empty)
						       ? 
						      ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr) 
						       - (IData)(1))
						       : (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr)));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_4_empty = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data;
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3_or_more_empty 
	= ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data) 
	   | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2_or_more_empty 
	= (((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data) 
	    | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data)) 
	   | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1_or_more_empty 
	= ((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data) 
	     | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data)) 
	    | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data)) 
	   | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3data));
    // ALWAYS at rtl/pwm_fifo.v:209
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
	vlSymsp->TOP__v__pwm_fifo.__PVT__sample = vlSymsp->TOP__v__pwm_fifo.__PVT__data0;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
	    vlSymsp->TOP__v__pwm_fifo.__PVT__sample 
		= vlSymsp->TOP__v__pwm_fifo.__PVT__data1;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
		vlSymsp->TOP__v__pwm_fifo.__PVT__sample 
		    = vlSymsp->TOP__v__pwm_fifo.__PVT__data2;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
		    vlSymsp->TOP__v__pwm_fifo.__PVT__sample 
			= vlSymsp->TOP__v__pwm_fifo.__PVT__data3;
		}
	    }
	}
    }
}

void Vpwm_pwm_fifo::_multiclk__TOP__v__pwm_fifo__10(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_multiclk__TOP__v__pwm_fifo__10\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__full = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full_reg) 
					     | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full));
}

void Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__11(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__11\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_4_empty = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data;
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3_or_more_empty 
	= ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data) 
	   | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2_or_more_empty 
	= (((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data) 
	    | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data)) 
	   | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data));
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1_or_more_empty 
	= ((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data) 
	     | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data)) 
	    | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data)) 
	   | (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3data));
    // ALWAYS at rtl/pwm_fifo.v:209
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
	vlSymsp->TOP__v__pwm_fifo.__PVT__sample = vlSymsp->TOP__v__pwm_fifo.__PVT__data0;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
	    vlSymsp->TOP__v__pwm_fifo.__PVT__sample 
		= vlSymsp->TOP__v__pwm_fifo.__PVT__data1;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
		vlSymsp->TOP__v__pwm_fifo.__PVT__sample 
		    = vlSymsp->TOP__v__pwm_fifo.__PVT__data2;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr))) {
		    vlSymsp->TOP__v__pwm_fifo.__PVT__sample 
			= vlSymsp->TOP__v__pwm_fifo.__PVT__data3;
		}
	    }
	}
    }
    vlSymsp->TOP__v__pwm_fifo.__PVT__sample_update 
	= ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read) 
	   & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__empty)));
    // ALWAYS at rtl/pwm_fifo.v:135
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
	vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
	    = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1_or_more_empty;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
	    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
		= vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2_or_more_empty;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
		vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
		    = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3_or_more_empty;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
		    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
			= vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_4_empty;
		}
	    }
	}
    }
}

void Vpwm_pwm_fifo::_combo__TOP__v__pwm_fifo__12(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_combo__TOP__v__pwm_fifo__12\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__sample_update 
	= ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__read) 
	   & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__empty)));
    // ALWAYS at rtl/pwm_fifo.v:135
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
	vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
	    = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1_or_more_empty;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
	    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
		= vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2_or_more_empty;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
		vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
		    = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3_or_more_empty;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark))) {
		    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross 
			= vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_4_empty;
		}
	    }
	}
    }
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_empty = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross) 
						   & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross1)));
}

void Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__13(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_fifo::_settle__TOP__v__pwm_fifo__13\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_empty = ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross) 
						   & (~ (IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross1)));
}
