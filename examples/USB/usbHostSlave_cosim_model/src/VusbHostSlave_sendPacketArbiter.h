// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_sendPacketArbiter_H_
#define _VusbHostSlave_sendPacketArbiter_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_sendPacketArbiter) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__HCTxReq,0,0);
    VL_IN8(__PVT__HC_PID,3,0);
    VL_IN8(__PVT__HC_SP_WEn,0,0);
    VL_IN8(__PVT__SOFTxReq,0,0);
    VL_IN8(__PVT__SOF_SP_WEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__HCTxGnt,0,0);
    VL_OUT8(__PVT__SOFTxGnt,0,0);
    VL_OUT8(__PVT__sendPacketPID,3,0);
    VL_OUT8(__PVT__sendPacketWEnable,0,0);
    //char	__VpadToAlign11[1];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_HCTxGnt,0,0);
    VL_SIG8(__PVT__next_SOFTxGnt,0,0);
    VL_SIG8(__PVT__next_sendPacketPID,3,0);
    VL_SIG8(__PVT__next_sendPacketWEnable,0,0);
    VL_SIG8(__PVT__muxSOFNotHC,0,0);
    VL_SIG8(__PVT__next_muxSOFNotHC,0,0);
    VL_SIG8(__PVT__CurrState_sendPktArb,1,0);
    VL_SIG8(__PVT__NextState_sendPktArb,1,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_sendPktArb,1,0);
    VL_SIG8(__Vdly__muxSOFNotHC,0,0);
    VL_SIG8(__Vdly__SOFTxGnt,0,0);
    VL_SIG8(__Vdly__HCTxGnt,0,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_sendPacketArbiter& operator= (const VusbHostSlave_sendPacketArbiter&);	///< Copying not allowed
    VusbHostSlave_sendPacketArbiter(const VusbHostSlave_sendPacketArbiter&);	///< Copying not allowed
  public:
    VusbHostSlave_sendPacketArbiter(const char* name="TOP");
    ~VusbHostSlave_sendPacketArbiter();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_sendPacketArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_sendPacketArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_sendPacketArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
