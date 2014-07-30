// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_SOFTransmit_H_
#define _VusbHostSlave_SOFTransmit_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_SOFTransmit) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__SOFEnable,0,0);
    VL_IN8(__PVT__SOFSyncEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketArbiterGnt,0,0);
    VL_IN8(__PVT__sendPacketRdy,0,0);
    VL_OUT8(__PVT__SOFSent,0,0);
    VL_OUT8(__PVT__SOFTimerClr,0,0);
    VL_OUT8(__PVT__sendPacketArbiterReq,0,0);
    VL_OUT8(__PVT__sendPacketWEn,0,0);
    VL_IN16(__PVT__SOFTimer,15,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_SOFSent,0,0);
    VL_SIG8(__PVT__next_SOFTimerClr,0,0);
    VL_SIG8(__PVT__next_sendPacketArbiterReq,0,0);
    VL_SIG8(__PVT__next_sendPacketWEn,0,0);
    VL_SIG8(__PVT__i,7,0);
    VL_SIG8(__PVT__next_i,7,0);
    VL_SIG8(__PVT__CurrState_SOFTx,2,0);
    VL_SIG8(__PVT__NextState_SOFTx,2,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_SOFTx,2,0);
    VL_SIG8(__Vdly__i,7,0);
    VL_SIG8(__Vdly__SOFSent,0,0);
    VL_SIG8(__Vdly__SOFTimerClr,0,0);
    VL_SIG8(__Vdly__sendPacketArbiterReq,0,0);
    VL_SIG8(__Vdly__sendPacketWEn,0,0);
    //char	__VpadToAlign34[2];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_SOFTransmit& operator= (const VusbHostSlave_SOFTransmit&);	///< Copying not allowed
    VusbHostSlave_SOFTransmit(const VusbHostSlave_SOFTransmit&);	///< Copying not allowed
  public:
    VusbHostSlave_SOFTransmit(const char* name="TOP");
    ~VusbHostSlave_SOFTransmit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_SOFTransmit__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_SOFTransmit__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_SOFTransmit__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
