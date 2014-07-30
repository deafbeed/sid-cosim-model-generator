// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_usbHostSlave.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_usbHostSlave) {
    VL_CELL (__PVT__u_usbHostControl, VusbHostSlave_usbHostControl);
    VL_CELL (__PVT__u_usbSlaveControl, VusbHostSlave_usbSlaveControl);
    VL_CELL (__PVT__u_wishBoneBI, VusbHostSlave_wishBoneBI);
    VL_CELL (__PVT__u_hostSlaveMux, VusbHostSlave_hostSlaveMux);
    VL_CELL (__PVT__u_usbSerialInterfaceEngine, VusbHostSlave_usbSerialInterfaceEngine);
    VL_CELL (__PVT__HostTxFifo, VusbHostSlave_TxFifo__F40_A6);
    VL_CELL (__PVT__HostRxFifo, VusbHostSlave_RxFifo__F40_A6);
    VL_CELL (__PVT__EP0TxFifo, VusbHostSlave_TxFifo__F40_A6);
    VL_CELL (__PVT__EP1TxFifo, VusbHostSlave_TxFifo__F40_A6);
    VL_CELL (__PVT__EP2TxFifo, VusbHostSlave_TxFifo__F40_A6);
    VL_CELL (__PVT__EP3TxFifo, VusbHostSlave_TxFifo__F40_A6);
    VL_CELL (__PVT__EP0RxFifo, VusbHostSlave_RxFifo__F40_A6);
    VL_CELL (__PVT__EP1RxFifo, VusbHostSlave_RxFifo__F40_A6);
    VL_CELL (__PVT__EP2RxFifo, VusbHostSlave_RxFifo__F40_A6);
    VL_CELL (__PVT__EP3RxFifo, VusbHostSlave_RxFifo__F40_A6);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    address_i = VL_RAND_RESET_I(8);
    data_i = VL_RAND_RESET_I(8);
    data_o = VL_RAND_RESET_I(8);
    we_i = VL_RAND_RESET_I(1);
    strobe_i = VL_RAND_RESET_I(1);
    ack_o = VL_RAND_RESET_I(1);
    usbClk = VL_RAND_RESET_I(1);
    hostSOFSentIntOut = VL_RAND_RESET_I(1);
    hostConnEventIntOut = VL_RAND_RESET_I(1);
    hostResumeIntOut = VL_RAND_RESET_I(1);
    hostTransDoneIntOut = VL_RAND_RESET_I(1);
    slaveSOFRxedIntOut = VL_RAND_RESET_I(1);
    slaveResetEventIntOut = VL_RAND_RESET_I(1);
    slaveResumeIntOut = VL_RAND_RESET_I(1);
    slaveTransDoneIntOut = VL_RAND_RESET_I(1);
    slaveNAKSentIntOut = VL_RAND_RESET_I(1);
    slaveVBusDetIntOut = VL_RAND_RESET_I(1);
    USBWireDataIn = VL_RAND_RESET_I(2);
    USBWireDataOut = VL_RAND_RESET_I(2);
    USBWireDataOutTick = VL_RAND_RESET_I(1);
    USBWireDataInTick = VL_RAND_RESET_I(1);
    USBWireCtrlOut = VL_RAND_RESET_I(1);
    USBFullSpeed = VL_RAND_RESET_I(1);
    USBDPlusPullup = VL_RAND_RESET_I(1);
    USBDMinusPullup = VL_RAND_RESET_I(1);
    vBusDetect = VL_RAND_RESET_I(1);
    __PVT__hostControlSel = VL_RAND_RESET_I(1);
    __PVT__slaveControlSel = VL_RAND_RESET_I(1);
    __PVT__hostRxFifoSel = VL_RAND_RESET_I(1);
    __PVT__hostTxFifoSel = VL_RAND_RESET_I(1);
    __PVT__hostSlaveMuxSel = VL_RAND_RESET_I(1);
    __PVT__dataFromHostControl = VL_RAND_RESET_I(8);
    __PVT__dataFromSlaveControl = VL_RAND_RESET_I(8);
    __PVT__dataFromHostRxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromHostTxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromHostSlaveMux = VL_RAND_RESET_I(8);
    __PVT__hostTxFifoRE = VL_RAND_RESET_I(1);
    __PVT__hostTxFifoData = VL_RAND_RESET_I(8);
    __PVT__hostTxFifoEmpty = VL_RAND_RESET_I(1);
    __PVT__hostRxFifoWE = VL_RAND_RESET_I(1);
    __PVT__hostRxFifoData = VL_RAND_RESET_I(8);
    __PVT__hostRxFifoFull = VL_RAND_RESET_I(1);
    __PVT__RxCtrlOut = VL_RAND_RESET_I(8);
    __PVT__RxDataFromSIE = VL_RAND_RESET_I(8);
    __PVT__RxDataOutWEn = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRateFromHost = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRateFromSlave = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolarityFromHost = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolarityFromSlave = VL_RAND_RESET_I(1);
    __PVT__SIEPortWEnFromHost = VL_RAND_RESET_I(1);
    __PVT__SIEPortWEnFromSlave = VL_RAND_RESET_I(1);
    __PVT__SIEPortTxRdy = VL_RAND_RESET_I(1);
    __PVT__SIEPortDataInFromHost = VL_RAND_RESET_I(8);
    __PVT__SIEPortDataInFromSlave = VL_RAND_RESET_I(8);
    __PVT__SIEPortCtrlInFromHost = VL_RAND_RESET_I(8);
    __PVT__SIEPortCtrlInFromSlave = VL_RAND_RESET_I(8);
    __PVT__connectState = VL_RAND_RESET_I(2);
    __PVT__resumeDetected = VL_RAND_RESET_I(1);
    __PVT__SIEPortDataInToSIE = VL_RAND_RESET_I(8);
    __PVT__SIEPortWEnToSIE = VL_RAND_RESET_I(1);
    __PVT__SIEPortCtrlInToSIE = VL_RAND_RESET_I(8);
    __PVT__fullSpeedPolarityToSIE = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRateToSIE = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOut = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP0REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP1REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP2REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP3REn = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP0Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP1Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP2Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP3Data = VL_RAND_RESET_I(8);
    __PVT__TxFifoEP0Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP1Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP2Empty = VL_RAND_RESET_I(1);
    __PVT__TxFifoEP3Empty = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP0WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP1WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP2WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP3WEn = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP0Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP1Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP2Full = VL_RAND_RESET_I(1);
    __PVT__RxFifoEP3Full = VL_RAND_RESET_I(1);
    __PVT__slaveRxFifoData = VL_RAND_RESET_I(8);
    __PVT__dataFromEP0RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP1RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP2RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP3RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP0TxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP1TxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP2TxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP3TxFifo = VL_RAND_RESET_I(8);
    __PVT__slaveEP0RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP1RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP2RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP3RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP0TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP1TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP2TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP3TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnableToSIE = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnableFromHost = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnableFromSlave = VL_RAND_RESET_I(1);
    __PVT__connectSlaveToHost = VL_RAND_RESET_I(1);
    __Vcellinp__u_usbHostControl__busAddress = VL_RAND_RESET_I(4);
    __Vcellinp__u_usbSlaveControl__busAddress = VL_RAND_RESET_I(5);
    __Vcellinp__u_hostSlaveMux__address = VL_RAND_RESET_I(1);
    __Vcellinp__HostTxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__HostRxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP0TxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP1TxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP2TxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP3TxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP0RxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP1RxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP2RxFifo__busAddress = VL_RAND_RESET_I(3);
    __Vcellinp__EP3RxFifo__busAddress = VL_RAND_RESET_I(3);
}

