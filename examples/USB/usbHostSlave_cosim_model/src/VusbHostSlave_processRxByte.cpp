// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_processRxByte.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_processRxByte) {
    // Reset internal values
    // Reset structure values
    __PVT__CRC16Result = VL_RAND_RESET_I(16);
    __PVT__CRC16UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__CRC5Result = VL_RAND_RESET_I(5);
    __PVT__CRC5UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__RxByteIn = VL_RAND_RESET_I(8);
    __PVT__RxCtrlIn = VL_RAND_RESET_I(8);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__processRxDataInWEn = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__CRC16En = VL_RAND_RESET_I(1);
    __PVT__CRC5En = VL_RAND_RESET_I(1);
    __PVT__CRC5_8Bit = VL_RAND_RESET_I(1);
    __PVT__CRCData = VL_RAND_RESET_I(8);
    __PVT__RxCtrlOut = VL_RAND_RESET_I(8);
    __PVT__RxDataOutWEn = VL_RAND_RESET_I(1);
    __PVT__RxDataOut = VL_RAND_RESET_I(8);
    __PVT__processRxByteRdy = VL_RAND_RESET_I(1);
    __PVT__rstCRC = VL_RAND_RESET_I(1);
    __PVT__next_CRC16En = VL_RAND_RESET_I(1);
    __PVT__next_CRC5En = VL_RAND_RESET_I(1);
    __PVT__next_CRC5_8Bit = VL_RAND_RESET_I(1);
    __PVT__next_CRCData = VL_RAND_RESET_I(8);
    __PVT__next_RxCtrlOut = VL_RAND_RESET_I(8);
    __PVT__next_RxDataOutWEn = VL_RAND_RESET_I(1);
    __PVT__next_RxDataOut = VL_RAND_RESET_I(8);
    __PVT__next_processRxByteRdy = VL_RAND_RESET_I(1);
    __PVT__next_rstCRC = VL_RAND_RESET_I(1);
    __PVT__ACKRxed = VL_RAND_RESET_I(1);
    __PVT__next_ACKRxed = VL_RAND_RESET_I(1);
    __PVT__CRCError = VL_RAND_RESET_I(1);
    __PVT__next_CRCError = VL_RAND_RESET_I(1);
    __PVT__NAKRxed = VL_RAND_RESET_I(1);
    __PVT__next_NAKRxed = VL_RAND_RESET_I(1);
    __PVT__RXByteStMachCurrState = VL_RAND_RESET_I(3);
    __PVT__next_RXByteStMachCurrState = VL_RAND_RESET_I(3);
    __PVT__RXDataByteCnt = VL_RAND_RESET_I(10);
    __PVT__next_RXDataByteCnt = VL_RAND_RESET_I(10);
    __PVT__RxByte = VL_RAND_RESET_I(8);
    __PVT__next_RxByte = VL_RAND_RESET_I(8);
    __PVT__RxCtrl = VL_RAND_RESET_I(8);
    __PVT__next_RxCtrl = VL_RAND_RESET_I(8);
    __PVT__RxOverflow = VL_RAND_RESET_I(1);
    __PVT__next_RxOverflow = VL_RAND_RESET_I(1);
    __PVT__RxStatus = VL_RAND_RESET_I(8);
    __PVT__RxTimeOut = VL_RAND_RESET_I(1);
    __PVT__next_RxTimeOut = VL_RAND_RESET_I(1);
    __PVT__Signal1 = VL_RAND_RESET_I(1);
    __PVT__next_Signal1 = VL_RAND_RESET_I(1);
    __PVT__bitStuffError = VL_RAND_RESET_I(1);
    __PVT__next_bitStuffError = VL_RAND_RESET_I(1);
    __PVT__dataSequence = VL_RAND_RESET_I(1);
    __PVT__next_dataSequence = VL_RAND_RESET_I(1);
    __PVT__stallRxed = VL_RAND_RESET_I(1);
    __PVT__next_stallRxed = VL_RAND_RESET_I(1);
    __PVT__CurrState_prRxByte = VL_RAND_RESET_I(4);
    __PVT__NextState_prRxByte = VL_RAND_RESET_I(4);
    __Vdly__CurrState_prRxByte = VL_RAND_RESET_I(4);
    __Vdly__RxByte = VL_RAND_RESET_I(8);
    __Vdly__RxCtrl = VL_RAND_RESET_I(8);
    __Vdly__RXByteStMachCurrState = VL_RAND_RESET_I(3);
    __Vdly__CRCError = VL_RAND_RESET_I(1);
    __Vdly__bitStuffError = VL_RAND_RESET_I(1);
    __Vdly__RxOverflow = VL_RAND_RESET_I(1);
    __Vdly__RxTimeOut = VL_RAND_RESET_I(1);
    __Vdly__NAKRxed = VL_RAND_RESET_I(1);
    __Vdly__stallRxed = VL_RAND_RESET_I(1);
    __Vdly__ACKRxed = VL_RAND_RESET_I(1);
    __Vdly__dataSequence = VL_RAND_RESET_I(1);
    __Vdly__RXDataByteCnt = VL_RAND_RESET_I(10);
    __Vdly__RxDataOut = VL_RAND_RESET_I(8);
    __Vdly__RxCtrlOut = VL_RAND_RESET_I(8);
    __Vdly__RxDataOutWEn = VL_RAND_RESET_I(1);
    __Vdly__rstCRC = VL_RAND_RESET_I(1);
    __Vdly__CRCData = VL_RAND_RESET_I(8);
    __Vdly__CRC5En = VL_RAND_RESET_I(1);
    __Vdly__CRC5_8Bit = VL_RAND_RESET_I(1);
    __Vdly__CRC16En = VL_RAND_RESET_I(1);
    __Vdly__processRxByteRdy = VL_RAND_RESET_I(1);
}

