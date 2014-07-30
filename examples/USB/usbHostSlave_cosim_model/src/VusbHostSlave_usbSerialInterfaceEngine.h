// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VusbHostSlave.h for the primary calling header

#ifndef _VusbHostSlave_usbSerialInterfaceEngine_H_
#define _VusbHostSlave_usbSerialInterfaceEngine_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_lineControlUpdate;
class VusbHostSlave_SIEReceiver;
class VusbHostSlave_processRxBit;
class VusbHostSlave_processRxByte;
class VusbHostSlave_updateCRC5;
class VusbHostSlave_updateCRC16;
class VusbHostSlave_SIETransmitter;
class VusbHostSlave_updateCRC5;
class VusbHostSlave_updateCRC16;
class VusbHostSlave_processTxByte;
class VusbHostSlave_USBTxWireArbiter;
class VusbHostSlave_writeUSBWireData;
class VusbHostSlave_readUSBWireData;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave_usbSerialInterfaceEngine) {
  public:
    // CELLS
    VusbHostSlave_lineControlUpdate*	__PVT__u_lineControlUpdate;
    VusbHostSlave_SIEReceiver*	__PVT__u_SIEReceiver;
    VusbHostSlave_processRxBit*	__PVT__u_processRxBit;
    VusbHostSlave_processRxByte*	__PVT__u_processRxByte;
    VusbHostSlave_updateCRC5*	__PVT__RxUpdateCRC5;
    VusbHostSlave_updateCRC16*	__PVT__RxUpdateCRC16;
    VusbHostSlave_SIETransmitter*	__PVT__u_SIETransmitter;
    VusbHostSlave_updateCRC5*	__PVT__TxUpdateCRC5;
    VusbHostSlave_updateCRC16*	__PVT__TxUpdateCRC16;
    VusbHostSlave_processTxByte*	__PVT__u_processTxByte;
    VusbHostSlave_USBTxWireArbiter*	__PVT__u_USBTxWireArbiter;
    VusbHostSlave_writeUSBWireData*	__PVT__u_writeUSBWireData;
    VusbHostSlave_readUSBWireData*	__PVT__u_readUSBWireData;
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__USBWireDataIn,1,0);
    VL_OUT8(__PVT__USBWireDataInTick,0,0);
    VL_OUT8(__PVT__noActivityTimeOut,0,0);
    VL_IN8(__PVT__noActivityTimeOutEnable,0,0);
    VL_OUT8(__PVT__USBWireDataOut,1,0);
    VL_OUT8(__PVT__USBWireCtrlOut,0,0);
    VL_OUT8(__PVT__USBWireDataOutTick,0,0);
    VL_OUT8(__PVT__connectState,1,0);
    VL_OUT8(__PVT__resumeDetected,0,0);
    VL_OUT8(__PVT__RxCtrlOut,7,0);
    VL_OUT8(__PVT__RxDataOutWEn,0,0);
    VL_OUT8(__PVT__RxDataOut,7,0);
    VL_IN8(__PVT__SIEPortCtrlIn,7,0);
    VL_IN8(__PVT__SIEPortDataIn,7,0);
    VL_OUT8(__PVT__SIEPortTxRdy,0,0);
    VL_IN8(__PVT__SIEPortWEn,0,0);
    VL_IN8(__PVT__fullSpeedPolarity,0,0);
    VL_IN8(__PVT__fullSpeedBitRate,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__processRxBitsWEn,0,0);
    VL_SIG8(__PVT__processRxBitRdy,0,0);
    VL_SIG8(__PVT__RxWireDataFromWireRx,1,0);
    VL_SIG8(__PVT__RxWireDataWEn,0,0);
    VL_SIG8(__PVT__TxWireActiveDrive,0,0);
    VL_SIG8(__PVT__TxBitsFromArbToWire,1,0);
    VL_SIG8(__PVT__TxCtrlFromArbToWire,0,0);
    VL_SIG8(__PVT__USBWireRdy,0,0);
    VL_SIG8(__PVT__USBWireWEn,0,0);
    VL_SIG8(__PVT__USBWireReadyFromTxArb,0,0);
    VL_SIG8(__PVT__prcTxByteCtrl,0,0);
    VL_SIG8(__PVT__prcTxByteData,1,0);
    VL_SIG8(__PVT__prcTxByteGnt,0,0);
    VL_SIG8(__PVT__prcTxByteReq,0,0);
    VL_SIG8(__PVT__prcTxByteWEn,0,0);
    VL_SIG8(__PVT__SIETxCtrl,0,0);
    VL_SIG8(__PVT__SIETxData,1,0);
    VL_SIG8(__PVT__SIETxGnt,0,0);
    VL_SIG8(__PVT__SIETxReq,0,0);
    VL_SIG8(__PVT__SIETxWEn,0,0);
    VL_SIG8(__PVT__TxByteFromSIEToPrcTxByte,7,0);
    VL_SIG8(__PVT__TxCtrlFromSIEToPrcTxByte,7,0);
    VL_SIG8(__PVT__JBit,1,0);
    VL_SIG8(__PVT__KBit,1,0);
    VL_SIG8(__PVT__processRxByteWEn,0,0);
    VL_SIG8(__PVT__RxDataFromPrcRxBitToPrcRxByte,7,0);
    VL_SIG8(__PVT__RxCtrlFromPrcRxBitToPrcRxByte,7,0);
    VL_SIG8(__PVT__processRxByteRdy,0,0);
    VL_SIG8(__PVT__RxCRC16En,0,0);
    VL_SIG8(__PVT__RxCRC16UpdateRdy,0,0);
    VL_SIG8(__PVT__RxCRC5En,0,0);
    VL_SIG8(__PVT__RxCRC5Result,4,0);
    VL_SIG8(__PVT__RxCRC5_8Bit,0,0);
    VL_SIG8(__PVT__RxCRCData,7,0);
    VL_SIG8(__PVT__RxRstCRC,0,0);
    VL_SIG8(__PVT__RxCRC5UpdateRdy,0,0);
    VL_SIG8(__PVT__TxCRC16En,0,0);
    VL_SIG8(__PVT__TxCRC16UpdateRdy,0,0);
    VL_SIG8(__PVT__TxCRC5En,0,0);
    VL_SIG8(__PVT__TxCRC5Result,4,0);
    VL_SIG8(__PVT__TxCRC5_8Bit,0,0);
    VL_SIG8(__PVT__TxCRCData,7,0);
    VL_SIG8(__PVT__TxRstCRC,0,0);
    VL_SIG8(__PVT__TxCRC5UpdateRdy,0,0);
    VL_SIG8(__PVT__processTxByteRdy,0,0);
    VL_SIG8(__PVT__processTxByteWEn,0,0);
    VL_SIG8(__PVT__SIEFsRate,0,0);
    VL_SIG8(__PVT__TxFSRateFromSIETxToPrcTxByte,0,0);
    VL_SIG8(__PVT__prcTxByteFSRate,0,0);
    VL_SIG8(__PVT__FSRateFromArbiterToWire,0,0);
    VL_SIG8(__PVT__RxWireActive,0,0);
    //char	__VpadToAlign75[1];
    VL_SIG16(__PVT__RxCRC16Result,15,0);
    VL_SIG16(__PVT__TxCRC16Result,15,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VusbHostSlave_usbSerialInterfaceEngine& operator= (const VusbHostSlave_usbSerialInterfaceEngine&);	///< Copying not allowed
    VusbHostSlave_usbSerialInterfaceEngine(const VusbHostSlave_usbSerialInterfaceEngine&);	///< Copying not allowed
  public:
    VusbHostSlave_usbSerialInterfaceEngine(const char* name="TOP");
    ~VusbHostSlave_usbSerialInterfaceEngine();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__15(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__30(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__32(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__33(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__35(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u_usbSerialInterfaceEngine__37(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__18(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__19(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__20(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__21(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__22(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__23(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__24(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__25(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__26(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__27(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__28(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u_usbSerialInterfaceEngine__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__16(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__17(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__29(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__31(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__34(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u_usbSerialInterfaceEngine__36(VusbHostSlave__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
