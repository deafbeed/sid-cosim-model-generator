// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_readUSBWireData_H_
#define _VusbHostSlave_readUSBWireData_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_readUSBWireData) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__RxBitsIn,1,0);
    VL_OUT8(__PVT__RxDataInTick,0,0);
    VL_IN8(__PVT__SIERxRdyIn,0,0);
    VL_IN8(__PVT__fullSpeedRate,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__TxWireActiveDrive,0,0);
    VL_OUT8(__PVT__RxBitsOut,1,0);
    VL_OUT8(__PVT__SIERxWEn,0,0);
    VL_OUT8(__PVT__noActivityTimeOut,0,0);
    VL_OUT8(__PVT__RxWireActive,0,0);
    VL_IN8(__PVT__noActivityTimeOutEnable,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__buffer0,2,0);
    VL_SIG8(__PVT__buffer1,2,0);
    VL_SIG8(__PVT__buffer2,2,0);
    VL_SIG8(__PVT__buffer3,2,0);
    VL_SIG8(__PVT__bufferCnt,2,0);
    VL_SIG8(__PVT__bufferInIndex,1,0);
    VL_SIG8(__PVT__bufferOutIndex,1,0);
    VL_SIG8(__PVT__decBufferCnt,0,0);
    VL_SIG8(__PVT__sampleCnt,4,0);
    VL_SIG8(__PVT__incBufferCnt,0,0);
    VL_SIG8(__PVT__oldRxBitsIn,1,0);
    VL_SIG8(__PVT__RxBitsInReg,1,0);
    VL_SIG8(__PVT__rxActiveCnt,7,0);
    VL_SIG8(__PVT__RxWireEdgeDetect,0,0);
    VL_SIG8(__PVT__RxWireActiveReg,0,0);
    VL_SIG8(__PVT__RxWireActiveReg2,0,0);
    VL_SIG8(__PVT__RxBitsInSyncReg1,1,0);
    VL_SIG8(__PVT__RxBitsInSyncReg2,1,0);
    VL_SIG8(__PVT__bufferOutStMachCurrState,1,0);
    //char	__VpadToAlign35[1];
    VL_SIG16(__PVT__timeOutCnt,15,0);
    //char	__VpadToAlign38[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__RxBitsInSyncReg1,1,0);
    VL_SIG8(__Vdly__RxBitsInSyncReg2,1,0);
    VL_SIG8(__Vdly__bufferCnt,2,0);
    VL_SIG8(__Vdly__sampleCnt,4,0);
    VL_SIG8(__Vdly__incBufferCnt,0,0);
    VL_SIG8(__Vdly__bufferInIndex,1,0);
    VL_SIG8(__Vdly__buffer0,2,0);
    VL_SIG8(__Vdly__buffer1,2,0);
    VL_SIG8(__Vdly__buffer2,2,0);
    VL_SIG8(__Vdly__buffer3,2,0);
    VL_SIG8(__Vdly__RxDataInTick,0,0);
    VL_SIG8(__Vdly__RxWireEdgeDetect,0,0);
    VL_SIG8(__Vdly__RxWireActiveReg,0,0);
    VL_SIG8(__Vdly__RxWireActiveReg2,0,0);
    VL_SIG8(__Vdly__RxBitsInReg,1,0);
    VL_SIG8(__Vdly__oldRxBitsIn,1,0);
    VL_SIG8(__Vdly__rxActiveCnt,7,0);
    VL_SIG8(__Vdly__decBufferCnt,0,0);
    VL_SIG8(__Vdly__bufferOutIndex,1,0);
    VL_SIG8(__Vdly__RxBitsOut,1,0);
    VL_SIG8(__Vdly__SIERxWEn,0,0);
    VL_SIG8(__Vdly__bufferOutStMachCurrState,1,0);
    VL_SIG8(__Vdly__RxWireActive,0,0);
    VL_SIG8(__Vdly__noActivityTimeOut,0,0);
    VL_SIG16(__Vdly__timeOutCnt,15,0);
    //char	__VpadToAlign70[2];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign76[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_readUSBWireData& operator= (const VusbHostSlave_readUSBWireData&);	///< Copying not allowed
    VusbHostSlave_readUSBWireData(const VusbHostSlave_readUSBWireData&);	///< Copying not allowed
  public:
    VusbHostSlave_readUSBWireData(const char* name="TOP");
    ~VusbHostSlave_readUSBWireData();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
