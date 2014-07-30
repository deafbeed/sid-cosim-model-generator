// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_SIETransmitter.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_SIETransmitter) {
    // Reset internal values
    // Reset structure values
    __PVT__CRC16Result = VL_RAND_RESET_I(16);
    __PVT__CRC16UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__CRC5Result = VL_RAND_RESET_I(5);
    __PVT__CRC5UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__JBit = VL_RAND_RESET_I(2);
    __PVT__KBit = VL_RAND_RESET_I(2);
    __PVT__SIEPortCtrlIn = VL_RAND_RESET_I(8);
    __PVT__SIEPortDataIn = VL_RAND_RESET_I(8);
    __PVT__SIEPortWEn = VL_RAND_RESET_I(1);
    __PVT__USBWireGnt = VL_RAND_RESET_I(1);
    __PVT__USBWireRdy = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRateIn = VL_RAND_RESET_I(1);
    __PVT__processTxByteRdy = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__CRC16En = VL_RAND_RESET_I(1);
    __PVT__CRC5En = VL_RAND_RESET_I(1);
    __PVT__CRC5_8Bit = VL_RAND_RESET_I(1);
    __PVT__CRCData = VL_RAND_RESET_I(8);
    __PVT__SIEPortTxRdy = VL_RAND_RESET_I(1);
    __PVT__TxByteOutCtrl = VL_RAND_RESET_I(8);
    __PVT__TxByteOutFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__TxByteOut = VL_RAND_RESET_I(8);
    __PVT__USBWireCtrl = VL_RAND_RESET_I(1);
    __PVT__USBWireData = VL_RAND_RESET_I(2);
    __PVT__USBWireFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__USBWireReq = VL_RAND_RESET_I(1);
    __PVT__USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__processTxByteWEn = VL_RAND_RESET_I(1);
    __PVT__rstCRC = VL_RAND_RESET_I(1);
    __PVT__next_CRC16En = VL_RAND_RESET_I(1);
    __PVT__next_CRC5En = VL_RAND_RESET_I(1);
    __PVT__next_CRC5_8Bit = VL_RAND_RESET_I(1);
    __PVT__next_CRCData = VL_RAND_RESET_I(8);
    __PVT__next_SIEPortTxRdy = VL_RAND_RESET_I(1);
    __PVT__next_TxByteOutCtrl = VL_RAND_RESET_I(8);
    __PVT__next_TxByteOutFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__next_TxByteOut = VL_RAND_RESET_I(8);
    __PVT__next_USBWireCtrl = VL_RAND_RESET_I(1);
    __PVT__next_USBWireData = VL_RAND_RESET_I(2);
    __PVT__next_USBWireFullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__next_USBWireReq = VL_RAND_RESET_I(1);
    __PVT__next_USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__next_processTxByteWEn = VL_RAND_RESET_I(1);
    __PVT__next_rstCRC = VL_RAND_RESET_I(1);
    __PVT__SIEPortCtrl = VL_RAND_RESET_I(8);
    __PVT__next_SIEPortCtrl = VL_RAND_RESET_I(8);
    __PVT__SIEPortData = VL_RAND_RESET_I(8);
    __PVT__next_SIEPortData = VL_RAND_RESET_I(8);
    __PVT__i = VL_RAND_RESET_I(3);
    __PVT__next_i = VL_RAND_RESET_I(3);
    __PVT__resumeCnt = VL_RAND_RESET_I(16);
    __PVT__next_resumeCnt = VL_RAND_RESET_I(16);
    __PVT__CurrState_SIETx = VL_RAND_RESET_I(6);
    __PVT__NextState_SIETx = VL_RAND_RESET_I(6);
    __Vdly__CurrState_SIETx = VL_RAND_RESET_I(6);
    __Vdly__SIEPortData = VL_RAND_RESET_I(8);
    __Vdly__SIEPortCtrl = VL_RAND_RESET_I(8);
    __Vdly__i = VL_RAND_RESET_I(3);
    __Vdly__resumeCnt = VL_RAND_RESET_I(16);
    __Vdly__processTxByteWEn = VL_RAND_RESET_I(1);
    __Vdly__TxByteOut = VL_RAND_RESET_I(8);
    __Vdly__TxByteOutCtrl = VL_RAND_RESET_I(8);
    __Vdly__USBWireData = VL_RAND_RESET_I(2);
    __Vdly__USBWireCtrl = VL_RAND_RESET_I(1);
    __Vdly__USBWireReq = VL_RAND_RESET_I(1);
    __Vdly__USBWireWEn = VL_RAND_RESET_I(1);
    __Vdly__rstCRC = VL_RAND_RESET_I(1);
    __Vdly__CRCData = VL_RAND_RESET_I(8);
    __Vdly__CRC5En = VL_RAND_RESET_I(1);
    __Vdly__CRC5_8Bit = VL_RAND_RESET_I(1);
    __Vdly__CRC16En = VL_RAND_RESET_I(1);
    __Vdly__SIEPortTxRdy = VL_RAND_RESET_I(1);
    __Vdly__TxByteOutFullSpeedRate = VL_RAND_RESET_I(1);
    __Vdly__USBWireFullSpeedRate = VL_RAND_RESET_I(1);
}

