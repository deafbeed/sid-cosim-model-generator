// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm_pwm_dft_reset_mux.h" // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm_pwm_dft_reset_mux) {
    // Reset internal values
    // Reset structure values
    __PVT__dft_reset = VL_RAND_RESET_I(1);
    __PVT__func_reset = VL_RAND_RESET_I(1);
    __PVT__ipt_se_async = VL_RAND_RESET_I(1);
    __PVT__ipt_reset_b = VL_RAND_RESET_I(1);
}

void Vpwm_pwm_dft_reset_mux::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm_pwm_dft_reset_mux::~Vpwm_pwm_dft_reset_mux() {
}

//--------------------
// Internal Methods

void Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__software_reset_mux__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__software_reset_mux__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__software_reset_mux__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__software_reset_mux__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__pwm_en_reset_mux__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__pwm_en_reset_mux__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__pwm_en_reset_mux__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__pwm_en_reset_mux__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__cmp_status_reset_mux__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__cmp_status_reset_mux__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__cmp_status_reset_mux__8(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__cmp_status_reset_mux__8\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__rov_status_reset_mux__7(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__rov_status_reset_mux__7\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__rov_status_reset_mux__10(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__rov_status_reset_mux__10\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__fifo_status_reset_mux__6(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_settle__TOP__v__pwm_reg__fifo_status_reset_mux__6\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__func_reset;
    }
}

void Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__fifo_status_reset_mux__9(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vpwm_pwm_dft_reset_mux::_combo__TOP__v__pwm_reg__fifo_status_reset_mux__9\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at rtl/pwm_dft_reset_mux.v:57
    if (vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async) {
	if (vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async) {
	    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset 
		= vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_reset_b;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset 
	    = vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__func_reset;
    }
}
