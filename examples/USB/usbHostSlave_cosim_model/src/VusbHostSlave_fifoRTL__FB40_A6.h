// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_fifoRTL__FB40_A6_H_
#define _VusbHostSlave_fifoRTL__FB40_A6_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_dpMem_dc__F8_FB40_A6;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_fifoRTL__FB40_A6) {
  public:
    // CELLS
    VusbHostSlave_dpMem_dc__F8_FB40_A6*	__PVT__u_dpMem_dc;
    
    // PORTS
    VL_IN8(__PVT__wrClk,0,0);
    VL_IN8(__PVT__rdClk,0,0);
    VL_IN8(__PVT__rstSyncToWrClk,0,0);
    VL_IN8(__PVT__dataIn,7,0);
    VL_IN8(__PVT__fifoWEn,0,0);
    VL_IN8(__PVT__forceEmptySyncToWrClk,0,0);
    VL_OUT8(__PVT__fifoFull,0,0);
    VL_IN8(__PVT__rstSyncToRdClk,0,0);
    VL_OUT8(__PVT__dataOut,7,0);
    VL_IN8(__PVT__fifoREn,0,0);
    VL_IN8(__PVT__forceEmptySyncToRdClk,0,0);
    VL_OUT8(__PVT__fifoEmpty,0,0);
    VL_OUT16(__PVT__numElementsInFifo,15,0);
    //char	__VpadToAlign14[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__forceEmpty,0,0);
    VL_SIG8(__PVT__bufferInIndex,6,0);
    VL_SIG8(__PVT__bufferInIndexSyncToRdClk,6,0);
    VL_SIG8(__PVT__bufferOutIndex,6,0);
    VL_SIG8(__PVT__bufferOutIndexSyncToWrClk,6,0);
    VL_SIG8(__PVT__bufferInIndexToMem,5,0);
    VL_SIG8(__PVT__bufferOutIndexToMem,5,0);
    VL_SIG8(__PVT__bufferCnt,6,0);
    VL_SIG8(__PVT__fifoREnDelayed,0,0);
    VL_SIG8(__PVT__dataFromMem,7,0);
    //char	__VpadToAlign30[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__bufferOutIndexSyncToWrClk,6,0);
    VL_SIG8(__Vdly__fifoFull,0,0);
    VL_SIG8(__Vdly__bufferInIndex,6,0);
    VL_SIG8(__Vdly__bufferInIndexSyncToRdClk,6,0);
    VL_SIG8(__Vdly__fifoEmpty,0,0);
    VL_SIG8(__Vdly__bufferOutIndex,6,0);
    VL_SIG8(__Vdly__fifoREnDelayed,0,0);
    VL_SIG8(__Vdly__dataOut,7,0);
    VL_SIG16(__Vdly__numElementsInFifo,15,0);
    //char	__VpadToAlign46[2];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign52[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_fifoRTL__FB40_A6& operator= (const VusbHostSlave_fifoRTL__FB40_A6&);	///< Copying not allowed
    VusbHostSlave_fifoRTL__FB40_A6(const VusbHostSlave_fifoRTL__FB40_A6&);	///< Copying not allowed
  public:
    VusbHostSlave_fifoRTL__FB40_A6(const char* name="TOP");
    ~VusbHostSlave_fifoRTL__FB40_A6();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__EP0RxFifo__u_fifo__124(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__u_fifo__130(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__u_fifo__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0RxFifo__u_fifo__98(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__u_fifo__120(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__u_fifo__131(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__u_fifo__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP0TxFifo__u_fifo__72(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__u_fifo__125(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__u_fifo__132(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__u_fifo__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1RxFifo__u_fifo__99(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__u_fifo__121(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__u_fifo__133(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__u_fifo__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP1TxFifo__u_fifo__73(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__u_fifo__100(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__u_fifo__126(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__u_fifo__134(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2RxFifo__u_fifo__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__u_fifo__122(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__u_fifo__135(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__u_fifo__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP2TxFifo__u_fifo__74(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__u_fifo__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__u_fifo__101(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__u_fifo__127(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3RxFifo__u_fifo__136(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__u_fifo__123(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__u_fifo__137(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__u_fifo__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__EP3TxFifo__u_fifo__75(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__u_fifo__128(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__u_fifo__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostRxFifo__u_fifo__96(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__u_fifo__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__u_fifo__129(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__u_fifo__71(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__HostTxFifo__u_fifo__97(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP0RxFifo__u_fifo__93(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP0TxFifo__u_fifo__87(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP1RxFifo__u_fifo__92(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP1TxFifo__u_fifo__88(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP2RxFifo__u_fifo__94(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP2TxFifo__u_fifo__89(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP3RxFifo__u_fifo__95(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__EP3TxFifo__u_fifo__90(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__HostRxFifo__u_fifo__91(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__HostTxFifo__u_fifo__86(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_fifo__35(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_fifo__36(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_fifo__48(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0RxFifo__u_fifo__68(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_fifo__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_fifo__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_fifo__42(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP0TxFifo__u_fifo__62(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_fifo__33(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_fifo__34(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_fifo__47(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1RxFifo__u_fifo__67(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_fifo__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_fifo__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_fifo__43(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP1TxFifo__u_fifo__63(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_fifo__37(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_fifo__38(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_fifo__49(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2RxFifo__u_fifo__69(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_fifo__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_fifo__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_fifo__44(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP2TxFifo__u_fifo__64(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_fifo__39(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_fifo__40(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_fifo__50(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3RxFifo__u_fifo__70(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_fifo__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_fifo__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_fifo__45(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__EP3TxFifo__u_fifo__65(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_fifo__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_fifo__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_fifo__46(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostRxFifo__u_fifo__66(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_fifo__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_fifo__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_fifo__41(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__HostTxFifo__u_fifo__61(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_fifo__109(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_fifo__116(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_fifo__140(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_fifo__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_fifo__53(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0RxFifo__u_fifo__83(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_fifo__103(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_fifo__112(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_fifo__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_fifo__141(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_fifo__57(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP0TxFifo__u_fifo__77(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_fifo__108(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_fifo__117(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_fifo__142(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_fifo__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_fifo__52(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1RxFifo__u_fifo__82(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_fifo__104(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_fifo__113(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_fifo__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_fifo__143(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_fifo__58(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP1TxFifo__u_fifo__78(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_fifo__110(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_fifo__118(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_fifo__144(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_fifo__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_fifo__54(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2RxFifo__u_fifo__84(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_fifo__105(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_fifo__114(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_fifo__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_fifo__145(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_fifo__59(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP2TxFifo__u_fifo__79(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_fifo__111(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_fifo__119(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_fifo__146(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_fifo__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_fifo__55(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3RxFifo__u_fifo__85(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_fifo__106(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_fifo__115(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_fifo__147(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_fifo__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_fifo__60(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__EP3TxFifo__u_fifo__80(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_fifo__107(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_fifo__138(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_fifo__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_fifo__51(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostRxFifo__u_fifo__81(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_fifo__102(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_fifo__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_fifo__139(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_fifo__56(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__HostTxFifo__u_fifo__76(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
