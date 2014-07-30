// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_sendPacketArbiter.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_sendPacketArbiter) {
    // Reset internal values
    // Reset structure values
    __PVT__HCTxReq = VL_RAND_RESET_I(1);
    __PVT__HC_PID = VL_RAND_RESET_I(4);
    __PVT__HC_SP_WEn = VL_RAND_RESET_I(1);
    __PVT__SOFTxReq = VL_RAND_RESET_I(1);
    __PVT__SOF_SP_WEn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__HCTxGnt = VL_RAND_RESET_I(1);
    __PVT__SOFTxGnt = VL_RAND_RESET_I(1);
    __PVT__sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__sendPacketWEnable = VL_RAND_RESET_I(1);
    __PVT__next_HCTxGnt = VL_RAND_RESET_I(1);
    __PVT__next_SOFTxGnt = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__next_sendPacketWEnable = VL_RAND_RESET_I(1);
    __PVT__muxSOFNotHC = VL_RAND_RESET_I(1);
    __PVT__next_muxSOFNotHC = VL_RAND_RESET_I(1);
    __PVT__CurrState_sendPktArb = VL_RAND_RESET_I(2);
    __PVT__NextState_sendPktArb = VL_RAND_RESET_I(2);
    __Vdly__CurrState_sendPktArb = VL_RAND_RESET_I(2);
    __Vdly__muxSOFNotHC = VL_RAND_RESET_I(1);
    __Vdly__SOFTxGnt = VL_RAND_RESET_I(1);
    __Vdly__HCTxGnt = VL_RAND_RESET_I(1);
}

void VusbHostSlave_sendPacketArbiter::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_sendPacketArbiter::~VusbHostSlave_sendPacketArbiter() {
}

//--------------------
// Internal Methods

void VusbHostSlave_sendPacketArbiter::_sequent__TOP__v__u_usbHostControl__u_sendPacketArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacketArbiter::_sequent__TOP__v__u_usbHostControl__u_sendPacketArbiter__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__CurrState_sendPktArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__SOFTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__HCTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__muxSOFNotHC 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__muxSOFNotHC;
    // ALWAYS at trunk/RTL/hostController//sendPacketArbiter.v:167
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__CurrState_sendPktArb 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__rst)
	    ? 3 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb));
    // ALWAYS at trunk/RTL/hostController//sendPacketArbiter.v:178
    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__muxSOFNotHC = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__SOFTxGnt = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__HCTxGnt = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__muxSOFNotHC 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_muxSOFNotHC;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__SOFTxGnt 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_SOFTxGnt;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__HCTxGnt 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_HCTxGnt;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__CurrState_sendPktArb;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__HCTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__muxSOFNotHC 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vdly__muxSOFNotHC;
}

void VusbHostSlave_sendPacketArbiter::_settle__TOP__v__u_usbHostControl__u_sendPacketArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacketArbiter::_settle__TOP__v__u_usbHostControl__u_sendPacketArbiter__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacketArbiter.v:126
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_HCTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_SOFTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_muxSOFNotHC 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__muxSOFNotHC;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
	if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxReq)))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 2;
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_HCTxGnt = 0;
	}
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
	    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxReq)))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_SOFTxGnt = 0;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxReq) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_SOFTxGnt = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_muxSOFNotHC = 1;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxReq) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_HCTxGnt = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_muxSOFNotHC = 0;
		    }
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 2;
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/hostController//sendPacketArbiter.v:106
    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__muxSOFNotHC) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketWEnable 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOF_SP_WEn;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketPID = 5;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketWEnable 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_SP_WEn;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketPID 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_PID;
    }
}

void VusbHostSlave_sendPacketArbiter::_combo__TOP__v__u_usbHostControl__u_sendPacketArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacketArbiter::_combo__TOP__v__u_usbHostControl__u_sendPacketArbiter__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacketArbiter.v:126
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_HCTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_SOFTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_muxSOFNotHC 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__muxSOFNotHC;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
	if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxReq)))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 2;
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_HCTxGnt = 0;
	}
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
	    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxReq)))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 2;
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_SOFTxGnt = 0;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxReq) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_SOFTxGnt = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_muxSOFNotHC = 1;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxReq) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_HCTxGnt = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__next_muxSOFNotHC = 0;
		    }
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__CurrState_sendPktArb))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__NextState_sendPktArb = 2;
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/hostController//sendPacketArbiter.v:106
    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__muxSOFNotHC) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketWEnable 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOF_SP_WEn;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketPID = 5;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketWEnable 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_SP_WEn;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketPID 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_PID;
    }
}
