// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_slaveGetPacket_H_
#define _VusbHostSlave_slaveGetPacket_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_slaveGetPacket) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__RXDataIn,7,0);
    VL_IN8(__PVT__RXDataValid,0,0);
    VL_IN8(__PVT__RXFifoFull,0,0);
    VL_IN8(__PVT__RXStreamStatusIn,7,0);
    VL_IN8(__PVT__SIERxTimeOut,0,0);
    VL_IN8(__PVT__endPointReady,0,0);
    VL_IN8(__PVT__getPacketEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__ACKRxed,0,0);
    VL_OUT8(__PVT__CRCError,0,0);
    VL_OUT8(__PVT__RXFifoData,7,0);
    VL_OUT8(__PVT__RXFifoWEn,0,0);
    VL_OUT8(__PVT__RXOverflow,0,0);
    VL_OUT8(__PVT__RXPacketRdy,0,0);
    VL_OUT8(__PVT__RXTimeOut,0,0);
    VL_OUT8(__PVT__RxPID,3,0);
    VL_OUT8(__PVT__SIERxTimeOutEn,0,0);
    VL_OUT8(__PVT__bitStuffError,0,0);
    VL_OUT8(__PVT__dataSequence,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_ACKRxed,0,0);
    VL_SIG8(__PVT__next_CRCError,0,0);
    VL_SIG8(__PVT__next_RXFifoData,7,0);
    VL_SIG8(__PVT__next_RXFifoWEn,0,0);
    VL_SIG8(__PVT__next_RXOverflow,0,0);
    VL_SIG8(__PVT__next_RXPacketRdy,0,0);
    VL_SIG8(__PVT__next_RXTimeOut,0,0);
    VL_SIG8(__PVT__next_RxPID,3,0);
    VL_SIG8(__PVT__next_SIERxTimeOutEn,0,0);
    VL_SIG8(__PVT__next_bitStuffError,0,0);
    VL_SIG8(__PVT__next_dataSequence,0,0);
    VL_SIG8(__PVT__RXByteOld,7,0);
    VL_SIG8(__PVT__next_RXByteOld,7,0);
    VL_SIG8(__PVT__RXByteOldest,7,0);
    VL_SIG8(__PVT__next_RXByteOldest,7,0);
    VL_SIG8(__PVT__RXByte,7,0);
    VL_SIG8(__PVT__next_RXByte,7,0);
    VL_SIG8(__PVT__RXStreamStatus,7,0);
    VL_SIG8(__PVT__next_RXStreamStatus,7,0);
    VL_SIG8(__PVT__CurrState_slvGetPkt,4,0);
    VL_SIG8(__PVT__NextState_slvGetPkt,4,0);
    //char	__VpadToAlign45[3];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_slvGetPkt,4,0);
    VL_SIG8(__Vdly__RXByteOld,7,0);
    VL_SIG8(__Vdly__RXByteOldest,7,0);
    VL_SIG8(__Vdly__RXByte,7,0);
    VL_SIG8(__Vdly__RXStreamStatus,7,0);
    VL_SIG8(__Vdly__RXPacketRdy,0,0);
    VL_SIG8(__Vdly__RXFifoWEn,0,0);
    VL_SIG8(__Vdly__RXFifoData,7,0);
    VL_SIG8(__Vdly__CRCError,0,0);
    VL_SIG8(__Vdly__bitStuffError,0,0);
    VL_SIG8(__Vdly__RXOverflow,0,0);
    VL_SIG8(__Vdly__RXTimeOut,0,0);
    VL_SIG8(__Vdly__ACKRxed,0,0);
    VL_SIG8(__Vdly__dataSequence,0,0);
    VL_SIG8(__Vdly__SIERxTimeOutEn,0,0);
    VL_SIG8(__Vdly__RxPID,3,0);
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_slaveGetPacket& operator= (const VusbHostSlave_slaveGetPacket&);	///< Copying not allowed
    VusbHostSlave_slaveGetPacket(const VusbHostSlave_slaveGetPacket&);	///< Copying not allowed
  public:
    VusbHostSlave_slaveGetPacket(const char* name="TOP");
    ~VusbHostSlave_slaveGetPacket();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_slaveGetPacket__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_slaveGetPacket__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_slaveGetPacket__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
