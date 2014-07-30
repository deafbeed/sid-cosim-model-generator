// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_slaveSendPacket_H_
#define _VusbHostSlave_slaveSendPacket_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_slaveSendPacket) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__PID,3,0);
    VL_IN8(__PVT__SCTxPortGnt,0,0);
    VL_IN8(__PVT__SCTxPortRdy,0,0);
    VL_IN8(__PVT__fifoData,7,0);
    VL_IN8(__PVT__fifoEmpty,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketWEn,0,0);
    VL_OUT8(__PVT__SCTxPortCntl,7,0);
    VL_OUT8(__PVT__SCTxPortData,7,0);
    VL_OUT8(__PVT__SCTxPortReq,0,0);
    VL_OUT8(__PVT__SCTxPortWEn,0,0);
    VL_OUT8(__PVT__fifoReadEn,0,0);
    VL_OUT8(__PVT__sendPacketRdy,0,0);
    //char	__VpadToAlign14[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_SCTxPortCntl,7,0);
    VL_SIG8(__PVT__next_SCTxPortData,7,0);
    VL_SIG8(__PVT__next_SCTxPortReq,0,0);
    VL_SIG8(__PVT__next_SCTxPortWEn,0,0);
    VL_SIG8(__PVT__next_fifoReadEn,0,0);
    VL_SIG8(__PVT__next_sendPacketRdy,0,0);
    VL_SIG8(__PVT__PIDNotPID,7,0);
    VL_SIG8(__PVT__CurrState_slvSndPkt,3,0);
    VL_SIG8(__PVT__NextState_slvSndPkt,3,0);
    //char	__VpadToAlign29[3];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_slvSndPkt,3,0);
    VL_SIG8(__Vdly__sendPacketRdy,0,0);
    VL_SIG8(__Vdly__SCTxPortReq,0,0);
    VL_SIG8(__Vdly__SCTxPortWEn,0,0);
    VL_SIG8(__Vdly__SCTxPortData,7,0);
    VL_SIG8(__Vdly__SCTxPortCntl,7,0);
    VL_SIG8(__Vdly__fifoReadEn,0,0);
    //char	__VpadToAlign43[1];
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_slaveSendPacket& operator= (const VusbHostSlave_slaveSendPacket&);	///< Copying not allowed
    VusbHostSlave_slaveSendPacket(const VusbHostSlave_slaveSendPacket&);	///< Copying not allowed
  public:
    VusbHostSlave_slaveSendPacket(const char* name="TOP");
    ~VusbHostSlave_slaveSendPacket();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_slaveSendPacket__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
