// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_processTxByte.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_processTxByte) {
    // Reset internal values
    // Reset structure values
    __PVT__JBit = VL_RAND_RESET_I(2);
    __PVT__KBit = VL_RAND_RESET_I(2);
    __PVT__TxByteCtrlIn = VL_RAND_RESET_I(8);
    __PVT__TxByteFullSpeedRateIn = VL_RAND_RESET_I(1);
    __PVT__TxByteIn = VL_RAND_RESET_I(8);
    __PVT__USBWireGnt = VL_RAND_RESET_I(1);
    __PVT__USBWireRdy = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__processTxByteWEn = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__USBWireCtrl = VL_RAND_RESET_I(1);
    __PVT__USBWireData = VL_RAND_RESET_I(2);
    __PVT__USBWireFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__USBWireReq = VL_RAND_RESET_I(1);
    __PVT__USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__processTxByteRdy = VL_RAND_RESET_I(1);
    __PVT__next_USBWireCtrl = VL_RAND_RESET_I(1);
    __PVT__next_USBWireData = VL_RAND_RESET_I(2);
    __PVT__next_USBWireFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__next_USBWireReq = VL_RAND_RESET_I(1);
    __PVT__next_USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__next_processTxByteRdy = VL_RAND_RESET_I(1);
    __PVT__TXLineState = VL_RAND_RESET_I(2);
    __PVT__next_TXLineState = VL_RAND_RESET_I(2);
    __PVT__TXOneCount = VL_RAND_RESET_I(4);
    __PVT__next_TXOneCount = VL_RAND_RESET_I(4);
    __PVT__TxByteCtrl = VL_RAND_RESET_I(8);
    __PVT__next_TxByteCtrl = VL_RAND_RESET_I(8);
    __PVT__TxByteFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__next_TxByteFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__TxByte = VL_RAND_RESET_I(8);
    __PVT__next_TxByte = VL_RAND_RESET_I(8);
    __PVT__i = VL_RAND_RESET_I(4);
    __PVT__next_i = VL_RAND_RESET_I(4);
    __PVT__CurrState_prcTxB = VL_RAND_RESET_I(5);
    __PVT__NextState_prcTxB = VL_RAND_RESET_I(5);
    __Vdly__CurrState_prcTxB = VL_RAND_RESET_I(5);
    __Vdly__i = VL_RAND_RESET_I(4);
    __Vdly__TxByte = VL_RAND_RESET_I(8);
    __Vdly__TxByteCtrl = VL_RAND_RESET_I(8);
    __Vdly__TXLineState = VL_RAND_RESET_I(2);
    __Vdly__TXOneCount = VL_RAND_RESET_I(4);
    __Vdly__TxByteFullSpeedRate = VL_RAND_RESET_I(1);
    __Vdly__processTxByteRdy = VL_RAND_RESET_I(1);
    __Vdly__USBWireData = VL_RAND_RESET_I(2);
    __Vdly__USBWireCtrl = VL_RAND_RESET_I(1);
    __Vdly__USBWireReq = VL_RAND_RESET_I(1);
    __Vdly__USBWireWEn = VL_RAND_RESET_I(1);
    __Vdly__USBWireFullSpeedRate = VL_RAND_RESET_I(1);
}

void VusbHostSlave_processTxByte::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_processTxByte::~VusbHostSlave_processTxByte() {
}

//--------------------
// Internal Methods

void VusbHostSlave_processTxByte::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processTxByte::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__CurrState_prcTxB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXLineState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXOneCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireFullSpeedRate;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processTxByte.v:416
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__CurrState_prcTxB 
	= ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB));
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processTxByte.v:427
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByte = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteCtrl = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXLineState = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXOneCount = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteFullSpeedRate = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__processTxByteRdy = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireData = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireCtrl = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireReq = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireWEn = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireFullSpeedRate = 0;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__i 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByte 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteCtrl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXLineState 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXOneCount 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteFullSpeedRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__processTxByteRdy 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireData 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireCtrl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireReq 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireFullSpeedRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate;
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__CurrState_prcTxB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXOneCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TXLineState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByteCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__TxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vdly__USBWireData;
}