void VusbHostSlave_processRxByte::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_processRxByte::~VusbHostSlave_processRxByte() {
}

//--------------------
// Internal Methods

void VusbHostSlave_processRxByte::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processRxByte::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CurrState_prRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXDataByteCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXByteStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxOverflow 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxOverflow;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxTimeOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__NAKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NAKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__stallRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__stallRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__ACKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__dataSequence 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOutWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOutWEn;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxByte.v:443
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CurrState_prRxByte 
	= ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rst)
	    ? 1 : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte));
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxByte.v:454
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxByte = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrl = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXByteStMachCurrState = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCError = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__bitStuffError = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxOverflow = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxTimeOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__NAKRxed = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__stallRxed = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__ACKRxed = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__dataSequence = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXDataByteCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrlOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOutWEn = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__rstCRC = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCData = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5En = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5_8Bit = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC16En = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__processRxByteRdy = 1;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxByte 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxByte;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXByteStMachCurrState 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCError 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__bitStuffError 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxOverflow 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxTimeOut 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxTimeOut;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__NAKRxed 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__stallRxed 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__ACKRxed 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__dataSequence 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXDataByteCnt 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOut 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrlOut 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOutWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__rstCRC 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCData 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5En 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5_8Bit 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5_8Bit;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC16En 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__processRxByteRdy 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy;
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CurrState_prRxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__ACKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__ACKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__stallRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__stallRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NAKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__NAKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxTimeOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxOverflow 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxOverflow;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXByteStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__dataSequence 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__dataSequence;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RXDataByteCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__processRxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOutWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vdly__RxDataOutWEn;
}

