// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_SOFTransmit.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_SOFTransmit) {
    // Reset internal values
    // Reset structure values
    __PVT__SOFEnable = VL_RAND_RESET_I(1);
    __PVT__SOFSyncEn = VL_RAND_RESET_I(1);
    __PVT__SOFTimer = VL_RAND_RESET_I(16);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__sendPacketArbiterGnt = VL_RAND_RESET_I(1);
    __PVT__sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__SOFSent = VL_RAND_RESET_I(1);
    __PVT__SOFTimerClr = VL_RAND_RESET_I(1);
    __PVT__sendPacketArbiterReq = VL_RAND_RESET_I(1);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__next_SOFSent = VL_RAND_RESET_I(1);
    __PVT__next_SOFTimerClr = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketArbiterReq = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__i = VL_RAND_RESET_I(8);
    __PVT__next_i = VL_RAND_RESET_I(8);
    __PVT__CurrState_SOFTx = VL_RAND_RESET_I(3);
    __PVT__NextState_SOFTx = VL_RAND_RESET_I(3);
    __Vdly__CurrState_SOFTx = VL_RAND_RESET_I(3);
    __Vdly__i = VL_RAND_RESET_I(8);
    __Vdly__SOFSent = VL_RAND_RESET_I(1);
    __Vdly__SOFTimerClr = VL_RAND_RESET_I(1);
    __Vdly__sendPacketArbiterReq = VL_RAND_RESET_I(1);
    __Vdly__sendPacketWEn = VL_RAND_RESET_I(1);
}

void VusbHostSlave_SOFTransmit::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_SOFTransmit::~VusbHostSlave_SOFTransmit() {
}

//--------------------
// Internal Methods

void VusbHostSlave_SOFTransmit::_sequent__TOP__v__u_usbHostControl__u_SOFTransmit__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SOFTransmit::_sequent__TOP__v__u_usbHostControl__u_SOFTransmit__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__CurrState_SOFTx 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__i 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFSent 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketWEn;
    // ALWAYS at trunk/RTL/hostController//SOFTransmit.v:183
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__CurrState_SOFTx 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx));
    // ALWAYS at trunk/RTL/hostController//SOFTransmit.v:194
    if (vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFSent = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFTimerClr = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketArbiterReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketWEn = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__i 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFSent 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFSent;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFTimerClr 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketArbiterReq 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketArbiterReq;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketWEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketWEn;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__CurrState_SOFTx;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__i;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSent 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__Vdly__sendPacketWEn;
}

void VusbHostSlave_SOFTransmit::_settle__TOP__v__u_usbHostControl__u_SOFTransmit__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SOFTransmit::_settle__TOP__v__u_usbHostControl__u_SOFTransmit__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//SOFTransmit.v:114
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFSent 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
	    if ((((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimer) 
		  >= 0xb9ed) | ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSyncEn) 
				& (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFEnable)))) {
		vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketArbiterReq = 1;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
		if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterGnt) 
		     & (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketRdy))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 3;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
		    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimer) 
			 >= 0xbb7d)) {
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 4;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFSent = 1;
		    } else {
			if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFEnable)))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 4;
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr = 1;
			}
		    }
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFSent = 0;
			if (vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 5;
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i = 0;
			}
		    } else {
			if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i 
				= (0xff & ((IData)(1) 
					   + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i)));
			    if ((0xff == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i))) {
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 6;
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketArbiterReq = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i = 0;
			    }
			} else {
			    if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i 
				    = (0xff & ((IData)(1) 
					       + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i)));
				if ((0xff == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_SOFTransmit::_combo__TOP__v__u_usbHostControl__u_SOFTransmit__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SOFTransmit::_combo__TOP__v__u_usbHostControl__u_SOFTransmit__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//SOFTransmit.v:114
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFSent 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
	    if ((((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimer) 
		  >= 0xb9ed) | ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSyncEn) 
				& (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFEnable)))) {
		vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketArbiterReq = 1;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
		if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterGnt) 
		     & (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketRdy))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 3;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
		    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimer) 
			 >= 0xbb7d)) {
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 4;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFSent = 1;
		    } else {
			if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFEnable)))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 4;
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr = 1;
			}
		    }
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFTimerClr = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_SOFSent = 0;
			if (vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 5;
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i = 0;
			}
		    } else {
			if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i 
				= (0xff & ((IData)(1) 
					   + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i)));
			    if ((0xff == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i))) {
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 6;
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_sendPacketArbiterReq = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i = 0;
			    }
			} else {
			    if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__CurrState_SOFTx))) {
				vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__next_i 
				    = (0xff & ((IData)(1) 
					       + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i)));
				if ((0xff == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__i))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__NextState_SOFTx = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}