void VusbHostSlave_processTxByte::_combo__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processTxByte::_combo__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processTxByte.v:152
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRate;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	      | (8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	     | (0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	    | (0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	   | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	  | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	 | (4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 1;
		if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteWEn) 
		     & (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 8;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq = 1;
		} else {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteWEn) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
		    }
		}
	    } else {
		if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireGnt) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xf;
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) 
			     & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRate)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x13;
			} else {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x10;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
			    }
			}
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i 
				    = (0xf & ((IData)(1) 
					      + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i)));
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
				    = VL_EXTEND_II(8,7, 
						   (0x7f 
						    & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte), 1, 7)));
				if ((1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte), 0))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount 
					= (0xf & ((IData)(1) 
						  + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount)));
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
					= (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState) 
					    == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit))
					    ? (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__KBit)
					    : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit));
				}
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 3;
			    } else {
				if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 4;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
					= ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount))
					    ? 5 : (
						   (8 
						    != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i))
						    ? 2
						    : 0xb));
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)) 
		   | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		  | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		 | (9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		| (0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	       | (0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	      | (0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	     | (0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)))) {
	    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
		    = (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState) 
			== (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit))
		        ? (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__KBit)
		        : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit));
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 6;
	    } else {
		if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 7;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
		    }
		} else {
		    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
			    = ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i))
			        ? 0xb : 2);
		    } else {
			if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x1a;
			} else {
			    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x19;
			    } else {
				if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
					= ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrl))
					    ? 0xa : 1);
				} else {
				    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x1b;
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x1c;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)) 
		       | (0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		      | (0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		     | (0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		    | (0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		   | (0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		  | (0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		 | (0x13 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)))) {
		if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 1;
		} else {
		    if ((0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 9;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
			}
		    } else {
			if ((0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xc;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
			    }
			} else {
			    if ((0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xd;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				}
			    } else {
				if ((0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xe;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
				    }
				} else {
				    if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x17;
				    } else {
					if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x18;
					} else {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x14;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
						    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x16;
		} else {
		    if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
		    } else {
			if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x11;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
			    }
			} else {
			    if ((0x17 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x12;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
				}
			    } else {
				if ((0x18 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x15;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_processTxByte::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processTxByte::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processTxByte.v:152
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRate;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	      | (8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	     | (0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	    | (0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	   | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	  | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	 | (4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 1;
		if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteWEn) 
		     & (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 8;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq = 1;
		} else {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteWEn) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_processTxByteRdy = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteCtrl 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByteFullSpeedRate 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireFullSpeedRate 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
		    }
		}
	    } else {
		if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireGnt) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xf;
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) 
			     & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRate)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x13;
			} else {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x10;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
			    }
			}
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i 
				    = (0xf & ((IData)(1) 
					      + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i)));
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TxByte 
				    = VL_EXTEND_II(8,7, 
						   (0x7f 
						    & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte), 1, 7)));
				if ((1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByte), 0))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount 
					= (0xf & ((IData)(1) 
						  + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount)));
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
					= (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState) 
					    == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit))
					    ? (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__KBit)
					    : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit));
				}
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 3;
			    } else {
				if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 4;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
					= ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXOneCount))
					    ? 5 : (
						   (8 
						    != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i))
						    ? 2
						    : 0xb));
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)) 
		   | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		  | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		 | (9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		| (0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	       | (0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	      | (0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
	     | (0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)))) {
	    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXOneCount = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_TXLineState 
		    = (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState) 
			== (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit))
		        ? (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__KBit)
		        : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit));
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 6;
	    } else {
		if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 7;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TXLineState;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
		    }
		} else {
		    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
			    = ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__i))
			        ? 0xb : 2);
		    } else {
			if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x1a;
			} else {
			    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x19;
			    } else {
				if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB 
					= ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrl))
					    ? 0xa : 1);
				} else {
				    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x1b;
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x1c;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)) 
		       | (0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		      | (0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		     | (0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		    | (0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		   | (0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		  | (0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) 
		 | (0x13 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB)))) {
		if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireReq = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 1;
		} else {
		    if ((0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 9;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
			}
		    } else {
			if ((0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xc;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
			    }
			} else {
			    if ((0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xd;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				}
			    } else {
				if ((0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0xe;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
				    }
				} else {
				    if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x17;
				    } else {
					if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x18;
					} else {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x14;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
						    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x16;
		} else {
		    if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_i = 0;
		    } else {
			if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x11;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
			    }
			} else {
			    if ((0x17 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x12;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 0;
				}
			    } else {
				if ((0x18 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__CurrState_prcTxB))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__NextState_prcTxB = 0x15;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__next_USBWireCtrl = 1;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}
