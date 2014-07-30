// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_fifoMux_H_
#define _VusbHostSlave_fifoMux_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_fifoMux) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__currEndP,3,0);
    VL_IN8(__PVT__TxFifoREn,0,0);
    VL_OUT8(__PVT__TxFifoEP0REn,0,0);
    VL_OUT8(__PVT__TxFifoEP1REn,0,0);
    VL_OUT8(__PVT__TxFifoEP2REn,0,0);
    VL_OUT8(__PVT__TxFifoEP3REn,0,0);
    VL_OUT8(__PVT__TxFifoData,7,0);
    VL_IN8(__PVT__TxFifoEP0Data,7,0);
    VL_IN8(__PVT__TxFifoEP1Data,7,0);
    VL_IN8(__PVT__TxFifoEP2Data,7,0);
    VL_IN8(__PVT__TxFifoEP3Data,7,0);
    VL_OUT8(__PVT__TxFifoEmpty,0,0);
    VL_IN8(__PVT__TxFifoEP0Empty,0,0);
    VL_IN8(__PVT__TxFifoEP1Empty,0,0);
    VL_IN8(__PVT__TxFifoEP2Empty,0,0);
    VL_IN8(__PVT__TxFifoEP3Empty,0,0);
    VL_IN8(__PVT__RxFifoWEn,0,0);
    VL_OUT8(__PVT__RxFifoEP0WEn,0,0);
    VL_OUT8(__PVT__RxFifoEP1WEn,0,0);
    VL_OUT8(__PVT__RxFifoEP2WEn,0,0);
    VL_OUT8(__PVT__RxFifoEP3WEn,0,0);
    VL_OUT8(__PVT__RxFifoFull,0,0);
    VL_IN8(__PVT__RxFifoEP0Full,0,0);
    VL_IN8(__PVT__RxFifoEP1Full,0,0);
    VL_IN8(__PVT__RxFifoEP2Full,0,0);
    VL_IN8(__PVT__RxFifoEP3Full,0,0);
    //char	__VpadToAlign26[2];
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_fifoMux& operator= (const VusbHostSlave_fifoMux&);	///< Copying not allowed
    VusbHostSlave_fifoMux(const VusbHostSlave_fifoMux&);	///< Copying not allowed
  public:
    VusbHostSlave_fifoMux(const char* name="TOP");
    ~VusbHostSlave_fifoMux();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_fifoMux__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_fifoMux__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
