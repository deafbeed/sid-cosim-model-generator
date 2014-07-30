// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_hostcontroller.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_hostcontroller) {
    // Reset internal values
    // Reset structure values
    __PVT__RXStatus = VL_RAND_RESET_I(8);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__getPacketRdy = VL_RAND_RESET_I(1);
    __PVT__isoEn = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__sendPacketArbiterGnt = VL_RAND_RESET_I(1);
    __PVT__sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__transReq = VL_RAND_RESET_I(1);
    __PVT__transType = VL_RAND_RESET_I(2);
    __PVT__clearTXReq = VL_RAND_RESET_I(1);
    __PVT__getPacketREn = VL_RAND_RESET_I(1);
    __PVT__sendPacketArbiterReq = VL_RAND_RESET_I(1);
    __PVT__sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__transDone = VL_RAND_RESET_I(1);
    __PVT__next_clearTXReq = VL_RAND_RESET_I(1);
    __PVT__next_getPacketREn = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketArbiterReq = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__next_sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__next_transDone = VL_RAND_RESET_I(1);
    __PVT__delCnt = VL_RAND_RESET_I(4);
    __PVT__next_delCnt = VL_RAND_RESET_I(4);
    __PVT__CurrState_hstCntrl = VL_RAND_RESET_I(6);
    __PVT__NextState_hstCntrl = VL_RAND_RESET_I(6);
    __Vdly__CurrState_hstCntrl = VL_RAND_RESET_I(6);
    __Vdly__delCnt = VL_RAND_RESET_I(4);
    __Vdly__transDone = VL_RAND_RESET_I(1);
    __Vdly__clearTXReq = VL_RAND_RESET_I(1);
    __Vdly__getPacketREn = VL_RAND_RESET_I(1);
    __Vdly__sendPacketArbiterReq = VL_RAND_RESET_I(1);
    __Vdly__sendPacketWEn = VL_RAND_RESET_I(1);
    __Vdly__sendPacketPID = VL_RAND_RESET_I(4);
}

void VusbHostSlave_hostcontroller::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_hostcontroller::~VusbHostSlave_hostcontroller() {
}

//--------------------
// Internal Methods

void VusbHostSlave_hostcontroller::_sequent__TOP__v__u_usbHostControl__u_hostController__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_hostcontroller::_sequent__TOP__v__u_usbHostControl__u_hostController__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__CurrState_hstCntrl 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__delCnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__transDone 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transDone;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__clearTXReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clearTXReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__getPacketREn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketPID;
    // ALWAYS at trunk/RTL/hostController//hostcontroller.v:363
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__CurrState_hstCntrl 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl));
    // ALWAYS at trunk/RTL/hostController//hostcontroller.v:374
    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__delCnt = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__transDone = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__clearTXReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__getPacketREn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketArbiterReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketWEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketPID = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__delCnt 
	    = vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_delCnt;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__transDone 
	    = vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_transDone;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__clearTXReq 
	    = vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_clearTXReq;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__getPacketREn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketArbiterReq 
	    = vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketArbiterReq;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketWEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketPID 
	    = vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__CurrState_hstCntrl;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__delCnt;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clearTXReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__clearTXReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transDone 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__transDone;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketREn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__Vdly__sendPacketPID;
}

