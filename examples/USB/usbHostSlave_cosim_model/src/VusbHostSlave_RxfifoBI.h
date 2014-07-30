// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_RxfifoBI_H_
#define _VusbHostSlave_RxfifoBI_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_RxfifoBI) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__address,2,0);
    VL_IN8(__PVT__writeEn,0,0);
    VL_IN8(__PVT__strobe_i,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__fifoDataIn,7,0);
    VL_IN8(__PVT__busDataIn,7,0);
    VL_OUT8(__PVT__busDataOut,7,0);
    VL_OUT8(__PVT__fifoREn,0,0);
    VL_OUT8(__PVT__forceEmptySyncToUsbClk,0,0);
    VL_OUT8(__PVT__forceEmptySyncToBusClk,0,0);
    VL_IN8(__PVT__fifoSelect,0,0);
    //char	__VpadToAlign13[1];
    VL_IN16(__PVT__numElementsInFifo,15,0);
    
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
    VusbHostSlave_RxfifoBI& operator= (const VusbHostSlave_RxfifoBI&);	///< Copying not allowed
    VusbHostSlave_RxfifoBI(const VusbHostSlave_RxfifoBI&);	///< Copying not allowed
  public:
    VusbHostSlave_RxfifoBI(const char* name="TOP");
    ~VusbHostSlave_RxfifoBI();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__EP0RxFifo__u_RxfifoBI__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__u_RxfifoBI__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__u_RxfifoBI__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__u_RxfifoBI__33(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__u_RxfifoBI__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__u_RxfifoBI__34(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__u_RxfifoBI__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__u_RxfifoBI__35(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__u_RxfifoBI__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__u_RxfifoBI__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_RxfifoBI__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_RxfifoBI__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_RxfifoBI__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_RxfifoBI__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_RxfifoBI__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_RxfifoBI__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_RxfifoBI__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_RxfifoBI__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_RxfifoBI__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_RxfifoBI__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_RxfifoBI__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_RxfifoBI__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_RxfifoBI__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_RxfifoBI__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_RxfifoBI__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_RxfifoBI__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_RxfifoBI__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_RxfifoBI__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_RxfifoBI__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_RxfifoBI__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_RxfifoBI__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_RxfifoBI__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_RxfifoBI__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_RxfifoBI__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_RxfifoBI__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
