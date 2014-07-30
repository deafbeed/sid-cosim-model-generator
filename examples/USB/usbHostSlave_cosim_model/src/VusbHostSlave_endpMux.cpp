// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_endpMux.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_endpMux) {
    // Reset internal values
    // Reset structure values
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__currEndP = VL_RAND_RESET_I(4);
    __PVT__NAKSent = VL_RAND_RESET_I(1);
    __PVT__stallSent = VL_RAND_RESET_I(1);
    __PVT__CRCError = VL_RAND_RESET_I(1);
    __PVT__bitStuffError = VL_RAND_RESET_I(1);
    __PVT__RxOverflow = VL_RAND_RESET_I(1);
    __PVT__RxTimeOut = VL_RAND_RESET_I(1);
    __PVT__dataSequence = VL_RAND_RESET_I(1);
    __PVT__ACKRxed = VL_RAND_RESET_I(1);
    __PVT__transType = VL_RAND_RESET_I(2);
    __PVT__transTypeNAK = VL_RAND_RESET_I(2);
    __PVT__endPControlReg = VL_RAND_RESET_I(5);
    __PVT__clrEPRdy = VL_RAND_RESET_I(1);
    __PVT__endPMuxErrorsWEn = VL_RAND_RESET_I(1);
    __PVT__endP0ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP1ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP2ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP3ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP0StatusReg = VL_RAND_RESET_I(8);
    __PVT__endP1StatusReg = VL_RAND_RESET_I(8);
    __PVT__endP2StatusReg = VL_RAND_RESET_I(8);
    __PVT__endP3StatusReg = VL_RAND_RESET_I(8);
    __PVT__endP0TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP1TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP2TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP3TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP0NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP1NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP2NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP3NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__clrEP0Rdy = VL_RAND_RESET_I(1);
    __PVT__clrEP1Rdy = VL_RAND_RESET_I(1);
    __PVT__clrEP2Rdy = VL_RAND_RESET_I(1);
    __PVT__clrEP3Rdy = VL_RAND_RESET_I(1);
    __PVT__endPStatusCombine = VL_RAND_RESET_I(8);
    __Vdly__endPControlReg = VL_RAND_RESET_I(5);
    __Vdly__clrEP0Rdy = VL_RAND_RESET_I(1);
    __Vdly__clrEP1Rdy = VL_RAND_RESET_I(1);
    __Vdly__clrEP2Rdy = VL_RAND_RESET_I(1);
    __Vdly__clrEP3Rdy = VL_RAND_RESET_I(1);
    __Vdly__endP0NAKTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP1NAKTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP2NAKTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP3NAKTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP0TransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP1TransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP2TransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP3TransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__endP0StatusReg = VL_RAND_RESET_I(8);
    __Vdly__endP1StatusReg = VL_RAND_RESET_I(8);
    __Vdly__endP2StatusReg = VL_RAND_RESET_I(8);
    __Vdly__endP3StatusReg = VL_RAND_RESET_I(8);
}

void VusbHostSlave_endpMux::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_endpMux::~VusbHostSlave_endpMux() {
}

//--------------------
// Internal Methods

void VusbHostSlave_endpMux::_sequent__TOP__v__u_usbSlaveControl__u_endpMux__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_endpMux::_sequent__TOP__v__u_usbSlaveControl__u_endpMux__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP3Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP3Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP2Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP2Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP1Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP1Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP0Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP0Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endPControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPControlReg;
    // ALWAYS at trunk/RTL/slaveController//endpMux.v:202
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0NAKTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1NAKTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2NAKTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3NAKTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0TransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1TransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2TransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3TransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0StatusReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1StatusReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2StatusReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3StatusReg = 0;
    } else {
	if (vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPMuxErrorsWEn) {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__NAKSent) {
		if ((0 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0NAKTransTypeReg 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transTypeNAK;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0StatusReg 
			= (0x10 | (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0StatusReg));
		} else {
		    if ((1 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1NAKTransTypeReg 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transTypeNAK;
			vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1StatusReg 
			    = (0x10 | (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1StatusReg));
		    } else {
			if ((2 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2NAKTransTypeReg 
				= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transTypeNAK;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2StatusReg 
				= (0x10 | (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2StatusReg));
			} else {
			    if ((3 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3NAKTransTypeReg 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transTypeNAK;
				vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3StatusReg 
				    = (0x10 | (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3StatusReg));
			    }
			}
		    }
		}
	    } else {
		if ((0 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0TransTypeReg 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transType;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0StatusReg 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPStatusCombine;
		} else {
		    if ((1 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1TransTypeReg 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transType;
			vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1StatusReg 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPStatusCombine;
		    } else {
			if ((2 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2TransTypeReg 
				= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transType;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2StatusReg 
				= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPStatusCombine;
			} else {
			    if ((3 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3TransTypeReg 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transType;
				vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3StatusReg 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPStatusCombine;
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/slaveController//endpMux.v:177
    if ((0 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endPControlReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0ControlReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP0Rdy 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEPRdy;
    } else {
	if ((1 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endPControlReg 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1ControlReg;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP1Rdy 
		= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEPRdy;
	} else {
	    if ((2 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endPControlReg 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2ControlReg;
		vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP2Rdy 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEPRdy;
	    } else {
		if ((3 == (3 & VL_SEL_IIII(2,4,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP), 0, 2)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endPControlReg 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3ControlReg;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP3Rdy 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEPRdy;
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP0TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP1TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP2TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endP3TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP0Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP0Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP1Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP1Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP2Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP2Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP3Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__clrEP3Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__Vdly__endPControlReg;
}

void VusbHostSlave_endpMux::_settle__TOP__v__u_usbSlaveControl__u_endpMux__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_endpMux::_settle__TOP__v__u_usbSlaveControl__u_endpMux__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//endpMux.v:266
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPStatusCombine 
	= VL_CONCAT_III(8,1,7, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__dataSequence), 
			VL_CONCAT_III(7,1,6, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__ACKRxed), 
				      VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__stallSent), 
						    VL_EXTEND_II(5,4, 
								 VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxTimeOut), 
									       VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxOverflow), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__bitStuffError), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__CRCError))))))));
}

void VusbHostSlave_endpMux::_combo__TOP__v__u_usbSlaveControl__u_endpMux__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_endpMux::_combo__TOP__v__u_usbSlaveControl__u_endpMux__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//endpMux.v:266
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPStatusCombine 
	= VL_CONCAT_III(8,1,7, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__dataSequence), 
			VL_CONCAT_III(7,1,6, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__ACKRxed), 
				      VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__stallSent), 
						    VL_EXTEND_II(5,4, 
								 VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxTimeOut), 
									       VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxOverflow), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__bitStuffError), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__CRCError))))))));
}
