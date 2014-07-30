// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_directControl.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_directControl) {
    // Reset internal values
    // Reset structure values
    __PVT__HCTxPortGnt = VL_RAND_RESET_I(1);
    __PVT__HCTxPortRdy = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__directControlEn = VL_RAND_RESET_I(1);
    __PVT__directControlLineState = VL_RAND_RESET_I(2);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__HCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__HCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__next_HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__next_HCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__CurrState_drctCntl = VL_RAND_RESET_I(3);
    __PVT__NextState_drctCntl = VL_RAND_RESET_I(3);
    __Vdly__CurrState_drctCntl = VL_RAND_RESET_I(3);
    __Vdly__HCTxPortCntl = VL_RAND_RESET_I(8);
    __Vdly__HCTxPortData = VL_RAND_RESET_I(8);
    __Vdly__HCTxPortWEn = VL_RAND_RESET_I(1);
    __Vdly__HCTxPortReq = VL_RAND_RESET_I(1);
}

void VusbHostSlave_directControl::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_directControl::~VusbHostSlave_directControl() {
}

//--------------------
// Internal Methods

void VusbHostSlave_directControl::_sequent__TOP__v__u_usbHostControl__u_directControl__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_directControl::_sequent__TOP__v__u_usbHostControl__u_directControl__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__CurrState_drctCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortWEn;
    // ALWAYS at trunk/RTL/hostController//directControl.v:179
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__CurrState_drctCntl 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl));
    // ALWAYS at trunk/RTL/hostController//directControl.v:190
    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortCntl = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortData = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortWEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortReq = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortCntl;
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortData 
	    = vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortData;
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortWEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortReq 
	    = vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__CurrState_drctCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__Vdly__HCTxPortWEn;
}

void VusbHostSlave_directControl::_combo__TOP__v__u_usbHostControl__u_directControl__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_directControl::_combo__TOP__v__u_usbHostControl__u_directControl__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//directControl.v:112
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortCntl;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	    | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlEn) {
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 2;
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 1;
		} else {
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 6;
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortGnt) {
			vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 4;
		    }
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 0;
			if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlEn) {
			    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 4;
			} else {
			    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 0;
			}
		    } else {
			if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 3;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortData 
				    = VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlLineState));
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortCntl = 0;
			    }
			} else {
			    if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 1;
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortGnt) {
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 7;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 5;
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortData = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortCntl = 5;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_directControl::_settle__TOP__v__u_usbHostControl__u_directControl__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_directControl::_settle__TOP__v__u_usbHostControl__u_directControl__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//directControl.v:112
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortCntl;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	    | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlEn) {
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 2;
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 1;
		} else {
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 6;
		    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortGnt) {
			vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 4;
		    }
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 0;
			if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlEn) {
			    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 4;
			} else {
			    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 0;
			}
		    } else {
			if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 3;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortData 
				    = VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlLineState));
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortCntl = 0;
			    }
			} else {
			    if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortReq = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 1;
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__CurrState_drctCntl))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortGnt) {
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 7;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__NextState_drctCntl = 5;
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortData = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__next_HCTxPortCntl = 5;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}
