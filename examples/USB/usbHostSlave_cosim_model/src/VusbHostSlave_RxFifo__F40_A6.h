// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_RxFifo__F40_A6_H_
#define _VusbHostSlave_RxFifo__F40_A6_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_fifoRTL__FB40_A6;
class VusbHostSlave_RxfifoBI;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_RxFifo__F40_A6) {
  public:
    // CELLS
    VusbHostSlave_fifoRTL__FB40_A6*	__PVT__u_fifo;
    VusbHostSlave_RxfifoBI*	__PVT__u_RxfifoBI;
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__rstSyncToUsbClk,0,0);
    VL_IN8(__PVT__fifoWEn,0,0);
    VL_OUT8(__PVT__fifoFull,0,0);
    VL_IN8(__PVT__busAddress,2,0);
    VL_IN8(__PVT__busWriteEn,0,0);
    VL_IN8(__PVT__busStrobe_i,0,0);
    VL_IN8(__PVT__busFifoSelect,0,0);
    VL_IN8(__PVT__busDataIn,7,0);
    VL_OUT8(__PVT__busDataOut,7,0);
    VL_IN8(__PVT__fifoDataIn,7,0);
    //char	__VpadToAlign13[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__dataFromFifoToBus,7,0);
    VL_SIG8(__PVT__fifoREn,0,0);
    VL_SIG8(__PVT__forceEmptySyncToBusClk,0,0);
    VL_SIG8(__PVT__forceEmptySyncToUsbClk,0,0);
    VL_SIG8(__PVT__fifoEmpty,0,0);
    //char	__VpadToAlign25[1];
    VL_SIG16(__PVT__numElementsInFifo,15,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_RxFifo__F40_A6& operator= (const VusbHostSlave_RxFifo__F40_A6&);	///< Copying not allowed
    VusbHostSlave_RxFifo__F40_A6(const VusbHostSlave_RxFifo__F40_A6&);	///< Copying not allowed
  public:
    VusbHostSlave_RxFifo__F40_A6(const char* name="TOP");
    ~VusbHostSlave_RxFifo__F40_A6();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__EP0RxFifo__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__52(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__64(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__66(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__75(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__85(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__95(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__53(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__63(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__67(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__76(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__86(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__96(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__54(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__62(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__68(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__77(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__87(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__97(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__55(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__61(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__69(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__78(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__88(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__98(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__51(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__65(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__74(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__84(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__94(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__37(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__38(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__39(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__34(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__35(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__36(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__40(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__41(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__42(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__43(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__44(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__45(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__33(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__48(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__58(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__70(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__80(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__90(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__47(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__57(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__71(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__81(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__91(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__49(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__59(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__72(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__82(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__92(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__50(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__60(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__73(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__83(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__93(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__46(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__56(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__79(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__89(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
