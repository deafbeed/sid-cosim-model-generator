// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_endpMux_H_
#define _VusbHostSlave_endpMux_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_endpMux) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__currEndP,3,0);
    VL_IN8(__PVT__NAKSent,0,0);
    VL_IN8(__PVT__stallSent,0,0);
    VL_IN8(__PVT__CRCError,0,0);
    VL_IN8(__PVT__bitStuffError,0,0);
    VL_IN8(__PVT__RxOverflow,0,0);
    VL_IN8(__PVT__RxTimeOut,0,0);
    VL_IN8(__PVT__dataSequence,0,0);
    VL_IN8(__PVT__ACKRxed,0,0);
    VL_IN8(__PVT__transType,1,0);
    VL_IN8(__PVT__transTypeNAK,1,0);
    VL_OUT8(__PVT__endPControlReg,4,0);
    VL_IN8(__PVT__clrEPRdy,0,0);
    VL_IN8(__PVT__endPMuxErrorsWEn,0,0);
    VL_IN8(__PVT__endP0ControlReg,4,0);
    VL_IN8(__PVT__endP1ControlReg,4,0);
    VL_IN8(__PVT__endP2ControlReg,4,0);
    VL_IN8(__PVT__endP3ControlReg,4,0);
    VL_OUT8(__PVT__endP0StatusReg,7,0);
    VL_OUT8(__PVT__endP1StatusReg,7,0);
    VL_OUT8(__PVT__endP2StatusReg,7,0);
    VL_OUT8(__PVT__endP3StatusReg,7,0);
    VL_OUT8(__PVT__endP0TransTypeReg,1,0);
    VL_OUT8(__PVT__endP1TransTypeReg,1,0);
    VL_OUT8(__PVT__endP2TransTypeReg,1,0);
    VL_OUT8(__PVT__endP3TransTypeReg,1,0);
    VL_OUT8(__PVT__endP0NAKTransTypeReg,1,0);
    VL_OUT8(__PVT__endP1NAKTransTypeReg,1,0);
    VL_OUT8(__PVT__endP2NAKTransTypeReg,1,0);
    VL_OUT8(__PVT__endP3NAKTransTypeReg,1,0);
    VL_OUT8(__PVT__clrEP0Rdy,0,0);
    VL_OUT8(__PVT__clrEP1Rdy,0,0);
    VL_OUT8(__PVT__clrEP2Rdy,0,0);
    VL_OUT8(__PVT__clrEP3Rdy,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__endPStatusCombine,7,0);
    //char	__VpadToAlign41[3];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__endPControlReg,4,0);
    VL_SIG8(__Vdly__clrEP0Rdy,0,0);
    VL_SIG8(__Vdly__clrEP1Rdy,0,0);
    VL_SIG8(__Vdly__clrEP2Rdy,0,0);
    VL_SIG8(__Vdly__clrEP3Rdy,0,0);
    VL_SIG8(__Vdly__endP0NAKTransTypeReg,1,0);
    VL_SIG8(__Vdly__endP1NAKTransTypeReg,1,0);
    VL_SIG8(__Vdly__endP2NAKTransTypeReg,1,0);
    VL_SIG8(__Vdly__endP3NAKTransTypeReg,1,0);
    VL_SIG8(__Vdly__endP0TransTypeReg,1,0);
    VL_SIG8(__Vdly__endP1TransTypeReg,1,0);
    VL_SIG8(__Vdly__endP2TransTypeReg,1,0);
    VL_SIG8(__Vdly__endP3TransTypeReg,1,0);
    VL_SIG8(__Vdly__endP0StatusReg,7,0);
    VL_SIG8(__Vdly__endP1StatusReg,7,0);
    VL_SIG8(__Vdly__endP2StatusReg,7,0);
    VL_SIG8(__Vdly__endP3StatusReg,7,0);
    //char	__VpadToAlign65[3];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_endpMux& operator= (const VusbHostSlave_endpMux&);	///< Copying not allowed
    VusbHostSlave_endpMux(const VusbHostSlave_endpMux&);	///< Copying not allowed
  public:
    VusbHostSlave_endpMux(const char* name="TOP");
    ~VusbHostSlave_endpMux();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_endpMux__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_endpMux__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_endpMux__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
