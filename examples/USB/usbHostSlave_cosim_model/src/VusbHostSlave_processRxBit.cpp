// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_processRxBit.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_processRxBit) {
    // Reset internal values
    // Reset structure values
    __PVT__JBit = VL_RAND_RESET_I(2);
    __PVT__KBit = VL_RAND_RESET_I(2);
    __PVT__RxBitsIn = VL_RAND_RESET_I(2);
    __PVT__RxWireActive = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__processRxBitsWEn = VL_RAND_RESET_I(1);
    __PVT__processRxByteRdy = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__RxCtrlOut = VL_RAND_RESET_I(8);
    __PVT__RxDataOut = VL_RAND_RESET_I(8);
    __PVT__processRxBitRdy = VL_RAND_RESET_I(1);
    __PVT__processRxByteWEn = VL_RAND_RESET_I(1);
    __PVT__resumeDetected = VL_RAND_RESET_I(1);
    __PVT__next_RxCtrlOut = VL_RAND_RESET_I(8);
    __PVT__next_RxDataOut = VL_RAND_RESET_I(8);
    __PVT__next_processRxBitRdy = VL_RAND_RESET_I(1);
    __PVT__next_processRxByteWEn = VL_RAND_RESET_I(1);
    __PVT__next_resumeDetected = VL_RAND_RESET_I(1);
    __PVT__RXBitCount = VL_RAND_RESET_I(4);
    __PVT__next_RXBitCount = VL_RAND_RESET_I(4);
    __PVT__RXBitStMachCurrState = VL_RAND_RESET_I(2);
    __PVT__next_RXBitStMachCurrState = VL_RAND_RESET_I(2);
    __PVT__RXByte = VL_RAND_RESET_I(8);
    __PVT__next_RXByte = VL_RAND_RESET_I(8);
    __PVT__RXSameBitCount = VL_RAND_RESET_I(4);
    __PVT__next_RXSameBitCount = VL_RAND_RESET_I(4);
    __PVT__RxBits = VL_RAND_RESET_I(2);
    __PVT__next_RxBits = VL_RAND_RESET_I(2);
    __PVT__bitStuffError = VL_RAND_RESET_I(1);
    __PVT__next_bitStuffError = VL_RAND_RESET_I(1);
    __PVT__oldRXBits = VL_RAND_RESET_I(2);
    __PVT__next_oldRXBits = VL_RAND_RESET_I(2);
    __PVT__resumeWaitCnt = VL_RAND_RESET_I(5);
    __PVT__next_resumeWaitCnt = VL_RAND_RESET_I(5);
    __PVT__CurrState_prRxBit = VL_RAND_RESET_I(4);
    __PVT__NextState_prRxBit = VL_RAND_RESET_I(4);
    __Vdly__CurrState_prRxBit = VL_RAND_RESET_I(4);
    __Vdly__RXBitStMachCurrState = VL_RAND_RESET_I(2);
    __Vdly__RxBits = VL_RAND_RESET_I(2);
    __Vdly__RXSameBitCount = VL_RAND_RESET_I(4);
    __Vdly__RXBitCount = VL_RAND_RESET_I(4);
    __Vdly__oldRXBits = VL_RAND_RESET_I(2);
    __Vdly__RXByte = VL_RAND_RESET_I(8);
    __Vdly__bitStuffError = VL_RAND_RESET_I(1);
    __Vdly__resumeWaitCnt = VL_RAND_RESET_I(5);
    __Vdly__processRxByteWEn = VL_RAND_RESET_I(1);
    __Vdly__RxCtrlOut = VL_RAND_RESET_I(8);
    __Vdly__RxDataOut = VL_RAND_RESET_I(8);
    __Vdly__resumeDetected = VL_RAND_RESET_I(1);
    __Vdly__processRxBitRdy = VL_RAND_RESET_I(1);
}

void VusbHostSlave_processRxBit::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_processRxBit::~VusbHostSlave_processRxBit() {
}

//--------------------
// Internal Methods

void VusbHostSlave_processRxBit::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processRxBit::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__CurrState_prRxBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXSameBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__oldRXBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__oldRXBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeWaitCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxBitRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeDetected 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxDataOut;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxBit.v:368
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__CurrState_prRxBit 
	= ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit));
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxBit.v:379
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitStMachCurrState = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxBits = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXSameBitCount = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitCount = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__oldRXBits = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXByte = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__bitStuffError = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeWaitCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxByteWEn = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxCtrlOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxDataOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeDetected = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxBitRdy = 1;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitStMachCurrState 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxBits 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXSameBitCount 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitCount 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__oldRXBits 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXByte 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__bitStuffError 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeWaitCnt 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxByteWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxCtrlOut 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxDataOut 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeDetected 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxBitRdy 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy;
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__CurrState_prRxBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXSameBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__oldRXBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__oldRXBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RXByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeWaitCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxBitRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeDetected 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__resumeDetected;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vdly__RxDataOut;
}

