// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_usbHostControl_H_
#define _VusbHostSlave_usbHostControl_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_USBHostControlBI;
class VusbHostSlave_hostcontroller;
class VusbHostSlave_SOFController;
class VusbHostSlave_SOFTransmit;
class VusbHostSlave_sendPacketArbiter;
class VusbHostSlave_sendPacketCheckPreamble;
class VusbHostSlave_sendPacket;
class VusbHostSlave_directControl;
class VusbHostSlave_HCTxPortArbiter;
class VusbHostSlave_getPacket;
class VusbHostSlave_rxStatusMonitor;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_usbHostControl) {
  public:
    // CELLS
    VusbHostSlave_USBHostControlBI*	__PVT__u_USBHostControlBI;
    VusbHostSlave_hostcontroller*	__PVT__u_hostController;
    VusbHostSlave_SOFController*	__PVT__u_SOFController;
    VusbHostSlave_SOFTransmit*	__PVT__u_SOFTransmit;
    VusbHostSlave_sendPacketArbiter*	__PVT__u_sendPacketArbiter;
    VusbHostSlave_sendPacketCheckPreamble*	__PVT__u_sendPacketCheckPreamble;
    VusbHostSlave_sendPacket*	__PVT__u_sendPacket;
    VusbHostSlave_directControl*	__PVT__u_directControl;
    VusbHostSlave_HCTxPortArbiter*	__PVT__u_HCTxPortArbiter;
    VusbHostSlave_getPacket*	__PVT__u_getPacket;
    VusbHostSlave_rxStatusMonitor*	__PVT__u_rxStatusMonitor;
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__rstSyncToUsbClk,0,0);
    VL_OUT8(__PVT__TxFifoRE,0,0);
    VL_IN8(__PVT__TxFifoData,7,0);
    VL_IN8(__PVT__TxFifoEmpty,0,0);
    VL_OUT8(__PVT__RxFifoWE,0,0);
    VL_OUT8(__PVT__RxFifoData,7,0);
    VL_IN8(__PVT__RxFifoFull,0,0);
    VL_IN8(__PVT__RxByteStatus,7,0);
    VL_IN8(__PVT__RxData,7,0);
    VL_IN8(__PVT__RxDataValid,0,0);
    VL_IN8(__PVT__SIERxTimeOut,0,0);
    VL_OUT8(__PVT__SIERxTimeOutEn,0,0);
    VL_OUT8(__PVT__fullSpeedRate,0,0);
    VL_OUT8(__PVT__fullSpeedPol,0,0);
    VL_OUT8(__PVT__HCTxPortEn,0,0);
    VL_IN8(__PVT__HCTxPortRdy,0,0);
    VL_OUT8(__PVT__HCTxPortData,7,0);
    VL_OUT8(__PVT__HCTxPortCtrl,7,0);
    VL_IN8(__PVT__connectStateIn,1,0);
    VL_IN8(__PVT__resumeDetectedIn,0,0);
    VL_IN8(__PVT__busAddress,3,0);
    VL_IN8(__PVT__busDataIn,7,0);
    VL_OUT8(__PVT__busDataOut,7,0);
    VL_IN8(__PVT__busWriteEn,0,0);
    VL_IN8(__PVT__busStrobe_i,0,0);
    VL_OUT8(__PVT__SOFSentIntOut,0,0);
    VL_OUT8(__PVT__connEventIntOut,0,0);
    VL_OUT8(__PVT__resumeIntOut,0,0);
    VL_OUT8(__PVT__transDoneIntOut,0,0);
    VL_IN8(__PVT__hostControlSelect,0,0);
    //char	__VpadToAlign33[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__SOFSent,0,0);
    VL_SIG8(__PVT__SOFTimerClr,0,0);
    VL_SIG8(__PVT__getPacketREn,0,0);
    VL_SIG8(__PVT__getPacketRdy,0,0);
    VL_SIG8(__PVT__HCTxGnt,0,0);
    VL_SIG8(__PVT__HCTxReq,0,0);
    VL_SIG8(__PVT__HC_PID,3,0);
    VL_SIG8(__PVT__HC_SP_WEn,0,0);
    VL_SIG8(__PVT__SOFTxGnt,0,0);
    VL_SIG8(__PVT__SOFTxReq,0,0);
    VL_SIG8(__PVT__SOF_SP_WEn,0,0);
    VL_SIG8(__PVT__SOFEnable,0,0);
    VL_SIG8(__PVT__SOFSyncEn,0,0);
    VL_SIG8(__PVT__sendPacketCPReadyIn,0,0);
    VL_SIG8(__PVT__sendPacketCPReadyOut,0,0);
    VL_SIG8(__PVT__sendPacketCPPIDIn,3,0);
    VL_SIG8(__PVT__sendPacketCPPIDOut,3,0);
    VL_SIG8(__PVT__sendPacketCPWEnIn,0,0);
    VL_SIG8(__PVT__sendPacketCPWEnOut,0,0);
    VL_SIG8(__PVT__SOFCntlCntl,7,0);
    VL_SIG8(__PVT__SOFCntlData,7,0);
    VL_SIG8(__PVT__SOFCntlGnt,0,0);
    VL_SIG8(__PVT__SOFCntlReq,0,0);
    VL_SIG8(__PVT__SOFCntlWEn,0,0);
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
    VL_SIG8(__PVT__clrTxReq,0,0);
    VL_SIG8(__PVT__transDone,0,0);
    VL_SIG8(__PVT__transReq,0,0);
    VL_SIG8(__PVT__isoEn,0,0);
    VL_SIG8(__PVT__transType,1,0);
    VL_SIG8(__PVT__preAmbleEnable,0,0);
    VL_SIG8(__PVT__directLineState,1,0);
    VL_SIG8(__PVT__directLineCtrlEn,0,0);
    VL_SIG8(__PVT__TxAddr,6,0);
    VL_SIG8(__PVT__TxEndP,3,0);
    VL_SIG8(__PVT__RxPktStatus,7,0);
    VL_SIG8(__PVT__RxPID,3,0);
    VL_SIG8(__PVT__connectStateOut,1,0);
    VL_SIG8(__PVT__resumeIntFromRxStatusMon,0,0);
    VL_SIG8(__PVT__connectionEventFromRxStatusMon,0,0);
    //char	__VpadToAlign89[1];
    VL_SIG16(__PVT__frameNum,10,0);
    VL_SIG16(__PVT__SOFTimer,15,0);
    //char	__VpadToAlign94[2];
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_usbHostControl& operator= (const VusbHostSlave_usbHostControl&);	///< Copying not allowed
    VusbHostSlave_usbHostControl(const VusbHostSlave_usbHostControl&);	///< Copying not allowed
  public:
    VusbHostSlave_usbHostControl(const char* name="TOP");
    ~VusbHostSlave_usbHostControl();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbHostControl__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbHostControl__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbHostControl__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbHostControl__34(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbHostControl__36(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__33(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__35(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__37(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
