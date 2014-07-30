// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_USBSlaveControlBI_H_
#define _VusbHostSlave_USBSlaveControlBI_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_USBSlaveControlBI) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__address,4,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_IN8(__PVT__strobe_i,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__rstSyncToUsbClk,0,0);
    VL_OUT8(__PVT__dataOut,7,0);
    VL_OUT8(__PVT__SOFRxedIntOut,0,0);
    VL_OUT8(__PVT__resetEventIntOut,0,0);
    VL_OUT8(__PVT__resumeIntOut,0,0);
    VL_OUT8(__PVT__transDoneIntOut,0,0);
    VL_OUT8(__PVT__NAKSentIntOut,0,0);
    VL_OUT8(__PVT__vBusDetIntOut,0,0);
    VL_IN8(__PVT__endP0TransTypeReg,1,0);
    VL_IN8(__PVT__endP0NAKTransTypeReg,1,0);
    VL_IN8(__PVT__endP1TransTypeReg,1,0);
    VL_IN8(__PVT__endP1NAKTransTypeReg,1,0);
    VL_IN8(__PVT__endP2TransTypeReg,1,0);
    VL_IN8(__PVT__endP2NAKTransTypeReg,1,0);
    VL_IN8(__PVT__endP3TransTypeReg,1,0);
    VL_IN8(__PVT__endP3NAKTransTypeReg,1,0);
    VL_OUT8(__PVT__endP0ControlReg,4,0);
    VL_OUT8(__PVT__endP1ControlReg,4,0);
    VL_OUT8(__PVT__endP2ControlReg,4,0);
    VL_OUT8(__PVT__endP3ControlReg,4,0);
    VL_IN8(__PVT__EP0StatusReg,7,0);
    VL_IN8(__PVT__EP1StatusReg,7,0);
    VL_IN8(__PVT__EP2StatusReg,7,0);
    VL_IN8(__PVT__EP3StatusReg,7,0);
    VL_OUT8(__PVT__SCAddrReg,6,0);
    VL_IN8(__PVT__connectStateIn,1,0);
    VL_IN8(__PVT__vBusDetectIn,0,0);
    VL_IN8(__PVT__SOFRxedIn,0,0);
    VL_IN8(__PVT__resetEventIn,0,0);
    VL_IN8(__PVT__resumeIntIn,0,0);
    VL_IN8(__PVT__transDoneIn,0,0);
    VL_IN8(__PVT__NAKSentIn,0,0);
    VL_IN8(__PVT__slaveControlSelect,0,0);
    VL_IN8(__PVT__clrEP0Ready,0,0);
    VL_IN8(__PVT__clrEP1Ready,0,0);
    VL_IN8(__PVT__clrEP2Ready,0,0);
    VL_IN8(__PVT__clrEP3Ready,0,0);
    VL_OUT8(__PVT__TxLineState,1,0);
    VL_OUT8(__PVT__LineDirectControlEn,0,0);
    VL_OUT8(__PVT__fullSpeedPol,0,0);
    VL_OUT8(__PVT__fullSpeedRate,0,0);
    VL_OUT8(__PVT__connectSlaveToHost,0,0);
    VL_OUT8(__PVT__SCGlobalEn,0,0);
    VL_IN16(__PVT__frameNum,10,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__endP0ControlReg1,4,0);
    VL_SIG8(__PVT__endP1ControlReg1,4,0);
    VL_SIG8(__PVT__endP2ControlReg1,4,0);
    VL_SIG8(__PVT__endP3ControlReg1,4,0);
    VL_SIG8(__PVT__TxEndPReg,3,0);
    VL_SIG8(__PVT__TxLineState_reg1,1,0);
    VL_SIG8(__PVT__LineDirectControlEn_reg1,0,0);
    VL_SIG8(__PVT__fullSpeedPol_reg1,0,0);
    VL_SIG8(__PVT__fullSpeedRate_reg1,0,0);
    VL_SIG8(__PVT__connectSlaveToHost_reg1,0,0);
    VL_SIG8(__PVT__SCGlobalEn_reg1,0,0);
    VL_SIG8(__PVT__SCControlReg,6,0);
    VL_SIG8(__PVT__clrVBusDetReq,0,0);
    VL_SIG8(__PVT__clrNAKReq,0,0);
    VL_SIG8(__PVT__clrSOFReq,0,0);
    VL_SIG8(__PVT__clrResetReq,0,0);
    VL_SIG8(__PVT__clrResInReq,0,0);
    VL_SIG8(__PVT__clrTransDoneReq,0,0);
    VL_SIG8(__PVT__SOFRxedInt,0,0);
    VL_SIG8(__PVT__resetEventInt,0,0);
    VL_SIG8(__PVT__resumeInt,0,0);
    VL_SIG8(__PVT__transDoneInt,0,0);
    VL_SIG8(__PVT__vBusDetInt,0,0);
    VL_SIG8(__PVT__NAKSentInt,0,0);
    VL_SIG8(__PVT__interruptMaskReg,5,0);
    VL_SIG8(__PVT__EP0SetReady,0,0);
    VL_SIG8(__PVT__EP1SetReady,0,0);
    VL_SIG8(__PVT__EP2SetReady,0,0);
    VL_SIG8(__PVT__EP3SetReady,0,0);
    VL_SIG8(__PVT__EP0SendStall,0,0);
    VL_SIG8(__PVT__EP1SendStall,0,0);
    VL_SIG8(__PVT__EP2SendStall,0,0);
    VL_SIG8(__PVT__EP3SendStall,0,0);
    VL_SIG8(__PVT__EP0IsoEn,0,0);
    VL_SIG8(__PVT__EP1IsoEn,0,0);
    VL_SIG8(__PVT__EP2IsoEn,0,0);
    VL_SIG8(__PVT__EP3IsoEn,0,0);
    VL_SIG8(__PVT__EP0DataSequence,0,0);
    VL_SIG8(__PVT__EP1DataSequence,0,0);
    VL_SIG8(__PVT__EP2DataSequence,0,0);
    VL_SIG8(__PVT__EP3DataSequence,0,0);
    VL_SIG8(__PVT__EP0Enable,0,0);
    VL_SIG8(__PVT__EP1Enable,0,0);
    VL_SIG8(__PVT__EP2Enable,0,0);
    VL_SIG8(__PVT__EP3Enable,0,0);
    VL_SIG8(__PVT__EP0Ready,0,0);
    VL_SIG8(__PVT__EP1Ready,0,0);
    VL_SIG8(__PVT__EP2Ready,0,0);
    VL_SIG8(__PVT__EP3Ready,0,0);
    VL_SIG8(__PVT__SOFRxedInExtend,2,0);
    VL_SIG8(__PVT__resetEventInExtend,2,0);
    VL_SIG8(__PVT__resumeIntInExtend,2,0);
    VL_SIG8(__PVT__transDoneInExtend,2,0);
    VL_SIG8(__PVT__NAKSentInExtend,2,0);
    VL_SIG8(__PVT__clrEP0ReadyExtend,2,0);
    VL_SIG8(__PVT__clrEP1ReadyExtend,2,0);
    VL_SIG8(__PVT__clrEP2ReadyExtend,2,0);
    VL_SIG8(__PVT__clrEP3ReadyExtend,2,0);
    VL_SIG8(__PVT__endP0ControlRegSTB,4,0);
    VL_SIG8(__PVT__endP1ControlRegSTB,4,0);
    VL_SIG8(__PVT__endP2ControlRegSTB,4,0);
    VL_SIG8(__PVT__endP3ControlRegSTB,4,0);
    VL_SIG8(__PVT__NAKSentInSTB,2,0);
    VL_SIG8(__PVT__SOFRxedInSTB,2,0);
    VL_SIG8(__PVT__resetEventInSTB,2,0);
    VL_SIG8(__PVT__resumeIntInSTB,2,0);
    VL_SIG8(__PVT__transDoneInSTB,2,0);
    VL_SIG8(__PVT__clrEP0ReadySTB,2,0);
    VL_SIG8(__PVT__clrEP1ReadySTB,2,0);
    VL_SIG8(__PVT__clrEP2ReadySTB,2,0);
    VL_SIG8(__PVT__clrEP3ReadySTB,2,0);
    VL_SIG8(__PVT__SCGlobalEnSTB,0,0);
    VL_SIG8(__PVT__TxLineStateSTB,1,0);
    VL_SIG8(__PVT__LineDirectControlEnSTB,0,0);
    VL_SIG8(__PVT__fullSpeedPolSTB,0,0);
    VL_SIG8(__PVT__fullSpeedRateSTB,0,0);
    VL_SIG8(__PVT__connectSlaveToHostSTB,0,0);
    VL_SIG8(__PVT__EP0StatusRegSTB,7,0);
    VL_SIG8(__PVT__EP0StatusRegSTB_reg1,7,0);
    VL_SIG8(__PVT__EP1StatusRegSTB,7,0);
    VL_SIG8(__PVT__EP1StatusRegSTB_reg1,7,0);
    VL_SIG8(__PVT__EP2StatusRegSTB,7,0);
    VL_SIG8(__PVT__EP2StatusRegSTB_reg1,7,0);
    VL_SIG8(__PVT__EP3StatusRegSTB,7,0);
    VL_SIG8(__PVT__EP3StatusRegSTB_reg1,7,0);
    VL_SIG8(__PVT__endP0TransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP0TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__endP0NAKTransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP0NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__endP1TransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP1TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__endP1NAKTransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP1NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__endP2TransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP2TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__endP2NAKTransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP2NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__endP3TransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP3TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__endP3NAKTransTypeRegSTB,1,0);
    VL_SIG8(__PVT__endP3NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__PVT__vBusDetectInSTB,2,0);
    VL_SIG8(__PVT__connectStateInSTB,1,0);
    VL_SIG8(__PVT__connectStateInSTB_reg1,1,0);
    VL_SIG16(__PVT__frameNumSTB,10,0);
    VL_SIG16(__PVT__frameNumSTB_reg1,10,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__EP0IsoEn,0,0);
    VL_SIG8(__Vdly__EP0SendStall,0,0);
    VL_SIG8(__Vdly__EP0DataSequence,0,0);
    VL_SIG8(__Vdly__EP0Enable,0,0);
    VL_SIG8(__Vdly__EP1IsoEn,0,0);
    VL_SIG8(__Vdly__EP1SendStall,0,0);
    VL_SIG8(__Vdly__EP1DataSequence,0,0);
    VL_SIG8(__Vdly__EP1Enable,0,0);
    VL_SIG8(__Vdly__EP2IsoEn,0,0);
    VL_SIG8(__Vdly__EP2SendStall,0,0);
    VL_SIG8(__Vdly__EP2DataSequence,0,0);
    VL_SIG8(__Vdly__EP2Enable,0,0);
    VL_SIG8(__Vdly__EP3IsoEn,0,0);
    VL_SIG8(__Vdly__EP3SendStall,0,0);
    VL_SIG8(__Vdly__EP3DataSequence,0,0);
    VL_SIG8(__Vdly__EP3Enable,0,0);
    VL_SIG8(__Vdly__SCControlReg,6,0);
    VL_SIG8(__Vdly__SCAddrReg,6,0);
    VL_SIG8(__Vdly__interruptMaskReg,5,0);
    VL_SIG8(__Vdly__clrVBusDetReq,0,0);
    VL_SIG8(__Vdly__clrNAKReq,0,0);
    VL_SIG8(__Vdly__clrSOFReq,0,0);
    VL_SIG8(__Vdly__clrResetReq,0,0);
    VL_SIG8(__Vdly__clrResInReq,0,0);
    VL_SIG8(__Vdly__clrTransDoneReq,0,0);
    VL_SIG8(__Vdly__EP0SetReady,0,0);
    VL_SIG8(__Vdly__EP1SetReady,0,0);
    VL_SIG8(__Vdly__EP2SetReady,0,0);
    VL_SIG8(__Vdly__EP3SetReady,0,0);
    VL_SIG8(__Vdly__vBusDetInt,0,0);
    VL_SIG8(__Vdly__NAKSentInt,0,0);
    VL_SIG8(__Vdly__SOFRxedInt,0,0);
    VL_SIG8(__Vdly__resetEventInt,0,0);
    VL_SIG8(__Vdly__resumeInt,0,0);
    VL_SIG8(__Vdly__transDoneInt,0,0);
    VL_SIG8(__Vdly__EP0Ready,0,0);
    VL_SIG8(__Vdly__EP1Ready,0,0);
    VL_SIG8(__Vdly__EP2Ready,0,0);
    VL_SIG8(__Vdly__EP3Ready,0,0);
    VL_SIG8(__Vdly__vBusDetectInSTB,2,0);
    VL_SIG8(__Vdly__NAKSentInSTB,2,0);
    VL_SIG8(__Vdly__SOFRxedInSTB,2,0);
    VL_SIG8(__Vdly__resetEventInSTB,2,0);
    VL_SIG8(__Vdly__resumeIntInSTB,2,0);
    VL_SIG8(__Vdly__transDoneInSTB,2,0);
    VL_SIG8(__Vdly__clrEP0ReadySTB,2,0);
    VL_SIG8(__Vdly__clrEP1ReadySTB,2,0);
    VL_SIG8(__Vdly__clrEP2ReadySTB,2,0);
    VL_SIG8(__Vdly__clrEP3ReadySTB,2,0);
    VL_SIG8(__Vdly__EP0StatusRegSTB,7,0);
    VL_SIG8(__Vdly__EP0StatusRegSTB_reg1,7,0);
    VL_SIG8(__Vdly__EP1StatusRegSTB,7,0);
    VL_SIG8(__Vdly__EP1StatusRegSTB_reg1,7,0);
    VL_SIG8(__Vdly__EP2StatusRegSTB,7,0);
    VL_SIG8(__Vdly__EP2StatusRegSTB_reg1,7,0);
    VL_SIG8(__Vdly__EP3StatusRegSTB,7,0);
    VL_SIG8(__Vdly__EP3StatusRegSTB_reg1,7,0);
    VL_SIG8(__Vdly__endP0TransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP0TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__endP1TransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP1TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__endP2TransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP2TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__endP3TransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP3TransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__endP0NAKTransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP0NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__endP1NAKTransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP1NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__endP2NAKTransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP2NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__endP3NAKTransTypeRegSTB,1,0);
    VL_SIG8(__Vdly__endP3NAKTransTypeRegSTB_reg1,1,0);
    VL_SIG8(__Vdly__connectStateInSTB,1,0);
    VL_SIG8(__Vdly__connectStateInSTB_reg1,1,0);
    VL_SIG8(__Vdly__SOFRxedInExtend,2,0);
    VL_SIG8(__Vdly__resetEventInExtend,2,0);
    VL_SIG8(__Vdly__resumeIntInExtend,2,0);
    VL_SIG8(__Vdly__transDoneInExtend,2,0);
    VL_SIG8(__Vdly__NAKSentInExtend,2,0);
    VL_SIG8(__Vdly__clrEP0ReadyExtend,2,0);
    VL_SIG8(__Vdly__clrEP1ReadyExtend,2,0);
    VL_SIG8(__Vdly__clrEP2ReadyExtend,2,0);
    VL_SIG8(__Vdly__clrEP3ReadyExtend,2,0);
    VL_SIG8(__Vdly__endP0ControlReg,4,0);
    VL_SIG8(__Vdly__endP0ControlReg1,4,0);
    VL_SIG8(__Vdly__endP1ControlReg,4,0);
    VL_SIG8(__Vdly__endP1ControlReg1,4,0);
    VL_SIG8(__Vdly__endP2ControlReg,4,0);
    VL_SIG8(__Vdly__endP2ControlReg1,4,0);
    VL_SIG8(__Vdly__endP3ControlReg,4,0);
    VL_SIG8(__Vdly__endP3ControlReg1,4,0);
    VL_SIG8(__Vdly__SCGlobalEn,0,0);
    VL_SIG8(__Vdly__SCGlobalEn_reg1,0,0);
    VL_SIG8(__Vdly__TxLineState,1,0);
    VL_SIG8(__Vdly__TxLineState_reg1,1,0);
    VL_SIG8(__Vdly__LineDirectControlEn,0,0);
    VL_SIG8(__Vdly__LineDirectControlEn_reg1,0,0);
    VL_SIG8(__Vdly__fullSpeedPol,0,0);
    VL_SIG8(__Vdly__fullSpeedPol_reg1,0,0);
    VL_SIG8(__Vdly__fullSpeedRate,0,0);
    VL_SIG8(__Vdly__fullSpeedRate_reg1,0,0);
    VL_SIG8(__Vdly__connectSlaveToHost,0,0);
    VL_SIG8(__Vdly__connectSlaveToHost_reg1,0,0);
    VL_SIG16(__Vdly__frameNumSTB,10,0);
    VL_SIG16(__Vdly__frameNumSTB_reg1,10,0);
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_USBSlaveControlBI& operator= (const VusbHostSlave_USBSlaveControlBI&);	///< Copying not allowed
    VusbHostSlave_USBSlaveControlBI(const VusbHostSlave_USBSlaveControlBI&);	///< Copying not allowed
  public:
    VusbHostSlave_USBSlaveControlBI(const char* name="TOP");
    ~VusbHostSlave_USBSlaveControlBI();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
