// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_hostSlaveMux_H_
#define _VusbHostSlave_hostSlaveMux_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_hostSlaveMuxBI;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_hostSlaveMux) {
  public:
    // CELLS
    VusbHostSlave_hostSlaveMuxBI*	__PVT__u_hostSlaveMuxBI;
    
    // PORTS
    VL_OUT8(__PVT__SIEPortCtrlInToSIE,7,0);
    VL_IN8(__PVT__SIEPortCtrlInFromHost,7,0);
    VL_IN8(__PVT__SIEPortCtrlInFromSlave,7,0);
    VL_OUT8(__PVT__SIEPortDataInToSIE,7,0);
    VL_IN8(__PVT__SIEPortDataInFromHost,7,0);
    VL_IN8(__PVT__SIEPortDataInFromSlave,7,0);
    VL_OUT8(__PVT__SIEPortWEnToSIE,0,0);
    VL_IN8(__PVT__SIEPortWEnFromHost,0,0);
    VL_IN8(__PVT__SIEPortWEnFromSlave,0,0);
    VL_OUT8(__PVT__fullSpeedPolarityToSIE,0,0);
    VL_IN8(__PVT__fullSpeedPolarityFromHost,0,0);
    VL_IN8(__PVT__fullSpeedPolarityFromSlave,0,0);
    VL_OUT8(__PVT__fullSpeedBitRateToSIE,0,0);
    VL_IN8(__PVT__fullSpeedBitRateFromHost,0,0);
    VL_IN8(__PVT__fullSpeedBitRateFromSlave,0,0);
    VL_OUT8(__PVT__noActivityTimeOutEnableToSIE,0,0);
    VL_IN8(__PVT__noActivityTimeOutEnableFromHost,0,0);
    VL_IN8(__PVT__noActivityTimeOutEnableFromSlave,0,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_IN8(__PVT__address,0,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_IN8(__PVT__strobe_i,0,0);
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__rstFromWire,0,0);
    VL_OUT8(__PVT__rstSyncToBusClkOut,0,0);
    VL_OUT8(__PVT__rstSyncToUsbClkOut,0,0);
    VL_OUT8(__PVT__dataOut,7,0);
    VL_IN8(__PVT__hostSlaveMuxSel,0,0);
    //char	__VpadToAlign29[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__hostMode,0,0);
    //char	__VpadToAlign37[3];
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_hostSlaveMux& operator= (const VusbHostSlave_hostSlaveMux&);	///< Copying not allowed
    VusbHostSlave_hostSlaveMux(const VusbHostSlave_hostSlaveMux&);	///< Copying not allowed
  public:
    VusbHostSlave_hostSlaveMux(const char* name="TOP");
    ~VusbHostSlave_hostSlaveMux();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_hostSlaveMux__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_hostSlaveMux__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_hostSlaveMux__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_hostSlaveMux__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_hostSlaveMux__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_hostSlaveMux__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_hostSlaveMux__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_hostSlaveMux__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_hostSlaveMux__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_hostSlaveMux__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_hostSlaveMux__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_hostSlaveMux__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_hostSlaveMux__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_hostSlaveMux__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
