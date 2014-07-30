// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_processTxByte_H_
#define _VusbHostSlave_processTxByte_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_processTxByte) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__JBit,1,0);
    VL_IN8(__PVT__KBit,1,0);
    VL_IN8(__PVT__TxByteCtrlIn,7,0);
    VL_IN8(__PVT__TxByteFullSpeedRateIn,0,0);
    VL_IN8(__PVT__TxByteIn,7,0);
    VL_IN8(__PVT__USBWireGnt,0,0);
    VL_IN8(__PVT__USBWireRdy,0,0);
    VL_IN8(__PVT__processTxByteWEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__USBWireCtrl,0,0);
    VL_OUT8(__PVT__USBWireData,1,0);
    VL_OUT8(__PVT__USBWireFullSpeedRate,0,0);
    VL_OUT8(__PVT__USBWireReq,0,0);
    VL_OUT8(__PVT__USBWireWEn,0,0);
    VL_OUT8(__PVT__processTxByteRdy,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_USBWireCtrl,0,0);
    VL_SIG8(__PVT__next_USBWireData,1,0);
    VL_SIG8(__PVT__next_USBWireFullSpeedRate,0,0);
    VL_SIG8(__PVT__next_USBWireReq,0,0);
    VL_SIG8(__PVT__next_USBWireWEn,0,0);
    VL_SIG8(__PVT__next_processTxByteRdy,0,0);
    VL_SIG8(__PVT__TXLineState,1,0);
    VL_SIG8(__PVT__next_TXLineState,1,0);
    VL_SIG8(__PVT__TXOneCount,3,0);
    VL_SIG8(__PVT__next_TXOneCount,3,0);
    VL_SIG8(__PVT__TxByteCtrl,7,0);
    VL_SIG8(__PVT__next_TxByteCtrl,7,0);
    VL_SIG8(__PVT__TxByteFullSpeedRate,0,0);
    VL_SIG8(__PVT__next_TxByteFullSpeedRate,0,0);
    VL_SIG8(__PVT__TxByte,7,0);
    VL_SIG8(__PVT__next_TxByte,7,0);
    VL_SIG8(__PVT__i,3,0);
    VL_SIG8(__PVT__next_i,3,0);
    VL_SIG8(__PVT__CurrState_prcTxB,4,0);
    VL_SIG8(__PVT__NextState_prcTxB,4,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_prcTxB,4,0);
    VL_SIG8(__Vdly__i,3,0);
    VL_SIG8(__Vdly__TxByte,7,0);
    VL_SIG8(__Vdly__TxByteCtrl,7,0);
    VL_SIG8(__Vdly__TXLineState,1,0);
    VL_SIG8(__Vdly__TXOneCount,3,0);
    VL_SIG8(__Vdly__TxByteFullSpeedRate,0,0);
    VL_SIG8(__Vdly__processTxByteRdy,0,0);
    VL_SIG8(__Vdly__USBWireData,1,0);
    VL_SIG8(__Vdly__USBWireCtrl,0,0);
    VL_SIG8(__Vdly__USBWireReq,0,0);
    VL_SIG8(__Vdly__USBWireWEn,0,0);
    VL_SIG8(__Vdly__USBWireFullSpeedRate,0,0);
    //char	__VpadToAlign57[3];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_processTxByte& operator= (const VusbHostSlave_processTxByte&);	///< Copying not allowed
    VusbHostSlave_processTxByte(const VusbHostSlave_processTxByte&);	///< Copying not allowed
  public:
    VusbHostSlave_processTxByte(const char* name="TOP");
    ~VusbHostSlave_processTxByte();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
