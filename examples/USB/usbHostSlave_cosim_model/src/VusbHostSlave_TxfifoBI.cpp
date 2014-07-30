// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_TxfifoBI.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_TxfifoBI) {
    // Reset internal values
    // Reset structure values
    __PVT__address = VL_RAND_RESET_I(3);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__strobe_i = VL_RAND_RESET_I(1);
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__busDataIn = VL_RAND_RESET_I(8);
    __PVT__busDataOut = VL_RAND_RESET_I(8);
    __PVT__fifoWEn = VL_RAND_RESET_I(1);
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

void VusbHostSlave_TxfifoBI::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_TxfifoBI::~VusbHostSlave_TxfifoBI() {
}

//--------------------
// Internal Methods

void VusbHostSlave_TxfifoBI::_initial__TOP__v__HostTxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_initial__TOP__v__HostTxFifo__u_TxfifoBI\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at trunk/RTL/buffers//TxfifoBI.v:140
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busDataOut = 0;
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__HostTxFifo__u_TxfifoBI__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__HostTxFifo__u_TxfifoBI__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:134
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__HostTxFifo__u_TxfifoBI__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__HostTxFifo__u_TxfifoBI__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__HostTxFifo__u_TxfifoBI__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__HostTxFifo__u_TxfifoBI__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:117
    if (vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:107
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__HostTxFifo__u_TxfifoBI__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__HostTxFifo__u_TxfifoBI__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__HostTxFifo__u_TxfifoBI__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__HostTxFifo__u_TxfifoBI__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_combo__TOP__v__HostTxFifo__u_TxfifoBI__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_combo__TOP__v__HostTxFifo__u_TxfifoBI__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_initial__TOP__v__EP0TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_initial__TOP__v__EP0TxFifo__u_TxfifoBI\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at trunk/RTL/buffers//TxfifoBI.v:140
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busDataOut = 0;
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP0TxFifo__u_TxfifoBI__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP0TxFifo__u_TxfifoBI__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:134
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP0TxFifo__u_TxfifoBI__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP0TxFifo__u_TxfifoBI__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:117
    if (vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:107
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP0TxFifo__u_TxfifoBI__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP0TxFifo__u_TxfifoBI__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP0TxFifo__u_TxfifoBI__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP0TxFifo__u_TxfifoBI__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_combo__TOP__v__EP0TxFifo__u_TxfifoBI__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_combo__TOP__v__EP0TxFifo__u_TxfifoBI__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_initial__TOP__v__EP1TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_initial__TOP__v__EP1TxFifo__u_TxfifoBI\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at trunk/RTL/buffers//TxfifoBI.v:140
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busDataOut = 0;
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP1TxFifo__u_TxfifoBI__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP1TxFifo__u_TxfifoBI__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:134
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP1TxFifo__u_TxfifoBI__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP1TxFifo__u_TxfifoBI__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:117
    if (vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:107
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP1TxFifo__u_TxfifoBI__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP1TxFifo__u_TxfifoBI__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP1TxFifo__u_TxfifoBI__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP1TxFifo__u_TxfifoBI__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_combo__TOP__v__EP1TxFifo__u_TxfifoBI__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_combo__TOP__v__EP1TxFifo__u_TxfifoBI__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_initial__TOP__v__EP2TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_initial__TOP__v__EP2TxFifo__u_TxfifoBI\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at trunk/RTL/buffers//TxfifoBI.v:140
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busDataOut = 0;
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP2TxFifo__u_TxfifoBI__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP2TxFifo__u_TxfifoBI__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:134
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP2TxFifo__u_TxfifoBI__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP2TxFifo__u_TxfifoBI__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:117
    if (vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:107
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP2TxFifo__u_TxfifoBI__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP2TxFifo__u_TxfifoBI__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP2TxFifo__u_TxfifoBI__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP2TxFifo__u_TxfifoBI__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_combo__TOP__v__EP2TxFifo__u_TxfifoBI__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_combo__TOP__v__EP2TxFifo__u_TxfifoBI__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_initial__TOP__v__EP3TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_initial__TOP__v__EP3TxFifo__u_TxfifoBI\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at trunk/RTL/buffers//TxfifoBI.v:140
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busDataOut = 0;
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP3TxFifo__u_TxfifoBI__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP3TxFifo__u_TxfifoBI__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:134
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk 
	= VL_CONCAT_III(3,2,1, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 0, 2)), (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle));
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggleSyncToUsbClk;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
}

void VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP3TxFifo__u_TxfifoBI__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_sequent__TOP__v__EP3TxFifo__u_TxfifoBI__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyReg;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:117
    if (vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg = 0;
	vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle = 0;
    } else {
	vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg 
	    = vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmpty;
	if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	     & (~ (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)))) {
	    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle 
		= (1 & (~ (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle)));
	}
    }
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggle 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyToggle;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyReg 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmptyReg;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmpty;
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:107
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmpty 
	= (((((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoSelect)) 
	     & (4 == (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__address))) 
	    & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busDataIn), 0));
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmpty 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__Vdly__forceEmpty;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP3TxFifo__u_TxfifoBI__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP3TxFifo__u_TxfifoBI__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk 
	= (1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 2) 
		^ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyToggleSyncToUsbClk), 1)));
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk 
	= ((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmpty) 
	   & (~ (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptyReg)));
}

void VusbHostSlave_TxfifoBI::_settle__TOP__v__EP3TxFifo__u_TxfifoBI__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_settle__TOP__v__EP3TxFifo__u_TxfifoBI__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}

void VusbHostSlave_TxfifoBI::_combo__TOP__v__EP3TxFifo__u_TxfifoBI__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_TxfifoBI::_combo__TOP__v__EP3TxFifo__u_TxfifoBI__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//TxfifoBI.v:152
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoWEn 
	= ((((0 == (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__address)) 
	     & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__writeEn)) 
	    & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__strobe_i)) 
	   & (IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoSelect));
}
