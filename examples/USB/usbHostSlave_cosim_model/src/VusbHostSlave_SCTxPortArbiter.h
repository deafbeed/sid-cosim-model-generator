// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_SCTxPortArbiter_H_
#define _VusbHostSlave_SCTxPortArbiter_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_SCTxPortArbiter) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__SCTxPortRdyIn,0,0);
    VL_IN8(__PVT__directCntlCntl,7,0);
    VL_IN8(__PVT__directCntlData,7,0);
    VL_IN8(__PVT__directCntlReq,0,0);
    VL_IN8(__PVT__directCntlWEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketCntl,7,0);
    VL_IN8(__PVT__sendPacketData,7,0);
    VL_IN8(__PVT__sendPacketReq,0,0);
    VL_IN8(__PVT__sendPacketWEn,0,0);
    VL_OUT8(__PVT__SCTxPortCntl,7,0);
    VL_OUT8(__PVT__SCTxPortData,7,0);
    VL_OUT8(__PVT__SCTxPortRdyOut,0,0);
    VL_OUT8(__PVT__SCTxPortWEnable,0,0);
    VL_OUT8(__PVT__directCntlGnt,0,0);
    VL_OUT8(__PVT__sendPacketGnt,0,0);
    //char	__VpadToAlign17[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_SCTxPortCntl,7,0);
    VL_SIG8(__PVT__next_SCTxPortData,7,0);
    VL_SIG8(__PVT__next_SCTxPortRdyOut,0,0);
    VL_SIG8(__PVT__next_SCTxPortWEnable,0,0);
    VL_SIG8(__PVT__next_directCntlGnt,0,0);
    VL_SIG8(__PVT__next_sendPacketGnt,0,0);
    VL_SIG8(__PVT__muxDCEn,0,0);
    VL_SIG8(__PVT__next_muxDCEn,0,0);
    VL_SIG8(__PVT__CurrState_SCTxArb,1,0);
    VL_SIG8(__PVT__NextState_SCTxArb,1,0);
    //char	__VpadToAlign34[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_SCTxArb,1,0);
    VL_SIG8(__Vdly__muxDCEn,0,0);
    VL_SIG8(__Vdly__sendPacketGnt,0,0);
    VL_SIG8(__Vdly__directCntlGnt,0,0);
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_SCTxPortArbiter& operator= (const VusbHostSlave_SCTxPortArbiter&);	///< Copying not allowed
    VusbHostSlave_SCTxPortArbiter(const VusbHostSlave_SCTxPortArbiter&);	///< Copying not allowed
  public:
    VusbHostSlave_SCTxPortArbiter(const char* name="TOP");
    ~VusbHostSlave_SCTxPortArbiter();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
