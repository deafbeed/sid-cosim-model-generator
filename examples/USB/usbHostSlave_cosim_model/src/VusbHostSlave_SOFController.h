// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_SOFController_H_
#define _VusbHostSlave_SOFController_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_SOFController) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__HCTxPortGnt,0,0);
    VL_IN8(__PVT__HCTxPortRdy,0,0);
    VL_IN8(__PVT__SOFEnable,0,0);
    VL_IN8(__PVT__SOFTimerClr,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__HCTxPortCntl,7,0);
    VL_OUT8(__PVT__HCTxPortData,7,0);
    VL_OUT8(__PVT__HCTxPortReq,0,0);
    VL_OUT8(__PVT__HCTxPortWEn,0,0);
    VL_OUT16(__PVT__SOFTimer,15,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_HCTxPortCntl,7,0);
    VL_SIG8(__PVT__next_HCTxPortData,7,0);
    VL_SIG8(__PVT__next_HCTxPortReq,0,0);
    VL_SIG8(__PVT__next_HCTxPortWEn,0,0);
    VL_SIG8(__PVT__CurrState_sofCntl,2,0);
    VL_SIG8(__PVT__NextState_sofCntl,2,0);
    VL_SIG16(__PVT__next_SOFTimer,15,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_sofCntl,2,0);
    VL_SIG8(__Vdly__HCTxPortCntl,7,0);
    VL_SIG8(__Vdly__HCTxPortData,7,0);
    VL_SIG8(__Vdly__HCTxPortWEn,0,0);
    VL_SIG8(__Vdly__HCTxPortReq,0,0);
    //char	__VpadToAlign33[1];
    VL_SIG16(__Vdly__SOFTimer,15,0);
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_SOFController& operator= (const VusbHostSlave_SOFController&);	///< Copying not allowed
    VusbHostSlave_SOFController(const VusbHostSlave_SOFController&);	///< Copying not allowed
  public:
    VusbHostSlave_SOFController(const char* name="TOP");
    ~VusbHostSlave_SOFController();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_SOFController__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_SOFController__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_SOFController__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
