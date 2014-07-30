// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_usbSlaveControl.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_usbSlaveControl) {
    VL_CELL (__PVT__u_USBSlaveControlBI, VusbHostSlave_USBSlaveControlBI);
    VL_CELL (__PVT__u_slavecontroller, VusbHostSlave_slavecontroller);
    VL_CELL (__PVT__u_endpMux, VusbHostSlave_endpMux);
    VL_CELL (__PVT__u_slaveSendPacket, VusbHostSlave_slaveSendPacket);
    VL_CELL (__PVT__u_slaveDirectControl, VusbHostSlave_slaveDirectControl);
    VL_CELL (__PVT__u_SCTxPortArbiter, VusbHostSlave_SCTxPortArbiter);
    VL_CELL (__PVT__u_slaveGetPacket, VusbHostSlave_slaveGetPacket);
    VL_CELL (__PVT__u_slaveRxStatusMonitor, VusbHostSlave_slaveRxStatusMonitor);
    VL_CELL (__PVT__u_fifoMux, VusbHostSlave_fifoMux);
    // Reset internal values
    // Reset structure values
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__RxByteStatus = VL_RAND_RESET_I(8);
    __PVT__RxData = VL_RAND_RESET_I(8);
    __PVT__RxDataValid = VL_RAND_RESET_I(1);
    __PVT__SIERxTimeOut = VL_RAND_RESET_I(1);
    __PVT__SIERxTimeOutEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoData = VL_RAND_RESET_I(8);
    __PVT__fullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPol = VL_RAND_RESET_I(1);
    __PVT__connectSlaveToHost = VL_RAND_RESET_I(1);
    __PVT__SCTxPortEn = VL_RAND_RESET_I(1);
    __PVT__SCTxPortRdy = VL_RAND_RESET_I(1);
    __PVT__SCTxPortData = VL_RAND_RESET_I(8);
    __PVT__SCTxPortCtrl = VL_RAND_RESET_I(8);
    __PVT__vBusDetect = VL_RAND_RESET_I(1);
    __PVT__connectStateIn = VL_RAND_RESET_I(2);
    __PVT__resumeDetectedIn = VL_RAND_RESET_I(1);
    __PVT__busAddress = VL_RAND_RESET_I(5);
    __PVT__busDataIn = VL_RAND_RESET_I(8);
    __PVT__busDataOut = VL_RAND_RESET_I(8);
    __PVT__busWriteEn = VL_RAND_RESET_I(1);
    __PVT__busStrobe_i = VL_RAND_RESET_I(1);
    __PVT__SOFRxedIntOut = VL_RAND_RESET_I(1);
    __PVT__resetEventIntOut = VL_RAND_RESET_I(1);
    __PVT__resumeIntOut = VL_RAND_RESET_I(1);
    __PVT__transDoneIntOut = VL_RAND_RESET_I(1);
    __PVT__vBusDetIntOut = VL_RAND_RESET_I(1);
    __PVT__NAKSentIntOut = VL_RAND_RESET_I(1);
    __PVT__slaveControlSelect = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP0REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP1REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP2REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP3REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP0Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP1Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP2Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP3Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP0Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP1Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP2Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP3Empty = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP0WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP1WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP2WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP3WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP0Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP1Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP2Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP3Full = VL_RAND_RESET_I(1);
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
    __PVT__SCTxPortArbRdyOut = VL_RAND_RESET_I(1);
    __PVT__transDone = VL_RAND_RESET_I(1);
    __PVT__directLineState = VL_RAND_RESET_I(2);
    __PVT__directLineCtrlEn = VL_RAND_RESET_I(1);
    __PVT__RxPID = VL_RAND_RESET_I(4);
    __PVT__connectStateOut = VL_RAND_RESET_I(2);
    __PVT__resumeIntFromRxStatusMon = VL_RAND_RESET_I(1);
    __PVT__endP0TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP1TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP2TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP3TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP0NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP1NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP2NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP3NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP0ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP1ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP2ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP3ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP0StatusReg = VL_RAND_RESET_I(8);
    __PVT__endP1StatusReg = VL_RAND_RESET_I(8);
    __PVT__endP2StatusReg = VL_RAND_RESET_I(8);
    __PVT__endP3StatusReg = VL_RAND_RESET_I(8);
    __PVT__USBTgtAddress = VL_RAND_RESET_I(7);
    __PVT__frameNum = VL_RAND_RESET_I(11);
    __PVT__clrEP0Rdy = VL_RAND_RESET_I(1);
    __PVT__clrEP1Rdy = VL_RAND_RESET_I(1);
    __PVT__clrEP2Rdy = VL_RAND_RESET_I(1);
    __PVT__clrEP3Rdy = VL_RAND_RESET_I(1);
    __PVT__SCGlobalEn = VL_RAND_RESET_I(1);
    __PVT__ACKRxed = VL_RAND_RESET_I(1);
    __PVT__CRCError = VL_RAND_RESET_I(1);
    __PVT__RXOverflow = VL_RAND_RESET_I(1);
    __PVT__RXTimeOut = VL_RAND_RESET_I(1);
    __PVT__bitStuffError = VL_RAND_RESET_I(1);
    __PVT__dataSequence = VL_RAND_RESET_I(1);
    __PVT__stallSent = VL_RAND_RESET_I(1);
    __PVT__NAKSent = VL_RAND_RESET_I(1);
    __PVT__SOFRxed = VL_RAND_RESET_I(1);
    __PVT__endPControlReg = VL_RAND_RESET_I(5);
    __PVT__transTypeNAK = VL_RAND_RESET_I(2);
    __PVT__transType = VL_RAND_RESET_I(2);
    __PVT__currEndP = VL_RAND_RESET_I(4);
    __PVT__getPacketREn = VL_RAND_RESET_I(1);
    __PVT__getPacketRdy = VL_RAND_RESET_I(1);
    __PVT__slaveControllerPIDOut = VL_RAND_RESET_I(4);
    __PVT__slaveControllerReadyIn = VL_RAND_RESET_I(1);
    __PVT__slaveControllerWEnOut = VL_RAND_RESET_I(1);
    __PVT__TxFifoRE = VL_RAND_RESET_I(1);
    __PVT__TxFifoData = VL_RAND_RESET_I(8);
    __PVT__TxFifoEmpty = VL_RAND_RESET_I(1);
    __PVT__RxFifoWE = VL_RAND_RESET_I(1);
    __PVT__RxFifoFull = VL_RAND_RESET_I(1);
    __PVT__resetEventFromRxStatusMon = VL_RAND_RESET_I(1);
    __PVT__clrEPRdy = VL_RAND_RESET_I(1);
    __PVT__endPMuxErrorsWEn = VL_RAND_RESET_I(1);
    __PVT__endPointReadyFromSlaveCtrlrToGetPkt = VL_RAND_RESET_I(1);
}

