// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_fifoMux.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_fifoMux) {
    // Reset internal values
    // Reset structure values
    __PVT__currEndP = VL_RAND_RESET_I(4);
    __PVT__TxFifoREn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP0REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP1REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP2REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP3REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoData = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP0Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP1Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP2Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP3Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEmpty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP0Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP1Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP2Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP3Empty = VL_RAND_RESET_I(1);
    __PVT__RxFifoWEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP0WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP1WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP2WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP3WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoFull = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP0Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP1Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP2Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP3Full = VL_RAND_RESET_I(1);
}

void VusbHostSlave_fifoMux::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_fifoMux::~VusbHostSlave_fifoMux() {
}

//--------------------
// Internal Methods

void VusbHostSlave_fifoMux::_combo__TOP__v__u_usbSlaveControl__u_fifoMux__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoMux::_combo__TOP__v__u_usbSlaveControl__u_fifoMux__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//fifoMux.v:151
    if ((0 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Data;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Empty;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0Full;
    } else {
	if ((1 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Data;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Empty;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1Full;
	} else {
	    if ((2 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Data;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Empty;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2Full;
	    } else {
		if ((3 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Data;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Empty;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3Full;
		}
	    }
	}
    }
}

void VusbHostSlave_fifoMux::_settle__TOP__v__u_usbSlaveControl__u_fifoMux__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoMux::_settle__TOP__v__u_usbSlaveControl__u_fifoMux__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//fifoMux.v:151
    if ((0 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Data;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Empty;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0Full;
    } else {
	if ((1 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Data;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Empty;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1Full;
	} else {
	    if ((2 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Data;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Empty;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2Full;
	    } else {
		if ((3 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP), 0, 2)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Data;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Empty;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3Full;
		}
	    }
	}
    }
}