void VusbHostSlave_processRxBit::_combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processRxBit::_combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxBit.v:133
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__oldRXBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitRdy;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit)) 
	       | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	      | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	    | (0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	   | (4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	  | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	 | (0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
		     & (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 9;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
		} else {
		    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
			 & (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 5;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
		    } else {
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
			     & (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 3;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
			} else {
			    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
				 & (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xb;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
			    }
			}
		    }
		}
	    } else {
		if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			if ((((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
			      == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit)) 
			     & (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxWireActive))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xc;
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
			}
		    } else {
			if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
			    } else {
				if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError = 0;
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xd;
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 6;
					if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
					     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__oldRXBits))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount 
						= (0xf 
						   & ((IData)(1) 
						      + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount)));
					    if ((6 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount))) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError = 1;
					    } else {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount 
						    = 
						    (0xf 
						     & ((IData)(1) 
							+ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount)));
						if (
						    (7 
						     != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
						}
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte 
						    = 
						    VL_CONCAT_III(8,1,7, 1, 
								  (0x7f 
								   & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte), 1, 7)));
					    }
					} else {
					    if ((6 
						 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount))) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount 
						    = 
						    (0xf 
						     & ((IData)(1) 
							+ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount)));
						if (
						    (7 
						     != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
						}
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte 
						    = 
						    VL_EXTEND_II(8,7, 
								 (0x7f 
								  & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte), 1, 7)));
					    }
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount = 0;
					}
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 4;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
	    if (((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount)) 
		 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError)))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 8;
	    } else {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xe;
		} else {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
		}
	    }
	} else {
	    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
	    } else {
		if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 7;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
		    }
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
			     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__JBit))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt = 0;
			}
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
		    } else {
			if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xa;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 3;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
			    }
			} else {
			    if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
				     != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt 
					= (0x1f & ((IData)(1) 
						   + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt)));
				    if ((0x1d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 3;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected = 1;
				    }
				}
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
			    } else {
				if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
					 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected = 0;
				    }
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_processRxBit::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processRxBit::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxBit.v:133
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__oldRXBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitRdy;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit)) 
	       | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	      | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	    | (0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	   | (4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	  | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) 
	 | (0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
		     & (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 9;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
		} else {
		    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
			 & (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 5;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
		    } else {
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
			     & (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 3;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
			} else {
			    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn) 
				 & (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitStMachCurrState)))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xb;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxBits 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 0;
			    }
			}
		    }
		}
	    } else {
		if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
		} else {
		    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			if ((((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
			      == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit)) 
			     & (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxWireActive))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xc;
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
			}
		    } else {
			if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
			    } else {
				if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError = 0;
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xd;
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 6;
					if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
					     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__oldRXBits))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount 
						= (0xf 
						   & ((IData)(1) 
						      + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount)));
					    if ((6 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount))) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_bitStuffError = 1;
					    } else {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount 
						    = 
						    (0xf 
						     & ((IData)(1) 
							+ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount)));
						if (
						    (7 
						     != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
						}
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte 
						    = 
						    VL_CONCAT_III(8,1,7, 1, 
								  (0x7f 
								   & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte), 1, 7)));
					    }
					} else {
					    if ((6 
						 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXSameBitCount))) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount 
						    = 
						    (0xf 
						     & ((IData)(1) 
							+ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount)));
						if (
						    (7 
						     != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
						}
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXByte 
						    = 
						    VL_EXTEND_II(8,7, 
								 (0x7f 
								  & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte), 1, 7)));
					    }
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXSameBitCount = 0;
					}
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_oldRXBits 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 4;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
	    if (((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXBitCount)) 
		 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError)))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 8;
	    } else {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__bitStuffError) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xe;
		} else {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
		}
	    }
	} else {
	    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
	    } else {
		if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 7;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitCount = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RXByte;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
		    }
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 0;
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
			     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__JBit))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
			} else {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt = 0;
			}
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
		    } else {
			if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 0xa;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxDataOut = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RxCtrlOut = 3;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxByteWEn = 1;
			    }
			} else {
			    if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
				     != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeWaitCnt 
					= (0x1f & ((IData)(1) 
						   + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt)));
				    if ((0x1d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeWaitCnt))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 3;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected = 1;
				    }
				}
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
			    } else {
				if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__CurrState_prRxBit))) {
				    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBits) 
					 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_RXBitStMachCurrState = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_resumeDetected = 0;
				    }
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__NextState_prRxBit = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__next_processRxBitRdy = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}
