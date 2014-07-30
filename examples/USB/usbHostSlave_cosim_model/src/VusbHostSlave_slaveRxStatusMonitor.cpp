// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_slaveRxStatusMonitor.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_slaveRxStatusMonitor) {
    // Reset internal values
    // Reset structure values
    __PVT__connectStateIn = VL_RAND_RESET_I(2);
    __PVT__resumeDetectedIn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__resetEventOut = VL_RAND_RESET_I(1);
    __PVT__connectStateOut = VL_RAND_RESET_I(2);
    __PVT__resumeIntOut = VL_RAND_RESET_I(1);
    __PVT__oldConnectState = VL_RAND_RESET_I(2);
    __PVT__oldResumeDetected = VL_RAND_RESET_I(1);
    __Vdly__oldConnectState = VL_RAND_RESET_I(2);
    __Vdly__oldResumeDetected = VL_RAND_RESET_I(1);
    __Vdly__resetEventOut = VL_RAND_RESET_I(1);
    __Vdly__resumeIntOut = VL_RAND_RESET_I(1);
}

void VusbHostSlave_slaveRxStatusMonitor::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_slaveRxStatusMonitor::~VusbHostSlave_slaveRxStatusMonitor() {
}

//--------------------
// Internal Methods

void VusbHostSlave_slaveRxStatusMonitor::_sequent__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveRxStatusMonitor::_sequent__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldConnectState 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__oldConnectState;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldResumeDetected 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__oldResumeDetected;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__resetEventOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resetEventOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__resumeIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeIntOut;
    // ALWAYS at trunk/RTL/slaveController//slaveRxStatusMonitor.v:85
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldConnectState 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateIn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldResumeDetected 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeDetectedIn;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldConnectState 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateIn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldResumeDetected 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeDetectedIn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__resetEventOut 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__oldConnectState) 
	       != (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateIn));
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__resumeIntOut 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeDetectedIn) 
	       & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__oldResumeDetected)));
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__oldConnectState 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldConnectState;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__oldResumeDetected 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__oldResumeDetected;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resetEventOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__resetEventOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vdly__resumeIntOut;
}

void VusbHostSlave_slaveRxStatusMonitor::_combo__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveRxStatusMonitor::_combo__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveRxStatusMonitor.v:79
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateIn;
}

void VusbHostSlave_slaveRxStatusMonitor::_settle__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveRxStatusMonitor::_settle__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveRxStatusMonitor.v:79
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateIn;
}
