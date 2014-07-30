// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_usbHostControl.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_usbHostControl) {
    VL_CELL (__PVT__u_USBHostControlBI, VusbHostSlave_USBHostControlBI);
    VL_CELL (__PVT__u_hostController, VusbHostSlave_hostcontroller);
    VL_CELL (__PVT__u_SOFController, VusbHostSlave_SOFController);
    VL_CELL (__PVT__u_SOFTransmit, VusbHostSlave_SOFTransmit);
    VL_CELL (__PVT__u_sendPacketArbiter, VusbHostSlave_sendPacketArbiter);
    VL_CELL (__PVT__u_sendPacketCheckPreamble, VusbHostSlave_sendPacketCheckPreamble);
    VL_CELL (__PVT__u_sendPacket, VusbHostSlave_sendPacket);
    VL_CELL (__PVT__u_directControl, VusbHostSlave_directControl);
    VL_CELL (__PVT__u_HCTxPortArbiter, VusbHostSlave_HCTxPortArbiter);
    VL_CELL (__PVT__u_getPacket, VusbHostSlave_getPacket);
    VL_CELL (__PVT__u_rxStatusMonitor, VusbHostSlave_rxStatusMonitor);
    // Reset internal values
    // Reset structure values
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__TxFifoRE = VL_RAND_RESET_I(1);
    __PVT__TxFifoData = VL_RAND_RESET_I(8);
    __PVT__TxFifoEmpty = VL_RAND_RESET_I(1);
    __PVT__RxFifoWE = VL_RAND_RESET_I(1);
    __PVT__RxFifoData = VL_RAND_RESET_I(8);
    __PVT__RxFifoFull = VL_RAND_RESET_I(1);
    __PVT__RxByteStatus = VL_RAND_RESET_I(8);
    __PVT__RxData = VL_RAND_RESET_I(8);
    __PVT__RxDataValid = VL_RAND_RESET_I(1);
    __PVT__SIERxTimeOut = VL_RAND_RESET_I(1);
    __PVT__SIERxTimeOutEn = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPol = VL_RAND_RESET_I(1);
    __PVT__HCTxPortEn = VL_RAND_RESET_I(1);
    __PVT__HCTxPortRdy = VL_RAND_RESET_I(1);
    __PVT__HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__HCTxPortCtrl = VL_RAND_RESET_I(8);
    __PVT__connectStateIn = VL_RAND_RESET_I(2);
    __PVT__resumeDetectedIn = VL_RAND_RESET_I(1);
    __PVT__busAddress = VL_RAND_RESET_I(4);
    __PVT__busDataIn = VL_RAND_RESET_I(8);
    __PVT__busDataOut = VL_RAND_RESET_I(8);
    __PVT__busWriteEn = VL_RAND_RESET_I(1);
    __PVT__busStrobe_i = VL_RAND_RESET_I(1);
    __PVT__SOFSentIntOut = VL_RAND_RESET_I(1);
    __PVT__connEventIntOut = VL_RAND_RESET_I(1);
    __PVT__resumeIntOut = VL_RAND_RESET_I(1);
    __PVT__transDoneIntOut = VL_RAND_RESET_I(1);
    __PVT__hostControlSelect = VL_RAND_RESET_I(1);
    __PVT__frameNum = VL_RAND_RESET_I(11);
    __PVT__SOFSent = VL_RAND_RESET_I(1);
    __PVT__SOFTimerClr = VL_RAND_RESET_I(1);
    __PVT__getPacketREn = VL_RAND_RESET_I(1);
    __PVT__getPacketRdy = VL_RAND_RESET_I(1);
    __PVT__HCTxGnt = VL_RAND_RESET_I(1);
    __PVT__HCTxReq = VL_RAND_RESET_I(1);
    __PVT__HC_PID = VL_RAND_RESET_I(4);
    __PVT__HC_SP_WEn = VL_RAND_RESET_I(1);
    __PVT__SOFTxGnt = VL_RAND_RESET_I(1);
    __PVT__SOFTxReq = VL_RAND_RESET_I(1);
    __PVT__SOF_SP_WEn = VL_RAND_RESET_I(1);
    __PVT__SOFEnable = VL_RAND_RESET_I(1);
    __PVT__SOFSyncEn = VL_RAND_RESET_I(1);
    __PVT__sendPacketCPReadyIn = VL_RAND_RESET_I(1);
    __PVT__sendPacketCPReadyOut = VL_RAND_RESET_I(1);
    __PVT__sendPacketCPPIDIn = VL_RAND_RESET_I(4);
    __PVT__sendPacketCPPIDOut = VL_RAND_RESET_I(4);
    __PVT__sendPacketCPWEnIn = VL_RAND_RESET_I(1);
    __PVT__sendPacketCPWEnOut = VL_RAND_RESET_I(1);
    __PVT__SOFCntlCntl = VL_RAND_RESET_I(8);
    __PVT__SOFCntlData = VL_RAND_RESET_I(8);
    __PVT__SOFCntlGnt = VL_RAND_RESET_I(1);
    __PVT__SOFCntlReq = VL_RAND_RESET_I(1);
    __PVT__SOFCntlWEn = VL_RAND_RESET_I(1);
    __PVT__directCntlCntl = VL_RAND_RESET_I(8);
    __PVT__directCntlData = VL_RAND_RESET_I(8);
    __PVT__directCntlGnt = VL_RAND_RESET_I(1);
    __PVT__directCntlReq = VL_RAND_RESET_I(1);
    __PVT__directCntlWEn = VL_RAND_RESET_I(1);
    __PVT__sendPacketCntl = VL_RAND_RESET_I(8);
    __PVT__sendPacketData = VL_RAND_RESET_I(8);
    __PVT__sendPacketGnt = VL_RAND_RESET_I(1);
    __PVT__sendPacketReq = VL_RAND_RESET_I(1);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__SOFTimer = VL_RAND_RESET_I(16);
    __PVT__clrTxReq = VL_RAND_RESET_I(1);
    __PVT__transDone = VL_RAND_RESET_I(1);
    __PVT__transReq = VL_RAND_RESET_I(1);
    __PVT__isoEn = VL_RAND_RESET_I(1);
    __PVT__transType = VL_RAND_RESET_I(2);
    __PVT__preAmbleEnable = VL_RAND_RESET_I(1);
    __PVT__directLineState = VL_RAND_RESET_I(2);
    __PVT__directLineCtrlEn = VL_RAND_RESET_I(1);
    __PVT__TxAddr = VL_RAND_RESET_I(7);
    __PVT__TxEndP = VL_RAND_RESET_I(4);
    __PVT__RxPktStatus = VL_RAND_RESET_I(8);
    __PVT__RxPID = VL_RAND_RESET_I(4);
    __PVT__connectStateOut = VL_RAND_RESET_I(2);
    __PVT__resumeIntFromRxStatusMon = VL_RAND_RESET_I(1);
    __PVT__connectionEventFromRxStatusMon = VL_RAND_RESET_I(1);
}

