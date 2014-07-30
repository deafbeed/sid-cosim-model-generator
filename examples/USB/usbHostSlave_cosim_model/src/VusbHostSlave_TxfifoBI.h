// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_TxfifoBI_H_
#define _VusbHostSlave_TxfifoBI_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_TxfifoBI) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__address,2,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_IN8(__PVT__strobe_i,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__busDataIn,7,0);
    VL_OUT8(__PVT__busDataOut,7,0);
    VL_OUT8(__PVT__fifoWEn,0,0);
    VL_OUT8(__PVT__forceEmptySyncToUsbClk,0,0);
    VL_OUT8(__PVT__forceEmptySyncToBusClk,0,0);
    VL_IN8(__PVT__fifoSelect,0,0);
    VL_IN16(__PVT__numElementsInFifo,15,0);
    //char	__VpadToAlign14[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__forceEmptyReg,0,0);
    VL_SIG8(__PVT__forceEmpty,0,0);
    VL_SIG8(__PVT__forceEmptyToggle,0,0);
    VL_SIG8(__PVT__forceEmptyToggleSyncToUsbClk,2,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__forceEmpty,0,0);
    VL_SIG8(__Vdly__forceEmptyReg,0,0);
    VL_SIG8(__Vdly__forceEmptyToggle,0,0);
    VL_SIG8(__Vdly__forceEmptyToggleSyncToUsbClk,2,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_TxfifoBI& operator= (const VusbHostSlave_TxfifoBI&);	///< Copying not allowed
    VusbHostSlave_TxfifoBI(const VusbHostSlave_TxfifoBI&);	///< Copying not allowed
  public:
    VusbHostSlave_TxfifoBI(const char* name="TOP");
    ~VusbHostSlave_TxfifoBI();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__EP0TxFifo__u_TxfifoBI__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__u_TxfifoBI__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__u_TxfifoBI__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__u_TxfifoBI__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__u_TxfifoBI__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__EP0TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__EP1TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__EP2TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__EP3TxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__HostTxFifo__u_TxfifoBI(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_TxfifoBI__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_TxfifoBI__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_TxfifoBI__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_TxfifoBI__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_TxfifoBI__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_TxfifoBI__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_TxfifoBI__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_TxfifoBI__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_TxfifoBI__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_TxfifoBI__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_TxfifoBI__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_TxfifoBI__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_TxfifoBI__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_TxfifoBI__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_TxfifoBI__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_TxfifoBI__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_TxfifoBI__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_TxfifoBI__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_TxfifoBI__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_TxfifoBI__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_TxfifoBI__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
