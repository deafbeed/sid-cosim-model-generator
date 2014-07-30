// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_sendPacketCheckPreamble_H_
#define _VusbHostSlave_sendPacketCheckPreamble_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_sendPacketCheckPreamble) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__preAmbleEnable,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketCPPID,3,0);
    VL_IN8(__PVT__sendPacketCPWEn,0,0);
    VL_IN8(__PVT__sendPacketRdy,0,0);
    VL_OUT8(__PVT__sendPacketCPReady,0,0);
    VL_OUT8(__PVT__sendPacketPID,3,0);
    VL_OUT8(__PVT__sendPacketWEn,0,0);
    //char	__VpadToAlign9[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_sendPacketCPReady,0,0);
    VL_SIG8(__PVT__next_sendPacketPID,3,0);
    VL_SIG8(__PVT__next_sendPacketWEn,0,0);
    VL_SIG8(__PVT__CurrState_sendPktCP,3,0);
    VL_SIG8(__PVT__NextState_sendPktCP,3,0);
    //char	__VpadToAlign21[3];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_sendPktCP,3,0);
    VL_SIG8(__Vdly__sendPacketWEn,0,0);
    VL_SIG8(__Vdly__sendPacketPID,3,0);
    VL_SIG8(__Vdly__sendPacketCPReady,0,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_sendPacketCheckPreamble& operator= (const VusbHostSlave_sendPacketCheckPreamble&);	///< Copying not allowed
    VusbHostSlave_sendPacketCheckPreamble(const VusbHostSlave_sendPacketCheckPreamble&);	///< Copying not allowed
  public:
    VusbHostSlave_sendPacketCheckPreamble(const char* name="TOP");
    ~VusbHostSlave_sendPacketCheckPreamble();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
