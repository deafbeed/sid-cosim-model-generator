// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_writeUSBWireData_H_
#define _VusbHostSlave_writeUSBWireData_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_writeUSBWireData) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__TxBitsIn,1,0);
    VL_IN8(__PVT__TxCtrlIn,0,0);
    VL_IN8(__PVT__USBWireWEn,0,0);
    VL_IN8(__PVT__fullSpeedRate,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__TxBitsOut,1,0);
    VL_OUT8(__PVT__TxDataOutTick,0,0);
    VL_OUT8(__PVT__TxCtrlOut,0,0);
    VL_OUT8(__PVT__USBWireRdy,0,0);
    VL_OUT8(__PVT__TxWireActiveDrive,0,0);
    //char	__VpadToAlign11[1];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__buffer0,2,0);
    VL_SIG8(__PVT__buffer1,2,0);
    VL_SIG8(__PVT__buffer2,2,0);
    VL_SIG8(__PVT__buffer3,2,0);
    VL_SIG8(__PVT__bufferCnt,2,0);
    VL_SIG8(__PVT__bufferInIndex,1,0);
    VL_SIG8(__PVT__bufferOutIndex,1,0);
    VL_SIG8(__PVT__decBufferCnt,0,0);
    VL_SIG8(__PVT__i,4,0);
    VL_SIG8(__PVT__incBufferCnt,0,0);
    VL_SIG8(__PVT__fullSpeedTick,0,0);
    VL_SIG8(__PVT__lowSpeedTick,0,0);
    VL_SIG8(__PVT__bufferInStMachCurrState,1,0);
    VL_SIG8(__PVT__bufferOutStMachCurrState,1,0);
    //char	__VpadToAlign30[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__bufferCnt,2,0);
    VL_SIG8(__Vdly__incBufferCnt,0,0);
    VL_SIG8(__Vdly__bufferInIndex,1,0);
    VL_SIG8(__Vdly__buffer0,2,0);
    VL_SIG8(__Vdly__buffer1,2,0);
    VL_SIG8(__Vdly__buffer2,2,0);
    VL_SIG8(__Vdly__buffer3,2,0);
    VL_SIG8(__Vdly__USBWireRdy,0,0);
    VL_SIG8(__Vdly__bufferInStMachCurrState,1,0);
    VL_SIG8(__Vdly__i,4,0);
    VL_SIG8(__Vdly__fullSpeedTick,0,0);
    VL_SIG8(__Vdly__lowSpeedTick,0,0);
    VL_SIG8(__Vdly__bufferOutIndex,1,0);
    VL_SIG8(__Vdly__decBufferCnt,0,0);
    VL_SIG8(__Vdly__TxBitsOut,1,0);
    VL_SIG8(__Vdly__TxCtrlOut,0,0);
    VL_SIG8(__Vdly__TxDataOutTick,0,0);
    VL_SIG8(__Vdly__bufferOutStMachCurrState,1,0);
    //char	__VpadToAlign54[2];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign60[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_writeUSBWireData& operator= (const VusbHostSlave_writeUSBWireData&);	///< Copying not allowed
    VusbHostSlave_writeUSBWireData(const VusbHostSlave_writeUSBWireData&);	///< Copying not allowed
  public:
    VusbHostSlave_writeUSBWireData(const char* name="TOP");
    ~VusbHostSlave_writeUSBWireData();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
