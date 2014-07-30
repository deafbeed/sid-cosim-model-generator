// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_updateCRC5_H_
#define _VusbHostSlave_updateCRC5_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_updateCRC5) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rstCRC,0,0);
    VL_IN8(__PVT__CRCEn,0,0);
    VL_IN8(__PVT__CRC5_8BitIn,0,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__CRCResult,4,0);
    VL_OUT8(__PVT__ready,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__doUpdateCRC,0,0);
    VL_SIG8(__PVT__data,7,0);
    VL_SIG8(__PVT__loopEnd,3,0);
    VL_SIG8(__PVT__i,3,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__doUpdateCRC,0,0);
    VL_SIG8(__Vdly__i,3,0);
    VL_SIG8(__Vdly__CRCResult,4,0);
    VL_SIG8(__Vdly__ready,0,0);
    VL_SIG8(__Vdly__data,7,0);
    VL_SIG8(__Vdly__loopEnd,3,0);
    //char	__VpadToAlign26[2];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_updateCRC5& operator= (const VusbHostSlave_updateCRC5&);	///< Copying not allowed
    VusbHostSlave_updateCRC5(const VusbHostSlave_updateCRC5&);	///< Copying not allowed
  public:
    VusbHostSlave_updateCRC5(const char* name="TOP");
    ~VusbHostSlave_updateCRC5();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
