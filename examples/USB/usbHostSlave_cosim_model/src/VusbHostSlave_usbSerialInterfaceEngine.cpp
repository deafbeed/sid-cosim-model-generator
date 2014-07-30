// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_usbSerialInterfaceEngine.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_usbSerialInterfaceEngine) {
    VL_CELL (__PVT__u_lineControlUpdate, VusbHostSlave_lineControlUpdate);
    VL_CELL (__PVT__u_SIEReceiver, VusbHostSlave_SIEReceiver);
    VL_CELL (__PVT__u_processRxBit, VusbHostSlave_processRxBit);
    VL_CELL (__PVT__u_processRxByte, VusbHostSlave_processRxByte);
    VL_CELL (__PVT__RxUpdateCRC5, VusbHostSlave_updateCRC5);
    VL_CELL (__PVT__RxUpdateCRC16, VusbHostSlave_updateCRC16);
    VL_CELL (__PVT__u_SIETransmitter, VusbHostSlave_SIETransmitter);
    VL_CELL (__PVT__TxUpdateCRC5, VusbHostSlave_updateCRC5);
    VL_CELL (__PVT__TxUpdateCRC16, VusbHostSlave_updateCRC16);
    VL_CELL (__PVT__u_processTxByte, VusbHostSlave_processTxByte);
    VL_CELL (__PVT__u_USBTxWireArbiter, VusbHostSlave_USBTxWireArbiter);
    VL_CELL (__PVT__u_writeUSBWireData, VusbHostSlave_writeUSBWireData);
    VL_CELL (__PVT__u_readUSBWireData, VusbHostSlave_readUSBWireData);
    // Reset internal values
    // Reset structure values
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__USBWireDataIn = VL_RAND_RESET_I(2);
    __PVT__USBWireDataInTick = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOut = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnable = VL_RAND_RESET_I(1);
    __PVT__USBWireDataOut = VL_RAND_RESET_I(2);
    __PVT__USBWireCtrlOut = VL_RAND_RESET_I(1);
    __PVT__USBWireDataOutTick = VL_RAND_RESET_I(1);
    __PVT__connectState = VL_RAND_RESET_I(2);
    __PVT__resumeDetected = VL_RAND_RESET_I(1);
    __PVT__RxCtrlOut = VL_RAND_RESET_I(8);
    __PVT__RxDataOutWEn = VL_RAND_RESET_I(1);
    __PVT__RxDataOut = VL_RAND_RESET_I(8);
    __PVT__SIEPortCtrlIn = VL_RAND_RESET_I(8);
    __PVT__SIEPortDataIn = VL_RAND_RESET_I(8);
    __PVT__SIEPortTxRdy = VL_RAND_RESET_I(1);
    __PVT__SIEPortWEn = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolarity = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRate = VL_RAND_RESET_I(1);
    __PVT__processRxBitsWEn = VL_RAND_RESET_I(1);
    __PVT__processRxBitRdy = VL_RAND_RESET_I(1);
    __PVT__RxWireDataFromWireRx = VL_RAND_RESET_I(2);
    __PVT__RxWireDataWEn = VL_RAND_RESET_I(1);
    __PVT__TxWireActiveDrive = VL_RAND_RESET_I(1);
    __PVT__TxBitsFromArbToWire = VL_RAND_RESET_I(2);
    __PVT__TxCtrlFromArbToWire = VL_RAND_RESET_I(1);
    __PVT__USBWireRdy = VL_RAND_RESET_I(1);
    __PVT__USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__USBWireReadyFromTxArb = VL_RAND_RESET_I(1);
    __PVT__prcTxByteCtrl = VL_RAND_RESET_I(1);
    __PVT__prcTxByteData = VL_RAND_RESET_I(2);
    __PVT__prcTxByteGnt = VL_RAND_RESET_I(1);
    __PVT__prcTxByteReq = VL_RAND_RESET_I(1);
    __PVT__prcTxByteWEn = VL_RAND_RESET_I(1);
    __PVT__SIETxCtrl = VL_RAND_RESET_I(1);
    __PVT__SIETxData = VL_RAND_RESET_I(2);
    __PVT__SIETxGnt = VL_RAND_RESET_I(1);
    __PVT__SIETxReq = VL_RAND_RESET_I(1);
    __PVT__SIETxWEn = VL_RAND_RESET_I(1);
    __PVT__TxByteFromSIEToPrcTxByte = VL_RAND_RESET_I(8);
    __PVT__TxCtrlFromSIEToPrcTxByte = VL_RAND_RESET_I(8);
    __PVT__JBit = VL_RAND_RESET_I(2);
    __PVT__KBit = VL_RAND_RESET_I(2);
    __PVT__processRxByteWEn = VL_RAND_RESET_I(1);
    __PVT__RxDataFromPrcRxBitToPrcRxByte = VL_RAND_RESET_I(8);
    __PVT__RxCtrlFromPrcRxBitToPrcRxByte = VL_RAND_RESET_I(8);
    __PVT__processRxByteRdy = VL_RAND_RESET_I(1);
    __PVT__RxCRC16En = VL_RAND_RESET_I(1);
    __PVT__RxCRC16Result = VL_RAND_RESET_I(16);
    __PVT__RxCRC16UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__RxCRC5En = VL_RAND_RESET_I(1);
    __PVT__RxCRC5Result = VL_RAND_RESET_I(5);
    __PVT__RxCRC5_8Bit = VL_RAND_RESET_I(1);
    __PVT__RxCRCData = VL_RAND_RESET_I(8);
    __PVT__RxRstCRC = VL_RAND_RESET_I(1);
    __PVT__RxCRC5UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__TxCRC16En = VL_RAND_RESET_I(1);
    __PVT__TxCRC16Result = VL_RAND_RESET_I(16);
    __PVT__TxCRC16UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__TxCRC5En = VL_RAND_RESET_I(1);
    __PVT__TxCRC5Result = VL_RAND_RESET_I(5);
    __PVT__TxCRC5_8Bit = VL_RAND_RESET_I(1);
    __PVT__TxCRCData = VL_RAND_RESET_I(8);
    __PVT__TxRstCRC = VL_RAND_RESET_I(1);
    __PVT__TxCRC5UpdateRdy = VL_RAND_RESET_I(1);
    __PVT__processTxByteRdy = VL_RAND_RESET_I(1);
    __PVT__processTxByteWEn = VL_RAND_RESET_I(1);
    __PVT__SIEFsRate = VL_RAND_RESET_I(1);
    __PVT__TxFSRateFromSIETxToPrcTxByte = VL_RAND_RESET_I(1);
    __PVT__prcTxByteFSRate = VL_RAND_RESET_I(1);
    __PVT__FSRateFromArbiterToWire = VL_RAND_RESET_I(1);
    __PVT__RxWireActive = VL_RAND_RESET_I(1);
}

