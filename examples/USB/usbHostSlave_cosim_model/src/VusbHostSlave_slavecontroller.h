// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_slavecontroller_H_
#define _VusbHostSlave_slavecontroller_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_slavecontroller) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__CRCError,0,0);
    VL_IN8(__PVT__RxByte,7,0);
    VL_IN8(__PVT__RxDataWEn,0,0);
    VL_IN8(__PVT__RxOverflow,0,0);
    VL_IN8(__PVT__RxStatus,7,0);
    VL_IN8(__PVT__RxTimeOut,0,0);
    VL_IN8(__PVT__SCGlobalEn,0,0);
    VL_IN8(__PVT__USBEndPControlReg,4,0);
    VL_IN8(__PVT__USBTgtAddress,6,0);
    VL_IN8(__PVT__bitStuffError,0,0);
    VL_IN8(__PVT__getPacketRdy,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__sendPacketRdy,0,0);
    VL_OUT8(__PVT__NAKSent,0,0);
    VL_OUT8(__PVT__SOFRxed,0,0);
    VL_OUT8(__PVT__USBEndPNakTransTypeReg,1,0);
    VL_OUT8(__PVT__USBEndPTransTypeReg,1,0);
    VL_OUT8(__PVT__USBEndP,3,0);
    VL_OUT8(__PVT__clrEPRdy,0,0);
    VL_OUT8(__PVT__endPMuxErrorsWEn,0,0);
    VL_OUT8(__PVT__endPointReadyToGetPkt,0,0);
    VL_OUT8(__PVT__getPacketREn,0,0);
    VL_OUT8(__PVT__sendPacketPID,3,0);
    VL_OUT8(__PVT__sendPacketWEn,0,0);
    VL_OUT8(__PVT__stallSent,0,0);
    VL_OUT8(__PVT__transDone,0,0);
    //char	__VpadToAlign27[1];
    VL_OUT16(__PVT__frameNum,10,0);
    //char	__VpadToAlign30[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__next_NAKSent,0,0);
    VL_SIG8(__PVT__next_SOFRxed,0,0);
    VL_SIG8(__PVT__next_USBEndPNakTransTypeReg,1,0);
    VL_SIG8(__PVT__next_USBEndPTransTypeReg,1,0);
    VL_SIG8(__PVT__next_USBEndP,3,0);
    VL_SIG8(__PVT__next_clrEPRdy,0,0);
    VL_SIG8(__PVT__next_endPMuxErrorsWEn,0,0);
    VL_SIG8(__PVT__next_endPointReadyToGetPkt,0,0);
    VL_SIG8(__PVT__next_getPacketREn,0,0);
    VL_SIG8(__PVT__next_sendPacketPID,3,0);
    VL_SIG8(__PVT__next_sendPacketWEn,0,0);
    VL_SIG8(__PVT__next_stallSent,0,0);
    VL_SIG8(__PVT__next_transDone,0,0);
    VL_SIG8(__PVT__PIDByte,7,0);
    VL_SIG8(__PVT__next_PIDByte,7,0);
    VL_SIG8(__PVT__USBAddress,6,0);
    VL_SIG8(__PVT__next_USBAddress,6,0);
    VL_SIG8(__PVT__USBEndPControlRegCopy,4,0);
    VL_SIG8(__PVT__next_USBEndPControlRegCopy,4,0);
    VL_SIG8(__PVT__addrEndPTemp,7,0);
    VL_SIG8(__PVT__next_addrEndPTemp,7,0);
    VL_SIG8(__PVT__endpCRCTemp,7,0);
    VL_SIG8(__PVT__next_endpCRCTemp,7,0);
    VL_SIG8(__PVT__tempUSBEndPTransTypeReg,1,0);
    VL_SIG8(__PVT__next_tempUSBEndPTransTypeReg,1,0);
    VL_SIG8(__PVT__CurrState_slvCntrl,4,0);
    VL_SIG8(__PVT__NextState_slvCntrl,4,0);
    //char	__VpadToAlign63[1];
    VL_SIG16(__PVT__next_frameNum,10,0);
    //char	__VpadToAlign66[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__CurrState_slvCntrl,4,0);
    VL_SIG8(__Vdly__tempUSBEndPTransTypeReg,1,0);
    VL_SIG8(__Vdly__addrEndPTemp,7,0);
    VL_SIG8(__Vdly__endpCRCTemp,7,0);
    VL_SIG8(__Vdly__USBAddress,6,0);
    VL_SIG8(__Vdly__PIDByte,7,0);
    VL_SIG8(__Vdly__USBEndPControlRegCopy,4,0);
    VL_SIG8(__Vdly__transDone,0,0);
    VL_SIG8(__Vdly__getPacketREn,0,0);
    VL_SIG8(__Vdly__sendPacketPID,3,0);
    VL_SIG8(__Vdly__sendPacketWEn,0,0);
    VL_SIG8(__Vdly__clrEPRdy,0,0);
    VL_SIG8(__Vdly__USBEndPTransTypeReg,1,0);
    VL_SIG8(__Vdly__USBEndPNakTransTypeReg,1,0);
    VL_SIG8(__Vdly__NAKSent,0,0);
    VL_SIG8(__Vdly__stallSent,0,0);
    VL_SIG8(__Vdly__SOFRxed,0,0);
    VL_SIG8(__Vdly__endPMuxErrorsWEn,0,0);
    VL_SIG8(__Vdly__USBEndP,3,0);
    VL_SIG8(__Vdly__endPointReadyToGetPkt,0,0);
    VL_SIG16(__Vdly__frameNum,10,0);
    //char	__VpadToAlign94[2];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign100[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_slavecontroller& operator= (const VusbHostSlave_slavecontroller&);	///< Copying not allowed
    VusbHostSlave_slavecontroller(const VusbHostSlave_slavecontroller&);	///< Copying not allowed
  public:
    VusbHostSlave_slavecontroller(const char* name="TOP");
    ~VusbHostSlave_slavecontroller();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSlaveControl__u_slavecontroller__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSlaveControl__u_slavecontroller__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSlaveControl__u_slavecontroller__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
