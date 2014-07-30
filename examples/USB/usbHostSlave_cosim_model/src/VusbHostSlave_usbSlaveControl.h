// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_usbSlaveControl_H_
#define _VusbHostSlave_usbSlaveControl_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_USBSlaveControlBI;
class VusbHostSlave_slavecontroller;
class VusbHostSlave_endpMux;
class VusbHostSlave_slaveSendPacket;
class VusbHostSlave_slaveDirectControl;
class VusbHostSlave_SCTxPortArbiter;
class VusbHostSlave_slaveGetPacket;
class VusbHostSlave_slaveRxStatusMonitor;
class VusbHostSlave_fifoMux;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_usbSlaveControl) {
  public:
    // CELLS
    VusbHostSlave_USBSlaveControlBI*	__PVT__u_USBSlaveControlBI;
    VusbHostSlave_slavecontroller*	__PVT__u_slavecontroller;
    VusbHostSlave_endpMux*	__PVT__u_endpMux;
    VusbHostSlave_slaveSendPacket*	__PVT__u_slaveSendPacket;
    VusbHostSlave_slaveDirectControl*	__PVT__u_slaveDirectControl;
    VusbHostSlave_SCTxPortArbiter*	__PVT__u_SCTxPortArbiter;
    VusbHostSlave_slaveGetPacket*	__PVT__u_slaveGetPacket;
    VusbHostSlave_slaveRxStatusMonitor*	__PVT__u_slaveRxStatusMonitor;
    VusbHostSlave_fifoMux*	__PVT__u_fifoMux;
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__rstSyncToUsbClk,0,0);
    VL_IN8(__PVT__RxByteStatus,7,0);
    VL_IN8(__PVT__RxData,7,0);
    VL_IN8(__PVT__RxDataValid,0,0);
    VL_IN8(__PVT__SIERxTimeOut,0,0);
    VL_OUT8(__PVT__SIERxTimeOutEn,0,0);
    VL_OUT8(__PVT__RxFifoData,7,0);
    VL_OUT8(__PVT__fullSpeedRate,0,0);
    VL_OUT8(__PVT__fullSpeedPol,0,0);
    VL_OUT8(__PVT__connectSlaveToHost,0,0);
    VL_OUT8(__PVT__SCTxPortEn,0,0);
    VL_IN8(__PVT__SCTxPortRdy,0,0);
    VL_OUT8(__PVT__SCTxPortData,7,0);
    VL_OUT8(__PVT__SCTxPortCtrl,7,0);
    VL_IN8(__PVT__vBusDetect,0,0);
    VL_IN8(__PVT__connectStateIn,1,0);
    VL_IN8(__PVT__resumeDetectedIn,0,0);
    VL_IN8(__PVT__busAddress,4,0);
    VL_IN8(__PVT__busDataIn,7,0);
    VL_OUT8(__PVT__busDataOut,7,0);
    VL_IN8(__PVT__busWriteEn,0,0);
    VL_IN8(__PVT__busStrobe_i,0,0);
    VL_OUT8(__PVT__SOFRxedIntOut,0,0);
    VL_OUT8(__PVT__resetEventIntOut,0,0);
    VL_OUT8(__PVT__resumeIntOut,0,0);
    VL_OUT8(__PVT__transDoneIntOut,0,0);
    VL_OUT8(__PVT__vBusDetIntOut,0,0);
    VL_OUT8(__PVT__NAKSentIntOut,0,0);
    VL_IN8(__PVT__slaveControlSelect,0,0);
    VL_OUT8(__PVT__TxFifoEP0REn,0,0);
    VL_OUT8(__PVT__TxFifoEP1REn,0,0);
    VL_OUT8(__PVT__TxFifoEP2REn,0,0);
    VL_OUT8(__PVT__TxFifoEP3REn,0,0);
    VL_IN8(__PVT__TxFifoEP0Data,7,0);
    VL_IN8(__PVT__TxFifoEP1Data,7,0);
    VL_IN8(__PVT__TxFifoEP2Data,7,0);
    VL_IN8(__PVT__TxFifoEP3Data,7,0);
    VL_IN8(__PVT__TxFifoEP0Empty,0,0);
    VL_IN8(__PVT__TxFifoEP1Empty,0,0);
    VL_IN8(__PVT__TxFifoEP2Empty,0,0);
    VL_IN8(__PVT__TxFifoEP3Empty,0,0);
    VL_OUT8(__PVT__RxFifoEP0WEn,0,0);
    VL_OUT8(__PVT__RxFifoEP1WEn,0,0);
    VL_OUT8(__PVT__RxFifoEP2WEn,0,0);
    VL_OUT8(__PVT__RxFifoEP3WEn,0,0);
    VL_IN8(__PVT__RxFifoEP0Full,0,0);
    VL_IN8(__PVT__RxFifoEP1Full,0,0);
    VL_IN8(__PVT__RxFifoEP2Full,0,0);
    VL_IN8(__PVT__RxFifoEP3Full,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__directCntlCntl,7,0);
    VL_SIG8(__PVT__directCntlData,7,0);
    VL_SIG8(__PVT__directCntlGnt,0,0);
    VL_SIG8(__PVT__directCntlReq,0,0);
    VL_SIG8(__PVT__directCntlWEn,0,0);
    VL_SIG8(__PVT__sendPacketCntl,7,0);
    VL_SIG8(__PVT__sendPacketData,7,0);
    VL_SIG8(__PVT__sendPacketGnt,0,0);
    VL_SIG8(__PVT__sendPacketReq,0,0);
    VL_SIG8(__PVT__sendPacketWEn,0,0);
    VL_SIG8(__PVT__SCTxPortArbRdyOut,0,0);
    VL_SIG8(__PVT__transDone,0,0);
    VL_SIG8(__PVT__directLineState,1,0);
    VL_SIG8(__PVT__directLineCtrlEn,0,0);
    VL_SIG8(__PVT__RxPID,3,0);
    VL_SIG8(__PVT__connectStateOut,1,0);
    VL_SIG8(__PVT__resumeIntFromRxStatusMon,0,0);
    VL_SIG8(__PVT__endP0TransTypeReg,1,0);
    VL_SIG8(__PVT__endP1TransTypeReg,1,0);
    VL_SIG8(__PVT__endP2TransTypeReg,1,0);
    VL_SIG8(__PVT__endP3TransTypeReg,1,0);
    VL_SIG8(__PVT__endP0NAKTransTypeReg,1,0);
    VL_SIG8(__PVT__endP1NAKTransTypeReg,1,0);
    VL_SIG8(__PVT__endP2NAKTransTypeReg,1,0);
    VL_SIG8(__PVT__endP3NAKTransTypeReg,1,0);
    VL_SIG8(__PVT__endP0ControlReg,4,0);
    VL_SIG8(__PVT__endP1ControlReg,4,0);
    VL_SIG8(__PVT__endP2ControlReg,4,0);
    VL_SIG8(__PVT__endP3ControlReg,4,0);
    VL_SIG8(__PVT__endP0StatusReg,7,0);
    VL_SIG8(__PVT__endP1StatusReg,7,0);
    VL_SIG8(__PVT__endP2StatusReg,7,0);
    VL_SIG8(__PVT__endP3StatusReg,7,0);
    VL_SIG8(__PVT__USBTgtAddress,6,0);
    VL_SIG8(__PVT__clrEP0Rdy,0,0);
    VL_SIG8(__PVT__clrEP1Rdy,0,0);
    VL_SIG8(__PVT__clrEP2Rdy,0,0);
    VL_SIG8(__PVT__clrEP3Rdy,0,0);
    VL_SIG8(__PVT__SCGlobalEn,0,0);
    VL_SIG8(__PVT__ACKRxed,0,0);
    VL_SIG8(__PVT__CRCError,0,0);
    VL_SIG8(__PVT__RXOverflow,0,0);
    VL_SIG8(__PVT__RXTimeOut,0,0);
    VL_SIG8(__PVT__bitStuffError,0,0);
    VL_SIG8(__PVT__dataSequence,0,0);
    VL_SIG8(__PVT__stallSent,0,0);
    VL_SIG8(__PVT__NAKSent,0,0);
    VL_SIG8(__PVT__SOFRxed,0,0);
    VL_SIG8(__PVT__endPControlReg,4,0);
    VL_SIG8(__PVT__transTypeNAK,1,0);
    VL_SIG8(__PVT__transType,1,0);
    VL_SIG8(__PVT__currEndP,3,0);
    VL_SIG8(__PVT__getPacketREn,0,0);
    VL_SIG8(__PVT__getPacketRdy,0,0);
    VL_SIG8(__PVT__slaveControllerPIDOut,3,0);
    VL_SIG8(__PVT__slaveControllerReadyIn,0,0);
    VL_SIG8(__PVT__slaveControllerWEnOut,0,0);
    VL_SIG8(__PVT__TxFifoRE,0,0);
    VL_SIG8(__PVT__TxFifoData,7,0);
    VL_SIG8(__PVT__TxFifoEmpty,0,0);
    VL_SIG8(__PVT__RxFifoWE,0,0);
    VL_SIG8(__PVT__RxFifoFull,0,0);
    VL_SIG8(__PVT__resetEventFromRxStatusMon,0,0);
    VL_SIG8(__PVT__clrEPRdy,0,0);
    VL_SIG8(__PVT__endPMuxErrorsWEn,0,0);
    VL_SIG8(__PVT__endPointReadyFromSlaveCtrlrToGetPkt,0,0);
    VL_SIG16(__PVT__frameNum,10,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign132[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_usbSlaveControl& operator= (const VusbHostSlave_usbSlaveControl&);	///< Copying not allowed
    VusbHostSlave_usbSlaveControl(const VusbHostSlave_usbSlaveControl&);	///< Copying not allowed
  public:
    VusbHostSlave_usbSlaveControl(const char* name="TOP");
    ~VusbHostSlave_usbSlaveControl();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSlaveControl__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSlaveControl__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSlaveControl__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSlaveControl__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSlaveControl__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
