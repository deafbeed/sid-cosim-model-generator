// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_hostSlaveMux.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_hostSlaveMux) {
    VL_CELL (__PVT__u_hostSlaveMuxBI, VusbHostSlave_hostSlaveMuxBI);
    // Reset internal values
    // Reset structure values
    __PVT__SIEPortCtrlInToSIE = VL_RAND_RESET_I(8);
    __PVT__SIEPortCtrlInFromHost = VL_RAND_RESET_I(8);
    __PVT__SIEPortCtrlInFromSlave = VL_RAND_RESET_I(8);
    __PVT__SIEPortDataInToSIE = VL_RAND_RESET_I(8);
    __PVT__SIEPortDataInFromHost = VL_RAND_RESET_I(8);
    __PVT__SIEPortDataInFromSlave = VL_RAND_RESET_I(8);
    __PVT__SIEPortWEnToSIE = VL_RAND_RESET_I(1);
    __PVT__SIEPortWEnFromHost = VL_RAND_RESET_I(1);
    __PVT__SIEPortWEnFromSlave = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolarityToSIE = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolarityFromHost = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolarityFromSlave = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRateToSIE = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRateFromHost = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRateFromSlave = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnableToSIE = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnableFromHost = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnableFromSlave = VL_RAND_RESET_I(1);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__address = VL_RAND_RESET_I(1);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__strobe_i = VL_RAND_RESET_I(1);
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstFromWire = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClkOut = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClkOut = VL_RAND_RESET_I(1);
    __PVT__dataOut = VL_RAND_RESET_I(8);
    __PVT__hostSlaveMuxSel = VL_RAND_RESET_I(1);
    __PVT__hostMode = VL_RAND_RESET_I(1);
}

void VusbHostSlave_hostSlaveMux::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_hostSlaveMux::~VusbHostSlave_hostSlaveMux() {
}

//--------------------
// Internal Methods

void VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__usbClk 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__usbClk;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__busClk 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__busClk;
}

void VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__usbClk 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__usbClk;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__busClk 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__busClk;
}

void VusbHostSlave_hostSlaveMux::_sequent__TOP__v__u_hostSlaveMux__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_sequent__TOP__v__u_hostSlaveMux__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToUsbClkOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToUsbClkOut;
}

void VusbHostSlave_hostSlaveMux::_sequent__TOP__v__u_hostSlaveMux__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_sequent__TOP__v__u_hostSlaveMux__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostMode 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostMode;
}

void VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstFromWire 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstFromWire;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__writeEn 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__writeEn;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__strobe_i;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataIn 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataIn;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__address;
}

void VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToUsbClkOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToUsbClkOut;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstFromWire 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstFromWire;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__writeEn 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__writeEn;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__strobe_i;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataIn 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataIn;
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__address 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__address;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostMode 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostMode;
}

void VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToBusClkOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToBusClkOut;
}

void VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataOut;
}

void VusbHostSlave_hostSlaveMux::_sequent__TOP__v__u_hostSlaveMux__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_sequent__TOP__v__u_hostSlaveMux__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToBusClkOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__rstSyncToBusClkOut;
}

void VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataOut 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__dataOut;
}

void VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMux.v:160
    if (vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostMode) {
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromHost;
    } else {
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromSlave;
    }
}

void VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostSlaveMux//hostSlaveMux.v:160
    if (vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostMode) {
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromHost;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromHost;
    } else {
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromSlave;
	vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableToSIE 
	    = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromSlave;
    }
}

void VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_combo__TOP__v__u_hostSlaveMux__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostSlaveMuxSel 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostSlaveMuxSel;
}

void VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_hostSlaveMux::_settle__TOP__v__u_hostSlaveMux__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__hostSlaveMuxSel 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostSlaveMuxSel;
}
