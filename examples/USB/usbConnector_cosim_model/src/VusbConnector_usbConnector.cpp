// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbConnector.h for the primary calling header

#include "VusbConnector_usbConnector.h" // For This
#include "VusbConnector__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbConnector_usbConnector) {
    // Reset internal values
    // Reset structure values
    hostDataIn = VL_RAND_RESET_I(2);
    hostDataOut = VL_RAND_RESET_I(2);
    hostControl = VL_RAND_RESET_I(1);
    slaveDataIn = VL_RAND_RESET_I(2);
    slaveDataOut = VL_RAND_RESET_I(2);
    slaveControl = VL_RAND_RESET_I(1);
    USBDPlusPullup = VL_RAND_RESET_I(1);
    USBDMinusPullup = VL_RAND_RESET_I(1);
    __PVT__DPlusPullup = VL_RAND_RESET_I(1);
    __PVT__DPlusPullDown = VL_RAND_RESET_I(1);
    __PVT__DMinusPullup = VL_RAND_RESET_I(1);
    __PVT__DMinusPullDown = VL_RAND_RESET_I(1);
    __PVT__USBWireVP = VL_RAND_RESET_I(1);
    __PVT__USBWireVM = VL_RAND_RESET_I(1);
    DPlusPullup__enpull0 = VL_RAND_RESET_I(1);
    DPlusPullDown__enpull1 = VL_RAND_RESET_I(1);
    DMinusPullup__enpull2 = VL_RAND_RESET_I(1);
    DMinusPullDown__enpull3 = VL_RAND_RESET_I(1);
    DPlusPullup__lhs0 = VL_RAND_RESET_I(1);
    DPlusPullDown__lhs0 = VL_RAND_RESET_I(1);
    DMinusPullup__lhs0 = VL_RAND_RESET_I(1);
    DMinusPullDown__lhs0 = VL_RAND_RESET_I(1);
}

void VusbConnector_usbConnector::__Vconfigure(VusbConnector__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbConnector_usbConnector::~VusbConnector_usbConnector() {
}

//--------------------
// Internal Methods

void VusbConnector_usbConnector::_initial__TOP__v(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("  VusbConnector_usbConnector::_initial__TOP__v\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at trunk/bench/usbConnector.v:28
    vlSymsp->TOP__v.DPlusPullup__lhs0 = 0xffffffff;
    // INITIAL at trunk/bench/usbConnector.v:29
    vlSymsp->TOP__v.DPlusPullDown__lhs0 = 0;
    // INITIAL at trunk/bench/usbConnector.v:30
    vlSymsp->TOP__v.DMinusPullup__lhs0 = 0xffffffff;
    // INITIAL at trunk/bench/usbConnector.v:31
    vlSymsp->TOP__v.DMinusPullDown__lhs0 = 0;
    // INITIAL at trunk/bench/usbConnector.v:21
    vlSymsp->TOP__v.DPlusPullup__enpull0 = 0;
    // INITIAL at trunk/bench/usbConnector.v:22
    vlSymsp->TOP__v.DPlusPullDown__enpull1 = 0;
    // INITIAL at trunk/bench/usbConnector.v:23
    vlSymsp->TOP__v.DMinusPullup__enpull2 = 0;
    // INITIAL at trunk/bench/usbConnector.v:24
    vlSymsp->TOP__v.DMinusPullDown__enpull3 = 0;
}

void VusbConnector_usbConnector::_settle__TOP__v__1(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("  VusbConnector_usbConnector::_settle__TOP__v__1\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__DPlusPullup = (1 & (((IData)(vlSymsp->TOP__v.DPlusPullup__lhs0) 
						& (IData)(vlSymsp->TOP__v.DPlusPullup__enpull0)) 
					       | (~ (IData)(vlSymsp->TOP__v.DPlusPullup__enpull0))));
    vlSymsp->TOP__v.__PVT__DPlusPullDown = ((IData)(vlSymsp->TOP__v.DPlusPullDown__lhs0) 
					    & (IData)(vlSymsp->TOP__v.DPlusPullDown__enpull1));
    vlSymsp->TOP__v.__PVT__DMinusPullup = (1 & (((IData)(vlSymsp->TOP__v.DMinusPullup__lhs0) 
						 & (IData)(vlSymsp->TOP__v.DMinusPullup__enpull2)) 
						| (~ (IData)(vlSymsp->TOP__v.DMinusPullup__enpull2))));
    vlSymsp->TOP__v.__PVT__DMinusPullDown = ((IData)(vlSymsp->TOP__v.DMinusPullDown__lhs0) 
					     & (IData)(vlSymsp->TOP__v.DMinusPullDown__enpull3));
}

