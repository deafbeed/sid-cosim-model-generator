// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_TxFifo__F40_A6_H_
#define _VusbHostSlave_TxFifo__F40_A6_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_fifoRTL__FB40_A6;
class VusbHostSlave_TxfifoBI;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_TxFifo__F40_A6) {
  public:
    // CELLS
    VusbHostSlave_fifoRTL__FB40_A6*	__PVT__u_fifo;
    VusbHostSlave_TxfifoBI*	__PVT__u_TxfifoBI;
    
    // PORTS
    VL_IN8(__PVT__busClk,0,0);
    VL_IN8(__PVT__usbClk,0,0);
    VL_IN8(__PVT__rstSyncToBusClk,0,0);
    VL_IN8(__PVT__rstSyncToUsbClk,0,0);
    VL_IN8(__PVT__fifoREn,0,0);
    VL_OUT8(__PVT__fifoEmpty,0,0);
    VL_IN8(__PVT__busAddress,2,0);
    VL_IN8(__PVT__busWriteEn,0,0);
    VL_IN8(__PVT__busStrobe_i,0,0);
    VL_IN8(__PVT__busFifoSelect,0,0);
    VL_IN8(__PVT__busDataIn,7,0);
    VL_OUT8(__PVT__busDataOut,7,0);
    VL_OUT8(__PVT__fifoDataOut,7,0);
    //char	__VpadToAlign13[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__fifoWEn,0,0);
    VL_SIG8(__PVT__forceEmptySyncToUsbClk,0,0);
    VL_SIG8(__PVT__forceEmptySyncToBusClk,0,0);
    VL_SIG8(__PVT__fifoFull,0,0);
    VL_SIG16(__PVT__numElementsInFifo,15,0);
    //char	__VpadToAlign26[2];
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_TxFifo__F40_A6& operator= (const VusbHostSlave_TxFifo__F40_A6&);	///< Copying not allowed
    VusbHostSlave_TxFifo__F40_A6(const VusbHostSlave_TxFifo__F40_A6&);	///< Copying not allowed
  public:
    VusbHostSlave_TxFifo__F40_A6(const char* name="TOP");
    ~VusbHostSlave_TxFifo__F40_A6();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__EP0TxFifo__102(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__61(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__72(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__73(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__82(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__92(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__103(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__60(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__71(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__74(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__83(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__93(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__104(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__59(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__70(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__75(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__84(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__94(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__105(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__58(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__69(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__76(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__85(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__95(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__101(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__62(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__68(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__81(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__91(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__40(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__45(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__46(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__41(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__47(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__48(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__42(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__49(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__50(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__43(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__51(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__52(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__39(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__44(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__34(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__54(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__67(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__77(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__87(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__97(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__35(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__55(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__66(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__78(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__88(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__98(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__36(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__56(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__65(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__79(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__89(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__99(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__100(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__37(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__57(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__64(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__80(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__90(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__33(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__38(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__53(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__63(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__86(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__96(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
