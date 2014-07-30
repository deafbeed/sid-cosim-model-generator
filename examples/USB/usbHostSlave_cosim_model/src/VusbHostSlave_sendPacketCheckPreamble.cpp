// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_sendPacketCheckPreamble.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_sendPacketCheckPreamble) {
    // Reset internal values
    // Reset structure values
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__preAmbleEnable = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__sendPacketCPPID = VL_RAND_RESET_I(4);
    __PVT__sendPacketCPWEn = VL_RAND_RESET_I(1);
    __PVT__sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__sendPacketCPReady = VL_RAND_RESET_I(1);
    __PVT__sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketCPReady = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__next_sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__CurrState_sendPktCP = VL_RAND_RESET_I(4);
    __PVT__NextState_sendPktCP = VL_RAND_RESET_I(4);
    __Vdly__CurrState_sendPktCP = VL_RAND_RESET_I(4);
    __Vdly__sendPacketWEn = VL_RAND_RESET_I(1);
    __Vdly__sendPacketPID = VL_RAND_RESET_I(4);
    __Vdly__sendPacketCPReady = VL_RAND_RESET_I(1);
}

void VusbHostSlave_sendPacketCheckPreamble::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_sendPacketCheckPreamble::~VusbHostSlave_sendPacketCheckPreamble() {
}

//--------------------
// Internal Methods

void VusbHostSlave_sendPacketCheckPreamble::_sequent__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacketCheckPreamble::_sequent__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__CurrState_sendPktCP 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketCPReady 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPReady;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketPID;
    // ALWAYS at trunk/RTL/hostController//sendPacketCheckPreamble.v:191
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__CurrState_sendPktCP 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__rst)
	    ? 1 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP));
    // ALWAYS at trunk/RTL/hostController//sendPacketCheckPreamble.v:202
    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketWEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketPID = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketCPReady = 1;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketWEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketPID 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketCPReady 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketCPReady;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__CurrState_sendPktCP;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPReady 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketCPReady;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vdly__sendPacketPID;
}

void VusbHostSlave_sendPacketCheckPreamble::_combo__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacketCheckPreamble::_combo__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacketCheckPreamble.v:114
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketCPReady 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPReady;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketPID;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	     | (0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	    | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	   | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	  | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	 | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPWEn) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketCPReady = 0;
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0;
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP 
			= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__preAmbleEnable)
			    ? 4 : 9);
		} else {
		    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketCPReady = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0;
		    } else {
			if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID = 0xc;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 5;
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 3;
				}
			    } else {
				if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xc;
				} else {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 1;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID 
					= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPPID;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 7;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 0;
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xd;
	} else {
	    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 6;
		}
	    } else {
		if ((0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xb;
		    }
		} else {
		    if ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID 
			    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPPID;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xa;
		    } else {
			if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 8;
			    }
			} else {
			    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xb;
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_sendPacketCheckPreamble::_settle__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacketCheckPreamble::_settle__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacketCheckPreamble.v:114
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketCPReady 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPReady;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketPID;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	     | (0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	    | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	   | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	  | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) 
	 | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPWEn) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketCPReady = 0;
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0;
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP 
			= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__preAmbleEnable)
			    ? 4 : 9);
		} else {
		    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketCPReady = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0;
		    } else {
			if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID = 0xc;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 5;
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 3;
				}
			    } else {
				if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xc;
				} else {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 1;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID 
					= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPPID;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 7;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 0;
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xd;
	} else {
	    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 6;
		}
	    } else {
		if ((0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xb;
		    }
		} else {
		    if ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketPID 
			    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPPID;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xa;
		    } else {
			if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 8;
			    }
			} else {
			    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__CurrState_sendPktCP))) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__next_sendPacketWEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__NextState_sendPktCP = 0xb;
			    }
			}
		    }
		}
	    }
	}
    }
}
