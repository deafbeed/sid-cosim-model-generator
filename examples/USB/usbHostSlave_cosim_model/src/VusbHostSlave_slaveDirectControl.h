// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_slaveDirectControl_H_
#define _VusbHostSlave_slaveDirectControl_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_slaveDirectControl) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__SCTxPortGnt,0,0);
    VL_IN8(__PVT__SCTxPortRdy,0,0);
    VL_IN8(__PVT__directControlEn,0,0);
    VL_IN8(__PVT__directControlLineState,1,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__SCTxPortCntl,7,0);
    VL_OUT8(__PVT__SCTxPortData,7,0);
    VL_OUT8(__PVT__SCTxPortReq,0,0);
    VL_OUT8(__PVT__SCTxPortWEn,0,0);
    //char	__VpadToAlign10[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_SCTxPortCntl,7,0);
    VL_SIG8(__PVT__next_SCTxPortData,7,0);
    VL_SIG8(__PVT__next_SCTxPortReq,0,0);
    VL_SIG8(__PVT__next_SCTxPortWEn,0,0);
    VL_SIG8(__PVT__CurrState_slvDrctCntl,2,0);
    VL_SIG8(__PVT__NextState_slvDrctCntl,2,0);
    //char	__VpadToAlign22[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_slvDrctCntl,2,0);
    VL_SIG8(__Vdly__SCTxPortCntl,7,0);
    VL_SIG8(__Vdly__SCTxPortData,7,0);
    VL_SIG8(__Vdly__SCTxPortWEn,0,0);
    VL_SIG8(__Vdly__SCTxPortReq,0,0);
    //char	__VpadToAlign33[3];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_slaveDirectControl& operator= (const VusbHostSlave_slaveDirectControl&);	///< Copying not allowed
    VusbHostSlave_slaveDirectControl(const VusbHostSlave_slaveDirectControl&);	///< Copying not allowed
  public:
    VusbHostSlave_slaveDirectControl(const char* name="TOP");
    ~VusbHostSlave_slaveDirectControl();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_slaveDirectControl__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_slaveDirectControl__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_slaveDirectControl__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
