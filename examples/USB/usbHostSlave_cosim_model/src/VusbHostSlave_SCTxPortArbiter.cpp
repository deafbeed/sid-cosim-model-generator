// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_SCTxPortArbiter.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_SCTxPortArbiter) {
    // Reset internal values
    // Reset structure values
    __PVT__SCTxPortRdyIn = VL_RAND_RESET_I(1);
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
    __PVT__SCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__SCTxPortData = VL_RAND_RESET_I(8);
    __PVT__SCTxPortRdyOut = VL_RAND_RESET_I(1);
    __PVT__SCTxPortWEnable = VL_RAND_RESET_I(1);
    __PVT__directCntlGnt = VL_RAND_RESET_I(1);
    __PVT__sendPacketGnt = VL_RAND_RESET_I(1);
    __PVT__next_SCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__next_SCTxPortData = VL_RAND_RESET_I(8);
    __PVT__next_SCTxPortRdyOut = VL_RAND_RESET_I(1);
    __PVT__next_SCTxPortWEnable = VL_RAND_RESET_I(1);
    __PVT__next_directCntlGnt = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketGnt = VL_RAND_RESET_I(1);
    __PVT__muxDCEn = VL_RAND_RESET_I(1);
    __PVT__next_muxDCEn = VL_RAND_RESET_I(1);
    __PVT__CurrState_SCTxArb = VL_RAND_RESET_I(2);
    __PVT__NextState_SCTxArb = VL_RAND_RESET_I(2);
    __Vdly__CurrState_SCTxArb = VL_RAND_RESET_I(2);
    __Vdly__muxDCEn = VL_RAND_RESET_I(1);
    __Vdly__sendPacketGnt = VL_RAND_RESET_I(1);
    __Vdly__directCntlGnt = VL_RAND_RESET_I(1);
}

void VusbHostSlave_SCTxPortArbiter::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_SCTxPortArbiter::~VusbHostSlave_SCTxPortArbiter() {
}

//--------------------
// Internal Methods

void VusbHostSlave_SCTxPortArbiter::_sequent__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SCTxPortArbiter::_sequent__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__CurrState_SCTxArb 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__directCntlGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__muxDCEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__muxDCEn;
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:187
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__CurrState_SCTxArb 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__rst)
	    ? 3 : (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb));
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:198
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__muxDCEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__sendPacketGnt = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__directCntlGnt = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__muxDCEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_muxDCEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__sendPacketGnt 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_sendPacketGnt;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__directCntlGnt 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_directCntlGnt;
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__CurrState_SCTxArb;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__directCntlGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__sendPacketGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__muxDCEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vdly__muxDCEn;
}

void VusbHostSlave_SCTxPortArbiter::_settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SCTxPortArbiter::_settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:146
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_sendPacketGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_muxDCEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__muxDCEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_directCntlGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlGnt;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
	if (vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketReq) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 1;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_sendPacketGnt = 1;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_muxDCEn = 0;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 2;
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_directCntlGnt = 1;
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_muxDCEn = 1;
	    }
	}
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
	    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketReq)))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_sendPacketGnt = 0;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlReq)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_directCntlGnt = 0;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 0;
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:121
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__muxDCEn) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortWEnable 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlData;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlCntl;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortWEnable 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketData;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketCntl;
    }
}

void VusbHostSlave_SCTxPortArbiter::_combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SCTxPortArbiter::_combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:146
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_sendPacketGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_muxDCEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__muxDCEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_directCntlGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlGnt;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
	if (vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketReq) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 1;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_sendPacketGnt = 1;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_muxDCEn = 0;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 2;
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_directCntlGnt = 1;
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_muxDCEn = 1;
	    }
	}
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
	    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketReq)))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_sendPacketGnt = 0;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlReq)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__next_directCntlGnt = 0;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__CurrState_SCTxArb))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__NextState_SCTxArb = 0;
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:121
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__muxDCEn) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortWEnable 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlData;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlCntl;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortWEnable 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketData;
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketCntl;
    }
}

void VusbHostSlave_SCTxPortArbiter::_combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SCTxPortArbiter::_combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:117
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyIn;
}

void VusbHostSlave_SCTxPortArbiter::_settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SCTxPortArbiter::_settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//SCTxPortArbiter.v:117
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyIn;
}
