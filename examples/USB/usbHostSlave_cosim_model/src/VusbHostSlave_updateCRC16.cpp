// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_updateCRC16.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_updateCRC16) {
    // Reset internal values
    // Reset structure values
    __PVT__rstCRC = VL_RAND_RESET_I(1);
    __PVT__CRCEn = VL_RAND_RESET_I(1);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__CRCResult = VL_RAND_RESET_I(16);
    __PVT__ready = VL_RAND_RESET_I(1);
    __PVT__doUpdateCRC = VL_RAND_RESET_I(1);
    __PVT__data = VL_RAND_RESET_I(8);
    __PVT__i = VL_RAND_RESET_I(4);
    __Vdly__doUpdateCRC = VL_RAND_RESET_I(1);
    __Vdly__i = VL_RAND_RESET_I(4);
    __Vdly__CRCResult = VL_RAND_RESET_I(16);
    __Vdly__ready = VL_RAND_RESET_I(1);
    __Vdly__data = VL_RAND_RESET_I(8);
}

void VusbHostSlave_updateCRC16::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_updateCRC16::~VusbHostSlave_updateCRC16() {
}

//--------------------
// Internal Methods

void VusbHostSlave_updateCRC16::_sequent__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_updateCRC16::_sequent__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__ready;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//updateCRC16.v:80
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__rst) 
	 | (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__rstCRC))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__doUpdateCRC = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__CRCResult = 0xffff;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__ready = 1;
    } else {
	if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__doUpdateCRC) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__i 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__i)));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__CRCResult 
		= ((1 & (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCResult), 0) 
			 ^ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__data), 0)))
		    ? (0xa001 ^ VL_EXTEND_II(16,15, 
					     (0x7fff 
					      & VL_SEL_IIII(15,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCResult), 1, 0xf))))
		    : VL_EXTEND_II(16,15, (0x7fff & 
					   VL_SEL_IIII(15,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCResult), 1, 0xf))));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__data 
		= VL_EXTEND_II(8,7, (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__data), 1, 7)));
	    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__i))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__doUpdateCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__i = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__ready = 1;
	    }
	} else {
	    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCEn) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__doUpdateCRC = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__data 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__dataIn;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__ready = 0;
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vdly__ready;
}

void VusbHostSlave_updateCRC16::_sequent__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_updateCRC16::_sequent__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__ready;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//updateCRC16.v:80
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__rst) 
	 | (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__rstCRC))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__doUpdateCRC = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__CRCResult = 0xffff;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__ready = 1;
    } else {
	if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__doUpdateCRC) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__i 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__i)));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__CRCResult 
		= ((1 & (VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCResult), 0) 
			 ^ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__data), 0)))
		    ? (0xa001 ^ VL_EXTEND_II(16,15, 
					     (0x7fff 
					      & VL_SEL_IIII(15,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCResult), 1, 0xf))))
		    : VL_EXTEND_II(16,15, (0x7fff & 
					   VL_SEL_IIII(15,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCResult), 1, 0xf))));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__data 
		= VL_EXTEND_II(8,7, (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__data), 1, 7)));
	    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__i))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__doUpdateCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__i = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__ready = 1;
	    }
	} else {
	    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCEn) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__doUpdateCRC = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__data 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__dataIn;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__ready = 0;
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vdly__ready;
}