void VusbConnector_usbConnector::_combo__TOP__v__2(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("  VusbConnector_usbConnector::_combo__TOP__v__2\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/bench/usbConnector.v:36
    if (((IData)(vlSymsp->TOP__v.hostControl) & (~ (IData)(vlSymsp->TOP__v.slaveControl)))) {
	vlSymsp->TOP__v.__PVT__USBWireVP = (1 & VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.hostDataIn), 1));
	vlSymsp->TOP__v.__PVT__USBWireVM = (1 & VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.hostDataIn), 0));
    } else {
	if (((~ (IData)(vlSymsp->TOP__v.hostControl)) 
	     & (IData)(vlSymsp->TOP__v.slaveControl))) {
	    vlSymsp->TOP__v.__PVT__USBWireVP = (1 & 
						VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.slaveDataIn), 1));
	    vlSymsp->TOP__v.__PVT__USBWireVM = (1 & 
						VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.slaveDataIn), 0));
	} else {
	    if (((IData)(vlSymsp->TOP__v.hostControl) 
		 & (IData)(vlSymsp->TOP__v.slaveControl))) {
		vlSymsp->TOP__v.__PVT__USBWireVP = 0;
		vlSymsp->TOP__v.__PVT__USBWireVM = 0;
	    } else {
		if ((1 & ((~ (IData)(vlSymsp->TOP__v.hostControl)) 
			  & (~ (IData)(vlSymsp->TOP__v.slaveControl))))) {
		    vlSymsp->TOP__v.__PVT__USBWireVP 
			= ((IData)(vlSymsp->TOP__v.USBDPlusPullup)
			    ? (IData)(vlSymsp->TOP__v.__PVT__DPlusPullup)
			    : (IData)(vlSymsp->TOP__v.__PVT__DPlusPullDown));
		    vlSymsp->TOP__v.__PVT__USBWireVM 
			= ((IData)(vlSymsp->TOP__v.USBDMinusPullup)
			    ? (IData)(vlSymsp->TOP__v.__PVT__DMinusPullup)
			    : (IData)(vlSymsp->TOP__v.__PVT__DMinusPullDown));
		}
	    }
	}
    }
}

void VusbConnector_usbConnector::_settle__TOP__v__3(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("  VusbConnector_usbConnector::_settle__TOP__v__3\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/bench/usbConnector.v:36
    if (((IData)(vlSymsp->TOP__v.hostControl) & (~ (IData)(vlSymsp->TOP__v.slaveControl)))) {
	vlSymsp->TOP__v.__PVT__USBWireVP = (1 & VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.hostDataIn), 1));
	vlSymsp->TOP__v.__PVT__USBWireVM = (1 & VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.hostDataIn), 0));
    } else {
	if (((~ (IData)(vlSymsp->TOP__v.hostControl)) 
	     & (IData)(vlSymsp->TOP__v.slaveControl))) {
	    vlSymsp->TOP__v.__PVT__USBWireVP = (1 & 
						VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.slaveDataIn), 1));
	    vlSymsp->TOP__v.__PVT__USBWireVM = (1 & 
						VL_BITSEL_IIII(1,2,32,32, (IData)(vlSymsp->TOP__v.slaveDataIn), 0));
	} else {
	    if (((IData)(vlSymsp->TOP__v.hostControl) 
		 & (IData)(vlSymsp->TOP__v.slaveControl))) {
		vlSymsp->TOP__v.__PVT__USBWireVP = 0;
		vlSymsp->TOP__v.__PVT__USBWireVM = 0;
	    } else {
		if ((1 & ((~ (IData)(vlSymsp->TOP__v.hostControl)) 
			  & (~ (IData)(vlSymsp->TOP__v.slaveControl))))) {
		    vlSymsp->TOP__v.__PVT__USBWireVP 
			= ((IData)(vlSymsp->TOP__v.USBDPlusPullup)
			    ? (IData)(vlSymsp->TOP__v.__PVT__DPlusPullup)
			    : (IData)(vlSymsp->TOP__v.__PVT__DPlusPullDown));
		    vlSymsp->TOP__v.__PVT__USBWireVM 
			= ((IData)(vlSymsp->TOP__v.USBDMinusPullup)
			    ? (IData)(vlSymsp->TOP__v.__PVT__DMinusPullup)
			    : (IData)(vlSymsp->TOP__v.__PVT__DMinusPullDown));
		}
	    }
	}
    }
    vlSymsp->TOP__v.hostDataOut = VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v.__PVT__USBWireVP), (IData)(vlSymsp->TOP__v.__PVT__USBWireVM));
    vlSymsp->TOP__v.slaveDataOut = VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v.__PVT__USBWireVP), (IData)(vlSymsp->TOP__v.__PVT__USBWireVM));
}

void VusbConnector_usbConnector::_combo__TOP__v__4(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("  VusbConnector_usbConnector::_combo__TOP__v__4\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.hostDataOut = VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v.__PVT__USBWireVP), (IData)(vlSymsp->TOP__v.__PVT__USBWireVM));
    vlSymsp->TOP__v.slaveDataOut = VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v.__PVT__USBWireVP), (IData)(vlSymsp->TOP__v.__PVT__USBWireVM));
}
