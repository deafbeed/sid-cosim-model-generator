// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_SIETransmitter_H_
#define _VusbHostSlave_SIETransmitter_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_SIETransmitter) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__CRC16UpdateRdy,0,0);
    VL_IN8(__PVT__CRC5Result,4,0);
    VL_IN8(__PVT__CRC5UpdateRdy,0,0);
    VL_IN8(__PVT__JBit,1,0);
    VL_IN8(__PVT__KBit,1,0);
    VL_IN8(__PVT__SIEPortCtrlIn,7,0);
    VL_IN8(__PVT__SIEPortDataIn,7,0);
    VL_IN8(__PVT__SIEPortWEn,0,0);
    VL_IN8(__PVT__USBWireGnt,0,0);
    VL_IN8(__PVT__USBWireRdy,0,0);
    VL_IN8(__PVT__fullSpeedRateIn,0,0);
    VL_IN8(__PVT__processTxByteRdy,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__CRC16En,0,0);
    VL_OUT8(__PVT__CRC5En,0,0);
    VL_OUT8(__PVT__CRC5_8Bit,0,0);
    VL_OUT8(__PVT__CRCData,7,0);
    VL_OUT8(__PVT__SIEPortTxRdy,0,0);
    VL_OUT8(__PVT__TxByteOutCtrl,7,0);
    VL_OUT8(__PVT__TxByteOutFullSpeedRate,0,0);
    VL_OUT8(__PVT__TxByteOut,7,0);
    VL_OUT8(__PVT__USBWireCtrl,0,0);
    VL_OUT8(__PVT__USBWireData,1,0);
    VL_OUT8(__PVT__USBWireFullSpeedRate,0,0);
    VL_OUT8(__PVT__USBWireReq,0,0);
    VL_OUT8(__PVT__USBWireWEn,0,0);
    VL_OUT8(__PVT__processTxByteWEn,0,0);
    VL_OUT8(__PVT__rstCRC,0,0);
    //char	__VpadToAlign29[1];
    VL_IN16(__PVT__CRC16Result,15,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_CRC16En,0,0);
    VL_SIG8(__PVT__next_CRC5En,0,0);
    VL_SIG8(__PVT__next_CRC5_8Bit,0,0);
    VL_SIG8(__PVT__next_CRCData,7,0);
    VL_SIG8(__PVT__next_SIEPortTxRdy,0,0);
    VL_SIG8(__PVT__next_TxByteOutCtrl,7,0);
    VL_SIG8(__PVT__next_TxByteOutFullSpeedRate,0,0);
    VL_SIG8(__PVT__next_TxByteOut,7,0);
    VL_SIG8(__PVT__next_USBWireCtrl,0,0);
    VL_SIG8(__PVT__next_USBWireData,1,0);
    VL_SIG8(__PVT__next_USBWireFullSpeedRate,0,0);
    VL_SIG8(__PVT__next_USBWireReq,0,0);
    VL_SIG8(__PVT__next_USBWireWEn,0,0);
    VL_SIG8(__PVT__next_processTxByteWEn,0,0);
    VL_SIG8(__PVT__next_rstCRC,0,0);
    VL_SIG8(__PVT__SIEPortCtrl,7,0);
    VL_SIG8(__PVT__next_SIEPortCtrl,7,0);
    VL_SIG8(__PVT__SIEPortData,7,0);
    VL_SIG8(__PVT__next_SIEPortData,7,0);
    VL_SIG8(__PVT__i,2,0);
    VL_SIG8(__PVT__next_i,2,0);
    VL_SIG8(__PVT__CurrState_SIETx,5,0);
    VL_SIG8(__PVT__NextState_SIETx,5,0);
    //char	__VpadToAlign59[1];
    VL_SIG16(__PVT__resumeCnt,15,0);
    VL_SIG16(__PVT__next_resumeCnt,15,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_SIETx,5,0);
    VL_SIG8(__Vdly__SIEPortData,7,0);
    VL_SIG8(__Vdly__SIEPortCtrl,7,0);
    VL_SIG8(__Vdly__i,2,0);
    VL_SIG8(__Vdly__processTxByteWEn,0,0);
    VL_SIG8(__Vdly__TxByteOut,7,0);
    VL_SIG8(__Vdly__TxByteOutCtrl,7,0);
    VL_SIG8(__Vdly__USBWireData,1,0);
    VL_SIG8(__Vdly__USBWireCtrl,0,0);
    VL_SIG8(__Vdly__USBWireReq,0,0);
    VL_SIG8(__Vdly__USBWireWEn,0,0);
    VL_SIG8(__Vdly__rstCRC,0,0);
    VL_SIG8(__Vdly__CRCData,7,0);
    VL_SIG8(__Vdly__CRC5En,0,0);
    VL_SIG8(__Vdly__CRC5_8Bit,0,0);
    VL_SIG8(__Vdly__CRC16En,0,0);
    VL_SIG8(__Vdly__SIEPortTxRdy,0,0);
    VL_SIG8(__Vdly__TxByteOutFullSpeedRate,0,0);
    VL_SIG8(__Vdly__USBWireFullSpeedRate,0,0);
    //char	__VpadToAlign87[1];
    VL_SIG16(__Vdly__resumeCnt,15,0);
    //char	__VpadToAlign90[2];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_SIETransmitter& operator= (const VusbHostSlave_SIETransmitter&);	///< Copying not allowed
    VusbHostSlave_SIETransmitter(const VusbHostSlave_SIETransmitter&);	///< Copying not allowed
  public:
    VusbHostSlave_SIETransmitter(const char* name="TOP");
    ~VusbHostSlave_SIETransmitter();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
