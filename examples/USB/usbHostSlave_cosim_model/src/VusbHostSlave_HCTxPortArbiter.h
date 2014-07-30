// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_HCTxPortArbiter_H_
#define _VusbHostSlave_HCTxPortArbiter_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_HCTxPortArbiter) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__SOFCntlCntl,7,0);
    VL_IN8(__PVT__SOFCntlData,7,0);
    VL_IN8(__PVT__SOFCntlReq,0,0);
    VL_IN8(__PVT__SOFCntlWEn,0,0);
    VL_IN8(__PVT__directCntlCntl,7,0);
    VL_IN8(__PVT__directCntlData,7,0);
    VL_IN8(__PVT__directCntlReq,0,0);
    VL_IN8(__PVT__directCntlWEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketCntl,7,0);
    VL_IN8(__PVT__sendPacketData,7,0);
    VL_IN8(__PVT__sendPacketReq,0,0);
    VL_IN8(__PVT__sendPacketWEn,0,0);
    VL_OUT8(__PVT__HCTxPortCntl,7,0);
    VL_OUT8(__PVT__HCTxPortData,7,0);
    VL_OUT8(__PVT__HCTxPortWEnable,0,0);
    VL_OUT8(__PVT__SOFCntlGnt,0,0);
    VL_OUT8(__PVT__directCntlGnt,0,0);
    VL_OUT8(__PVT__sendPacketGnt,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_HCTxPortCntl,7,0);
    VL_SIG8(__PVT__next_HCTxPortData,7,0);
    VL_SIG8(__PVT__next_HCTxPortWEnable,0,0);
    VL_SIG8(__PVT__next_SOFCntlGnt,0,0);
    VL_SIG8(__PVT__next_directCntlGnt,0,0);
    VL_SIG8(__PVT__next_sendPacketGnt,0,0);
    VL_SIG8(__PVT__muxCntl,1,0);
    VL_SIG8(__PVT__next_muxCntl,1,0);
    VL_SIG8(__PVT__CurrState_HCTxArb,2,0);
    VL_SIG8(__PVT__NextState_HCTxArb,2,0);
    //char	__VpadToAlign34[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_HCTxArb,2,0);
    VL_SIG8(__Vdly__muxCntl,1,0);
    VL_SIG8(__Vdly__SOFCntlGnt,0,0);
    VL_SIG8(__Vdly__sendPacketGnt,0,0);
    VL_SIG8(__Vdly__directCntlGnt,0,0);
    //char	__VpadToAlign45[3];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign52[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_HCTxPortArbiter& operator= (const VusbHostSlave_HCTxPortArbiter&);	///< Copying not allowed
    VusbHostSlave_HCTxPortArbiter(const VusbHostSlave_HCTxPortArbiter&);	///< Copying not allowed
  public:
    VusbHostSlave_HCTxPortArbiter(const char* name="TOP");
    ~VusbHostSlave_HCTxPortArbiter();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_HCTxPortArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_HCTxPortArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_HCTxPortArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