void VusbHostSlave_processRxByte::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processRxByte::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxByte.v:165
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxOverflow;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxTimeOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NAKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__stallRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxByteRdy;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	     | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	    | (8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	 | (0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
	    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 8;
	    } else {
		if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xd;
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xe;
		    } else {
			if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 3;
			} else {
			    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 4;
			    } else {
				if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 5;
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxByte = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxTimeOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5_8Bit = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxDataInWEn) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxByte 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByteIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrl 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 0;
		    }
		} else {
		    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
		    } else {
			if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 7;
			    if ((1 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 1;
			    }
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
			} else {
			    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				if ((0xf != (0xf & 
					     (VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 4, 4) 
					      ^ VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 4))))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 6;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxTimeOut = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC = 1;
				}
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
				    if ((0 == (3 & 
					       VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
				    } else {
					if ((1 == (3 
						   & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 4;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
					} else {
					    if ((2 
						 == 
						 (3 
						  & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
						if (
						    (0 
						     == 
						     (3 
						      & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2)))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed = 1;
						} else {
						    if (
							(2 
							 == 
							 (3 
							  & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2)))) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed = 1;
						    } else {
							if (VL_LIKELY(
								      (3 
								       == 
								       (3 
									& VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2))))) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed = 1;
							} else {
							    VL_WRITEF("Invalid Handshake PID detected in ProcessRXByte\n\n");
							}
						    }
						}
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 3;
					    } else {
						if (
						    (3 
						     == 
						     (3 
						      & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
						    if (
							(0 
							 == 
							 (3 
							  & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2)))) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 0;
						    } else {
							if (VL_LIKELY(
								      (2 
								       == 
								       (3 
									& VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2))))) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 1;
							} else {
							    VL_WRITEF("Invalid DATA PID detected in ProcessRXByte\n\n");
							}
						    }
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 5;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
						}
					    }
					}
				    }
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt 
		= (0x3ff & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt)));
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
		if ((0xb001 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16Result))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 1;
		}
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		} else {
		    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En = 1;
		    } else {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		    }
		}
	    }
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xb;
	} else {
	    if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16UpdateRdy) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xc;
		}
	    } else {
		if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt 
			= (0x3ff & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt)));
		    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
			if ((6 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5Result))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 1;
			}
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		    } else {
			if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
				if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt) 
				     > 2)) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5_8Bit = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En = 1;
				}
			    } else {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
			    }
			}
		    }
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xa;
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
		    } else {
			if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5UpdateRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 9;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState 
				    = ((0x80 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte))
				        ? 2 : 0);
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
			    } else {
				if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 1;
				    }
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_processRxByte::_combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processRxByte::_combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxByte.v:165
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxOverflow;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxTimeOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NAKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__stallRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxByteRdy;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	     | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	    | (8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	   | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) 
	 | (0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
	    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 8;
	    } else {
		if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xd;
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xe;
		    } else {
			if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 3;
			} else {
			    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 4;
			    } else {
				if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXByteStMachCurrState))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 5;
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxByte = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxTimeOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5_8Bit = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxDataInWEn) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxByte 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByteIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrl 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlIn;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 0;
		    }
		} else {
		    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
		    } else {
			if ((8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 7;
			    if ((1 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 1;
			    }
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
			} else {
			    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				if ((0xf != (0xf & 
					     (VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 4, 4) 
					      ^ VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 4))))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 6;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxTimeOut = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC = 1;
				}
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_rstCRC = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
				    if ((0 == (3 & 
					       VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
				    } else {
					if ((1 == (3 
						   & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 4;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
					} else {
					    if ((2 
						 == 
						 (3 
						  & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
						if (
						    (0 
						     == 
						     (3 
						      & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2)))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed = 1;
						} else {
						    if (
							(2 
							 == 
							 (3 
							  & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2)))) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed = 1;
						    } else {
							if (VL_LIKELY(
								      (3 
								       == 
								       (3 
									& VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2))))) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed = 1;
							} else {
							    VL_WRITEF("Invalid Handshake PID detected in ProcessRXByte\n\n");
							}
						    }
						}
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 3;
					    } else {
						if (
						    (3 
						     == 
						     (3 
						      & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 0, 2)))) {
						    if (
							(0 
							 == 
							 (3 
							  & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2)))) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 0;
						    } else {
							if (VL_LIKELY(
								      (2 
								       == 
								       (3 
									& VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte), 2, 2))))) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence = 1;
							} else {
							    VL_WRITEF("Invalid DATA PID detected in ProcessRXByte\n\n");
							}
						    }
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 5;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt = 0;
						}
					    }
					}
				    }
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt 
		= (0x3ff & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt)));
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
		if ((0xb001 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16Result))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 1;
		}
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
		    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
	    } else {
		if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		} else {
		    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC16En = 1;
		    } else {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		    }
		}
	    }
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xb;
	} else {
	    if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16UpdateRdy) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xc;
		}
	    } else {
		if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXDataByteCnt 
			= (0x3ff & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt)));
		    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
			if ((6 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5Result))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError = 1;
			}
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
			    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
		    } else {
			if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
				if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RXDataByteCnt) 
				     > 2)) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOut 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxCtrlOut = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5_8Bit = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En = 1;
				}
			    } else {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 0;
			    }
			}
		    }
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 0xa;
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRC5En = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxDataOutWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
		    } else {
			if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5UpdateRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 9;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState 
				    = ((0x80 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByte))
				        ? 2 : 0);
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
			    } else {
				if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CurrState_prRxByte))) {
				    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrl))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RXByteStMachCurrState = 1;
				    }
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__NextState_prRxByte = 2;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_processRxByteRdy = 1;
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxByte.v:145
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus 
	= VL_CONCAT_III(8,2,6, VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence)), 
			VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed), 
				      VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed), 
						    VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed), 
								  VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError)))))));
}

void VusbHostSlave_processRxByte::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_processRxByte::_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//processRxByte.v:145
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus 
	= VL_CONCAT_III(8,2,6, VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_dataSequence)), 
			VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_ACKRxed), 
				      VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_stallRxed), 
						    VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_NAKRxed), 
								  VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_RxOverflow), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_bitStuffError), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__next_CRCError)))))));
}