void VusbHostSlave_SIETransmitter::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_SIETransmitter::~VusbHostSlave_SIETransmitter() {
}

//--------------------
// Internal Methods

void VusbHostSlave_SIETransmitter::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SIETransmitter::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CurrState_SIETx 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__resumeCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortTxRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortTxRdy;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIETransmitter.v:667
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CurrState_SIETx 
	= ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rst)
	    ? 0x12 : (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx));
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIETransmitter.v:678
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortData = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortCtrl = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__resumeCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__processTxByteWEn = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutCtrl = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireData = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireCtrl = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireReq = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireWEn = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__rstCRC = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRCData = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5En = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5_8Bit = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC16En = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortTxRdy = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutFullSpeedRate = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireFullSpeedRate = 0;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortData 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortCtrl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__i 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__resumeCnt 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__processTxByteWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOut 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutCtrl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireData 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireCtrl 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireReq 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireWEn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__rstCRC 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRCData 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5En 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5_8Bit 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC16En 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortTxRdy 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutFullSpeedRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireFullSpeedRate 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate;
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CurrState_SIETx;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__resumeCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__TxByteOutFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortTxRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vdly__SIEPortTxRdy;
}

void VusbHostSlave_SIETransmitter::_combo__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SIETransmitter::_combo__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIETransmitter.v:206
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireFullSpeedRate;
    if (((((((((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
	       | (0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	      | (0x13 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	     | (0x14 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	    | (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	   | (0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	  | (0x1e == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	 | (0x38 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
	if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
	} else {
	    if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
	    } else {
		if ((0x13 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		    if (((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl)) 
			 & ((5 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 4))) 
			    | (0xc == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 4)))))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x28;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate = 1;
		    } else {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x28;
			} else {
			    if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2d;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 1;
			    } else {
				if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1b;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 1;
				} else {
				    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 4;
				    } else {
					if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1c;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 1;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate = 0;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
			if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x13;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn;
			}
		    } else {
			if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i 
				= (7 & ((IData)(1) 
					+ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i)));
			    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
			    } else {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x38;
			    }
			} else {
			    if ((0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i = 0;
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1e;
				}
			    } else {
				if ((0x1e == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
					    = (3 & 
					       VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2));
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1e;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
		   | (0x28 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		  | (0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		 | (0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		| (0x26 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	       | (0x27 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	      | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	     | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
		if ((1 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x21;
		} else {
		    if ((2 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1d;
		    } else {
			if ((3 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x25;
			} else {
			    if ((0 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1f;
			    }
			}
		    }
		}
	    } else {
		if ((0x28 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut = 0x80;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 0;
		    }
		} else {
		    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x27;
		    } else {
			if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
			} else {
			    if ((0x26 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xb;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
					= (0xff & (~ 
						   VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16Result), 0, 8)));
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
				}
			    } else {
				if ((0x27 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xd;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
					    = (0xff 
					       & (~ 
						  VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16Result), 8, 8)));
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
				    }
				} else {
				    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx 
					    = ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))
					        ? 0x26
					        : 0x2b);
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1a;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0x17 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
		       | (0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		      | (0x22 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		     | (0x2b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		    | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		   | (0x25 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		  | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		 | (0x1d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
		if ((0x17 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x22;
		} else {
		    if ((0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
			if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 3;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
			}
		    } else {
			if ((0x22 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En = 0;
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 5;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
			    }
			} else {
			    if ((0x2b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16UpdateRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x17;
				}
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1a;
				} else {
				    if ((0x25 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 6;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 1;
					}
				    } else {
					if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
					} else {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 7;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
						    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
			   | (0x1f == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			  | (0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			 | (0x16 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			| (0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		       | (0x24 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		      | (0x2c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		     | (8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
		    } else {
			if ((0x1f == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xa;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
			    }
			} else {
			    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x18;
			    } else {
				if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x24;
				} else {
				    if ((0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2c;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
					}
				    } else {
					if ((0x24 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 0;
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xc;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
						    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
					    }
					} else {
					    if ((0x2c 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5UpdateRdy) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x16;
						}
					    } else {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if (((((((((0x15 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
			       | (0x18 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			      | (0x20 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			     | (0x2a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			    | (9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			   | (0x21 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			  | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			 | (0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
			if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x20;
			} else {
			    if ((0x18 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2a;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
				}
			    } else {
				if ((0x20 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 0;
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 8;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
					    = VL_CONCAT_III(8,5,3, 
							    (0x1f 
							     & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5Result))), 
							    (7 
							     & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 3)));
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
				    }
				} else {
				    if ((0x2a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5UpdateRdy) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x15;
					}
				    } else {
					if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x19;
					} else {
					    if ((0x21 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 9;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
							= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 1;
						}
					    } else {
						if (
						    (1 
						     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx 
							= 
							((0x7530 
							  == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt))
							  ? 0x29
							  : 0x34);
						} else {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x37;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if (((((((((0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
				   | (0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				  | (0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				 | (0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				| (0x23 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			       | (0x29 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			      | (0x34 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			     | (0x35 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
			    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn;
			    } else {
				if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x35;
				} else {
				    if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x36;
				    } else {
					if ((0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x23;
					    }
					} else {
					    if ((0x23 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
							= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__KBit;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt 
							= 
							(0xffff 
							 & ((IData)(1) 
							    + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt)));
						}
					    } else {
						if (
						    (0x29 
						     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x10;
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
						    }
						} else {
						    if (
							(0x34 
							 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x23;
						    } else {
							if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x11;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if (((((((((0x36 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
				       | (0x37 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				      | (0x2d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				     | (0x2e == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				    | (0x2f == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				   | (0x30 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				  | (0x31 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				 | (0x32 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
				if ((0x36 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xe;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
				    }
				} else {
				    if ((0x37 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xf;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
					}
				    } else {
					if ((0x2d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x30;
					    }
					} else {
					    if ((0x2e 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x33;
					    } else {
						if (
						    (0x2f 
						     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x32;
						} else {
						    if (
							(0x30 
							 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
							if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2f;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
							}
						    } else {
							if (
							    (0x31 
							     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
							} else {
							    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2e;
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x33 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x31;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
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

void VusbHostSlave_SIETransmitter::_settle__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_SIETransmitter::_settle__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//SIETransmitter.v:206
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireFullSpeedRate;
    if (((((((((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
	       | (0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	      | (0x13 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	     | (0x14 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	    | (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	   | (0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	  | (0x1e == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	 | (0x38 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
	if ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
	} else {
	    if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
	    } else {
		if ((0x13 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		    if (((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl)) 
			 & ((5 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 4))) 
			    | (0xc == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 4)))))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x28;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate = 1;
		    } else {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x28;
			} else {
			    if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2d;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 1;
			    } else {
				if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1b;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 1;
				} else {
				    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 4;
				    } else {
					if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1c;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 1;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate = 0;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
			if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x13;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutFullSpeedRate 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn;
			}
		    } else {
			if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i 
				= (7 & ((IData)(1) 
					+ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i)));
			    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__i))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
			    } else {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x38;
			    }
			} else {
			    if ((0x1b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_i = 0;
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1e;
				}
			    } else {
				if ((0x1e == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
					    = (3 & 
					       VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2));
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1e;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
		   | (0x28 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		  | (0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		 | (0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		| (0x26 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	       | (0x27 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	      | (3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
	     | (5 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
		if ((1 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x21;
		} else {
		    if ((2 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1d;
		    } else {
			if ((3 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x25;
			} else {
			    if ((0 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 2)))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1f;
			    }
			}
		    }
		}
	    } else {
		if ((0x28 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 2;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut = 0x80;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 0;
		    }
		} else {
		    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x27;
		    } else {
			if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
			} else {
			    if ((0x26 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xb;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
					= (0xff & (~ 
						   VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16Result), 0, 8)));
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
				}
			    } else {
				if ((0x27 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xd;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
					    = (0xff 
					       & (~ 
						  VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16Result), 8, 8)));
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
				    }
				} else {
				    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx 
					    = ((4 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrl))
					        ? 0x26
					        : 0x2b);
				    } else {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1a;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0x17 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
		       | (0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		      | (0x22 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		     | (0x2b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		    | (6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		   | (0x25 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		  | (7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		 | (0x1d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
		if ((0x17 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
			= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x22;
		} else {
		    if ((0x1a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
			if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 3;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
			}
		    } else {
			if ((0x22 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC16En = 0;
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 5;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
			    }
			} else {
			    if ((0x2b == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16UpdateRdy) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x17;
				}
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x1a;
				} else {
				    if ((0x25 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 6;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 1;
					}
				    } else {
					if ((7 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
					} else {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 7;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
						    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
			   | (0x1f == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			  | (0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			 | (0x16 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			| (0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		       | (0x24 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		      | (0x2c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
		     | (8 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
		    } else {
			if ((0x1f == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xa;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
			    }
			} else {
			    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x18;
			    } else {
				if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 1;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x24;
				} else {
				    if ((0x19 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2c;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
					}
				    } else {
					if ((0x24 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 0;
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xc;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
						    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
					    }
					} else {
					    if ((0x2c 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5UpdateRdy) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x16;
						}
					    } else {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if (((((((((0x15 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
			       | (0x18 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			      | (0x20 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			     | (0x2a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			    | (9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			   | (0x21 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			  | (1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			 | (0xe == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
			if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRCData 
				= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5_8Bit = 0;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 1;
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x20;
			} else {
			    if ((0x18 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 1;
				if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2a;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortData 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortCtrl 
					= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_SIEPortTxRdy = 0;
				}
			    } else {
				if ((0x20 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_CRC5En = 0;
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 8;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
					    = VL_CONCAT_III(8,5,3, 
							    (0x1f 
							     & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5Result))), 
							    (7 
							     & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData), 0, 3)));
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 1;
				    }
				} else {
				    if ((0x2a == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5UpdateRdy) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x15;
					}
				    } else {
					if ((9 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x19;
					} else {
					    if ((0x21 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 9;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_processTxByteWEn = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOut 
							= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortData;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_TxByteOutCtrl = 2;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_rstCRC = 1;
						}
					    } else {
						if (
						    (1 
						     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx 
							= 
							((0x7530 
							  == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt))
							  ? 0x29
							  : 0x34);
						} else {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x37;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if (((((((((0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
				   | (0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				  | (0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				 | (0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				| (0x23 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			       | (0x29 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			      | (0x34 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
			     | (0x35 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
			    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireFullSpeedRate 
				    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn;
			    } else {
				if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x35;
				} else {
				    if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x36;
				    } else {
					if ((0x1c == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x23;
					    }
					} else {
					    if ((0x23 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
							= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__KBit;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_resumeCnt 
							= 
							(0xffff 
							 & ((IData)(1) 
							    + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__resumeCnt)));
						}
					    } else {
						if (
						    (0x29 
						     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x10;
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
						    }
						} else {
						    if (
							(0x34 
							 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
							vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x23;
						    } else {
							if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x11;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if (((((((((0x36 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)) 
				       | (0x37 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				      | (0x2d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				     | (0x2e == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				    | (0x2f == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				   | (0x30 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				  | (0x31 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) 
				 | (0x32 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx)))) {
				if ((0x36 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xe;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
				    }
				} else {
				    if ((0x37 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0xf;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
						= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 0;
					    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
					}
				    } else {
					if ((0x2d == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
					    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x30;
					    }
					} else {
					    if ((0x2e 
						 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x33;
					    } else {
						if (
						    (0x2f 
						     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
						    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x32;
						} else {
						    if (
							(0x30 
							 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
							if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2f;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
							}
						    } else {
							if (
							    (0x31 
							     == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireReq = 0;
							    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x14;
							} else {
							    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x2e;
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData = 0;
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
								vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x33 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CurrState_SIETx))) {
				    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy) {
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__NextState_SIETx = 0x31;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireData 
					    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireCtrl = 1;
					vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__next_USBWireWEn = 1;
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
