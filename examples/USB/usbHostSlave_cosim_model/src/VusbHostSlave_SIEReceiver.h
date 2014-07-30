// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_SIEReceiver_H_
#define _VusbHostSlave_SIEReceiver_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_SIEReceiver) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__RxWireDataIn,1,0);
    VL_IN8(__PVT__RxWireDataWEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__connectState,1,0);
    //char	__VpadToAlign5[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_connectState,1,0);
    VL_SIG8(__PVT__RXStMachCurrState,3,0);
    VL_SIG8(__PVT__next_RXStMachCurrState,3,0);
    VL_SIG8(__PVT__RXWaitCount,7,0);
    VL_SIG8(__PVT__next_RXWaitCount,7,0);
    VL_SIG8(__PVT__RxBits,1,0);
    VL_SIG8(__PVT__next_RxBits,1,0);
    VL_SIG8(__PVT__CurrState_rcvr,3,0);
    VL_SIG8(__PVT__NextState_rcvr,3,0);
    //char	__VpadToAlign21[3];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_rcvr,3,0);
    VL_SIG8(__Vdly__RXStMachCurrState,3,0);
    VL_SIG8(__Vdly__RXWaitCount,7,0);
    VL_SIG8(__Vdly__RxBits,1,0);
    VL_SIG8(__Vdly__connectState,1,0);
    //char	__VpadToAlign33[3];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_SIEReceiver& operator= (const VusbHostSlave_SIEReceiver&);	///< Copying not allowed
    VusbHostSlave_SIEReceiver(const VusbHostSlave_SIEReceiver&);	///< Copying not allowed
  public:
    VusbHostSlave_SIEReceiver(const char* name="TOP");
    ~VusbHostSlave_SIEReceiver();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
