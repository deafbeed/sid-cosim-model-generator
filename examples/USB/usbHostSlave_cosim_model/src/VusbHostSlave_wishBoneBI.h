// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_wishBoneBI_H_
#define _VusbHostSlave_wishBoneBI_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_wishBoneBI) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__address,7,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_OUT8(__PVT__dataOut,7,0);
    VL_IN8(__PVT__strobe_i,0,0);
    VL_OUT8(__PVT__ack_o,0,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_OUT8(__PVT__hostControlSel,0,0);
    VL_OUT8(__PVT__hostRxFifoSel,0,0);
    VL_OUT8(__PVT__hostTxFifoSel,0,0);
    VL_OUT8(__PVT__slaveControlSel,0,0);
    VL_OUT8(__PVT__slaveEP0RxFifoSel,0,0);
    VL_OUT8(__PVT__slaveEP1RxFifoSel,0,0);
    VL_OUT8(__PVT__slaveEP2RxFifoSel,0,0);
    VL_OUT8(__PVT__slaveEP3RxFifoSel,0,0);
    VL_OUT8(__PVT__slaveEP0TxFifoSel,0,0);
    VL_OUT8(__PVT__slaveEP1TxFifoSel,0,0);
    VL_OUT8(__PVT__slaveEP2TxFifoSel,0,0);
    VL_OUT8(__PVT__slaveEP3TxFifoSel,0,0);
    VL_OUT8(__PVT__hostSlaveMuxSel,0,0);
    VL_IN8(__PVT__dataFromHostControl,7,0);
    VL_IN8(__PVT__dataFromHostRxFifo,7,0);
    VL_IN8(__PVT__dataFromHostTxFifo,7,0);
    VL_IN8(__PVT__dataFromSlaveControl,7,0);
    VL_IN8(__PVT__dataFromEP0RxFifo,7,0);
    VL_IN8(__PVT__dataFromEP1RxFifo,7,0);
    VL_IN8(__PVT__dataFromEP2RxFifo,7,0);
    VL_IN8(__PVT__dataFromEP3RxFifo,7,0);
    VL_IN8(__PVT__dataFromEP0TxFifo,7,0);
    VL_IN8(__PVT__dataFromEP1TxFifo,7,0);
    VL_IN8(__PVT__dataFromEP2TxFifo,7,0);
    VL_IN8(__PVT__dataFromEP3TxFifo,7,0);
    VL_IN8(__PVT__dataFromHostSlaveMux,7,0);
    //char	__VpadToAlign34[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__ack_delayed,0,0);
    VL_SIG8(__PVT__ack_immediate,0,0);
    //char	__VpadToAlign42[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__ack_delayed,0,0);
    //char	__VpadToAlign49[3];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_wishBoneBI& operator= (const VusbHostSlave_wishBoneBI&);	///< Copying not allowed
    VusbHostSlave_wishBoneBI(const VusbHostSlave_wishBoneBI&);	///< Copying not allowed
  public:
    VusbHostSlave_wishBoneBI(const char* name="TOP");
    ~VusbHostSlave_wishBoneBI();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_wishBoneBI__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_wishBoneBI__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_wishBoneBI__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_wishBoneBI__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_wishBoneBI__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_wishBoneBI__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