void VusbHostSlave_usbHostSlave::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_usbHostSlave::~VusbHostSlave_usbHostSlave() {
}

//--------------------
// Internal Methods

void VusbHostSlave_usbHostSlave::_settle__TOP__v__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__dataFromHostTxFifo = vlSymsp->TOP__v__HostTxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromHostTxFifo = vlSymsp->TOP__v__HostTxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP3TxFifo = vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP3TxFifo = vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP0TxFifo = vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP0TxFifo = vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP1TxFifo = vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP1TxFifo = vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP2TxFifo = vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP2TxFifo = vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostTxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromHostTxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostTxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromHostTxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP3TxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP3TxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP0TxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP0TxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP1TxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP1TxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP2TxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2TxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP2TxFifo;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetect 
	= vlSymsp->TOP__v.vBusDetect;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataIn 
	= vlSymsp->TOP__v.USBWireDataIn;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstFromWire 
	= vlSymsp->TOP__v.rst_i;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataIn 
	= vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataIn 
	= vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busWriteEn 
	= vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busWriteEn 
	= vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__writeEn 
	= vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__writeEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__strobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v.__Vcellinp__HostTxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP0TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP1TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP2TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP3TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__address = vlSymsp->TOP__v.address_i;
    vlSymsp->TOP__v.__Vcellinp__u_hostSlaveMux__address 
	= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0));
    vlSymsp->TOP__v.__Vcellinp__u_usbHostControl__busAddress 
	= (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 4));
    vlSymsp->TOP__v.__Vcellinp__u_usbSlaveControl__busAddress 
	= (0x1f & VL_SEL_IIII(5,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 5));
    vlSymsp->TOP__v.__Vcellinp__EP3RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP2RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP1RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP0RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__HostRxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v__HostRxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__HostTxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk 
	= vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk 
	= vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk 
	= vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__clk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busClk 
	= vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busClk 
	= vlSymsp->TOP__v.clk_i;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetect 
	= vlSymsp->TOP__v.vBusDetect;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataIn 
	= vlSymsp->TOP__v.USBWireDataIn;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstFromWire 
	= vlSymsp->TOP__v.rst_i;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataIn 
	= vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataIn 
	= vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataIn = vlSymsp->TOP__v.data_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__writeEn 
	= vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busWriteEn 
	= vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busWriteEn 
	= vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__writeEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busWriteEn = vlSymsp->TOP__v.we_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__strobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busStrobe_i = vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busStrobe_i 
	= vlSymsp->TOP__v.strobe_i;
    vlSymsp->TOP__v.__Vcellinp__EP3TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP2TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP1TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP0TxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__HostTxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__address = vlSymsp->TOP__v.address_i;
    vlSymsp->TOP__v.__Vcellinp__u_hostSlaveMux__address 
	= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0));
    vlSymsp->TOP__v.__Vcellinp__u_usbHostControl__busAddress 
	= (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 4));
    vlSymsp->TOP__v.__Vcellinp__u_usbSlaveControl__busAddress 
	= (0x1f & VL_SEL_IIII(5,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 5));
    vlSymsp->TOP__v.__Vcellinp__HostRxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP0RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP1RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP2RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v.__Vcellinp__EP3RxFifo__busAddress 
	= (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v.address_i), 0, 3));
    vlSymsp->TOP__v__HostRxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__HostTxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__usbClk = vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__clk 
	= vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__usbClk 
	= vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__usbClk 
	= vlSymsp->TOP__v.usbClk;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__clk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busClk = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busClk 
	= vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busClk 
	= vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP3TxFifo__busAddress;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP2TxFifo__busAddress;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP1TxFifo__busAddress;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP0TxFifo__busAddress;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__HostTxFifo__busAddress;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__address 
	= vlSymsp->TOP__v.__Vcellinp__u_hostSlaveMux__address;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busAddress 
	= vlSymsp->TOP__v.__Vcellinp__u_usbHostControl__busAddress;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busAddress 
	= vlSymsp->TOP__v.__Vcellinp__u_usbSlaveControl__busAddress;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__HostRxFifo__busAddress;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP0RxFifo__busAddress;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP1RxFifo__busAddress;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP2RxFifo__busAddress;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP3RxFifo__busAddress;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP3TxFifo__busAddress;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP2TxFifo__busAddress;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP1TxFifo__busAddress;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP0TxFifo__busAddress;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__HostTxFifo__busAddress;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__address 
	= vlSymsp->TOP__v.__Vcellinp__u_hostSlaveMux__address;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__busAddress 
	= vlSymsp->TOP__v.__Vcellinp__u_usbHostControl__busAddress;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busAddress 
	= vlSymsp->TOP__v.__Vcellinp__u_usbSlaveControl__busAddress;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__HostRxFifo__busAddress;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP0RxFifo__busAddress;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP1RxFifo__busAddress;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP2RxFifo__busAddress;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busAddress = vlSymsp->TOP__v.__Vcellinp__EP3RxFifo__busAddress;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__strobe_i = vlSymsp->TOP__v.strobe_i;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__strobe_i = vlSymsp->TOP__v.strobe_i;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__hostTxFifoEmpty = vlSymsp->TOP__v__HostTxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__hostTxFifoData = vlSymsp->TOP__v__HostTxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v.__PVT__TxFifoEP0Empty = vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP0Data = vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v.__PVT__TxFifoEP1Empty = vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP1Data = vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v.__PVT__TxFifoEP2Empty = vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP2Data = vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v.__PVT__TxFifoEP3Empty = vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP3Data = vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v.__PVT__hostRxFifoFull = vlSymsp->TOP__v__HostRxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v.__PVT__rstSyncToUsbClk = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToUsbClkOut;
    vlSymsp->TOP__v.__PVT__RxFifoEP1Full = vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v.__PVT__RxFifoEP0Full = vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v.__PVT__RxFifoEP2Full = vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v.__PVT__RxFifoEP3Full = vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v.__PVT__connectState = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__connectState;
    vlSymsp->TOP__v.__PVT__noActivityTimeOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOut;
    vlSymsp->TOP__v.USBWireDataInTick = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataInTick;
    vlSymsp->TOP__v.__PVT__resumeDetected = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__resumeDetected;
    vlSymsp->TOP__v.USBWireDataOutTick = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOutTick;
    vlSymsp->TOP__v.USBWireDataOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOut;
    vlSymsp->TOP__v.USBWireCtrlOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireCtrlOut;
    vlSymsp->TOP__v.__PVT__SIEPortTxRdy = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v.__PVT__RxDataFromSIE = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOut;
    vlSymsp->TOP__v.__PVT__RxCtrlOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlOut;
    vlSymsp->TOP__v.__PVT__RxDataOutWEn = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v.__PVT__slaveRxFifoData = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoData;
    vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromSlave 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v.__PVT__connectSlaveToHost = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectSlaveToHost;
    vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromSlave 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedRate;
    vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromSlave 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedPol;
    vlSymsp->TOP__v.__PVT__hostRxFifoWE = vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoWE;
    vlSymsp->TOP__v.__PVT__hostRxFifoData = vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoData;
    vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromHost 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v.__PVT__hostTxFifoRE = vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoRE;
    vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromHost 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedRate;
    vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromHost 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedPol;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__hostTxFifoEmpty = vlSymsp->TOP__v__HostTxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__hostTxFifoData = vlSymsp->TOP__v__HostTxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoEmpty 
	= vlSymsp->TOP__v.__PVT__hostTxFifoEmpty;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoData 
	= vlSymsp->TOP__v.__PVT__hostTxFifoData;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__TxFifoEP0Empty = vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP0Data = vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP0Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP0Data;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__TxFifoEP1Empty = vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP1Data = vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP1Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP1Data;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__TxFifoEP2Empty = vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP2Data = vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP2Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP2Data;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__TxFifoEP3Empty = vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v.__PVT__TxFifoEP3Data = vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoDataOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP3Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP3Data;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__hostRxFifoFull = vlSymsp->TOP__v__HostRxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoFull 
	= vlSymsp->TOP__v.__PVT__hostRxFifoFull;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__RxFifoEP1Full = vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP1Full;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__RxFifoEP0Full = vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP0Full;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__RxFifoEP2Full = vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP2Full;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__RxFifoEP3Full = vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP3Full;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__connectSlaveToHost = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectSlaveToHost;
    vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromSlave 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedRate;
    vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromSlave 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__fullSpeedPol;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromSlave 
	= vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromSlave 
	= vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromSlave;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromHost 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedRate;
    vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromHost 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__fullSpeedPol;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromHost 
	= vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromHost;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromHost 
	= vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromHost;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ack_o = vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_o;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__rstSyncToUsbClk = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToUsbClkOut;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__rstSyncToBusClk = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToBusClkOut;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__connectState = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__connectState;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateIn 
	= vlSymsp->TOP__v.__PVT__connectState;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateIn 
	= vlSymsp->TOP__v.__PVT__connectState;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__noActivityTimeOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOut;
    vlSymsp->TOP__v.USBWireDataInTick = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataInTick;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOut;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__resumeDetected = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v.__PVT__resumeDetected;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.USBWireDataOutTick = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOutTick;
    vlSymsp->TOP__v.USBWireDataOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireDataOut;
    vlSymsp->TOP__v.USBWireCtrlOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__USBWireCtrlOut;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__SIEPortTxRdy = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortRdy 
	= vlSymsp->TOP__v.__PVT__SIEPortTxRdy;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__RxDataFromSIE = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOut;
    vlSymsp->TOP__v.__PVT__RxCtrlOut = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxCtrlOut;
    vlSymsp->TOP__v.__PVT__RxDataOutWEn = vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxData 
	= vlSymsp->TOP__v.__PVT__RxDataFromSIE;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxData 
	= vlSymsp->TOP__v.__PVT__RxDataFromSIE;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxByteStatus 
	= vlSymsp->TOP__v.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxByteStatus 
	= vlSymsp->TOP__v.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxDataValid 
	= vlSymsp->TOP__v.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxDataValid 
	= vlSymsp->TOP__v.__PVT__RxDataOutWEn;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__slaveRxFifoData = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoData;
    vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromSlave 
	= vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromSlave 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromSlave;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.slaveTransDoneIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDoneIntOut;
    vlSymsp->TOP__v.slaveResumeIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntOut;
    vlSymsp->TOP__v.slaveResetEventIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventIntOut;
    vlSymsp->TOP__v.slaveSOFRxedIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxedIntOut;
    vlSymsp->TOP__v.slaveNAKSentIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSentIntOut;
    vlSymsp->TOP__v.slaveVBusDetIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetIntOut;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__hostRxFifoWE = vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoWE;
    vlSymsp->TOP__v.__PVT__hostRxFifoData = vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoData;
    vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromHost 
	= vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__hostRxFifoWE;
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__hostRxFifoData;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromHost 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromHost;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__hostTxFifoRE = vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoRE;
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__hostTxFifoRE;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__33(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__33\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.hostTransDoneIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__transDoneIntOut;
    vlSymsp->TOP__v.hostResumeIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntOut;
    vlSymsp->TOP__v.hostConnEventIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__connEventIntOut;
    vlSymsp->TOP__v.hostSOFSentIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSentIntOut;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__34(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__34\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoEmpty 
	= vlSymsp->TOP__v.__PVT__hostTxFifoEmpty;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__TxFifoData 
	= vlSymsp->TOP__v.__PVT__hostTxFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP0Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP0Data;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP1Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP1Data;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP2Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP2Data;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Empty 
	= vlSymsp->TOP__v.__PVT__TxFifoEP3Empty;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3Data 
	= vlSymsp->TOP__v.__PVT__TxFifoEP3Data;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxFifoFull 
	= vlSymsp->TOP__v.__PVT__hostRxFifoFull;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP1Full;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP0Full;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP2Full;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3Full 
	= vlSymsp->TOP__v.__PVT__RxFifoEP3Full;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromSlave 
	= vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromSlave 
	= vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateFromHost 
	= vlSymsp->TOP__v.__PVT__fullSpeedBitRateFromHost;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityFromHost 
	= vlSymsp->TOP__v.__PVT__fullSpeedPolarityFromHost;
    vlSymsp->TOP__v.ack_o = vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_o;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToUsbClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__rst 
	= vlSymsp->TOP__v.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v.__PVT__rstSyncToBusClk = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__rstSyncToBusClkOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__connectStateIn 
	= vlSymsp->TOP__v.__PVT__connectState;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__connectStateIn 
	= vlSymsp->TOP__v.__PVT__connectState;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__SIERxTimeOut 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeDetectedIn 
	= vlSymsp->TOP__v.__PVT__resumeDetected;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortRdy 
	= vlSymsp->TOP__v.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortRdy 
	= vlSymsp->TOP__v.__PVT__SIEPortTxRdy;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxData 
	= vlSymsp->TOP__v.__PVT__RxDataFromSIE;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxData 
	= vlSymsp->TOP__v.__PVT__RxDataFromSIE;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxByteStatus 
	= vlSymsp->TOP__v.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxByteStatus 
	= vlSymsp->TOP__v.__PVT__RxCtrlOut;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__RxDataValid 
	= vlSymsp->TOP__v.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxDataValid 
	= vlSymsp->TOP__v.__PVT__RxDataOutWEn;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__slaveRxFifoData;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromSlave 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromSlave;
    vlSymsp->TOP__v.slaveTransDoneIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__transDoneIntOut;
    vlSymsp->TOP__v.slaveResumeIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resumeIntOut;
    vlSymsp->TOP__v.slaveResetEventIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__resetEventIntOut;
    vlSymsp->TOP__v.slaveSOFRxedIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SOFRxedIntOut;
    vlSymsp->TOP__v.slaveNAKSentIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__NAKSentIntOut;
    vlSymsp->TOP__v.slaveVBusDetIntOut = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__vBusDetIntOut;
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__hostRxFifoWE;
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoDataIn = vlSymsp->TOP__v.__PVT__hostRxFifoData;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableFromHost 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableFromHost;
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__hostTxFifoRE;
    vlSymsp->TOP__v.hostTransDoneIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__transDoneIntOut;
    vlSymsp->TOP__v.hostResumeIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__resumeIntOut;
    vlSymsp->TOP__v.hostConnEventIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__connEventIntOut;
    vlSymsp->TOP__v.hostSOFSentIntOut = vlSymsp->TOP__v__u_usbHostControl.__PVT__SOFSentIntOut;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__rst = vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__35(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__35\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__dataFromHostSlaveMux = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataOut;
    vlSymsp->TOP__v.__PVT__dataFromSlaveControl = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromHostControl = vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataOut;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__36(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__36\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__dataFromHostSlaveMux = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__dataOut;
    vlSymsp->TOP__v.__PVT__dataFromSlaveControl = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromHostControl = vlSymsp->TOP__v__u_usbHostControl.__PVT__busDataOut;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostSlaveMux 
	= vlSymsp->TOP__v.__PVT__dataFromHostSlaveMux;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromSlaveControl 
	= vlSymsp->TOP__v.__PVT__dataFromSlaveControl;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostControl 
	= vlSymsp->TOP__v.__PVT__dataFromHostControl;
}

void VusbHostSlave_usbHostSlave::_sequent__TOP__v__37(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_sequent__TOP__v__37\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__rst = vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__38(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__38\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostSlaveMux 
	= vlSymsp->TOP__v.__PVT__dataFromHostSlaveMux;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromSlaveControl 
	= vlSymsp->TOP__v.__PVT__dataFromSlaveControl;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostControl 
	= vlSymsp->TOP__v.__PVT__dataFromHostControl;
    vlSymsp->TOP__v.__PVT__dataFromHostRxFifo = vlSymsp->TOP__v__HostRxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP1RxFifo = vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP0RxFifo = vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP2RxFifo = vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP3RxFifo = vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__SIEPortWEnFromSlave = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortEn;
    vlSymsp->TOP__v.__PVT__SIEPortDataInFromSlave = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortData;
    vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromSlave = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortCtrl;
    vlSymsp->TOP__v.__PVT__SIEPortWEnFromHost = vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortEn;
    vlSymsp->TOP__v.__PVT__SIEPortDataInFromHost = vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortData;
    vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromHost = vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortCtrl;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__39(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__39\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__dataFromHostRxFifo = vlSymsp->TOP__v__HostRxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP1RxFifo = vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP0RxFifo = vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP2RxFifo = vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__dataFromEP3RxFifo = vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataOut;
    vlSymsp->TOP__v.__PVT__SIEPortWEnFromSlave = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortEn;
    vlSymsp->TOP__v.__PVT__SIEPortDataInFromSlave = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortData;
    vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromSlave = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__SCTxPortCtrl;
    vlSymsp->TOP__v.__PVT__SIEPortWEnFromHost = vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortEn;
    vlSymsp->TOP__v.__PVT__SIEPortDataInFromHost = vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortData;
    vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromHost = vlSymsp->TOP__v__u_usbHostControl.__PVT__HCTxPortCtrl;
    vlSymsp->TOP__v.__PVT__TxFifoEP0REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0REn;
    vlSymsp->TOP__v.__PVT__TxFifoEP1REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1REn;
    vlSymsp->TOP__v.__PVT__TxFifoEP2REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2REn;
    vlSymsp->TOP__v.__PVT__TxFifoEP3REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3REn;
    vlSymsp->TOP__v.__PVT__RxFifoEP0WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0WEn;
    vlSymsp->TOP__v.__PVT__RxFifoEP1WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1WEn;
    vlSymsp->TOP__v.__PVT__RxFifoEP2WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2WEn;
    vlSymsp->TOP__v.__PVT__RxFifoEP3WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3WEn;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostRxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromHostRxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP1RxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP0RxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP2RxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP3RxFifo;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromSlave 
	= vlSymsp->TOP__v.__PVT__SIEPortWEnFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromSlave 
	= vlSymsp->TOP__v.__PVT__SIEPortDataInFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromSlave 
	= vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromHost 
	= vlSymsp->TOP__v.__PVT__SIEPortWEnFromHost;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromHost 
	= vlSymsp->TOP__v.__PVT__SIEPortDataInFromHost;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromHost 
	= vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromHost;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__40(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__40\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__TxFifoEP0REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP0REn;
    vlSymsp->TOP__v.__PVT__TxFifoEP1REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP1REn;
    vlSymsp->TOP__v.__PVT__TxFifoEP2REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP2REn;
    vlSymsp->TOP__v.__PVT__TxFifoEP3REn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__TxFifoEP3REn;
    vlSymsp->TOP__v.__PVT__RxFifoEP0WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP0WEn;
    vlSymsp->TOP__v.__PVT__RxFifoEP1WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP1WEn;
    vlSymsp->TOP__v.__PVT__RxFifoEP2WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP2WEn;
    vlSymsp->TOP__v.__PVT__RxFifoEP3WEn = vlSymsp->TOP__v__u_usbSlaveControl.__PVT__RxFifoEP3WEn;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostRxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromHostRxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP1RxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP0RxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP2RxFifo;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3RxFifo 
	= vlSymsp->TOP__v.__PVT__dataFromEP3RxFifo;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromSlave 
	= vlSymsp->TOP__v.__PVT__SIEPortWEnFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromSlave 
	= vlSymsp->TOP__v.__PVT__SIEPortDataInFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromSlave 
	= vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromSlave;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnFromHost 
	= vlSymsp->TOP__v.__PVT__SIEPortWEnFromHost;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInFromHost 
	= vlSymsp->TOP__v.__PVT__SIEPortDataInFromHost;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInFromHost 
	= vlSymsp->TOP__v.__PVT__SIEPortCtrlInFromHost;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP0REn;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP1REn;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP2REn;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP3REn;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP0WEn;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP1WEn;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP2WEn;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP3WEn;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__41(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__41\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP0REn;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP1REn;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP2REn;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoREn = vlSymsp->TOP__v.__PVT__TxFifoEP3REn;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP0WEn;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP1WEn;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP2WEn;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoWEn = vlSymsp->TOP__v.__PVT__RxFifoEP3WEn;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__42(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__42\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.data_o = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut;
    vlSymsp->TOP__v.__PVT__hostControlSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel;
    vlSymsp->TOP__v.__PVT__slaveControlSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel;
    vlSymsp->TOP__v.__PVT__hostSlaveMuxSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostSlaveMuxSel;
    vlSymsp->TOP__v.__PVT__hostRxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostRxFifoSel;
    vlSymsp->TOP__v.__PVT__hostTxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostTxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP0RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP0TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0TxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP1RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP1TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1TxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP2RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP2TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2TxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP3RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP3TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3TxFifoSel;
    vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableToSIE 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableToSIE;
    vlSymsp->TOP__v.__PVT__SIEPortCtrlInToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInToSIE;
    vlSymsp->TOP__v.__PVT__SIEPortDataInToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInToSIE;
    vlSymsp->TOP__v.__PVT__SIEPortWEnToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnToSIE;
    vlSymsp->TOP__v.__PVT__fullSpeedBitRateToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateToSIE;
    vlSymsp->TOP__v.__PVT__fullSpeedPolarityToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityToSIE;
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__43(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__43\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.data_o = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut;
    vlSymsp->TOP__v.__PVT__hostControlSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel;
    vlSymsp->TOP__v.__PVT__slaveControlSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel;
    vlSymsp->TOP__v.__PVT__hostSlaveMuxSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostSlaveMuxSel;
    vlSymsp->TOP__v.__PVT__hostRxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostRxFifoSel;
    vlSymsp->TOP__v.__PVT__hostTxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostTxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP0RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP0TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0TxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP1RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP1TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1TxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP2RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP2TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2TxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP3RxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3RxFifoSel;
    vlSymsp->TOP__v.__PVT__slaveEP3TxFifoSel = vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3TxFifoSel;
    vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableToSIE 
	= vlSymsp->TOP__v__u_hostSlaveMux.__PVT__noActivityTimeOutEnableToSIE;
    vlSymsp->TOP__v.__PVT__SIEPortCtrlInToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortCtrlInToSIE;
    vlSymsp->TOP__v.__PVT__SIEPortDataInToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortDataInToSIE;
    vlSymsp->TOP__v.__PVT__SIEPortWEnToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__SIEPortWEnToSIE;
    vlSymsp->TOP__v.__PVT__fullSpeedBitRateToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedBitRateToSIE;
    vlSymsp->TOP__v.__PVT__fullSpeedPolarityToSIE = vlSymsp->TOP__v__u_hostSlaveMux.__PVT__fullSpeedPolarityToSIE;
    vlSymsp->TOP__v__u_usbHostControl.__PVT__hostControlSelect 
	= vlSymsp->TOP__v.__PVT__hostControlSel;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControlSelect 
	= vlSymsp->TOP__v.__PVT__slaveControlSel;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostSlaveMuxSel 
	= vlSymsp->TOP__v.__PVT__hostSlaveMuxSel;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__hostRxFifoSel;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__hostTxFifoSel;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP0RxFifoSel;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP0TxFifoSel;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP1RxFifoSel;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP1TxFifoSel;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP2RxFifoSel;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP2TxFifoSel;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP3RxFifoSel;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP3TxFifoSel;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOutEnable 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortCtrlIn 
	= vlSymsp->TOP__v.__PVT__SIEPortCtrlInToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortDataIn 
	= vlSymsp->TOP__v.__PVT__SIEPortDataInToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortWEn 
	= vlSymsp->TOP__v.__PVT__SIEPortWEnToSIE;
    vlSymsp->TOP__v.USBFullSpeed = vlSymsp->TOP__v.__PVT__fullSpeedBitRateToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate 
	= vlSymsp->TOP__v.__PVT__fullSpeedBitRateToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedPolarity 
	= vlSymsp->TOP__v.__PVT__fullSpeedPolarityToSIE;
}

void VusbHostSlave_usbHostSlave::_combo__TOP__v__44(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_combo__TOP__v__44\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl.__PVT__hostControlSelect 
	= vlSymsp->TOP__v.__PVT__hostControlSel;
    vlSymsp->TOP__v__u_usbSlaveControl.__PVT__slaveControlSelect 
	= vlSymsp->TOP__v.__PVT__slaveControlSel;
    vlSymsp->TOP__v__u_hostSlaveMux.__PVT__hostSlaveMuxSel 
	= vlSymsp->TOP__v.__PVT__hostSlaveMuxSel;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__hostRxFifoSel;
    vlSymsp->TOP__v__HostTxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__hostTxFifoSel;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP0RxFifoSel;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP0TxFifoSel;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP1RxFifoSel;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP1TxFifoSel;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP2RxFifoSel;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP2TxFifoSel;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP3RxFifoSel;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busFifoSelect 
	= vlSymsp->TOP__v.__PVT__slaveEP3TxFifoSel;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__noActivityTimeOutEnable 
	= vlSymsp->TOP__v.__PVT__noActivityTimeOutEnableToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortCtrlIn 
	= vlSymsp->TOP__v.__PVT__SIEPortCtrlInToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortDataIn 
	= vlSymsp->TOP__v.__PVT__SIEPortDataInToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__SIEPortWEn 
	= vlSymsp->TOP__v.__PVT__SIEPortWEnToSIE;
    vlSymsp->TOP__v.USBFullSpeed = vlSymsp->TOP__v.__PVT__fullSpeedBitRateToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedBitRate 
	= vlSymsp->TOP__v.__PVT__fullSpeedBitRateToSIE;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine.__PVT__fullSpeedPolarity 
	= vlSymsp->TOP__v.__PVT__fullSpeedPolarityToSIE;
    vlSymsp->TOP__v.USBDPlusPullup = ((IData)(vlSymsp->TOP__v.USBFullSpeed) 
				      & (IData)(vlSymsp->TOP__v.__PVT__connectSlaveToHost));
    vlSymsp->TOP__v.USBDMinusPullup = ((~ (IData)(vlSymsp->TOP__v.USBFullSpeed)) 
				       & (IData)(vlSymsp->TOP__v.__PVT__connectSlaveToHost));
}

void VusbHostSlave_usbHostSlave::_settle__TOP__v__45(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VusbHostSlave_usbHostSlave::_settle__TOP__v__45\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.USBDPlusPullup = ((IData)(vlSymsp->TOP__v.USBFullSpeed) 
				      & (IData)(vlSymsp->TOP__v.__PVT__connectSlaveToHost));
    vlSymsp->TOP__v.USBDMinusPullup = ((~ (IData)(vlSymsp->TOP__v.USBFullSpeed)) 
				       & (IData)(vlSymsp->TOP__v.__PVT__connectSlaveToHost));
}
