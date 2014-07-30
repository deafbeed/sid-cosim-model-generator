// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_dpMem_dc__F8_FB40_A6_H_
#define _VusbHostSlave_dpMem_dc__F8_FB40_A6_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_dpMem_dc__F8_FB40_A6) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__wrClk,0,0);
    VL_IN8(__PVT__rdClk,0,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_OUT8(__PVT__dataOut,7,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_IN8(__PVT__readEn,0,0);
    VL_IN8(__PVT__addrIn,5,0);
    VL_IN8(__PVT__addrOut,5,0);
    
    // LOCAL SIGNALS
    //char	__VpadToAlign12[4];
    VL_SIG8(__PVT__buffer[64],7,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__dataOut,7,0);
    VL_SIG8(__Vdlyvdim0__buffer__v0,5,0);
    VL_SIG8(__Vdlyvval__buffer__v0,7,0);
    VL_SIG8(__Vdlyvset__buffer__v0,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v1,5,0);
    VL_SIG8(__Vdlyvval__buffer__v1,7,0);
    VL_SIG8(__Vdlyvset__buffer__v1,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v2,5,0);
    VL_SIG8(__Vdlyvval__buffer__v2,7,0);
    VL_SIG8(__Vdlyvset__buffer__v2,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v3,5,0);
    VL_SIG8(__Vdlyvval__buffer__v3,7,0);
    VL_SIG8(__Vdlyvset__buffer__v3,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v4,5,0);
    VL_SIG8(__Vdlyvval__buffer__v4,7,0);
    VL_SIG8(__Vdlyvset__buffer__v4,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v5,5,0);
    VL_SIG8(__Vdlyvval__buffer__v5,7,0);
    VL_SIG8(__Vdlyvset__buffer__v5,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v6,5,0);
    VL_SIG8(__Vdlyvval__buffer__v6,7,0);
    VL_SIG8(__Vdlyvset__buffer__v6,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v7,5,0);
    VL_SIG8(__Vdlyvval__buffer__v7,7,0);
    VL_SIG8(__Vdlyvset__buffer__v7,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v8,5,0);
    VL_SIG8(__Vdlyvval__buffer__v8,7,0);
    VL_SIG8(__Vdlyvset__buffer__v8,0,0);
    VL_SIG8(__Vdlyvdim0__buffer__v9,5,0);
    VL_SIG8(__Vdlyvval__buffer__v9,7,0);
    VL_SIG8(__Vdlyvset__buffer__v9,0,0);
    //char	__VpadToAlign115[1];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_dpMem_dc__F8_FB40_A6& operator= (const VusbHostSlave_dpMem_dc__F8_FB40_A6&);	///< Copying not allowed
    VusbHostSlave_dpMem_dc__F8_FB40_A6(const VusbHostSlave_dpMem_dc__F8_FB40_A6&);	///< Copying not allowed
  public:
    VusbHostSlave_dpMem_dc__F8_FB40_A6(const char* name="TOP");
    ~VusbHostSlave_dpMem_dc__F8_FB40_A6();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
