// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_SIEReceiver.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_SIEReceiver) {
    // Reset internal values
    // Reset structure values
    __PVT__RxWireDataIn = VL_RAND_RESET_I(2);
    __PVT__RxWireDataWEn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__connectState = VL_RAND_RESET_I(2);
    __PVT__next_connectState = VL_RAND_RESET_I(2);
    __PVT__RXStMachCurrState = VL_RAND_RESET_I(4);
    __PVT__next_RXStMachCurrState = VL_RAND_RESET_I(4);
    __PVT__RXWaitCount = VL_RAND_RESET_I(8);
    __PVT__next_RXWaitCount = VL_RAND_RESET_I(8);
    __PVT__RxBits = VL_RAND_RESET_I(2);
    __PVT__next_RxBits = VL_RAND_RESET_I(2);
    __PVT__CurrState_rcvr = VL_RAND_RESET_I(4);
    __PVT__NextState_rcvr = VL_RAND_RESET_I(4);
    __Vdly__CurrState_rcvr = VL_RAND_RESET_I(4);
    __Vdly__RXStMachCurrState = VL_RAND_RESET_I(4);
    __Vdly__RXWaitCount = VL_RAND_RESET_I(8);
    __Vdly__RxBits = VL_RAND_RESET_I(2);
    __Vdly__connectState = VL_RAND_RESET_I(2);
}

void VusbHostSlave_SIEReceiver::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_SIEReceiver::~VusbHostSlave_SIEReceiver() {
}

//--------------------
// Internal Methods

void VusbHostSlave_SIEReceiver::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SIEReceiver::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__CurrState_rcvr 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXWaitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__connectState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__connectState;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIEReceiver.v:266
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__CurrState_rcvr 
	= ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__rst)
	    ? 5 : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr));
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIEReceiver.v:277
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXStMachCurrState = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXWaitCount = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RxBits = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__connectState = 0;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXStMachCurrState 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXWaitCount 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RxBits 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__connectState 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState;
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__CurrState_rcvr;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RXWaitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__connectState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vdly__connectState;
}

void VusbHostSlave_SIEReceiver::_settle__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SIEReceiver::_settle__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIEReceiver.v:106
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__connectState;
    if (((((((((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr)) 
	       | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	      | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	     | (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	    | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	   | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr)))) {
	if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
	    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
		 & (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
	    } else {
		if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
		     & (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
		} else {
		    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
			 & (4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 6;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
		    } else {
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
			     & (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 7;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
			} else {
			    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
				 & (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 8;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
			    } else {
				if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
				     & (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 3;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
				} else {
				    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
					 & (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
		    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
		    } else {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			}
		    }
		} else {
		    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
				= (0xff & ((IData)(1) 
					   + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
			    if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 4;
			    }
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
			}
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
		    } else {
			if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
			    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
				    = (0xff & ((IData)(1) 
					       + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
				if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 3;
				}
			    } else {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
			    }
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
				if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 5;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
				}
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 6;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
					    = (0xff 
					       & ((IData)(1) 
						  + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
					if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 0;
					}
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 3;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
	    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
		    = (0xff & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
		if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 0;
		}
	    } else {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 4;
	    }
	}
    }
}

void VusbHostSlave_SIEReceiver::_combo__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SIEReceiver::_combo__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIEReceiver.v:106
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__connectState;
    if (((((((((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr)) 
	       | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	      | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	     | (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	    | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	   | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr)))) {
	if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
	    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
		 & (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
	    } else {
		if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
		     & (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
		} else {
		    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
			 & (4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 6;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
		    } else {
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
			     & (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 7;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
			} else {
			    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
				 & (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 8;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
			    } else {
				if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
				     & (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 3;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
				} else {
				    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn) 
					 & (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXStMachCurrState)))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RxBits = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
		    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
		    } else {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			}
		    }
		} else {
		    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
				= (0xff & ((IData)(1) 
					   + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
			    if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 4;
			    }
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
			}
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
		    } else {
			if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
			    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
				    = (0xff & ((IData)(1) 
					       + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
				if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 3;
				}
			    } else {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
			    }
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
				if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 5;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
				}
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 6;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount = 0;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
					    = (0xff 
					       & ((IData)(1) 
						  + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
					if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 0;
					}
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 3;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__CurrState_rcvr))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__NextState_rcvr = 4;
	    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxBits))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXWaitCount 
		    = (0xff & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount)));
		if ((0x78 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RXWaitCount))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_connectState = 0;
		}
	    } else {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__next_RXStMachCurrState = 4;
	    }
	}
    }
}
