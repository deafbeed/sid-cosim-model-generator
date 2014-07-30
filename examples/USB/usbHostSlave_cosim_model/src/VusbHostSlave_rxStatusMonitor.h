// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_rxStatusMonitor_H_
#define _VusbHostSlave_rxStatusMonitor_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_rxStatusMonitor) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__connectStateIn,1,0);
    VL_IN8(__PVT__resumeDetectedIn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__connectionEventOut,0,0);
    VL_OUT8(__PVT__connectStateOut,1,0);
    VL_OUT8(__PVT__resumeIntOut,0,0);
    //char	__VpadToAlign7[1];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__oldConnectState,1,0);
    VL_SIG8(__PVT__oldResumeDetected,0,0);
    //char	__VpadToAlign14[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__oldConnectState,1,0);
    VL_SIG8(__Vdly__oldResumeDetected,0,0);
    VL_SIG8(__Vdly__connectionEventOut,0,0);
    VL_SIG8(__Vdly__resumeIntOut,0,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign28[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_rxStatusMonitor& operator= (const VusbHostSlave_rxStatusMonitor&);	///< Copying not allowed
    VusbHostSlave_rxStatusMonitor(const VusbHostSlave_rxStatusMonitor&);	///< Copying not allowed
  public:
    VusbHostSlave_rxStatusMonitor(const char* name="TOP");
    ~VusbHostSlave_rxStatusMonitor();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_rxStatusMonitor__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_rxStatusMonitor__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_rxStatusMonitor__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
