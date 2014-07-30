// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_directControl_H_
#define _VusbHostSlave_directControl_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_directControl) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__HCTxPortGnt,0,0);
    VL_IN8(__PVT__HCTxPortRdy,0,0);
    VL_IN8(__PVT__directControlEn,0,0);
    VL_IN8(__PVT__directControlLineState,1,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__HCTxPortCntl,7,0);
    VL_OUT8(__PVT__HCTxPortData,7,0);
    VL_OUT8(__PVT__HCTxPortReq,0,0);
    VL_OUT8(__PVT__HCTxPortWEn,0,0);
    //char	__VpadToAlign10[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_HCTxPortCntl,7,0);
    VL_SIG8(__PVT__next_HCTxPortData,7,0);
    VL_SIG8(__PVT__next_HCTxPortReq,0,0);
    VL_SIG8(__PVT__next_HCTxPortWEn,0,0);
    VL_SIG8(__PVT__CurrState_drctCntl,2,0);
    VL_SIG8(__PVT__NextState_drctCntl,2,0);
    //char	__VpadToAlign22[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_drctCntl,2,0);
    VL_SIG8(__Vdly__HCTxPortCntl,7,0);
    VL_SIG8(__Vdly__HCTxPortData,7,0);
    VL_SIG8(__Vdly__HCTxPortWEn,0,0);
    VL_SIG8(__Vdly__HCTxPortReq,0,0);
    //char	__VpadToAlign33[3];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_directControl& operator= (const VusbHostSlave_directControl&);	///< Copying not allowed
    VusbHostSlave_directControl(const VusbHostSlave_directControl&);	///< Copying not allowed
  public:
    VusbHostSlave_directControl(const char* name="TOP");
    ~VusbHostSlave_directControl();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_directControl__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_directControl__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_directControl__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
