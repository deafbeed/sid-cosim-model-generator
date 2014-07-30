// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_updateCRC5.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_updateCRC5) {
    // Reset internal values
    // Reset structure values
    __PVT__rstCRC = VL_RAND_RESET_I(1);
    __PVT__CRCEn = VL_RAND_RESET_I(1);
    __PVT__CRC5_8BitIn = VL_RAND_RESET_I(1);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__CRCResult = VL_RAND_RESET_I(5);
    __PVT__ready = VL_RAND_RESET_I(1);
    __PVT__doUpdateCRC = VL_RAND_RESET_I(1);
    __PVT__data = VL_RAND_RESET_I(8);
    __PVT__loopEnd = VL_RAND_RESET_I(4);
    __PVT__i = VL_RAND_RESET_I(4);
    __Vdly__doUpdateCRC = VL_RAND_RESET_I(1);
    __Vdly__i = VL_RAND_RESET_I(4);
    __Vdly__CRCResult = VL_RAND_RESET_I(5);
    __Vdly__ready = VL_RAND_RESET_I(1);
    __Vdly__data = VL_RAND_RESET_I(8);
    __Vdly__loopEnd = VL_RAND_RESET_I(4);
}

void VusbHostSlave_updateCRC5::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_updateCRC5::~VusbHostSlave_updateCRC5() {
}

//--------------------
// Internal Methods

void VusbHostSlave_updateCRC5::_sequent__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_updateCRC5::_sequent__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__loopEnd 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__loopEnd;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__ready;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//updateCRC5.v:83
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__rst) 
	 | (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__rstCRC))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__doUpdateCRC = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__CRCResult = 0x1f;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__ready = 1;
    } else {
	if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__doUpdateCRC) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__i 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__i)));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__CRCResult 
		= ((1 & (VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCResult), 0) 
			 ^ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__data), 0)))
		    ? (0x14 ^ VL_EXTEND_II(5,4, (0xf 
						 & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCResult), 1, 4))))
		    : VL_EXTEND_II(5,4, (0xf & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCResult), 1, 4))));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__data 
		= VL_EXTEND_II(8,7, (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__data), 1, 7)));
	    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__i) 
		 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__loopEnd))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__doUpdateCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__i = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__ready = 1;
	    }
	} else {
	    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCEn) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__ready = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__doUpdateCRC = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__data 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__dataIn;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__loopEnd 
		    = ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRC5_8BitIn)
		        ? 7 : 2);
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__loopEnd 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__loopEnd;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vdly__ready;
}

void VusbHostSlave_updateCRC5::_sequent__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_updateCRC5::_sequent__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__loopEnd 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__loopEnd;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__ready;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//updateCRC5.v:83
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__rst) 
	 | (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__rstCRC))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__doUpdateCRC = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__CRCResult = 0x1f;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__ready = 1;
    } else {
	if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__doUpdateCRC) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__i 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__i)));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__CRCResult 
		= ((1 & (VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCResult), 0) 
			 ^ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__data), 0)))
		    ? (0x14 ^ VL_EXTEND_II(5,4, (0xf 
						 & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCResult), 1, 4))))
		    : VL_EXTEND_II(5,4, (0xf & VL_SEL_IIII(4,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCResult), 1, 4))));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__data 
		= VL_EXTEND_II(8,7, (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__data), 1, 7)));
	    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__i) 
		 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__loopEnd))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__doUpdateCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__i = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__ready = 1;
	    }
	} else {
	    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCEn) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__ready = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__doUpdateCRC = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__data 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__dataIn;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__loopEnd 
		    = ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRC5_8BitIn)
		        ? 7 : 2);
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__loopEnd 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__loopEnd;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__doUpdateCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__doUpdateCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__data 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__data;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCResult 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__ready 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vdly__ready;
}
