// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_lineControlUpdate_H_
#define _VusbHostSlave_lineControlUpdate_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_lineControlUpdate) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__fullSpeedPolarity,0,0);
    VL_IN8(__PVT__fullSpeedBitRate,0,0);
    VL_OUT8(__PVT__JBit,1,0);
    VL_OUT8(__PVT__KBit,1,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_lineControlUpdate& operator= (const VusbHostSlave_lineControlUpdate&);	///< Copying not allowed
    VusbHostSlave_lineControlUpdate(const VusbHostSlave_lineControlUpdate&);	///< Copying not allowed
  public:
    VusbHostSlave_lineControlUpdate(const char* name="TOP");
    ~VusbHostSlave_lineControlUpdate();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
