// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_sendPacket_H_
#define _VusbHostSlave_sendPacket_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_sendPacket) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__HCTxPortGnt,0,0);
    VL_IN8(__PVT__HCTxPortRdy,0,0);
    VL_IN8(__PVT__PID,3,0);
    VL_IN8(__PVT__TxAddr,6,0);
    VL_IN8(__PVT__TxEndP,3,0);
    VL_IN8(__PVT__fifoData,7,0);
    VL_IN8(__PVT__fifoEmpty,0,0);
    VL_IN8(__PVT__fullSpeedPolarity,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketWEn,0,0);
    VL_OUT8(__PVT__HCTxPortCntl,7,0);
    VL_OUT8(__PVT__HCTxPortData,7,0);
    VL_OUT8(__PVT__HCTxPortReq,0,0);
    VL_OUT8(__PVT__HCTxPortWEn,0,0);
    VL_OUT8(__PVT__fifoReadEn,0,0);
    VL_OUT8(__PVT__sendPacketRdy,0,0);
    //char	__VpadToAlign17[1];
    VL_OUT16(__PVT__frameNum,10,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_HCTxPortCntl,7,0);
    VL_SIG8(__PVT__next_HCTxPortData,7,0);
    VL_SIG8(__PVT__next_HCTxPortReq,0,0);
    VL_SIG8(__PVT__next_HCTxPortWEn,0,0);
    VL_SIG8(__PVT__next_fifoReadEn,0,0);
    VL_SIG8(__PVT__next_sendPacketRdy,0,0);
    VL_SIG8(__PVT__PIDNotPID,7,0);
    VL_SIG8(__PVT__CurrState_sndPkt,4,0);
    VL_SIG8(__PVT__NextState_sndPkt,4,0);
    //char	__VpadToAlign33[1];
    VL_SIG16(__PVT__next_frameNum,10,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_sndPkt,4,0);
    VL_SIG8(__Vdly__sendPacketRdy,0,0);
    VL_SIG8(__Vdly__HCTxPortReq,0,0);
    VL_SIG8(__Vdly__HCTxPortWEn,0,0);
    VL_SIG8(__Vdly__HCTxPortData,7,0);
    VL_SIG8(__Vdly__HCTxPortCntl,7,0);
    VL_SIG8(__Vdly__fifoReadEn,0,0);
    //char	__VpadToAlign47[1];
    VL_SIG16(__Vdly__frameNum,10,0);
    //char	__VpadToAlign50[2];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_sendPacket& operator= (const VusbHostSlave_sendPacket&);	///< Copying not allowed
    VusbHostSlave_sendPacket(const VusbHostSlave_sendPacket&);	///< Copying not allowed
  public:
    VusbHostSlave_sendPacket(const char* name="TOP");
    ~VusbHostSlave_sendPacket();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_sendPacket__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbHostControl__u_sendPacket__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_sendPacket__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_sendPacket__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_sendPacket__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
