// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_USBTxWireArbiter_H_
#define _VusbHostSlave_USBTxWireArbiter_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_USBTxWireArbiter) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__SIETxCtrl,0,0);
    VL_IN8(__PVT__SIETxData,1,0);
    VL_IN8(__PVT__SIETxFSRate,0,0);
    VL_IN8(__PVT__SIETxReq,0,0);
    VL_IN8(__PVT__SIETxWEn,0,0);
    VL_IN8(__PVT__USBWireRdyIn,0,0);
    VL_IN8(__PVT__prcTxByteCtrl,0,0);
    VL_IN8(__PVT__prcTxByteData,1,0);
    VL_IN8(__PVT__prcTxByteFSRate,0,0);
    VL_IN8(__PVT__prcTxByteReq,0,0);
    VL_IN8(__PVT__prcTxByteWEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__SIETxGnt,0,0);
    VL_OUT8(__PVT__TxBits,1,0);
    VL_OUT8(__PVT__TxCtl,0,0);
    VL_OUT8(__PVT__TxFSRate,0,0);
    VL_OUT8(__PVT__USBWireRdyOut,0,0);
    VL_OUT8(__PVT__USBWireWEn,0,0);
    VL_OUT8(__PVT__prcTxByteGnt,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_SIETxGnt,0,0);
    VL_SIG8(__PVT__next_TxBits,1,0);
    VL_SIG8(__PVT__next_TxCtl,0,0);
    VL_SIG8(__PVT__next_TxFSRate,0,0);
    VL_SIG8(__PVT__next_USBWireRdyOut,0,0);
    VL_SIG8(__PVT__next_USBWireWEn,0,0);
    VL_SIG8(__PVT__next_prcTxByteGnt,0,0);
    VL_SIG8(__PVT__muxSIENotPTXB,0,0);
    VL_SIG8(__PVT__next_muxSIENotPTXB,0,0);
    VL_SIG8(__PVT__CurrState_txWireArb,1,0);
    VL_SIG8(__PVT__NextState_txWireArb,1,0);
    //char	__VpadToAlign35[1];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_txWireArb,1,0);
    VL_SIG8(__Vdly__muxSIENotPTXB,0,0);
    VL_SIG8(__Vdly__prcTxByteGnt,0,0);
    VL_SIG8(__Vdly__SIETxGnt,0,0);
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_USBTxWireArbiter& operator= (const VusbHostSlave_USBTxWireArbiter&);	///< Copying not allowed
    VusbHostSlave_USBTxWireArbiter(const VusbHostSlave_USBTxWireArbiter&);	///< Copying not allowed
  public:
    VusbHostSlave_USBTxWireArbiter(const char* name="TOP");
    ~VusbHostSlave_USBTxWireArbiter();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
