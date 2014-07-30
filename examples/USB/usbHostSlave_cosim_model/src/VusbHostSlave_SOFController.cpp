// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_SOFController.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_SOFController) {
    // Reset internal values
    // Reset structure values
    __PVT__HCTxPortGnt = VL_RAND_RESET_I(1);
    __PVT__HCTxPortRdy = VL_RAND_RESET_I(1);
    __PVT__SOFEnable = VL_RAND_RESET_I(1);
    __PVT__SOFTimerClr = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__HCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__HCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__SOFTimer = VL_RAND_RESET_I(16);
    __PVT__next_HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__next_HCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__next_SOFTimer = VL_RAND_RESET_I(16);
    __PVT__CurrState_sofCntl = VL_RAND_RESET_I(3);
    __PVT__NextState_sofCntl = VL_RAND_RESET_I(3);
    __Vdly__CurrState_sofCntl = VL_RAND_RESET_I(3);
    __Vdly__SOFTimer = VL_RAND_RESET_I(16);
    __Vdly__HCTxPortCntl = VL_RAND_RESET_I(8);
    __Vdly__HCTxPortData = VL_RAND_RESET_I(8);
    __Vdly__HCTxPortWEn = VL_RAND_RESET_I(1);
    __Vdly__HCTxPortReq = VL_RAND_RESET_I(1);
}

void VusbHostSlave_SOFController::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_SOFController::~VusbHostSlave_SOFController() {
}

//--------------------
// Internal Methods

void VusbHostSlave_SOFController::_sequent__TOP__v__u_usbHostControl__u_SOFController__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SOFController::_sequent__TOP__v__u_usbHostControl__u_SOFController__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__CurrState_sofCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortWEn;
    // ALWAYS at trunk/RTL/hostController//SOFController.v:163
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__CurrState_sofCntl 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl));
    // ALWAYS at trunk/RTL/hostController//SOFController.v:174
    if (vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__SOFTimer = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortCntl = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortData = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortWEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortReq = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__SOFTimer 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_SOFTimer;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortCntl;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortData 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortData;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortWEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortReq 
	    = vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortReq;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__CurrState_sofCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__Vdly__HCTxPortCntl;
}

void VusbHostSlave_SOFController::_combo__TOP__v__u_usbHostControl__u_SOFController__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SOFController::_combo__TOP__v__u_usbHostControl__u_SOFController__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//SOFController.v:110
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFEnable) {
		vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 4;
		vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortReq = 1;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortRdy) {
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 5;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortWEn = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortData = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortCntl = 1;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortReq = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_SOFTimer 
			= (0xffff & ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimerClr)
				      ? 0 : ((IData)(1) 
					     + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer))));
		    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFEnable)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_SOFTimer = 0;
		    }
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortGnt) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 2;
			}
		    } else {
			if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 3;
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_SOFController::_settle__TOP__v__u_usbHostControl__u_SOFController__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SOFController::_settle__TOP__v__u_usbHostControl__u_SOFController__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//SOFController.v:110
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer;
    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFEnable) {
		vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 4;
		vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortReq = 1;
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortRdy) {
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 5;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortWEn = 1;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortData = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortCntl = 1;
		}
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortReq = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_SOFTimer 
			= (0xffff & ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimerClr)
				      ? 0 : ((IData)(1) 
					     + (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer))));
		    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFEnable)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_SOFTimer = 0;
		    }
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortGnt) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 2;
			}
		    } else {
			if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__CurrState_sofCntl))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__next_HCTxPortWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__NextState_sofCntl = 3;
			}
		    }
		}
	    }
	}
    }
}
