// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_USBTxWireArbiter.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_USBTxWireArbiter) {
    // Reset internal values
    // Reset structure values
    __PVT__SIETxCtrl = VL_RAND_RESET_I(1);
    __PVT__SIETxData = VL_RAND_RESET_I(2);
    __PVT__SIETxFSRate = VL_RAND_RESET_I(1);
    __PVT__SIETxReq = VL_RAND_RESET_I(1);
    __PVT__SIETxWEn = VL_RAND_RESET_I(1);
    __PVT__USBWireRdyIn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__prcTxByteCtrl = VL_RAND_RESET_I(1);
    __PVT__prcTxByteData = VL_RAND_RESET_I(2);
    __PVT__prcTxByteFSRate = VL_RAND_RESET_I(1);
    __PVT__prcTxByteReq = VL_RAND_RESET_I(1);
    __PVT__prcTxByteWEn = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__SIETxGnt = VL_RAND_RESET_I(1);
    __PVT__TxBits = VL_RAND_RESET_I(2);
    __PVT__TxCtl = VL_RAND_RESET_I(1);
    __PVT__TxFSRate = VL_RAND_RESET_I(1);
    __PVT__USBWireRdyOut = VL_RAND_RESET_I(1);
    __PVT__USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__prcTxByteGnt = VL_RAND_RESET_I(1);
    __PVT__next_SIETxGnt = VL_RAND_RESET_I(1);
    __PVT__next_TxBits = VL_RAND_RESET_I(2);
    __PVT__next_TxCtl = VL_RAND_RESET_I(1);
    __PVT__next_TxFSRate = VL_RAND_RESET_I(1);
    __PVT__next_USBWireRdyOut = VL_RAND_RESET_I(1);
    __PVT__next_USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__next_prcTxByteGnt = VL_RAND_RESET_I(1);
    __PVT__muxSIENotPTXB = VL_RAND_RESET_I(1);
    __PVT__next_muxSIENotPTXB = VL_RAND_RESET_I(1);
    __PVT__CurrState_txWireArb = VL_RAND_RESET_I(2);
    __PVT__NextState_txWireArb = VL_RAND_RESET_I(2);
    __Vdly__CurrState_txWireArb = VL_RAND_RESET_I(2);
    __Vdly__muxSIENotPTXB = VL_RAND_RESET_I(1);
    __Vdly__prcTxByteGnt = VL_RAND_RESET_I(1);
    __Vdly__SIETxGnt = VL_RAND_RESET_I(1);
}

void VusbHostSlave_USBTxWireArbiter::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_USBTxWireArbiter::~VusbHostSlave_USBTxWireArbiter() {
}

//--------------------
// Internal Methods

void VusbHostSlave_USBTxWireArbiter::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBTxWireArbiter::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__CurrState_txWireArb 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__muxSIENotPTXB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__muxSIENotPTXB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__prcTxByteGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__SIETxGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxGnt;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:198
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__CurrState_txWireArb 
	= ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb));
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:209
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__muxSIENotPTXB = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__prcTxByteGnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__SIETxGnt = 0;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__muxSIENotPTXB 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_muxSIENotPTXB;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__prcTxByteGnt 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_prcTxByteGnt;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__SIETxGnt 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_SIETxGnt;
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__CurrState_txWireArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__muxSIENotPTXB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__muxSIENotPTXB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vdly__SIETxGnt;
}

void VusbHostSlave_USBTxWireArbiter::_settle__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBTxWireArbiter::_settle__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:127
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyIn;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:157
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_prcTxByteGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_muxSIENotPTXB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__muxSIENotPTXB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_SIETxGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxGnt;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
	    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteReq) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 2;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_prcTxByteGnt = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_muxSIENotPTXB = 0;
	    } else {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxReq) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 3;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_SIETxGnt = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_muxSIENotPTXB = 1;
		}
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteReq)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_prcTxByteGnt = 0;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
		    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxReq)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_SIETxGnt = 0;
		    }
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:131
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__muxSIENotPTXB) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxBits 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxCtl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxFSRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxFSRate;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxBits 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxCtl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxFSRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteFSRate;
    }
}

void VusbHostSlave_USBTxWireArbiter::_combo__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBTxWireArbiter::_combo__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:127
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyIn;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:157
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_prcTxByteGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_muxSIENotPTXB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__muxSIENotPTXB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_SIETxGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxGnt;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
	    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteReq) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 2;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_prcTxByteGnt = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_muxSIENotPTXB = 0;
	    } else {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxReq) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 3;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_SIETxGnt = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_muxSIENotPTXB = 1;
		}
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteReq)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_prcTxByteGnt = 0;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__CurrState_txWireArb))) {
		    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxReq)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__NextState_txWireArb = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__next_SIETxGnt = 0;
		    }
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/serialInterfaceEngine//USBTxWireArbiter.v:131
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__muxSIENotPTXB) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxBits 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxCtl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxFSRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxFSRate;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxBits 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxCtl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxFSRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteFSRate;
    }
}
