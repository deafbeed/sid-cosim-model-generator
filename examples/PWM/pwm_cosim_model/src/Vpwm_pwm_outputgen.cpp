// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm_pwm_outputgen.h" // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm_pwm_outputgen) {
    // Reset internal values
    // Reset structure values
    __PVT__count = VL_RAND_RESET_I(16);
    __PVT__rov_event = VL_RAND_RESET_I(1);
    __PVT__ipp_do_pwmo = VL_RAND_RESET_I(1);
    __PVT__updatesample = VL_RAND_RESET_I(1);
    __PVT__widthmatch = VL_RAND_RESET_I(1);
    __PVT__ipp_obe_pwmo = VL_RAND_RESET_I(1);
    __PVT__samplein = VL_RAND_RESET_I(16);
    __PVT__rep_mode = VL_RAND_RESET_I(2);
    __PVT__poutc = VL_RAND_RESET_I(2);
    __PVT__pclk = VL_RAND_RESET_I(1);
    __PVT__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __PVT__pwm_en = VL_RAND_RESET_I(1);
    __PVT__period_reg_data = VL_RAND_RESET_I(16);
    __PVT__periodmatch = VL_RAND_RESET_I(1);
    __PVT__period_reg_data_sync = VL_RAND_RESET_I(16);
    __PVT__repcount = VL_RAND_RESET_I(3);
    __PVT__sample_lookup = VL_RAND_RESET_I(1);
    __PVT__zero_case = VL_RAND_RESET_I(1);
    __PVT__periodmatch_1 = VL_RAND_RESET_I(1);
    __Vdly__ipp_obe_pwmo = VL_RAND_RESET_I(1);
    __Vdly__ipp_do_pwmo = VL_RAND_RESET_I(1);
    __Vdly__repcount = VL_RAND_RESET_I(3);
    __Vdly__period_reg_data_sync = VL_RAND_RESET_I(16);
    __Vdly__periodmatch = VL_RAND_RESET_I(1);
    __Vdly__count = VL_RAND_RESET_I(16);
}

void Vpwm_pwm_outputgen::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm_pwm_outputgen::~Vpwm_pwm_outputgen() {
}

//--------------------
// Internal Methods

void Vpwm_pwm_outputgen::_sequent__TOP__v__pwm_outputgen__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_outputgen::_sequent__TOP__v__pwm_outputgen__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_obe_pwmo 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_obe_pwmo;
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_do_pwmo;
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__repcount 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount;
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__period_reg_data_sync 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync;
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__count = vlSymsp->TOP__v__pwm_outputgen.__PVT__count;
    // ALWAYS at rtl/pwm_outputgen.v:92
    if (vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b) {
	if ((1 & (~ VL_BITSEL_IIII(1,2,1,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__poutc), 1)))) {
	    vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_obe_pwmo = 1;
	}
	if ((0 == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__zero_case), (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__poutc)))) {
	    if (vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch) {
		vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo = 1;
	    } else {
		if (vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch) {
		    vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo = 0;
		}
	    }
	} else {
	    if ((1 == VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__zero_case), (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__poutc)))) {
		if (vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch) {
		    vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo = 0;
		} else {
		    if (vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch) {
			vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo = 1;
		    }
		}
	    } else {
		vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo = 0;
	    }
	}
    } else {
	vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo = 0;
	vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_obe_pwmo = 0;
    }
    // ALWAYS at rtl/pwm_outputgen.v:123
    if (vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b) {
	if (vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup) {
	    vlSymsp->TOP__v__pwm_outputgen.__Vdly__repcount 
		= (7 & ((IData)(1) + (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount)));
	}
    } else {
	vlSymsp->TOP__v__pwm_outputgen.__Vdly__repcount = 0;
    }
    // ALWAYS at rtl/pwm_outputgen.v:149
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__period_reg_data_sync 
	= ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b)
	    ? (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data)
	    : 0xfffe);
    // ALWAYS at rtl/pwm_outputgen.v:165
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__count = 
	(0xffff & ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b)
		    ? ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch)
		        ? 0 : ((IData)(1) + (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count)))
		    : 0));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_obe_pwmo 
	= vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_obe_pwmo;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_do_pwmo 
	= vlSymsp->TOP__v__pwm_outputgen.__Vdly__ipp_do_pwmo;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount 
	= vlSymsp->TOP__v__pwm_outputgen.__Vdly__repcount;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync 
	= vlSymsp->TOP__v__pwm_outputgen.__Vdly__period_reg_data_sync;
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__periodmatch 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__count = vlSymsp->TOP__v__pwm_outputgen.__Vdly__count;
    // ALWAYS at rtl/pwm_outputgen.v:156
    vlSymsp->TOP__v__pwm_outputgen.__Vdly__periodmatch 
	= (1 & ((~ (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b)) 
		| (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch_1)));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__rov_event 
	= ((0xffff & ((IData)(1) + (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync))) 
	   == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch 
	= vlSymsp->TOP__v__pwm_outputgen.__Vdly__periodmatch;
}

void Vpwm_pwm_outputgen::_settle__TOP__v__pwm_outputgen__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_outputgen::_settle__TOP__v__pwm_outputgen__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__rov_event 
	= ((0xffff & ((IData)(1) + (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync))) 
	   == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup 
	= (((0xfffe == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count)) 
	    | ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count) 
	       == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync))) 
	   & (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch_1 
	= (((0xfffe == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count)) 
	    | ((~ (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch)) 
	       & (((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count) 
		   == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync)) 
		  | ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data) 
		     != (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync))))) 
	   & (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en));
}

void Vpwm_pwm_outputgen::_combo__TOP__v__pwm_outputgen__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_outputgen::_combo__TOP__v__pwm_outputgen__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup 
	= (((0xfffe == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count)) 
	    | ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count) 
	       == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync))) 
	   & (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch_1 
	= (((0xfffe == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count)) 
	    | ((~ (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch)) 
	       & (((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count) 
		   == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync)) 
		  | ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data) 
		     != (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync))))) 
	   & (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en));
    // ALWAYS at rtl/pwm_outputgen.v:130
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
	vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
	    = vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
	    vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
		= ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup) 
		   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 0));
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
		vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
		    = (((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup) 
			& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 0)) 
		       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 1));
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
		    vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
			= ((((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup) 
			     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 0)) 
			    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 1)) 
			   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 2));
		}
	    }
	}
    }
}

void Vpwm_pwm_outputgen::_settle__TOP__v__pwm_outputgen__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_outputgen::_settle__TOP__v__pwm_outputgen__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_outputgen.v:130
    if ((0 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
	vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
	    = vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
	    vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
		= ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup) 
		   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 0));
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
		vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
		    = (((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup) 
			& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 0)) 
		       & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 1));
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode))) {
		    vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample 
			= ((((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup) 
			     & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 0)) 
			    & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 1)) 
			   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount), 2));
		}
	    }
	}
    }
}

void Vpwm_pwm_outputgen::_settle__TOP__v__pwm_outputgen__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_outputgen::_settle__TOP__v__pwm_outputgen__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__zero_case 
	= (0 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch 
	= ((0xffff & ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein) 
		      - (IData)(1))) == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count));
}

void Vpwm_pwm_outputgen::_combo__TOP__v__pwm_outputgen__6(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_outputgen::_combo__TOP__v__pwm_outputgen__6\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__zero_case 
	= (0 == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein));
    vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch 
	= ((0xffff & ((IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein) 
		      - (IData)(1))) == (IData)(vlSymsp->TOP__v__pwm_outputgen.__PVT__count));
}