void VusbHostSlave_usbSerialInterfaceEngine::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_usbSerialInterfaceEngine::~VusbHostSlave_usbSerialInterfaceEngine() {
}

//--------------------
// Internal Methods

void VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
}

void VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxGnt;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__connectState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__connectState;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__ready;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__ready;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__ready;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__ready;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__noActivityTimeOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireActive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__SIERxWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataFromWireRx 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataInTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxDataInTick;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteFSRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireData;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxBitRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__resumeDetected 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlFromPrcRxBitToPrcRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataFromPrcRxBitToPrcRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxDataOut;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOutTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxDataOutTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__USBWireRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxRstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxByteFromSIEToPrcTxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromSIEToPrcTxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxFSRateFromSIETxToPrcTxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEFsRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortTxRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortTxRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxRstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOutWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOutWEn;
}

void VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataIn;
}

void VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__connectState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__connectState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__ready;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__ready;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__ready;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCResult;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__ready;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__noActivityTimeOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireActive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__SIERxWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataFromWireRx 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataInTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxDataInTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteFSRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxBitRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__resumeDetected 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlFromPrcRxBitToPrcRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataFromPrcRxBitToPrcRxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOutTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxDataOutTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__USBWireRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxRstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxByteFromSIEToPrcTxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromSIEToPrcTxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxFSRateFromSIETxToPrcTxByte 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__TxByteOutFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEFsRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireFullSpeedRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortTxRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5_8Bit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16En 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxRstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRCData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOutWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16UpdateRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5UpdateRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16UpdateRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5UpdateRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxWireActive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireActive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataFromWireRx;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataFromWireRx;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteFSRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteFSRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__SIERxRdyIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxBitRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxDataInWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlFromPrcRxBitToPrcRxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByteIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataFromPrcRxBitToPrcRxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRC5_8BitIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxByteFromSIEToPrcTxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromSIEToPrcTxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxFSRateFromSIETxToPrcTxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxFSRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEFsRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRC5_8BitIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxWireActiveDrive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxWireActiveDrive;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteGnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireGnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxGnt;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16UpdateRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__CRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5UpdateRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC16UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16UpdateRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5Result 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5Result;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__CRC5UpdateRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5UpdateRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxWireActive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireActive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxBitsWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__RxWireDataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataFromWireRx;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__RxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxWireDataFromWireRx;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__processTxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteFSRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteFSRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__prcTxByteData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__prcTxByteData;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__SIERxRdyIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxBitRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__processRxDataInWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlFromPrcRxBitToPrcRxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxByteIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataFromPrcRxBitToPrcRxByte;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxWireActiveDrive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxWireActiveDrive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__TxWireActiveDrive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxWireActiveDrive;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRC5_8BitIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxReq 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxReq;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__processTxByteWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processTxByteWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxByteFromSIEToPrcTxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromSIEToPrcTxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__TxByteFullSpeedRateIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxFSRateFromSIETxToPrcTxByte;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxData 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxCtrl 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxCtrl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIETxWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__SIETxFSRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEFsRate;
}

void VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_sequent__TOP__v__u_usbSerialInterfaceEngine__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__CRC5_8BitIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC5_8Bit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__CRCEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRC16En;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__rstCRC 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxRstCRC;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCRCData;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__processRxByteRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__processRxByteRdy;
}

void VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__TxWireActiveDrive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxWireActiveDrive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
}

void VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireReadyFromTxArb 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxBitsFromArbToWire 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromArbToWire 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxCtl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__FSRateFromArbiterToWire 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxFSRate;
}

void VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireReadyFromTxArb 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireRdyOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxBitsFromArbToWire 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxBits;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromArbToWire 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxCtl;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__FSRateFromArbiterToWire 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__TxFSRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireReadyFromTxArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireReadyFromTxArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxBitsFromArbToWire;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromArbToWire;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__FSRateFromArbiterToWire;
}

void VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireReadyFromTxArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireReadyFromTxArb;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__USBWireWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxBitsFromArbToWire;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__TxCtrlFromArbToWire;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__FSRateFromArbiterToWire;
}

void VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__33(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__33\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__noActivityTimeOutEnable 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOutEnable;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortCtrlIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortDataIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__fullSpeedBitRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__fullSpeedPolarity 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedPolarity;
}

void VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__34(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__34\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__noActivityTimeOutEnable 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOutEnable;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortCtrlIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortCtrlIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortDataIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortDataIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__SIEPortWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__fullSpeedBitRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__fullSpeedRateIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__fullSpeedPolarity 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedPolarity;
}

void VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__35(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__35\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__KBit;
}

void VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__36(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_settle__TOP__v__u_usbSerialInterfaceEngine__36\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__KBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit;
}

void VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__37(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSerialInterfaceEngine::_combo__TOP__v__u_usbSerialInterfaceEngine__37\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__JBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__JBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__KBit 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__KBit;
}
