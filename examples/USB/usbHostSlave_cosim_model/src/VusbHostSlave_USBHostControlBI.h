// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_USBHostControlBI_H_
#define _VusbHostSlave_USBHostControlBI_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_USBHostControlBI) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__address,3,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_IN8(__PVT__strobe_i,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__rstSyncToUsbClk,0,0);
    VL_OUT8(__PVT__dataOut,7,0);
    VL_OUT8(__PVT__SOFSentIntOut,0,0);
    VL_OUT8(__PVT__connEventIntOut,0,0);
    VL_OUT8(__PVT__resumeIntOut,0,0);
    VL_OUT8(__PVT__transDoneIntOut,0,0);
    VL_OUT8(__PVT__TxTransTypeReg,1,0);
    VL_OUT8(__PVT__TxSOFEnableReg,0,0);
    VL_OUT8(__PVT__TxAddrReg,6,0);
    VL_OUT8(__PVT__TxEndPReg,3,0);
    VL_IN8(__PVT__RxPktStatusIn,7,0);
    VL_IN8(__PVT__RxPIDIn,3,0);
    VL_IN8(__PVT__connectStateIn,1,0);
    VL_IN8(__PVT__SOFSentIn,0,0);
    VL_IN8(__PVT__connEventIn,0,0);
    VL_IN8(__PVT__resumeIntIn,0,0);
    VL_IN8(__PVT__transDoneIn,0,0);
    VL_IN8(__PVT__hostControlSelect,0,0);
    VL_IN8(__PVT__clrTransReq,0,0);
    VL_OUT8(__PVT__preambleEn,0,0);
    VL_OUT8(__PVT__SOFSync,0,0);
    VL_OUT8(__PVT__TxLineState,1,0);
    VL_OUT8(__PVT__LineDirectControlEn,0,0);
    VL_OUT8(__PVT__fullSpeedPol,0,0);
    VL_OUT8(__PVT__fullSpeedRate,0,0);
    VL_OUT8(__PVT__transReq,0,0);
    VL_OUT8(__PVT__isoEn,0,0);
    VL_IN16(__PVT__frameNumIn,10,0);
    VL_IN16(__PVT__SOFTimer,15,0);
    //char	__VpadToAlign38[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__TxTransTypeReg_reg1,1,0);
    VL_SIG8(__PVT__TxSOFEnableReg_reg1,0,0);
    VL_SIG8(__PVT__TxAddrReg_reg1,6,0);
    VL_SIG8(__PVT__TxEndPReg_reg1,3,0);
    VL_SIG8(__PVT__preambleEn_reg1,0,0);
    VL_SIG8(__PVT__SOFSync_reg1,0,0);
    VL_SIG8(__PVT__TxLineState_reg1,1,0);
    VL_SIG8(__PVT__LineDirectControlEn_reg1,0,0);
    VL_SIG8(__PVT__fullSpeedPol_reg1,0,0);
    VL_SIG8(__PVT__fullSpeedRate_reg1,0,0);
    VL_SIG8(__PVT__transReq_reg1,0,0);
    VL_SIG8(__PVT__isoEn_reg1,0,0);
    VL_SIG8(__PVT__TxControlReg,1,0);
    VL_SIG8(__PVT__TxLineControlReg,4,0);
    VL_SIG8(__PVT__clrSOFReq,0,0);
    VL_SIG8(__PVT__clrConnEvtReq,0,0);
    VL_SIG8(__PVT__clrResInReq,0,0);
    VL_SIG8(__PVT__clrTransDoneReq,0,0);
    VL_SIG8(__PVT__SOFSentInt,0,0);
    VL_SIG8(__PVT__connEventInt,0,0);
    VL_SIG8(__PVT__resumeInt,0,0);
    VL_SIG8(__PVT__transDoneInt,0,0);
    VL_SIG8(__PVT__interruptMaskReg,3,0);
    VL_SIG8(__PVT__setTransReq,0,0);
    VL_SIG8(__PVT__resumeIntInExtend,2,0);
    VL_SIG8(__PVT__transDoneInExtend,2,0);
    VL_SIG8(__PVT__connEventInExtend,2,0);
    VL_SIG8(__PVT__SOFSentInExtend,2,0);
    VL_SIG8(__PVT__clrTransReqExtend,2,0);
    VL_SIG8(__PVT__TxTransTypeRegSTB,1,0);
    VL_SIG8(__PVT__TxSOFEnableRegSTB,0,0);
    VL_SIG8(__PVT__TxAddrRegSTB,6,0);
    VL_SIG8(__PVT__TxEndPRegSTB,3,0);
    VL_SIG8(__PVT__preambleEnSTB,0,0);
    VL_SIG8(__PVT__SOFSyncSTB,0,0);
    VL_SIG8(__PVT__TxLineStateSTB,1,0);
    VL_SIG8(__PVT__LineDirectControlEnSTB,0,0);
    VL_SIG8(__PVT__fullSpeedPolSTB,0,0);
    VL_SIG8(__PVT__fullSpeedRateSTB,0,0);
    VL_SIG8(__PVT__transReqSTB,0,0);
    VL_SIG8(__PVT__isoEnSTB,0,0);
    VL_SIG8(__PVT__RxPktStatusInSTB,7,0);
    VL_SIG8(__PVT__RxPktStatusInSTB_reg1,7,0);
    VL_SIG8(__PVT__RxPIDInSTB,3,0);
    VL_SIG8(__PVT__RxPIDInSTB_reg1,3,0);
    VL_SIG8(__PVT__connectStateInSTB,1,0);
    VL_SIG8(__PVT__connectStateInSTB_reg1,1,0);
    VL_SIG8(__PVT__SOFSentInSTB,2,0);
    VL_SIG8(__PVT__connEventInSTB,2,0);
    VL_SIG8(__PVT__resumeIntInSTB,2,0);
    VL_SIG8(__PVT__transDoneInSTB,2,0);
    VL_SIG8(__PVT__clrTransReqSTB,2,0);
    VL_SIG16(__PVT__frameNumInSTB,10,0);
    VL_SIG16(__PVT__frameNumInSTB_reg1,10,0);
    VL_SIG16(__PVT__SOFTimerSTB,15,0);
    VL_SIG16(__PVT__SOFTimerSTB_reg1,15,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__isoEnSTB,0,0);
    VL_SIG8(__Vdly__preambleEnSTB,0,0);
    VL_SIG8(__Vdly__SOFSyncSTB,0,0);
    VL_SIG8(__Vdly__TxTransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__TxLineControlReg,4,0);
    VL_SIG8(__Vdly__TxSOFEnableRegSTB,0,0);
    VL_SIG8(__Vdly__TxAddrRegSTB,6,0);
    VL_SIG8(__Vdly__TxEndPRegSTB,3,0);
    VL_SIG8(__Vdly__interruptMaskReg,3,0);
    VL_SIG8(__Vdly__clrSOFReq,0,0);
    VL_SIG8(__Vdly__clrConnEvtReq,0,0);
    VL_SIG8(__Vdly__clrResInReq,0,0);
    VL_SIG8(__Vdly__clrTransDoneReq,0,0);
    VL_SIG8(__Vdly__setTransReq,0,0);
    VL_SIG8(__Vdly__SOFSentInt,0,0);
    VL_SIG8(__Vdly__connEventInt,0,0);
    VL_SIG8(__Vdly__resumeInt,0,0);
    VL_SIG8(__Vdly__transDoneInt,0,0);
    VL_SIG8(__Vdly__transReqSTB,0,0);
    VL_SIG8(__Vdly__SOFSentInSTB,2,0);
    VL_SIG8(__Vdly__connEventInSTB,2,0);
    VL_SIG8(__Vdly__resumeIntInSTB,2,0);
    VL_SIG8(__Vdly__transDoneInSTB,2,0);
    VL_SIG8(__Vdly__clrTransReqSTB,2,0);
    VL_SIG8(__Vdly__RxPktStatusInSTB,7,0);
    VL_SIG8(__Vdly__RxPktStatusInSTB_reg1,7,0);
    VL_SIG8(__Vdly__RxPIDInSTB,3,0);
    VL_SIG8(__Vdly__RxPIDInSTB_reg1,3,0);
    VL_SIG8(__Vdly__connectStateInSTB,1,0);
    VL_SIG8(__Vdly__connectStateInSTB_reg1,1,0);
    VL_SIG8(__Vdly__isoEn,0,0);
    VL_SIG8(__Vdly__isoEn_reg1,0,0);
    VL_SIG8(__Vdly__preambleEn,0,0);
    VL_SIG8(__Vdly__preambleEn_reg1,0,0);
    VL_SIG8(__Vdly__SOFSync,0,0);
    VL_SIG8(__Vdly__SOFSync_reg1,0,0);
    VL_SIG8(__Vdly__TxTransTypeReg,1,0);
    VL_SIG8(__Vdly__TxTransTypeReg_reg1,1,0);
    VL_SIG8(__Vdly__TxSOFEnableReg,0,0);
    VL_SIG8(__Vdly__TxSOFEnableReg_reg1,0,0);
    VL_SIG8(__Vdly__TxAddrReg,6,0);
    VL_SIG8(__Vdly__TxAddrReg_reg1,6,0);
    VL_SIG8(__Vdly__TxEndPReg,3,0);
    VL_SIG8(__Vdly__TxEndPReg_reg1,3,0);
    VL_SIG8(__Vdly__TxLineState,1,0);
    VL_SIG8(__Vdly__TxLineState_reg1,1,0);
    VL_SIG8(__Vdly__LineDirectControlEn,0,0);
    VL_SIG8(__Vdly__LineDirectControlEn_reg1,0,0);
    VL_SIG8(__Vdly__fullSpeedPol,0,0);
    VL_SIG8(__Vdly__fullSpeedPol_reg1,0,0);
    VL_SIG8(__Vdly__fullSpeedRate,0,0);
    VL_SIG8(__Vdly__fullSpeedRate_reg1,0,0);
    VL_SIG8(__Vdly__transReq,0,0);
    VL_SIG8(__Vdly__transReq_reg1,0,0);
    VL_SIG8(__Vdly__resumeIntInExtend,2,0);
    VL_SIG8(__Vdly__transDoneInExtend,2,0);
    VL_SIG8(__Vdly__connEventInExtend,2,0);
    VL_SIG8(__Vdly__SOFSentInExtend,2,0);
    VL_SIG8(__Vdly__clrTransReqExtend,2,0);
    //char	__VpadToAlign167[1];
    VL_SIG16(__Vdly__frameNumInSTB,10,0);
    VL_SIG16(__Vdly__frameNumInSTB_reg1,10,0);
    VL_SIG16(__Vdly__SOFTimerSTB,15,0);
    VL_SIG16(__Vdly__SOFTimerSTB_reg1,15,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign180[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_USBHostControlBI& operator= (const VusbHostSlave_USBHostControlBI&);	///< Copying not allowed
    VusbHostSlave_USBHostControlBI(const VusbHostSlave_USBHostControlBI&);	///< Copying not allowed
  public:
    VusbHostSlave_USBHostControlBI(const char* name="TOP");
    ~VusbHostSlave_USBHostControlBI();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_USBHostControlBI__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_USBHostControlBI__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
