// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_usbHostSlave_H_
#define _VusbHostSlave_usbHostSlave_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_usbHostControl;
class VusbHostSlave_usbSlaveControl;
class VusbHostSlave_wishBoneBI;
class VusbHostSlave_hostSlaveMux;
class VusbHostSlave_usbSerialInterfaceEngine;
class VusbHostSlave_TxFifo__F40_A6;
class VusbHostSlave_RxFifo__F40_A6;
class VusbHostSlave_TxFifo__F40_A6;
class VusbHostSlave_TxFifo__F40_A6;
class VusbHostSlave_TxFifo__F40_A6;
class VusbHostSlave_TxFifo__F40_A6;
class VusbHostSlave_RxFifo__F40_A6;
class VusbHostSlave_RxFifo__F40_A6;
class VusbHostSlave_RxFifo__F40_A6;
class VusbHostSlave_RxFifo__F40_A6;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_usbHostSlave) {
  public:
    // CELLS
    VusbHostSlave_usbHostControl*	__PVT__u_usbHostControl;
    VusbHostSlave_usbSlaveControl*	__PVT__u_usbSlaveControl;
    VusbHostSlave_wishBoneBI*	__PVT__u_wishBoneBI;
    VusbHostSlave_hostSlaveMux*	__PVT__u_hostSlaveMux;
    VusbHostSlave_usbSerialInterfaceEngine*	__PVT__u_usbSerialInterfaceEngine;
    VusbHostSlave_TxFifo__F40_A6*	__PVT__HostTxFifo;
    VusbHostSlave_RxFifo__F40_A6*	__PVT__HostRxFifo;
    VusbHostSlave_TxFifo__F40_A6*	__PVT__EP0TxFifo;
    VusbHostSlave_TxFifo__F40_A6*	__PVT__EP1TxFifo;
    VusbHostSlave_TxFifo__F40_A6*	__PVT__EP2TxFifo;
    VusbHostSlave_TxFifo__F40_A6*	__PVT__EP3TxFifo;
    VusbHostSlave_RxFifo__F40_A6*	__PVT__EP0RxFifo;
    VusbHostSlave_RxFifo__F40_A6*	__PVT__EP1RxFifo;
    VusbHostSlave_RxFifo__F40_A6*	__PVT__EP2RxFifo;
    VusbHostSlave_RxFifo__F40_A6*	__PVT__EP3RxFifo;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(address_i,7,0);
    VL_IN8(data_i,7,0);
    VL_OUT8(data_o,7,0);
    VL_IN8(we_i,0,0);
    VL_IN8(strobe_i,0,0);
    VL_OUT8(ack_o,0,0);
    VL_IN8(usbClk,0,0);
    VL_OUT8(hostSOFSentIntOut,0,0);
    VL_OUT8(hostConnEventIntOut,0,0);
    VL_OUT8(hostResumeIntOut,0,0);
    VL_OUT8(hostTransDoneIntOut,0,0);
    VL_OUT8(slaveSOFRxedIntOut,0,0);
    VL_OUT8(slaveResetEventIntOut,0,0);
    VL_OUT8(slaveResumeIntOut,0,0);
    VL_OUT8(slaveTransDoneIntOut,0,0);
    VL_OUT8(slaveNAKSentIntOut,0,0);
    VL_OUT8(slaveVBusDetIntOut,0,0);
    VL_IN8(USBWireDataIn,1,0);
    VL_OUT8(USBWireDataOut,1,0);
    VL_OUT8(USBWireDataOutTick,0,0);
    VL_OUT8(USBWireDataInTick,0,0);
    VL_OUT8(USBWireCtrlOut,0,0);
    VL_OUT8(USBFullSpeed,0,0);
    VL_OUT8(USBDPlusPullup,0,0);
    VL_OUT8(USBDMinusPullup,0,0);
    VL_IN8(vBusDetect,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__hostControlSel,0,0);
    VL_SIG8(__PVT__slaveControlSel,0,0);
    VL_SIG8(__PVT__hostRxFifoSel,0,0);
    VL_SIG8(__PVT__hostTxFifoSel,0,0);
    VL_SIG8(__PVT__hostSlaveMuxSel,0,0);
    VL_SIG8(__PVT__dataFromHostControl,7,0);
    VL_SIG8(__PVT__dataFromSlaveControl,7,0);
    VL_SIG8(__PVT__dataFromHostRxFifo,7,0);
    VL_SIG8(__PVT__dataFromHostTxFifo,7,0);
    VL_SIG8(__PVT__dataFromHostSlaveMux,7,0);
    VL_SIG8(__PVT__hostTxFifoRE,0,0);
    VL_SIG8(__PVT__hostTxFifoData,7,0);
    VL_SIG8(__PVT__hostTxFifoEmpty,0,0);
    VL_SIG8(__PVT__hostRxFifoWE,0,0);
    VL_SIG8(__PVT__hostRxFifoData,7,0);
    VL_SIG8(__PVT__hostRxFifoFull,0,0);
    VL_SIG8(__PVT__RxCtrlOut,7,0);
    VL_SIG8(__PVT__RxDataFromSIE,7,0);
    VL_SIG8(__PVT__RxDataOutWEn,0,0);
    VL_SIG8(__PVT__fullSpeedBitRateFromHost,0,0);
    VL_SIG8(__PVT__fullSpeedBitRateFromSlave,0,0);
    VL_SIG8(__PVT__fullSpeedPolarityFromHost,0,0);
    VL_SIG8(__PVT__fullSpeedPolarityFromSlave,0,0);
    VL_SIG8(__PVT__SIEPortWEnFromHost,0,0);
    VL_SIG8(__PVT__SIEPortWEnFromSlave,0,0);
    VL_SIG8(__PVT__SIEPortTxRdy,0,0);
    VL_SIG8(__PVT__SIEPortDataInFromHost,7,0);
    VL_SIG8(__PVT__SIEPortDataInFromSlave,7,0);
    VL_SIG8(__PVT__SIEPortCtrlInFromHost,7,0);
    VL_SIG8(__PVT__SIEPortCtrlInFromSlave,7,0);
    VL_SIG8(__PVT__connectState,1,0);
    VL_SIG8(__PVT__resumeDetected,0,0);
    VL_SIG8(__PVT__SIEPortDataInToSIE,7,0);
    VL_SIG8(__PVT__SIEPortWEnToSIE,0,0);
    VL_SIG8(__PVT__SIEPortCtrlInToSIE,7,0);
    VL_SIG8(__PVT__fullSpeedPolarityToSIE,0,0);
    VL_SIG8(__PVT__fullSpeedBitRateToSIE,0,0);
    VL_SIG8(__PVT__noActivityTimeOut,0,0);
    VL_SIG8(__PVT__TxFifoEP0REn,0,0);
    VL_SIG8(__PVT__TxFifoEP1REn,0,0);
    VL_SIG8(__PVT__TxFifoEP2REn,0,0);
    VL_SIG8(__PVT__TxFifoEP3REn,0,0);
    VL_SIG8(__PVT__TxFifoEP0Data,7,0);
    VL_SIG8(__PVT__TxFifoEP1Data,7,0);
    VL_SIG8(__PVT__TxFifoEP2Data,7,0);
    VL_SIG8(__PVT__TxFifoEP3Data,7,0);
    VL_SIG8(__PVT__TxFifoEP0Empty,0,0);
    VL_SIG8(__PVT__TxFifoEP1Empty,0,0);
    VL_SIG8(__PVT__TxFifoEP2Empty,0,0);
    VL_SIG8(__PVT__TxFifoEP3Empty,0,0);
    VL_SIG8(__PVT__RxFifoEP0WEn,0,0);
    VL_SIG8(__PVT__RxFifoEP1WEn,0,0);
    VL_SIG8(__PVT__RxFifoEP2WEn,0,0);
    VL_SIG8(__PVT__RxFifoEP3WEn,0,0);
    VL_SIG8(__PVT__RxFifoEP0Full,0,0);
    VL_SIG8(__PVT__RxFifoEP1Full,0,0);
    VL_SIG8(__PVT__RxFifoEP2Full,0,0);
    VL_SIG8(__PVT__RxFifoEP3Full,0,0);
    VL_SIG8(__PVT__slaveRxFifoData,7,0);
    VL_SIG8(__PVT__dataFromEP0RxFifo,7,0);
    VL_SIG8(__PVT__dataFromEP1RxFifo,7,0);
    VL_SIG8(__PVT__dataFromEP2RxFifo,7,0);
    VL_SIG8(__PVT__dataFromEP3RxFifo,7,0);
    VL_SIG8(__PVT__dataFromEP0TxFifo,7,0);
    VL_SIG8(__PVT__dataFromEP1TxFifo,7,0);
    VL_SIG8(__PVT__dataFromEP2TxFifo,7,0);
    VL_SIG8(__PVT__dataFromEP3TxFifo,7,0);
    VL_SIG8(__PVT__slaveEP0RxFifoSel,0,0);
    VL_SIG8(__PVT__slaveEP1RxFifoSel,0,0);
    VL_SIG8(__PVT__slaveEP2RxFifoSel,0,0);
    VL_SIG8(__PVT__slaveEP3RxFifoSel,0,0);
    VL_SIG8(__PVT__slaveEP0TxFifoSel,0,0);
    VL_SIG8(__PVT__slaveEP1TxFifoSel,0,0);
    VL_SIG8(__PVT__slaveEP2TxFifoSel,0,0);
    VL_SIG8(__PVT__slaveEP3TxFifoSel,0,0);
    VL_SIG8(__PVT__rstSyncToBusClk,0,0);
    VL_SIG8(__PVT__rstSyncToUsbClk,0,0);
    VL_SIG8(__PVT__noActivityTimeOutEnableToSIE,0,0);
    VL_SIG8(__PVT__noActivityTimeOutEnableFromHost,0,0);
    VL_SIG8(__PVT__noActivityTimeOutEnableFromSlave,0,0);
    VL_SIG8(__PVT__connectSlaveToHost,0,0);
    //char	__VpadToAlign113[3];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vcellinp__u_usbHostControl__busAddress,3,0);
    VL_SIG8(__Vcellinp__u_usbSlaveControl__busAddress,4,0);
    VL_SIG8(__Vcellinp__u_hostSlaveMux__address,0,0);
    VL_SIG8(__Vcellinp__HostTxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__HostRxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP0TxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP1TxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP2TxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP3TxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP0RxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP1RxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP2RxFifo__busAddress,2,0);
    VL_SIG8(__Vcellinp__EP3RxFifo__busAddress,2,0);
    //char	__VpadToAlign133[3];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign140[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_usbHostSlave& operator= (const VusbHostSlave_usbHostSlave&);	///< Copying not allowed
    VusbHostSlave_usbHostSlave(const VusbHostSlave_usbHostSlave&);	///< Copying not allowed
  public:
    VusbHostSlave_usbHostSlave(const char* name="TOP");
    ~VusbHostSlave_usbHostSlave();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__36(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__39(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__41(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__42(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__44(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__33(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__37(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__34(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__35(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__38(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__40(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__43(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__45(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