void VusbHostSlave_hostcontroller::_settle__TOP__v__u_usbHostControl__u_hostController__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_hostcontroller::_settle__TOP__v__u_usbHostControl__u_hostController__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//hostcontroller.v:144
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_transDone 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transDone;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_clearTXReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clearTXReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_delCnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketPID;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	    | (9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	   | (0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	  | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	 | (8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transReq) {
		    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xa;
		    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketArbiterReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		    if ((1 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x11;
		    } else {
			if ((2 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x13;
			} else {
			    if ((3 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1d;
			    } else {
				if ((0 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x10;
				}
			    }
			}
		    }
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_transDone = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_clearTXReq = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketArbiterReq = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_delCnt = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 9;
		    } else {
			if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_clearTXReq = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_transDone = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_delCnt 
				= (0xf & ((IData)(1) 
					  + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt)));
			    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 1;
			    }
			} else {
			    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterGnt) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 2;
				}
			    } else {
				if ((7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x14;
				} else {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x15;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
		   | (0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		  | (0x14 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		 | (0x15 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		| (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	       | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	      | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	     | (0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
	    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
		if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
		    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
		}
	    } else {
		if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 7;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 0xd;
		    }
		} else {
		    if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 8;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 3;
			}
		    } else {
			if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xb;
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 5;
				}
			    } else {
				if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl 
					= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__isoEn)
					    ? 3 : (
						   (1 
						    & ((((((~ 
							    VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 0)) 
							   & (~ 
							      VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 1))) 
							  & (~ 
							     VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 2))) 
							 & (~ 
							    VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 4))) 
							& (~ 
							   VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 5))) 
						       & (~ 
							  VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 3))))
						    ? 0x12
						    : 3));
				} else {
				    if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x17;
				    } else {
					if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 4;
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
		       | (0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		      | (0x16 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		     | (0x17 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		    | (0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		   | (0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		  | (0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		 | (0x13 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x16;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 9;
		    }
		} else {
		    if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 6;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 2;
			}
		    } else {
			if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xc;
			} else {
			    if ((0x17 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				}
			    } else {
				if ((0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
				    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				    }
				} else {
				    if ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x20;
					}
				    } else {
					if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x19;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 3;
					    }
					} else {
					    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x18;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 1;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0x18 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
			   | (0x19 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
			  | (0x20 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
			 | (0x1a == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
			| (0x1b == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		       | (0x1c == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		      | (0x1d == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		     | (0x1e == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
		    if ((0x18 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xf;
		    } else {
			if ((0x19 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xe;
			} else {
			    if ((0x20 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__isoEn) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				} else {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xd;
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
				}
			    } else {
				if ((0x1a == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
				    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				    }
				} else {
				    if ((0x1b == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1f;
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 0xb;
					}
				    } else {
					if ((0x1c == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1a;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
					    }
					} else {
					    if ((0x1d 
						 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
						if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1e;
						    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
						    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 1;
						}
					    } else {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1b;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x1f == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1c;
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_hostcontroller::_combo__TOP__v__u_usbHostControl__u_hostController__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_hostcontroller::_combo__TOP__v__u_usbHostControl__u_hostController__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//hostcontroller.v:144
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketArbiterReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_transDone 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transDone;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_clearTXReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clearTXReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_delCnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketPID;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	    | (9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	   | (0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	  | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	 | (8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transReq) {
		    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xa;
		    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketArbiterReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		    if ((1 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x11;
		    } else {
			if ((2 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x13;
			} else {
			    if ((3 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1d;
			    } else {
				if ((0 == VL_EXTEND_II(32,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType)))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x10;
				}
			    }
			}
		    }
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_transDone = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_clearTXReq = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketArbiterReq = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_delCnt = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 9;
		    } else {
			if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_clearTXReq = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_transDone = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_delCnt 
				= (0xf & ((IData)(1) 
					  + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt)));
			    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__delCnt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 1;
			    }
			} else {
			    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterGnt) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 2;
				}
			    } else {
				if ((7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x14;
				} else {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x15;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
		   | (0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		  | (0x14 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		 | (0x15 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		| (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	       | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	      | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
	     | (0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
	    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
		if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
		    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
		}
	    } else {
		if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 7;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 0xd;
		    }
		} else {
		    if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 8;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 3;
			}
		    } else {
			if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xb;
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 5;
				}
			    } else {
				if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl 
					= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__isoEn)
					    ? 3 : (
						   (1 
						    & ((((((~ 
							    VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 0)) 
							   & (~ 
							      VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 1))) 
							  & (~ 
							     VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 2))) 
							 & (~ 
							    VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 4))) 
							& (~ 
							   VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 5))) 
						       & (~ 
							  VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus), 3))))
						    ? 0x12
						    : 3));
				} else {
				    if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x17;
				    } else {
					if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 4;
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
		       | (0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		      | (0x16 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		     | (0x17 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		    | (0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		   | (0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		  | (0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		 | (0x13 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x16;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 9;
		    }
		} else {
		    if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 6;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 2;
			}
		    } else {
			if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xc;
			} else {
			    if ((0x17 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				}
			    } else {
				if ((0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
				    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				    }
				} else {
				    if ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x20;
					}
				    } else {
					if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x19;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 3;
					    }
					} else {
					    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x18;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 1;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0x18 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)) 
			   | (0x19 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
			  | (0x20 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
			 | (0x1a == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
			| (0x1b == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		       | (0x1c == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		      | (0x1d == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) 
		     | (0x1e == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl)))) {
		    if ((0x18 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xf;
		    } else {
			if ((0x19 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xe;
			} else {
			    if ((0x20 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__isoEn) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				} else {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0xd;
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
				}
			    } else {
				if ((0x1a == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 0;
				    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 3;
				    }
				} else {
				    if ((0x1b == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1f;
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
					    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 0xb;
					}
				    } else {
					if ((0x1c == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
					    if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1a;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_getPacketREn = 1;
					    }
					} else {
					    if ((0x1d 
						 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
						if (vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy) {
						    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1e;
						    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 1;
						    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketPID = 1;
						}
					    } else {
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
						vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1b;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x1f == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__CurrState_hstCntrl))) {
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__next_sendPacketWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__NextState_hstCntrl = 0x1c;
		    }
		}
	    }
	}
    }
}