void VusbHostSlave_usbSlaveControl::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_usbSlaveControl::~VusbHostSlave_usbSlaveControl() {
}

//--------------------
// Internal Methods

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__usbClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__busClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busClk;
}

void VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__usbClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__busClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busClk;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resetEventOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeIntOut;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP0Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP0Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP1Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP1Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP2Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP2Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP3Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP3Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPControlReg;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transTypeNAK 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPNakTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transType 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDone 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerWEnOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketREn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPointReadyFromSlaveCtrlrToGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPointReadyToGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerPIDOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__currEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoWE 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOutEn;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketGnt;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineState 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineState;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineCtrlEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectSlaveToHost 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHost;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCGlobalEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRate;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPol;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortWEn;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerReadyIn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoRE 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoReadEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortWEn;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__USBTgtAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCAddrReg;
}

void VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetect;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__writeEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busWriteEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busStrobe_i;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busAddress;
}

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resetEventOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntFromRxStatusMon 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP0Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP0Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP1Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP1Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP2Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP2Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP3Rdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEP3Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transTypeNAK 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPNakTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transType 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDone 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerWEnOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketREn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPointReadyFromSlaveCtrlrToGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPointReadyToGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerPIDOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__currEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoWE 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineState 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineState;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineCtrlEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectSlaveToHost 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHost;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCGlobalEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRate;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPol;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerReadyIn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoRE 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoReadEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetect;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__writeEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busWriteEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busStrobe_i;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busAddress;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__USBTgtAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCAddrReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventFromRxStatusMon;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntFromRxStatusMon;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP0Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP1Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP2Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP3Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transTypeNAK 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transTypeNAK;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transType 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transType;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerWEnOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__getPacketEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__endPointReady 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPointReadyFromSlaveCtrlrToGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerPIDOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__currEndP;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__currEndP;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoWE;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlLineState 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineState;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineCtrlEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SCGlobalEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCGlobalEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerReadyIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoRE;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBTgtAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__USBTgtAddress;
}

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDoneIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxedIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSentIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetIntOut;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP0ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP1ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP2ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endP3ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlLineState 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineState;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__directControlEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directLineCtrlEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SCGlobalEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCGlobalEn;
}

void VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataOut;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventFromRxStatusMon;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntFromRxStatusMon;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1StatusReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3NAKTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP0TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP1TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP2TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endP3TransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP0Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP1Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP2Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEP3Rdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPControlReg;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transTypeNAK 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transTypeNAK;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__transType 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transType;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerWEnOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__getPacketEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__endPointReady 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__endPointReadyFromSlaveCtrlrToGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerPIDOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__currEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__currEndP;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__currEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__currEndP;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__getPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__RxTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoWE;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlGnt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortGnt 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketGnt;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlReq 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlData 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__directCntlWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__directCntlWEn;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketReq 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControllerReadyIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoREn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoRE;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketData 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__sendPacketWEn;
}

void VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_sequent__TOP__v__u_usbSlaveControl__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBTgtAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__USBTgtAddress;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDoneIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxedIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSentIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentIntOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetIntOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetIntOut;
}

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeDetectedIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxByteStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxByteStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxDataValid;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxDataValid;
}

void VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Empty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Empty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3Data 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Data;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3Full 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3Full;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__rst 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeDetectedIn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxByteStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxByteStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxDataValid;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxDataValid;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortWEnable;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortCtrl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortCntl;
}

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortWEnable;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortCtrl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEmpty 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoFull 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortArbRdyOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyOut;
}

void VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP0REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP1REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP2REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3REn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEP3REn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP0WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP1WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP2WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3WEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoEP3WEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEmpty 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__TxFifoEmpty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoFull 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux.__PVT__RxFifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__connectStateOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortArbRdyOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__SCTxPortRdyOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEmpty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoFull 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortArbRdyOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortArbRdyOut;
}

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEmpty;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoFull 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateIn 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__SCTxPortRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortArbRdyOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortArbRdyOut;
}

void VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_combo__TOP__v__u_usbSlaveControl__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__slaveControlSelect 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControlSelect;
}

void VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_usbSlaveControl::_settle__TOP__v__u_usbSlaveControl__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__slaveControlSelect 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControlSelect;
}
