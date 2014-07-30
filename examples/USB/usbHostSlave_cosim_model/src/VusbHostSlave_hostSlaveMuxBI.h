// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_hostSlaveMuxBI_H_
#define _VusbHostSlave_hostSlaveMuxBI_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_hostSlaveMuxBI) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_IN8(__PVT__address,0,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_IN8(__PVT__strobe_i,0,0);
    VL_OUT8(__PVT__dataOut,7,0);
    VL_IN8(__PVT__hostSlaveMuxSel,0,0);
    VL_OUT8(__PVT__hostMode,0,0);
    VL_IN8(__PVT__rstFromWire,0,0);
    VL_OUT8(__PVT__rstSyncToBusClkOut,0,0);
    VL_OUT8(__PVT__rstSyncToUsbClkOut,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__rstShift,5,0);
    VL_SIG8(__PVT__rstFromBus,0,0);
    VL_SIG8(__PVT__rstSyncToUsbClkFirst,0,0);
    //char	__VpadToAlign19[1];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__hostMode,0,0);
    VL_SIG8(__Vdly__rstFromBus,0,0);
    VL_SIG8(__Vdly__rstShift,5,0);
    VL_SIG8(__Vdly__rstSyncToUsbClkFirst,0,0);
    VL_SIG8(__Vdly__rstSyncToUsbClkOut,0,0);
    //char	__VpadToAlign29[3];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_hostSlaveMuxBI& operator= (const VusbHostSlave_hostSlaveMuxBI&);	///< Copying not allowed
    VusbHostSlave_hostSlaveMuxBI(const VusbHostSlave_hostSlaveMuxBI&);	///< Copying not allowed
  public:
    VusbHostSlave_hostSlaveMuxBI(const char* name="TOP");
    ~VusbHostSlave_hostSlaveMuxBI();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
