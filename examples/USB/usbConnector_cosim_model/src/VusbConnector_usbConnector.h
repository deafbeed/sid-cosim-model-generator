// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbConnector.h for the primary calling header

#ifndef _VusbConnector_usbConnector_H_
#define _VusbConnector_usbConnector_H_

#include "verilated.h"
class VusbConnector__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbConnector_usbConnector) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(hostDataIn,1,0);
    VL_OUT8(hostDataOut,1,0);
    VL_IN8(hostControl,0,0);
    VL_IN8(slaveDataIn,1,0);
    VL_OUT8(slaveDataOut,1,0);
    VL_IN8(slaveControl,0,0);
    VL_IN8(USBDPlusPullup,0,0);
    VL_IN8(USBDMinusPullup,0,0);
    VL_OUT8(DPlusPullup__enpull0,0,0);
    VL_OUT8(DPlusPullDown__enpull1,0,0);
    VL_OUT8(DMinusPullup__enpull2,0,0);
    VL_OUT8(DMinusPullDown__enpull3,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__DPlusPullup,0,0);
    VL_SIG8(__PVT__DPlusPullDown,0,0);
    VL_SIG8(__PVT__DMinusPullup,0,0);
    VL_SIG8(__PVT__DMinusPullDown,0,0);
    VL_SIG8(__PVT__USBWireVP,0,0);
    VL_SIG8(__PVT__USBWireVM,0,0);
    //char	__VpadToAlign22[2];
    
    // LOCAL VARIABLES
    VL_SIG8(DPlusPullup__lhs0,0,0);
    VL_SIG8(DPlusPullDown__lhs0,0,0);
    VL_SIG8(DMinusPullup__lhs0,0,0);
    VL_SIG8(DMinusPullDown__lhs0,0,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    VusbConnector__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbConnector_usbConnector& operator= (const VusbConnector_usbConnector&);	///< Copying not allowed
    VusbConnector_usbConnector(const VusbConnector_usbConnector&);	///< Copying not allowed
  public:
    VusbConnector_usbConnector(const char* name="TOP");
    ~VusbConnector_usbConnector();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbConnector__Syms* symsp, bool first);
    static void	_combo__TOP__v__2(VusbConnector__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__4(VusbConnector__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v(VusbConnector__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__1(VusbConnector__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__3(VusbConnector__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
