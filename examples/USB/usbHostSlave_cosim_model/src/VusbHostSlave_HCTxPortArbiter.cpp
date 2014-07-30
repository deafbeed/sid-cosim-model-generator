// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_HCTxPortArbiter.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_HCTxPortArbiter) {
    // Reset internal values
    // Reset structure values
    __PVT__SOFCntlCntl = VL_RAND_RESET_I(8);
    __PVT__SOFCntlData = VL_RAND_RESET_I(8);
    __PVT__SOFCntlReq = VL_RAND_RESET_I(1);
    __PVT__SOFCntlWEn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__directCntlCntl = VL_RAND_RESET_I(8);
    __PVT__directCntlData = VL_RAND_RESET_I(8);
    __PVT__directCntlReq = VL_RAND_RESET_I(1);
    __PVT__directCntlWEn = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__sendPacketCntl = VL_RAND_RESET_I(8);
    __PVT__sendPacketData = VL_RAND_RESET_I(8);
    __PVT__sendPacketReq = VL_RAND_RESET_I(1);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__HCTxPortWEnable = VL_RAND_RESET_I(1);
    __PVT__SOFCntlGnt = VL_RAND_RESET_I(1);
    __PVT__directCntlGnt = VL_RAND_RESET_I(1);
    __PVT__sendPacketGnt = VL_RAND_RESET_I(1);
    __PVT__next_HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortWEnable = VL_RAND_RESET_I(1);
    __PVT__next_SOFCntlGnt = VL_RAND_RESET_I(1);
    __PVT__next_directCntlGnt = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketGnt = VL_RAND_RESET_I(1);
    __PVT__muxCntl = VL_RAND_RESET_I(2);
    __PVT__next_muxCntl = VL_RAND_RESET_I(2);
    __PVT__CurrState_HCTxArb = VL_RAND_RESET_I(3);
    __PVT__NextState_HCTxArb = VL_RAND_RESET_I(3);
    __Vdly__CurrState_HCTxArb = VL_RAND_RESET_I(3);
    __Vdly__muxCntl = VL_RAND_RESET_I(2);
    __Vdly__SOFCntlGnt = VL_RAND_RESET_I(1);
    __Vdly__sendPacketGnt = VL_RAND_RESET_I(1);
    __Vdly__directCntlGnt = VL_RAND_RESET_I(1);
}

void VusbHostSlave_HCTxPortArbiter::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_HCTxPortArbiter::~VusbHostSlave_HCTxPortArbiter() {
}

//--------------------
// Internal Methods

void VusbHostSlave_HCTxPortArbiter::_sequent__TOP__v__u_usbHostControl__u_HCTxPortArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_HCTxPortArbiter::_sequent__TOP__v__u_usbHostControl__u_HCTxPortArbiter__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__CurrState_HCTxArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__directCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__SOFCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__muxCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl;
    // ALWAYS at trunk/RTL/hostController//HCTxPortArbiter.v:223
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__CurrState_HCTxArb 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb));
    // ALWAYS at trunk/RTL/hostController//HCTxPortArbiter.v:234
    if (vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__muxCntl = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__SOFCntlGnt = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__sendPacketGnt = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__directCntlGnt = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__muxCntl 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__SOFCntlGnt 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_SOFCntlGnt;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__sendPacketGnt 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_sendPacketGnt;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__directCntlGnt 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_directCntlGnt;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__CurrState_HCTxArb;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__directCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__sendPacketGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vdly__muxCntl;
}

void VusbHostSlave_HCTxPortArbiter::_settle__TOP__v__u_usbHostControl__u_HCTxPortArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_HCTxPortArbiter::_settle__TOP__v__u_usbHostControl__u_HCTxPortArbiter__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//HCTxPortArbiter.v:169
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_SOFCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_sendPacketGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_directCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlGnt;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlReq) {
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_SOFCntlGnt = 1;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl = 1;
	    } else {
		if (vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketReq) {
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 3;
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_sendPacketGnt = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl = 0;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlReq) {
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 4;
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_directCntlGnt = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl = 2;
		    }
		}
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlReq)))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_SOFCntlGnt = 0;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
		    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketReq)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_sendPacketGnt = 0;
		    }
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
			if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlReq)))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_directCntlGnt = 0;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/hostController//HCTxPortArbiter.v:130
    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl))) {
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlData;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlCntl;
    } else {
	if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable 
		= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlWEn;
	    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData 
		= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlData;
	    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl 
		= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlCntl;
	} else {
	    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl))) {
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable 
		    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketWEn;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData 
		    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketData;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl 
		    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketCntl;
	    } else {
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl = 0;
	    }
	}
    }
}

void VusbHostSlave_HCTxPortArbiter::_combo__TOP__v__u_usbHostControl__u_HCTxPortArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_HCTxPortArbiter::_combo__TOP__v__u_usbHostControl__u_HCTxPortArbiter__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//HCTxPortArbiter.v:169
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_SOFCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_sendPacketGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_directCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlGnt;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlReq) {
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_SOFCntlGnt = 1;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl = 1;
	    } else {
		if (vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketReq) {
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 3;
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_sendPacketGnt = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl = 0;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlReq) {
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 4;
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_directCntlGnt = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_muxCntl = 2;
		    }
		}
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlReq)))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_SOFCntlGnt = 0;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
		    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketReq)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_sendPacketGnt = 0;
		    }
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__CurrState_HCTxArb))) {
			if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlReq)))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__NextState_HCTxArb = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__next_directCntlGnt = 0;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/hostController//HCTxPortArbiter.v:130
    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl))) {
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlData;
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlCntl;
    } else {
	if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable 
		= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlWEn;
	    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData 
		= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlData;
	    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl 
		= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlCntl;
	} else {
	    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__muxCntl))) {
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable 
		    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketWEn;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData 
		    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketData;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl 
		    = vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketCntl;
	    } else {
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl = 0;
	    }
	}
    }
}
