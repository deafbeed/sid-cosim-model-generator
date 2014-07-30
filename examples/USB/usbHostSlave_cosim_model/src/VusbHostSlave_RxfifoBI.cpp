// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_RxfifoBI.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_RxfifoBI) {
    // Reset internal values
    // Reset structure values
    __PVT__address = VL_RAND_RESET_I(3);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__strobe_i = VL_RAND_RESET_I(1);
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__fifoDataIn = VL_RAND_RESET_I(8);
    __PVT__busDataIn = VL_RAND_RESET_I(8);
    __PVT__busDataOut = VL_RAND_RESET_I(8);
    __PVT__fifoREn = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__numElementsInFifo = VL_RAND_RESET_I(16);
    __PVT__fifoSelect = VL_RAND_RESET_I(1);
    __PVT__forceEmptyReg = VL_RAND_RESET_I(1);
    __PVT__forceEmpty = VL_RAND_RESET_I(1);
    __PVT__forceEmptyToggle = VL_RAND_RESET_I(1);
    __PVT__forceEmptyToggleSyncToUsbClk = VL_RAND_RESET_I(3);
    __Vdly__forceEmpty = VL_RAND_RESET_I(1);
    __Vdly__forceEmptyReg = VL_RAND_RESET_I(1);
    __Vdly__forceEmptyToggle = VL_RAND_RESET_I(1);
    __Vdly__forceEmptyToggleSyncToUsbClk = VL_RAND_RESET_I(3);
}

void VusbHostSlave_RxfifoBI::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_RxfifoBI::~VusbHostSlave_RxfifoBI() {
}

//--------------------
// Internal Methods

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__HostRxFifo__u_RxfifoBI__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__HostRxFifo__u_RxfifoBI__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:140
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__HostRxFifo__u_RxfifoBI__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__HostRxFifo__u_RxfifoBI__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:122
    if (vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:112
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__HostRxFifo__u_RxfifoBI__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__HostRxFifo__u_RxfifoBI__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__HostRxFifo__u_RxfifoBI__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__HostRxFifo__u_RxfifoBI__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__HostRxFifo__u_RxfifoBI__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__HostRxFifo__u_RxfifoBI__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__HostRxFifo__u_RxfifoBI__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__HostRxFifo__u_RxfifoBI__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__HostRxFifo__u_RxfifoBI__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__HostRxFifo__u_RxfifoBI__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP0RxFifo__u_RxfifoBI__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP0RxFifo__u_RxfifoBI__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:140
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP0RxFifo__u_RxfifoBI__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP0RxFifo__u_RxfifoBI__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:122
    if (vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:112
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP0RxFifo__u_RxfifoBI__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP0RxFifo__u_RxfifoBI__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP0RxFifo__u_RxfifoBI__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP0RxFifo__u_RxfifoBI__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP0RxFifo__u_RxfifoBI__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP0RxFifo__u_RxfifoBI__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP0RxFifo__u_RxfifoBI__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP0RxFifo__u_RxfifoBI__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP0RxFifo__u_RxfifoBI__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP0RxFifo__u_RxfifoBI__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP1RxFifo__u_RxfifoBI__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP1RxFifo__u_RxfifoBI__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:140
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP1RxFifo__u_RxfifoBI__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP1RxFifo__u_RxfifoBI__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:122
    if (vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:112
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP1RxFifo__u_RxfifoBI__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP1RxFifo__u_RxfifoBI__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP1RxFifo__u_RxfifoBI__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP1RxFifo__u_RxfifoBI__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP1RxFifo__u_RxfifoBI__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP1RxFifo__u_RxfifoBI__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP1RxFifo__u_RxfifoBI__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP1RxFifo__u_RxfifoBI__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP1RxFifo__u_RxfifoBI__33(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP1RxFifo__u_RxfifoBI__33\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP2RxFifo__u_RxfifoBI__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP2RxFifo__u_RxfifoBI__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:140
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP2RxFifo__u_RxfifoBI__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP2RxFifo__u_RxfifoBI__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:122
    if (vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:112
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP2RxFifo__u_RxfifoBI__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP2RxFifo__u_RxfifoBI__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP2RxFifo__u_RxfifoBI__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP2RxFifo__u_RxfifoBI__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP2RxFifo__u_RxfifoBI__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP2RxFifo__u_RxfifoBI__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP2RxFifo__u_RxfifoBI__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP2RxFifo__u_RxfifoBI__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP2RxFifo__u_RxfifoBI__34(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP2RxFifo__u_RxfifoBI__34\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP3RxFifo__u_RxfifoBI__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP3RxFifo__u_RxfifoBI__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:140
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP3RxFifo__u_RxfifoBI__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_sequent__TOP__v__EP3RxFifo__u_RxfifoBI__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:122
    if (vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:112
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP3RxFifo__u_RxfifoBI__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP3RxFifo__u_RxfifoBI__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP3RxFifo__u_RxfifoBI__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP3RxFifo__u_RxfifoBI__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP3RxFifo__u_RxfifoBI__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP3RxFifo__u_RxfifoBI__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:146
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busDataOut 
	= (0xff & ((0 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address))
		    ? (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoDataIn)
		    : ((2 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address))
		        ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 8, 8)
		        : ((3 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address))
			    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__numElementsInFifo), 0, 8)
			    : 0))));
}

void VusbHostSlave_RxfifoBI::_settle__TOP__v__EP3RxFifo__u_RxfifoBI__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_settle__TOP__v__EP3RxFifo__u_RxfifoBI__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_RxfifoBI::_combo__TOP__v__EP3RxFifo__u_RxfifoBI__35(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_RxfifoBI::_combo__TOP__v__EP3RxFifo__u_RxfifoBI__35\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//RxfifoBI.v:157
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoREn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address)) 
	     & (~ (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__writeEn))) 
	    & (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoSelect));
}
