// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_rxStatusMonitor.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_rxStatusMonitor) {
    // Reset internal values
    // Reset structure values
    __PVT__connectStateIn = VL_RAND_RESET_I(2);
    __PVT__resumeDetectedIn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__connectionEventOut = VL_RAND_RESET_I(1);
    __PVT__connectStateOut = VL_RAND_RESET_I(2);
    __PVT__resumeIntOut = VL_RAND_RESET_I(1);
    __PVT__oldConnectState = VL_RAND_RESET_I(2);
    __PVT__oldResumeDetected = VL_RAND_RESET_I(1);
    __Vdly__oldConnectState = VL_RAND_RESET_I(2);
    __Vdly__oldResumeDetected = VL_RAND_RESET_I(1);
    __Vdly__connectionEventOut = VL_RAND_RESET_I(1);
    __Vdly__resumeIntOut = VL_RAND_RESET_I(1);
}

void VusbHostSlave_rxStatusMonitor::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_rxStatusMonitor::~VusbHostSlave_rxStatusMonitor() {
}

//--------------------
// Internal Methods

void VusbHostSlave_rxStatusMonitor::_sequent__TOP__v__u_usbHostControl__u_rxStatusMonitor__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_rxStatusMonitor::_sequent__TOP__v__u_usbHostControl__u_rxStatusMonitor__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldConnectState 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__oldConnectState;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldResumeDetected 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__oldResumeDetected;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__connectionEventOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectionEventOut;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__resumeIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeIntOut;
    // ALWAYS at trunk/RTL/hostController//rxStatusMonitor.v:85
    if (vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldConnectState 
	    = vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateIn;
	vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldResumeDetected 
	    = vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeDetectedIn;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldConnectState 
	    = vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateIn;
	vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldResumeDetected 
	    = vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeDetectedIn;
	vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__connectionEventOut 
	    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__oldConnectState) 
	       != (IData)(vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateIn));
	vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__resumeIntOut 
	    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeDetectedIn) 
	       & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__oldResumeDetected)));
    }
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__oldConnectState 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldConnectState;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__oldResumeDetected 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__oldResumeDetected;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectionEventOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__connectionEventOut;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vdly__resumeIntOut;
}

void VusbHostSlave_rxStatusMonitor::_combo__TOP__v__u_usbHostControl__u_rxStatusMonitor__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_rxStatusMonitor::_combo__TOP__v__u_usbHostControl__u_rxStatusMonitor__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//rxStatusMonitor.v:79
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateIn;
}

void VusbHostSlave_rxStatusMonitor::_settle__TOP__v__u_usbHostControl__u_rxStatusMonitor__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_rxStatusMonitor::_settle__TOP__v__u_usbHostControl__u_rxStatusMonitor__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//rxStatusMonitor.v:79
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateIn;
}
