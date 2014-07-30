// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_hostcontroller_H_
#define _VusbHostSlave_hostcontroller_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_hostcontroller) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__RXStatus,7,0);
    VL_IN8(__PVT__getPacketRdy,0,0);
    VL_IN8(__PVT__isoEn,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketArbiterGnt,0,0);
    VL_IN8(__PVT__sendPacketRdy,0,0);
    VL_IN8(__PVT__transReq,0,0);
    VL_IN8(__PVT__transType,1,0);
    VL_OUT8(__PVT__clearTXReq,0,0);
    VL_OUT8(__PVT__getPacketREn,0,0);
    VL_OUT8(__PVT__sendPacketArbiterReq,0,0);
    VL_OUT8(__PVT__sendPacketPID,3,0);
    VL_OUT8(__PVT__sendPacketWEn,0,0);
    VL_OUT8(__PVT__transDone,0,0);
    //char	__VpadToAlign15[1];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_clearTXReq,0,0);
    VL_SIG8(__PVT__next_getPacketREn,0,0);
    VL_SIG8(__PVT__next_sendPacketArbiterReq,0,0);
    VL_SIG8(__PVT__next_sendPacketPID,3,0);
    VL_SIG8(__PVT__next_sendPacketWEn,0,0);
    VL_SIG8(__PVT__next_transDone,0,0);
    VL_SIG8(__PVT__delCnt,3,0);
    VL_SIG8(__PVT__next_delCnt,3,0);
    VL_SIG8(__PVT__CurrState_hstCntrl,5,0);
    VL_SIG8(__PVT__NextState_hstCntrl,5,0);
    //char	__VpadToAlign30[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_hstCntrl,5,0);
    VL_SIG8(__Vdly__delCnt,3,0);
    VL_SIG8(__Vdly__transDone,0,0);
    VL_SIG8(__Vdly__clearTXReq,0,0);
    VL_SIG8(__Vdly__getPacketREn,0,0);
    VL_SIG8(__Vdly__sendPacketArbiterReq,0,0);
    VL_SIG8(__Vdly__sendPacketWEn,0,0);
    VL_SIG8(__Vdly__sendPacketPID,3,0);
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_hostcontroller& operator= (const VusbHostSlave_hostcontroller&);	///< Copying not allowed
    VusbHostSlave_hostcontroller(const VusbHostSlave_hostcontroller&);	///< Copying not allowed
  public:
    VusbHostSlave_hostcontroller(const char* name="TOP");
    ~VusbHostSlave_hostcontroller();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbHostControl__u_hostController__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbHostControl__u_hostController__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbHostControl__u_hostController__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
