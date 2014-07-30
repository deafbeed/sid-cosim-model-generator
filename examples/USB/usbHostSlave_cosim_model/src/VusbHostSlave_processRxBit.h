// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_processRxBit_H_
#define _VusbHostSlave_processRxBit_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_processRxBit) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__JBit,1,0);
    VL_IN8(__PVT__KBit,1,0);
    VL_IN8(__PVT__RxBitsIn,1,0);
    VL_IN8(__PVT__RxWireActive,0,0);
    VL_IN8(__PVT__processRxBitsWEn,0,0);
    VL_IN8(__PVT__processRxByteRdy,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__RxCtrlOut,7,0);
    VL_OUT8(__PVT__RxDataOut,7,0);
    VL_OUT8(__PVT__processRxBitRdy,0,0);
    VL_OUT8(__PVT__processRxByteWEn,0,0);
    VL_OUT8(__PVT__resumeDetected,0,0);
    //char	__VpadToAlign13[3];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_RxCtrlOut,7,0);
    VL_SIG8(__PVT__next_RxDataOut,7,0);
    VL_SIG8(__PVT__next_processRxBitRdy,0,0);
    VL_SIG8(__PVT__next_processRxByteWEn,0,0);
    VL_SIG8(__PVT__next_resumeDetected,0,0);
    VL_SIG8(__PVT__RXBitCount,3,0);
    VL_SIG8(__PVT__next_RXBitCount,3,0);
    VL_SIG8(__PVT__RXBitStMachCurrState,1,0);
    VL_SIG8(__PVT__next_RXBitStMachCurrState,1,0);
    VL_SIG8(__PVT__RXByte,7,0);
    VL_SIG8(__PVT__next_RXByte,7,0);
    VL_SIG8(__PVT__RXSameBitCount,3,0);
    VL_SIG8(__PVT__next_RXSameBitCount,3,0);
    VL_SIG8(__PVT__RxBits,1,0);
    VL_SIG8(__PVT__next_RxBits,1,0);
    VL_SIG8(__PVT__bitStuffError,0,0);
    VL_SIG8(__PVT__next_bitStuffError,0,0);
    VL_SIG8(__PVT__oldRXBits,1,0);
    VL_SIG8(__PVT__next_oldRXBits,1,0);
    VL_SIG8(__PVT__resumeWaitCnt,4,0);
    VL_SIG8(__PVT__next_resumeWaitCnt,4,0);
    VL_SIG8(__PVT__CurrState_prRxBit,3,0);
    VL_SIG8(__PVT__NextState_prRxBit,3,0);
    //char	__VpadToAlign43[1];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_prRxBit,3,0);
    VL_SIG8(__Vdly__RXBitStMachCurrState,1,0);
    VL_SIG8(__Vdly__RxBits,1,0);
    VL_SIG8(__Vdly__RXSameBitCount,3,0);
    VL_SIG8(__Vdly__RXBitCount,3,0);
    VL_SIG8(__Vdly__oldRXBits,1,0);
    VL_SIG8(__Vdly__RXByte,7,0);
    VL_SIG8(__Vdly__bitStuffError,0,0);
    VL_SIG8(__Vdly__resumeWaitCnt,4,0);
    VL_SIG8(__Vdly__processRxByteWEn,0,0);
    VL_SIG8(__Vdly__RxCtrlOut,7,0);
    VL_SIG8(__Vdly__RxDataOut,7,0);
    VL_SIG8(__Vdly__resumeDetected,0,0);
    VL_SIG8(__Vdly__processRxBitRdy,0,0);
    //char	__VpadToAlign62[2];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign68[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_processRxBit& operator= (const VusbHostSlave_processRxBit&);	///< Copying not allowed
    VusbHostSlave_processRxBit(const VusbHostSlave_processRxBit&);	///< Copying not allowed
  public:
    VusbHostSlave_processRxBit(const char* name="TOP");
    ~VusbHostSlave_processRxBit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
