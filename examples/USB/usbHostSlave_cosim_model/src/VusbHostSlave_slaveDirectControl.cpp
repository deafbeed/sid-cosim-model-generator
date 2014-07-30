// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_slaveDirectControl.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_slaveDirectControl) {
    // Reset internal values
    // Reset structure values
    __PVT__SCTxPortGnt = VL_RAND_RESET_I(1);
    __PVT__SCTxPortRdy = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__directControlEn = VL_RAND_RESET_I(1);
    __PVT__directControlLineState = VL_RAND_RESET_I(2);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__SCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__SCTxPortData = VL_RAND_RESET_I(8);
    __PVT__SCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__SCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__next_SCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__next_SCTxPortData = VL_RAND_RESET_I(8);
    __PVT__next_SCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__next_SCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__CurrState_slvDrctCntl = VL_RAND_RESET_I(3);
    __PVT__NextState_slvDrctCntl = VL_RAND_RESET_I(3);
    __Vdly__CurrState_slvDrctCntl = VL_RAND_RESET_I(3);
    __Vdly__SCTxPortCntl = VL_RAND_RESET_I(8);
    __Vdly__SCTxPortData = VL_RAND_RESET_I(8);
    __Vdly__SCTxPortWEn = VL_RAND_RESET_I(1);
    __Vdly__SCTxPortReq = VL_RAND_RESET_I(1);
}

void VusbHostSlave_slaveDirectControl::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_slaveDirectControl::~VusbHostSlave_slaveDirectControl() {
}

//--------------------
// Internal Methods

void VusbHostSlave_slaveDirectControl::_sequent__TOP__v__u_usbSlaveControl__u_slaveDirectControl__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveDirectControl::_sequent__TOP__v__u_usbSlaveControl__u_slaveDirectControl__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__CurrState_slvDrctCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortWEn;
    // ALWAYS at trunk/RTL/slaveController//slaveDirectControl.v:180
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__CurrState_slvDrctCntl 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl));
    // ALWAYS at trunk/RTL/slaveController//slaveDirectControl.v:191
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortCntl = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortData = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortWEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortReq = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortCntl;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortData;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortWEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortReq 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq;
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__CurrState_slvDrctCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vdly__SCTxPortWEn;
}

void VusbHostSlave_slaveDirectControl::_settle__TOP__v__u_usbSlaveControl__u_slaveDirectControl__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveDirectControl::_settle__TOP__v__u_usbSlaveControl__u_slaveDirectControl__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveDirectControl.v:113
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortCntl;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	    | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlEn) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 2;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 1;
		} else {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 6;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortGnt) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 4;
		    }
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 0;
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlEn) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 4;
			} else {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 0;
			}
		    } else {
			if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
			    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortRdy) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 3;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortData 
				    = VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlLineState));
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortCntl = 0;
			    }
			} else {
			    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 0;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 0;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 1;
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortGnt) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 7;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortRdy) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 5;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortData = 0;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortCntl = 5;
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

void VusbHostSlave_slaveDirectControl::_combo__TOP__v__u_usbSlaveControl__u_slaveDirectControl__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveDirectControl::_combo__TOP__v__u_usbSlaveControl__u_slaveDirectControl__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveDirectControl.v:113
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortCntl;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	    | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlEn) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 2;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 1;
		} else {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 6;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortGnt) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 4;
		    }
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 0;
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlEn) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 4;
			} else {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 0;
			}
		    } else {
			if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
			    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortRdy) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 3;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortData 
				    = VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlLineState));
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortCntl = 0;
			    }
			} else {
			    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 0;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortReq = 0;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 1;
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__CurrState_slvDrctCntl))) {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortGnt) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 7;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortRdy) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__NextState_slvDrctCntl = 5;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortData = 0;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__next_SCTxPortCntl = 5;
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
