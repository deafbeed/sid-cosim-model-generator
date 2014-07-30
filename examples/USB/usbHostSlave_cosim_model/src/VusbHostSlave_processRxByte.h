// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_processRxByte_H_
#define _VusbHostSlave_processRxByte_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_processRxByte) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__CRC16UpdateRdy,0,0);
    VL_IN8(__PVT__CRC5Result,4,0);
    VL_IN8(__PVT__CRC5UpdateRdy,0,0);
    VL_IN8(__PVT__RxByteIn,7,0);
    VL_IN8(__PVT__RxCtrlIn,7,0);
    VL_IN8(__PVT__processRxDataInWEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__CRC16En,0,0);
    VL_OUT8(__PVT__CRC5En,0,0);
    VL_OUT8(__PVT__CRC5_8Bit,0,0);
    VL_OUT8(__PVT__CRCData,7,0);
    VL_OUT8(__PVT__RxCtrlOut,7,0);
    VL_OUT8(__PVT__RxDataOutWEn,0,0);
    VL_OUT8(__PVT__RxDataOut,7,0);
    VL_OUT8(__PVT__processRxByteRdy,0,0);
    VL_OUT8(__PVT__rstCRC,0,0);
    //char	__VpadToAlign17[1];
    VL_IN16(__PVT__CRC16Result,15,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_CRC16En,0,0);
    VL_SIG8(__PVT__next_CRC5En,0,0);
    VL_SIG8(__PVT__next_CRC5_8Bit,0,0);
    VL_SIG8(__PVT__next_CRCData,7,0);
    VL_SIG8(__PVT__next_RxCtrlOut,7,0);
    VL_SIG8(__PVT__next_RxDataOutWEn,0,0);
    VL_SIG8(__PVT__next_RxDataOut,7,0);
    VL_SIG8(__PVT__next_processRxByteRdy,0,0);
    VL_SIG8(__PVT__next_rstCRC,0,0);
    VL_SIG8(__PVT__ACKRxed,0,0);
    VL_SIG8(__PVT__next_ACKRxed,0,0);
    VL_SIG8(__PVT__CRCError,0,0);
    VL_SIG8(__PVT__next_CRCError,0,0);
    VL_SIG8(__PVT__NAKRxed,0,0);
    VL_SIG8(__PVT__next_NAKRxed,0,0);
    VL_SIG8(__PVT__RXByteStMachCurrState,2,0);
    VL_SIG8(__PVT__next_RXByteStMachCurrState,2,0);
    VL_SIG8(__PVT__RxByte,7,0);
    VL_SIG8(__PVT__next_RxByte,7,0);
    VL_SIG8(__PVT__RxCtrl,7,0);
    VL_SIG8(__PVT__next_RxCtrl,7,0);
    VL_SIG8(__PVT__RxOverflow,0,0);
    VL_SIG8(__PVT__next_RxOverflow,0,0);
    VL_SIG8(__PVT__RxStatus,7,0);
    VL_SIG8(__PVT__RxTimeOut,0,0);
    VL_SIG8(__PVT__next_RxTimeOut,0,0);
    VL_SIG8(__PVT__Signal1,0,0);
    VL_SIG8(__PVT__next_Signal1,0,0);
    VL_SIG8(__PVT__bitStuffError,0,0);
    VL_SIG8(__PVT__next_bitStuffError,0,0);
    VL_SIG8(__PVT__dataSequence,0,0);
    VL_SIG8(__PVT__next_dataSequence,0,0);
    VL_SIG8(__PVT__stallRxed,0,0);
    VL_SIG8(__PVT__next_stallRxed,0,0);
    VL_SIG8(__PVT__CurrState_prRxByte,3,0);
    VL_SIG8(__PVT__NextState_prRxByte,3,0);
    VL_SIG16(__PVT__RXDataByteCnt,9,0);
    VL_SIG16(__PVT__next_RXDataByteCnt,9,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_prRxByte,3,0);
    VL_SIG8(__Vdly__RxByte,7,0);
    VL_SIG8(__Vdly__RxCtrl,7,0);
    VL_SIG8(__Vdly__RXByteStMachCurrState,2,0);
    VL_SIG8(__Vdly__CRCError,0,0);
    VL_SIG8(__Vdly__bitStuffError,0,0);
    VL_SIG8(__Vdly__RxOverflow,0,0);
    VL_SIG8(__Vdly__RxTimeOut,0,0);
    VL_SIG8(__Vdly__NAKRxed,0,0);
    VL_SIG8(__Vdly__stallRxed,0,0);
    VL_SIG8(__Vdly__ACKRxed,0,0);
    VL_SIG8(__Vdly__dataSequence,0,0);
    VL_SIG8(__Vdly__RxDataOut,7,0);
    VL_SIG8(__Vdly__RxCtrlOut,7,0);
    VL_SIG8(__Vdly__RxDataOutWEn,0,0);
    VL_SIG8(__Vdly__rstCRC,0,0);
    VL_SIG8(__Vdly__CRCData,7,0);
    VL_SIG8(__Vdly__CRC5En,0,0);
    VL_SIG8(__Vdly__CRC5_8Bit,0,0);
    VL_SIG8(__Vdly__CRC16En,0,0);
    VL_SIG8(__Vdly__processRxByteRdy,0,0);
    //char	__VpadToAlign89[1];
    VL_SIG16(__Vdly__RXDataByteCnt,9,0);
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_processRxByte& operator= (const VusbHostSlave_processRxByte&);	///< Copying not allowed
    VusbHostSlave_processRxByte(const VusbHostSlave_processRxByte&);	///< Copying not allowed
  public:
    VusbHostSlave_processRxByte(const char* name="TOP");
    ~VusbHostSlave_processRxByte();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