void VusbHostSlave_usbHostControl::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_usbHostControl::~VusbHostSlave_usbHostControl() {
}

//--------------------
// Internal Methods

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__usbClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__busClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busClk;
}

void VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__usbClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__busClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busClk;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connectionEventFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectionEventOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeIntOut;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxGnt;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPReady;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketPID;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSent 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOF_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketWEn;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__clrTxReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clearTXReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transDone 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transDone;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketREn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_PID 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketPID;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoWE 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoData 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOutEn;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketGnt;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortWEn;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlData 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortCntl;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyIn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoRE 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoReadEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortWEn;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__preAmbleEnable 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineCtrlEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineState 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineState;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSyncEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSync;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transType 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__isoEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxAddr 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxEndP 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFEnable 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRate;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPol;
}

void VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__writeEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busWriteEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busStrobe_i;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataIn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busAddress;
}

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connectionEventFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectionEventOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeIntOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPReady;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSent 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOF_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__clrTxReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clearTXReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transDone 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transDone;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketREn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_PID 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoWE 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoData 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlData 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyIn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoRE 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoReadEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__preAmbleEnable 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineCtrlEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineState 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineState;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSyncEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSync;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transType 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReq;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__isoEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxAddr 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxEndP 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFEnable 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableReg;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRate;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPol;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__writeEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busWriteEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busStrobe_i;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataIn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__busAddress;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__connectionEventFromRxStatusMon;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntFromRxStatusMon;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnOut;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyOut;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyOut;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDOut;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOF_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOF_SP_WEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__clrTxReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__transDone;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxReq;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__getPacketEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_SP_WEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_PID 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_PID;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlReq;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlData;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlData;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyIn;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketReq;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketData;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__preAmbleEnable 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__preAmbleEnable;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineCtrlEn;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlLineState 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineState;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSyncEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSyncEn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__transType;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__transReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__isoEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__isoEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxAddr 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxAddr;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxEndP 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxEndP;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFEnable 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFEnable;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFEnable 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFEnable;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fullSpeedPolarity 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedPol;
}

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPktStatus 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPktStatus;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transDoneIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneIntOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connEventIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventIntOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSentIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentIntOut;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__preAmbleEnable 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__preAmbleEnable;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineCtrlEn;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__directControlLineState 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directLineState;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFSyncEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSyncEn;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transType 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__transType;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__transReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__transReq;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__isoEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__isoEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxAddr 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxAddr;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxEndP 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxEndP;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFEnable 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFEnable;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFEnable 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFEnable;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fullSpeedPolarity 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedPol;
}

void VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataOut;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__connectionEventFromRxStatusMon;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntFromRxStatusMon;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketArbiterGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketArbiterGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxGnt;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnOut;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyOut;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyOut;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDOut;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSent;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOFTxReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTxReq;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__SOFTimerClr 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimerClr;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__SOF_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOF_SP_WEn;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__clrTxReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__transDone;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HCTxReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxReq;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__getPacketEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_SP_WEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_SP_WEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__HC_PID 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HC_PID;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__getPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPktStatus 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPktStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPktStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPktStatus;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlGnt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortGnt 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketGnt;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlReq;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlData;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__directCntlWEn;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__SOFTimer 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFTimer;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlData;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__SOFCntlCntl 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFCntlCntl;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPReadyIn;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketReq;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketData;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketWEn;
}

void VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_sequent__TOP__v__u_usbHostControl__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__transDoneIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneIntOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connEventIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventIntOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSentIntOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentIntOut;
}

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataOut;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPktStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__RXStatus 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxPktStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoEmpty;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoData;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoFull 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoFull;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateIn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOut;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeDetectedIn;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxData;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxByteStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxDataValid;
}

void VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoEmpty;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoData 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoData;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoFull 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoFull;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__rst 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateIn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOut;
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeDetectedIn;
    vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxData;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxByteStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__RxDataValid;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnIn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketWEnable;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDIn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortCtrl 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl;
}

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnIn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketWEnable;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDIn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortWEnable;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortCtrl 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnIn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPPID 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDIn;
}

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__33(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__33\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateOut;
}

void VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__34(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__34\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPWEn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPWEnIn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__sendPacketCPPID 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__sendPacketCPPIDIn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__connectStateOut;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateOut;
}

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__35(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__35\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateOut;
}

void VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__36(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_combo__TOP__v__u_usbHostControl__36\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__hostControlSelect 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__hostControlSelect;
}

void VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__37(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbHostControl::_settle__TOP__v__u_usbHostControl__37\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__hostControlSelect 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__hostControlSelect;
}
