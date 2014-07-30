// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_hostSlaveMuxBI.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_hostSlaveMuxBI) {
    // Reset internal values
    // Reset structure values
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__address = VL_RAND_RESET_I(1);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__strobe_i = VL_RAND_RESET_I(1);
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__dataOut = VL_RAND_RESET_I(8);
    __PVT__hostSlaveMuxSel = VL_RAND_RESET_I(1);
    __PVT__hostMode = VL_RAND_RESET_I(1);
    __PVT__rstFromWire = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClkOut = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClkOut = VL_RAND_RESET_I(1);
    __PVT__rstShift = VL_RAND_RESET_I(6);
    __PVT__rstFromBus = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClkFirst = VL_RAND_RESET_I(1);
    __Vdly__hostMode = VL_RAND_RESET_I(1);
    __Vdly__rstFromBus = VL_RAND_RESET_I(1);
    __Vdly__rstShift = VL_RAND_RESET_I(6);
    __Vdly__rstSyncToUsbClkFirst = VL_RAND_RESET_I(1);
    __Vdly__rstSyncToUsbClkOut = VL_RAND_RESET_I(1);
}

void VusbHostSlave_hostSlaveMuxBI::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_hostSlaveMuxBI::~VusbHostSlave_hostSlaveMuxBI() {
}

//--------------------
// Internal Methods

void VusbHostSlave_hostSlaveMuxBI::_sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_hostSlaveMuxBI::_sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstSyncToUsbClkFirst 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToUsbClkFirst;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstSyncToUsbClkOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToUsbClkOut;
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMuxBI.v:131
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstSyncToUsbClkFirst 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToBusClkOut;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstSyncToUsbClkOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToUsbClkFirst;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToUsbClkFirst 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstSyncToUsbClkFirst;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToUsbClkOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstSyncToUsbClkOut;
}

void VusbHostSlave_hostSlaveMuxBI::_sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_hostSlaveMuxBI::_sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstShift 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstShift;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__hostMode 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostMode;
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMuxBI.v:120
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstShift 
	= (((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstFromWire) 
	    | (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstFromBus))
	    ? 0x3f : VL_EXTEND_II(6,5, (0x1f & VL_SEL_IIII(5,6,3,32, (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstShift), 1, 5))));
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstShift 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstShift;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstFromBus 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstFromBus;
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMuxBI.v:94
    if (vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToBusClkOut) {
	vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__hostMode = 0;
    } else {
	if (((((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__writeEn) 
	       & (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostSlaveMuxSel)) 
	      & (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__strobe_i)) 
	     & (~ (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address)))) {
	    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__hostMode 
		= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataIn), 0));
	}
    }
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstFromBus 
	= (((((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostSlaveMuxSel)) 
	     & (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__strobe_i)) 
	    & (~ (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address))) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataIn), 1));
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstFromBus 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__rstFromBus;
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMuxBI.v:127
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToBusClkOut 
	= (1 & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstShift), 0));
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostMode 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vdly__hostMode;
}

void VusbHostSlave_hostSlaveMuxBI::_settle__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_hostSlaveMuxBI::_settle__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMuxBI.v:127
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToBusClkOut 
	= (1 & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstShift), 0));
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMuxBI.v:109
    if (vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address) {
	if (vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address) {
	    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataOut = 0x20;
	}
    } else {
	vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataOut 
	    = VL_EXTEND_II(8,1, (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostMode));
    }
}

void VusbHostSlave_hostSlaveMuxBI::_combo__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_hostSlaveMuxBI::_combo__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMuxBI.v:109
    if (vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address) {
	if (vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address) {
	    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataOut = 0x20;
	}
    } else {
	vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataOut 
	    = VL_EXTEND_II(8,1, (IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostMode));
    }
}
