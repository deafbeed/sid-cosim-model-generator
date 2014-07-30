// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave.h"     // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave) {
    VusbHostSlave__Syms* __restrict vlSymsp = __VlSymsp = new VusbHostSlave__Syms(this, name());
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__v, VusbHostSlave_usbHostSlave);
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
    __Vclklast__TOP__v__u_wishBoneBI__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostTxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostTxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0TxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0TxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1TxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1TxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2TxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2TxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3TxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3TxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostRxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostRxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1RxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1RxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0RxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0RxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2RxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2RxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3RxFifo__u_fifo__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3RxFifo__u_fifo__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_endpMux__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_slavecontroller__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_slaveGetPacket__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_slaveDirectControl__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_slaveSendPacket__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_rxStatusMonitor__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_sendPacketArbiter__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_SOFTransmit__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_hostController__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_getPacket__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_HCTxPortArbiter__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_directControl__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_SOFController__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_sendPacket__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__usbClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__busClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__wrClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__rdClk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__RxStatus = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(192,__Vm_traceActivity);
}

void VusbHostSlave::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave::~VusbHostSlave() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VusbHostSlave::eval() {
    VusbHostSlave__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VusbHostSlave::eval\n"); );
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VusbHostSlave::_eval_initial_loop(VusbHostSlave__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VusbHostSlave::_settle__TOP__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_settle__TOP__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.USBWireDataIn = vlTOPp->USBWireDataIn;
    vlSymsp->TOP__v.rst_i = vlTOPp->rst_i;
    vlSymsp->TOP__v.vBusDetect = vlTOPp->vBusDetect;
    vlSymsp->TOP__v.data_i = vlTOPp->data_i;
    vlSymsp->TOP__v.we_i = vlTOPp->we_i;
    vlSymsp->TOP__v.strobe_i = vlTOPp->strobe_i;
    vlSymsp->TOP__v.address_i = vlTOPp->address_i;
    vlSymsp->TOP__v.usbClk = vlTOPp->usbClk;
    vlSymsp->TOP__v.clk_i = vlTOPp->clk_i;
}

void VusbHostSlave::_combo__TOP__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_combo__TOP__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.vBusDetect = vlTOPp->vBusDetect;
    vlSymsp->TOP__v.USBWireDataIn = vlTOPp->USBWireDataIn;
    vlSymsp->TOP__v.rst_i = vlTOPp->rst_i;
    vlSymsp->TOP__v.data_i = vlTOPp->data_i;
    vlSymsp->TOP__v.we_i = vlTOPp->we_i;
    vlSymsp->TOP__v.strobe_i = vlTOPp->strobe_i;
    vlSymsp->TOP__v.address_i = vlTOPp->address_i;
    vlSymsp->TOP__v.usbClk = vlTOPp->usbClk;
    vlSymsp->TOP__v.clk_i = vlTOPp->clk_i;
}

void VusbHostSlave::_sequent__TOP__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_sequent__TOP__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->USBWireDataInTick = vlSymsp->TOP__v.USBWireDataInTick;
}

void VusbHostSlave::_sequent__TOP__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_sequent__TOP__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->USBWireDataOutTick = vlSymsp->TOP__v.USBWireDataOutTick;
    vlTOPp->USBWireDataOut = vlSymsp->TOP__v.USBWireDataOut;
    vlTOPp->USBWireCtrlOut = vlSymsp->TOP__v.USBWireCtrlOut;
}

void VusbHostSlave::_settle__TOP__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_settle__TOP__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->USBWireDataInTick = vlSymsp->TOP__v.USBWireDataInTick;
    vlTOPp->USBWireDataOutTick = vlSymsp->TOP__v.USBWireDataOutTick;
    vlTOPp->USBWireDataOut = vlSymsp->TOP__v.USBWireDataOut;
    vlTOPp->USBWireCtrlOut = vlSymsp->TOP__v.USBWireCtrlOut;
    vlTOPp->ack_o = vlSymsp->TOP__v.ack_o;
    vlTOPp->slaveTransDoneIntOut = vlSymsp->TOP__v.slaveTransDoneIntOut;
    vlTOPp->slaveResumeIntOut = vlSymsp->TOP__v.slaveResumeIntOut;
    vlTOPp->slaveResetEventIntOut = vlSymsp->TOP__v.slaveResetEventIntOut;
    vlTOPp->slaveSOFRxedIntOut = vlSymsp->TOP__v.slaveSOFRxedIntOut;
    vlTOPp->slaveNAKSentIntOut = vlSymsp->TOP__v.slaveNAKSentIntOut;
    vlTOPp->slaveVBusDetIntOut = vlSymsp->TOP__v.slaveVBusDetIntOut;
    vlTOPp->hostTransDoneIntOut = vlSymsp->TOP__v.hostTransDoneIntOut;
    vlTOPp->hostResumeIntOut = vlSymsp->TOP__v.hostResumeIntOut;
    vlTOPp->hostConnEventIntOut = vlSymsp->TOP__v.hostConnEventIntOut;
    vlTOPp->hostSOFSentIntOut = vlSymsp->TOP__v.hostSOFSentIntOut;
}

void VusbHostSlave::_combo__TOP__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_combo__TOP__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ack_o = vlSymsp->TOP__v.ack_o;
}

void VusbHostSlave::_sequent__TOP__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_sequent__TOP__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->slaveTransDoneIntOut = vlSymsp->TOP__v.slaveTransDoneIntOut;
    vlTOPp->slaveResumeIntOut = vlSymsp->TOP__v.slaveResumeIntOut;
    vlTOPp->slaveResetEventIntOut = vlSymsp->TOP__v.slaveResetEventIntOut;
    vlTOPp->slaveSOFRxedIntOut = vlSymsp->TOP__v.slaveSOFRxedIntOut;
    vlTOPp->slaveNAKSentIntOut = vlSymsp->TOP__v.slaveNAKSentIntOut;
    vlTOPp->slaveVBusDetIntOut = vlSymsp->TOP__v.slaveVBusDetIntOut;
}

void VusbHostSlave::_sequent__TOP__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_sequent__TOP__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hostTransDoneIntOut = vlSymsp->TOP__v.hostTransDoneIntOut;
    vlTOPp->hostResumeIntOut = vlSymsp->TOP__v.hostResumeIntOut;
    vlTOPp->hostConnEventIntOut = vlSymsp->TOP__v.hostConnEventIntOut;
    vlTOPp->hostSOFSentIntOut = vlSymsp->TOP__v.hostSOFSentIntOut;
}

void VusbHostSlave::_settle__TOP__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_settle__TOP__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_o = vlSymsp->TOP__v.data_o;
}

void VusbHostSlave::_combo__TOP__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_combo__TOP__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_o = vlSymsp->TOP__v.data_o;
}

void VusbHostSlave::_combo__TOP__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_combo__TOP__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->USBFullSpeed = vlSymsp->TOP__v.USBFullSpeed;
}

void VusbHostSlave::_settle__TOP__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_settle__TOP__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->USBFullSpeed = vlSymsp->TOP__v.USBFullSpeed;
}

void VusbHostSlave::_settle__TOP__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_settle__TOP__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->USBDPlusPullup = vlSymsp->TOP__v.USBDPlusPullup;
    vlTOPp->USBDMinusPullup = vlSymsp->TOP__v.USBDMinusPullup;
}

void VusbHostSlave::_combo__TOP__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_combo__TOP__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->USBDPlusPullup = vlSymsp->TOP__v.USBDPlusPullup;
    vlTOPp->USBDMinusPullup = vlSymsp->TOP__v.USBDMinusPullup;
}

void VusbHostSlave::_eval(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_eval\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    VL_ASSIGNBIT_WO(1,1, vlTOPp->__Vm_traceActivity, 1);
    vlSymsp->TOP__v._combo__TOP__v__2(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._combo__TOP__v__HostTxFifo__11(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__12(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__13(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__14(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__15(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__4(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._combo__TOP__v__HostRxFifo__6(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._combo__TOP__v__u_hostSlaveMux__2(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__7(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__8(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__9(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__10(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._combo__TOP__v__u_usbSerialInterfaceEngine__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._combo__TOP__v__u_usbSlaveControl__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._combo__TOP__v__u_usbHostControl__2(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._combo__TOP__v__HostTxFifo__u_fifo__1(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._combo__TOP__v__EP0TxFifo__u_fifo__2(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._combo__TOP__v__EP1TxFifo__u_fifo__3(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._combo__TOP__v__EP2TxFifo__u_fifo__4(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._combo__TOP__v__EP3TxFifo__u_fifo__5(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._combo__TOP__v__HostRxFifo__u_fifo__6(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._combo__TOP__v__EP1RxFifo__u_fifo__7(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._combo__TOP__v__EP0RxFifo__u_fifo__8(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._combo__TOP__v__EP2RxFifo__u_fifo__9(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._combo__TOP__v__EP3RxFifo__u_fifo__10(vlSymsp);
    if (((IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_wishBoneBI__clk)))) {
	vlSymsp->TOP__v__u_wishBoneBI._sequent__TOP__v__u_wishBoneBI__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,2, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI._sequent__TOP__v__HostTxFifo__u_TxfifoBI__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,3, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo._sequent__TOP__v__HostTxFifo__u_fifo__21(vlSymsp);
	VL_ASSIGNBIT_WO(1,4, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__HostTxFifo._sequent__TOP__v__HostTxFifo__17(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo._sequent__TOP__v__HostTxFifo__u_fifo__22(vlSymsp);
	VL_ASSIGNBIT_WO(1,5, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__HostTxFifo._sequent__TOP__v__HostTxFifo__18(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI._sequent__TOP__v__HostTxFifo__u_TxfifoBI__3(vlSymsp);
	VL_ASSIGNBIT_WO(1,6, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI._sequent__TOP__v__EP0TxFifo__u_TxfifoBI__4(vlSymsp);
	VL_ASSIGNBIT_WO(1,7, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo._sequent__TOP__v__EP0TxFifo__u_fifo__23(vlSymsp);
	VL_ASSIGNBIT_WO(1,8, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP0TxFifo._sequent__TOP__v__EP0TxFifo__19(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo._sequent__TOP__v__EP0TxFifo__u_fifo__24(vlSymsp);
	VL_ASSIGNBIT_WO(1,9, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP0TxFifo._sequent__TOP__v__EP0TxFifo__20(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI._sequent__TOP__v__EP0TxFifo__u_TxfifoBI__5(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI._sequent__TOP__v__EP1TxFifo__u_TxfifoBI__6(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xb, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo._sequent__TOP__v__EP1TxFifo__u_fifo__25(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xc, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP1TxFifo._sequent__TOP__v__EP1TxFifo__21(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo._sequent__TOP__v__EP1TxFifo__u_fifo__26(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xd, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP1TxFifo._sequent__TOP__v__EP1TxFifo__22(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI._sequent__TOP__v__EP1TxFifo__u_TxfifoBI__7(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xe, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI._sequent__TOP__v__EP2TxFifo__u_TxfifoBI__8(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xf, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo._sequent__TOP__v__EP2TxFifo__u_fifo__27(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x10, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP2TxFifo._sequent__TOP__v__EP2TxFifo__23(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo._sequent__TOP__v__EP2TxFifo__u_fifo__28(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x11, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP2TxFifo._sequent__TOP__v__EP2TxFifo__24(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI._sequent__TOP__v__EP2TxFifo__u_TxfifoBI__9(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x12, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI._sequent__TOP__v__EP3TxFifo__u_TxfifoBI__10(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x13, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo._sequent__TOP__v__EP3TxFifo__u_fifo__29(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x14, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP3TxFifo._sequent__TOP__v__EP3TxFifo__25(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo._sequent__TOP__v__EP3TxFifo__u_fifo__30(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x15, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP3TxFifo._sequent__TOP__v__EP3TxFifo__26(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI._sequent__TOP__v__EP3TxFifo__u_TxfifoBI__11(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x16, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI._sequent__TOP__v__HostRxFifo__u_RxfifoBI__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x17, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo._sequent__TOP__v__HostRxFifo__u_fifo__31(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x18, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__HostRxFifo._sequent__TOP__v__HostRxFifo__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI._sequent__TOP__v__HostRxFifo__u_RxfifoBI__2(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x19, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo._sequent__TOP__v__HostRxFifo__u_fifo__32(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x1a, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__HostRxFifo._sequent__TOP__v__HostRxFifo__12(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__usbClk)))) {
	vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI._sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x1b, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_hostSlaveMux._sequent__TOP__v__u_hostSlaveMux__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__busClk)))) {
	vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI._sequent__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__2(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x1c, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_hostSlaveMux._sequent__TOP__v__u_hostSlaveMux__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI._sequent__TOP__v__EP1RxFifo__u_RxfifoBI__3(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x1d, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo._sequent__TOP__v__EP1RxFifo__u_fifo__33(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x1e, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP1RxFifo._sequent__TOP__v__EP1RxFifo__13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI._sequent__TOP__v__EP1RxFifo__u_RxfifoBI__4(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x1f, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo._sequent__TOP__v__EP1RxFifo__u_fifo__34(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x20, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP1RxFifo._sequent__TOP__v__EP1RxFifo__14(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI._sequent__TOP__v__EP0RxFifo__u_RxfifoBI__5(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x21, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo._sequent__TOP__v__EP0RxFifo__u_fifo__35(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x22, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP0RxFifo._sequent__TOP__v__EP0RxFifo__15(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI._sequent__TOP__v__EP0RxFifo__u_RxfifoBI__6(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x23, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo._sequent__TOP__v__EP0RxFifo__u_fifo__36(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x24, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP0RxFifo._sequent__TOP__v__EP0RxFifo__16(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI._sequent__TOP__v__EP2RxFifo__u_RxfifoBI__7(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x25, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo._sequent__TOP__v__EP2RxFifo__u_fifo__37(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x26, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP2RxFifo._sequent__TOP__v__EP2RxFifo__17(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI._sequent__TOP__v__EP2RxFifo__u_RxfifoBI__8(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x27, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo._sequent__TOP__v__EP2RxFifo__u_fifo__38(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x28, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP2RxFifo._sequent__TOP__v__EP2RxFifo__18(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI._sequent__TOP__v__EP3RxFifo__u_RxfifoBI__9(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x29, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo._sequent__TOP__v__EP3RxFifo__u_fifo__39(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x2a, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP3RxFifo._sequent__TOP__v__EP3RxFifo__19(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI._sequent__TOP__v__EP3RxFifo__u_RxfifoBI__10(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x2b, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo._sequent__TOP__v__EP3RxFifo__u_fifo__40(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x2c, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP3RxFifo._sequent__TOP__v__EP3RxFifo__20(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter._sequent__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x2d, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver._sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x2e, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16._sequent__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x2f, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__5(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5._sequent__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x30, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16._sequent__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__2(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x31, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__7(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5._sequent__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__2(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x32, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__8(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData._sequent__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x33, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte._sequent__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x34, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit._sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x35, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData._sequent__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x36, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__12(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter._sequent__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x37, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte._sequent__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x38, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__14(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor._sequent__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x39, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_endpMux__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux._sequent__TOP__v__u_usbSlaveControl__u_endpMux__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x3a, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slavecontroller__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller._sequent__TOP__v__u_usbSlaveControl__u_slavecontroller__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x3b, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__5(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveGetPacket__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket._sequent__TOP__v__u_usbSlaveControl__u_slaveGetPacket__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x3c, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter._sequent__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x3d, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__7(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__usbClk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI._sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x3e, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__8(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveDirectControl__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl._sequent__TOP__v__u_usbSlaveControl__u_slaveDirectControl__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x3f, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveSendPacket__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket._sequent__TOP__v__u_usbSlaveControl__u_slaveSendPacket__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x40, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__busClk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI._sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__2(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x41, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_rxStatusMonitor__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor._sequent__TOP__v__u_usbHostControl__u_rxStatusMonitor__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x42, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacketArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter._sequent__TOP__v__u_usbHostControl__u_sendPacketArbiter__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x43, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble._sequent__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x44, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__5(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_SOFTransmit__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit._sequent__TOP__v__u_usbHostControl__u_SOFTransmit__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x45, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_hostController__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_hostController._sequent__TOP__v__u_usbHostControl__u_hostController__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x46, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__7(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_getPacket__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket._sequent__TOP__v__u_usbHostControl__u_getPacket__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x47, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__8(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_HCTxPortArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter._sequent__TOP__v__u_usbHostControl__u_HCTxPortArbiter__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x48, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_directControl__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_directControl._sequent__TOP__v__u_usbHostControl__u_directControl__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x49, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_SOFController__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_SOFController._sequent__TOP__v__u_usbHostControl__u_SOFController__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x4a, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacket__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket._sequent__TOP__v__u_usbHostControl__u_sendPacket__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x4b, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__12(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__usbClk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI._sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x4c, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__busClk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI._sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__2(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x4d, vlTOPp->__Vm_traceActivity, 1);
    }
    vlSymsp->TOP__v._combo__TOP__v__6(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._combo__TOP__v__HostTxFifo__27(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__28(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__29(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__30(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__31(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._combo__TOP__v__HostRxFifo__21(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._combo__TOP__v__u_hostSlaveMux__5(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__22(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__23(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__24(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__25(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._combo__TOP__v__u_usbSerialInterfaceEngine__15(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._combo__TOP__v__u_usbSlaveControl__12(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._combo__TOP__v__u_usbHostControl__14(vlSymsp);
    vlSymsp->TOP__v__u_wishBoneBI._combo__TOP__v__u_wishBoneBI__2(vlSymsp);
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__1(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x4e, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__HostTxFifo__u_fifo._sequent__TOP__v__HostTxFifo__u_fifo__41(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__2(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__3(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x4f, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP0TxFifo__u_fifo._sequent__TOP__v__EP0TxFifo__u_fifo__42(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__5(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x50, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP1TxFifo__u_fifo._sequent__TOP__v__EP1TxFifo__u_fifo__43(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__7(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x51, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP2TxFifo__u_fifo._sequent__TOP__v__EP2TxFifo__u_fifo__44(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__8(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__9(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x52, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP3TxFifo__u_fifo._sequent__TOP__v__EP3TxFifo__u_fifo__45(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__12(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x53, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__HostRxFifo__u_fifo._sequent__TOP__v__HostRxFifo__u_fifo__46(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__14(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x54, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP1RxFifo__u_fifo._sequent__TOP__v__EP1RxFifo__u_fifo__47(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__15(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__16(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x55, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP0RxFifo__u_fifo._sequent__TOP__v__EP0RxFifo__u_fifo__48(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__17(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__18(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x56, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP2RxFifo__u_fifo._sequent__TOP__v__EP2RxFifo__u_fifo__49(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__19(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__rdClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__20(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x57, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP3RxFifo__u_fifo._sequent__TOP__v__EP3RxFifo__u_fifo__50(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__HostTxFifo._sequent__TOP__v__HostTxFifo__32(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x58, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo._sequent__TOP__v__HostTxFifo__u_fifo__61(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x59, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__HostTxFifo._sequent__TOP__v__HostTxFifo__39(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__8(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo._sequent__TOP__v__EP0TxFifo__u_fifo__62(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x5a, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP0TxFifo._sequent__TOP__v__EP0TxFifo__40(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo._sequent__TOP__v__EP1TxFifo__u_fifo__63(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x5b, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP1TxFifo._sequent__TOP__v__EP1TxFifo__41(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo._sequent__TOP__v__EP2TxFifo__u_fifo__64(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x5c, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP2TxFifo._sequent__TOP__v__EP2TxFifo__42(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo._sequent__TOP__v__EP3TxFifo__u_fifo__65(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x5d, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__EP3TxFifo._sequent__TOP__v__EP3TxFifo__43(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__12(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo._sequent__TOP__v__HostRxFifo__u_fifo__66(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x5e, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo._sequent__TOP__v__EP1RxFifo__u_fifo__67(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x5f, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__14(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo._sequent__TOP__v__EP0RxFifo__u_fifo__68(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x60, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__15(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo._sequent__TOP__v__EP2RxFifo__u_fifo__69(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x61, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__16(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__wrClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo._sequent__TOP__v__EP3RxFifo__u_fifo__70(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x62, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__17(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__usbClk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI._sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__4(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x63, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__15(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__18(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__usbClk)))) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI._sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__4(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x64, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__17(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__19(vlSymsp);
    }
    vlSymsp->TOP__v__HostTxFifo__u_fifo._combo__TOP__v__HostTxFifo__u_fifo__71(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._combo__TOP__v__EP0TxFifo__u_fifo__72(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._combo__TOP__v__EP1TxFifo__u_fifo__73(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._combo__TOP__v__EP2TxFifo__u_fifo__74(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._combo__TOP__v__EP3TxFifo__u_fifo__75(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI._combo__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__4(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI._combo__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__5(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI._combo__TOP__v__u_usbHostControl__u_USBHostControlBI__5(vlSymsp);
    vlSymsp->TOP__v__u_wishBoneBI._combo__TOP__v__u_wishBoneBI__4(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._combo__TOP__v__u_hostSlaveMux__8(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._combo__TOP__v__u_usbSlaveControl__16(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._combo__TOP__v__u_usbHostControl__18(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__20(vlSymsp);
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__21(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__22(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__23(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__24(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__wrClk)))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc._sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__25(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__HostTxFifo._sequent__TOP__v__HostTxFifo__44(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x65, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP0TxFifo._sequent__TOP__v__EP0TxFifo__45(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x66, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP0TxFifo._sequent__TOP__v__EP0TxFifo__46(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x67, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP1TxFifo._sequent__TOP__v__EP1TxFifo__47(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x68, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP1TxFifo._sequent__TOP__v__EP1TxFifo__48(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x69, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP2TxFifo._sequent__TOP__v__EP2TxFifo__49(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x6a, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP2TxFifo._sequent__TOP__v__EP2TxFifo__50(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x6b, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP3TxFifo._sequent__TOP__v__EP3TxFifo__51(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x6c, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP3TxFifo._sequent__TOP__v__EP3TxFifo__52(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x6d, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__HostRxFifo._sequent__TOP__v__HostRxFifo__31(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x6e, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__HostRxFifo._sequent__TOP__v__HostRxFifo__32(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x6f, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__HostRxFifo._sequent__TOP__v__HostRxFifo__33(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x70, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__usbClk)))) {
	vlSymsp->TOP__v._sequent__TOP__v__21(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x71, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__busClk)))) {
	vlSymsp->TOP__v__u_hostSlaveMux._sequent__TOP__v__u_hostSlaveMux__9(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x72, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__22(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP1RxFifo._sequent__TOP__v__EP1RxFifo__34(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x73, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP1RxFifo._sequent__TOP__v__EP1RxFifo__35(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x74, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP1RxFifo._sequent__TOP__v__EP1RxFifo__36(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x75, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP0RxFifo._sequent__TOP__v__EP0RxFifo__37(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x76, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP0RxFifo._sequent__TOP__v__EP0RxFifo__38(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x77, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP0RxFifo._sequent__TOP__v__EP0RxFifo__39(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x78, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP2RxFifo._sequent__TOP__v__EP2RxFifo__40(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x79, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP2RxFifo._sequent__TOP__v__EP2RxFifo__41(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x7a, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP2RxFifo._sequent__TOP__v__EP2RxFifo__42(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x7b, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__usbClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__usbClk)))) {
	vlSymsp->TOP__v__EP3RxFifo._sequent__TOP__v__EP3RxFifo__43(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x7c, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__busClk)))) {
	vlSymsp->TOP__v__EP3RxFifo._sequent__TOP__v__EP3RxFifo__44(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x7d, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__rdClk)))) {
	vlSymsp->TOP__v__EP3RxFifo._sequent__TOP__v__EP3RxFifo__45(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x7e, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__18(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x7f, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__clk)))) {
	vlSymsp->TOP__v._sequent__TOP__v__23(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x80, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__19(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x81, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__20(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x82, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__21(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x83, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__22(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x84, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__clk)))) {
	vlSymsp->TOP__v._sequent__TOP__v__24(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x85, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__23(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__24(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x86, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__25(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x87, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__25(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__clk)))) {
	vlSymsp->TOP__v._sequent__TOP__v__26(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x88, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__26(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__27(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x89, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__27(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__clk)))) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine._sequent__TOP__v__u_usbSerialInterfaceEngine__28(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x8a, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__28(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__17(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x8b, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_endpMux__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__18(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x8c, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slavecontroller__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__19(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x8d, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveGetPacket__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__20(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x8e, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__29(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__21(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x8f, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveDirectControl__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__22(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x90, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveSendPacket__clk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__23(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x91, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__busClk)))) {
	vlSymsp->TOP__v__u_usbSlaveControl._sequent__TOP__v__u_usbSlaveControl__24(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x92, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__30(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_rxStatusMonitor__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__19(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x93, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacketArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__20(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x94, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__21(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x95, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_SOFTransmit__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__22(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x96, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_hostController__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__23(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x97, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_getPacket__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__24(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x98, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__31(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_HCTxPortArbiter__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__25(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x99, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_directControl__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__26(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x9a, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_SOFController__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__27(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x9b, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacket__clk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__28(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x9c, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__32(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__busClk)))) {
	vlSymsp->TOP__v__u_usbHostControl._sequent__TOP__v__u_usbHostControl__29(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x9d, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__33(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo._multiclk__TOP__v__HostTxFifo__u_fifo__86(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x9e, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo._multiclk__TOP__v__EP0TxFifo__u_fifo__87(vlSymsp);
	VL_ASSIGNBIT_WO(1,0x9f, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo._multiclk__TOP__v__EP1TxFifo__u_fifo__88(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa0, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo._multiclk__TOP__v__EP2TxFifo__u_fifo__89(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa1, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo._multiclk__TOP__v__EP3TxFifo__u_fifo__90(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa2, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo._multiclk__TOP__v__HostRxFifo__u_fifo__91(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa3, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo._multiclk__TOP__v__EP1RxFifo__u_fifo__92(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa4, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo._multiclk__TOP__v__EP0RxFifo__u_fifo__93(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa5, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo._multiclk__TOP__v__EP2RxFifo__u_fifo__94(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa6, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__rdClk))) 
	 | ((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__wrClk))))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo._multiclk__TOP__v__EP3RxFifo__u_fifo__95(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa7, vlTOPp->__Vm_traceActivity, 1);
    }
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI._combo__TOP__v__HostRxFifo__u_RxfifoBI__21(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI._combo__TOP__v__EP1RxFifo__u_RxfifoBI__22(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI._combo__TOP__v__EP0RxFifo__u_RxfifoBI__23(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI._combo__TOP__v__EP2RxFifo__u_RxfifoBI__24(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI._combo__TOP__v__EP3RxFifo__u_RxfifoBI__25(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver._combo__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte._combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter._combo__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket._combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux._combo__TOP__v__u_usbSlaveControl__u_endpMux__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter._combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket._combo__TOP__v__u_usbHostControl__u_sendPacket__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter._combo__TOP__v__u_usbHostControl__u_sendPacketArbiter__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit._combo__TOP__v__u_usbHostControl__u_SOFTransmit__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter._combo__TOP__v__u_usbHostControl__u_HCTxPortArbiter__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._combo__TOP__v__u_usbHostControl__31(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._combo__TOP__v__u_usbSlaveControl__26(vlSymsp);
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__58(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__59(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__60(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__61(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._combo__TOP__v__HostRxFifo__51(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._combo__TOP__v__HostTxFifo__62(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__52(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__53(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__54(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__55(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._combo__TOP__v__u_usbSerialInterfaceEngine__30(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__36(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_hostController._combo__TOP__v__u_usbHostControl__u_hostController__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor._combo__TOP__v__u_usbHostControl__u_rxStatusMonitor__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_directControl._combo__TOP__v__u_usbHostControl__u_directControl__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController._combo__TOP__v__u_usbHostControl__u_SOFController__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket._combo__TOP__v__u_usbHostControl__u_sendPacket__4(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket._combo__TOP__v__u_usbHostControl__u_getPacket__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux._combo__TOP__v__u_usbSlaveControl__u_fifoMux__1(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor._combo__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter._combo__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__4(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller._combo__TOP__v__u_usbSlaveControl__u_slavecontroller__2(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._combo__TOP__v__HostRxFifo__u_fifo__96(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._combo__TOP__v__HostTxFifo__u_fifo__97(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._combo__TOP__v__EP0RxFifo__u_fifo__98(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._combo__TOP__v__EP1RxFifo__u_fifo__99(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._combo__TOP__v__EP2RxFifo__u_fifo__100(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._combo__TOP__v__EP3RxFifo__u_fifo__101(vlSymsp);
    if (((IData)(vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__busClk)))) {
	vlSymsp->TOP__v._sequent__TOP__v__37(vlSymsp);
	VL_ASSIGNBIT_WO(1,0xa8, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__busClk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__busClk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__busClk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlSymsp->TOP__v__u_usbSlaveControl._combo__TOP__v__u_usbSlaveControl__29(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._combo__TOP__v__u_usbHostControl__34(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._combo__TOP__v__HostTxFifo__68(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__61(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__62(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__63(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__64(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__69(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__70(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__71(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__72(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._combo__TOP__v__HostRxFifo__65(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__39(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._combo__TOP__v__u_usbSerialInterfaceEngine__32(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble._combo__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__2(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__41(vlSymsp);
    vlSymsp->TOP__v__u_wishBoneBI._combo__TOP__v__u_wishBoneBI__6(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._combo__TOP__v__u_hostSlaveMux__12(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket._combo__TOP__v__u_usbSlaveControl__u_slaveGetPacket__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl._combo__TOP__v__u_usbSlaveControl__u_slaveDirectControl__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket._combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__5(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__73(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__74(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__75(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__76(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__66(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__67(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__68(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__69(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__42(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._combo__TOP__v__EP0TxFifo__u_fifo__120(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._combo__TOP__v__EP1TxFifo__u_fifo__121(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._combo__TOP__v__EP2TxFifo__u_fifo__122(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._combo__TOP__v__EP3TxFifo__u_fifo__123(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._combo__TOP__v__EP0RxFifo__u_fifo__124(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._combo__TOP__v__EP1RxFifo__u_fifo__125(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._combo__TOP__v__EP2RxFifo__u_fifo__126(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._combo__TOP__v__EP3RxFifo__u_fifo__127(vlSymsp);
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__44(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._combo__TOP__v__u_usbHostControl__36(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._combo__TOP__v__u_usbSlaveControl__31(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._combo__TOP__v__u_hostSlaveMux__13(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._combo__TOP__v__HostRxFifo__74(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._combo__TOP__v__HostTxFifo__81(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__75(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__82(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__76(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__83(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__77(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__84(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__78(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__85(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._combo__TOP__v__u_usbSerialInterfaceEngine__33(vlSymsp);
    vlTOPp->_combo__TOP__11(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI._combo__TOP__v__HostRxFifo__u_RxfifoBI__31(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI._combo__TOP__v__HostTxFifo__u_TxfifoBI__22(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI._combo__TOP__v__EP0RxFifo__u_RxfifoBI__32(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI._combo__TOP__v__EP0TxFifo__u_TxfifoBI__23(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI._combo__TOP__v__EP1RxFifo__u_RxfifoBI__33(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI._combo__TOP__v__EP1TxFifo__u_TxfifoBI__24(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI._combo__TOP__v__EP2RxFifo__u_RxfifoBI__34(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI._combo__TOP__v__EP2TxFifo__u_TxfifoBI__25(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI._combo__TOP__v__EP3RxFifo__u_RxfifoBI__35(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI._combo__TOP__v__EP3TxFifo__u_TxfifoBI__26(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate._combo__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__2(vlSymsp);
    vlTOPp->_combo__TOP__14(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._combo__TOP__v__HostRxFifo__84(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._combo__TOP__v__HostTxFifo__91(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__85(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__92(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__86(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__93(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__87(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__94(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__88(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__95(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._combo__TOP__v__u_usbSerialInterfaceEngine__35(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._combo__TOP__v__HostRxFifo__94(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._combo__TOP__v__HostTxFifo__101(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._combo__TOP__v__EP0RxFifo__95(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._combo__TOP__v__EP0TxFifo__102(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._combo__TOP__v__EP1RxFifo__96(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._combo__TOP__v__EP1TxFifo__103(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._combo__TOP__v__EP2RxFifo__97(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._combo__TOP__v__EP2TxFifo__104(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._combo__TOP__v__EP3RxFifo__98(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._combo__TOP__v__EP3TxFifo__105(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._combo__TOP__v__u_usbSerialInterfaceEngine__37(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._combo__TOP__v__HostRxFifo__u_fifo__128(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._combo__TOP__v__HostTxFifo__u_fifo__129(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._combo__TOP__v__EP0RxFifo__u_fifo__130(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._combo__TOP__v__EP0TxFifo__u_fifo__131(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._combo__TOP__v__EP1RxFifo__u_fifo__132(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._combo__TOP__v__EP1TxFifo__u_fifo__133(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._combo__TOP__v__EP2RxFifo__u_fifo__134(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._combo__TOP__v__EP2TxFifo__u_fifo__135(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._combo__TOP__v__EP3RxFifo__u_fifo__136(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._combo__TOP__v__EP3TxFifo__u_fifo__137(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte._combo__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit._combo__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter._combo__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__v__u_wishBoneBI__clk = vlSymsp->TOP__v__u_wishBoneBI.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__usbClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__busClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__busClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__busClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__busClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__busClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__usbClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__busClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__usbClk 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__busClk 
	= vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__busClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__busClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__busClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__usbClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__wrClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__busClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__rdClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__clk 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_endpMux__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slavecontroller__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveGetPacket__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__usbClk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveDirectControl__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_slaveSendPacket__clk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__busClk 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_rxStatusMonitor__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacketArbiter__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_SOFTransmit__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_hostController__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_hostController.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_getPacket__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_HCTxPortArbiter__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_directControl__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_directControl.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_SOFController__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_SOFController.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_sendPacket__clk 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__clk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__usbClk 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__usbClk;
    vlTOPp->__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__busClk 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__busClk;
    vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
    vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__wrClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk;
    vlTOPp->__Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__rdClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk;
}

void VusbHostSlave::_eval_initial(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_eval_initial\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI._initial__TOP__v__HostTxFifo__u_TxfifoBI(vlSymsp);
    VL_ASSIGNBIT_WO(1,0, vlTOPp->__Vm_traceActivity, 1);
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI._initial__TOP__v__EP0TxFifo__u_TxfifoBI(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI._initial__TOP__v__EP1TxFifo__u_TxfifoBI(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI._initial__TOP__v__EP2TxFifo__u_TxfifoBI(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI._initial__TOP__v__EP3TxFifo__u_TxfifoBI(vlSymsp);
}

void VusbHostSlave::final() {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::final\n"); );
    // Variables
    VusbHostSlave__Syms* __restrict vlSymsp = this->__VlSymsp;
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VusbHostSlave::_eval_settle(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_eval_settle\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__1(vlSymsp);
    VL_ASSIGNBIT_WO(1,0, vlTOPp->__Vm_traceActivity, 1);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__2(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__3(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__4(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__5(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__1(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__3(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__6(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__7(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__8(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__9(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__10(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._settle__TOP__v__HostRxFifo__1(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._settle__TOP__v__u_hostSlaveMux__1(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._settle__TOP__v__EP1RxFifo__2(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._settle__TOP__v__EP0RxFifo__3(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._settle__TOP__v__EP2RxFifo__4(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._settle__TOP__v__EP3RxFifo__5(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._settle__TOP__v__u_usbSerialInterfaceEngine__1(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__1(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__1(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._settle__TOP__v__HostTxFifo__u_fifo__11(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._settle__TOP__v__EP0TxFifo__u_fifo__12(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._settle__TOP__v__EP1TxFifo__u_fifo__13(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._settle__TOP__v__EP2TxFifo__u_fifo__14(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._settle__TOP__v__EP3TxFifo__u_fifo__15(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._settle__TOP__v__HostRxFifo__u_fifo__16(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._settle__TOP__v__EP1RxFifo__u_fifo__17(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._settle__TOP__v__EP0RxFifo__u_fifo__18(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._settle__TOP__v__EP2RxFifo__u_fifo__19(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._settle__TOP__v__EP3RxFifo__u_fifo__20(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__5(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI._settle__TOP__v__HostTxFifo__u_TxfifoBI__2(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__16(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__33(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI._settle__TOP__v__HostTxFifo__u_TxfifoBI__12(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI._settle__TOP__v__EP0TxFifo__u_TxfifoBI__13(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__34(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI._settle__TOP__v__EP1TxFifo__u_TxfifoBI__14(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__35(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI._settle__TOP__v__EP2TxFifo__u_TxfifoBI__15(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__36(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI._settle__TOP__v__EP3TxFifo__u_TxfifoBI__16(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__37(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI._settle__TOP__v__HostRxFifo__u_RxfifoBI__11(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._settle__TOP__v__HostRxFifo__26(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._settle__TOP__v__HostRxFifo__u_fifo__51(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._settle__TOP__v__u_hostSlaveMux__6(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI._settle__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__3(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI._settle__TOP__v__EP1RxFifo__u_RxfifoBI__12(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._settle__TOP__v__EP1RxFifo__27(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._settle__TOP__v__EP1RxFifo__u_fifo__52(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI._settle__TOP__v__EP0RxFifo__u_RxfifoBI__13(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._settle__TOP__v__EP0RxFifo__28(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._settle__TOP__v__EP0RxFifo__u_fifo__53(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI._settle__TOP__v__EP2RxFifo__u_RxfifoBI__14(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._settle__TOP__v__EP2RxFifo__29(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._settle__TOP__v__EP2RxFifo__u_fifo__54(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI._settle__TOP__v__EP3RxFifo__u_RxfifoBI__15(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._settle__TOP__v__EP3RxFifo__30(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._settle__TOP__v__EP3RxFifo__u_fifo__55(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._settle__TOP__v__u_usbSerialInterfaceEngine__16(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData._settle__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__13(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI._settle__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__15(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket._settle__TOP__v__u_usbHostControl__u_getPacket__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI._settle__TOP__v__u_usbHostControl__u_USBHostControlBI__3(vlSymsp);
    vlSymsp->TOP__v__u_wishBoneBI._settle__TOP__v__u_wishBoneBI__3(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._settle__TOP__v__HostTxFifo__u_fifo__56(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._settle__TOP__v__EP0TxFifo__u_fifo__57(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._settle__TOP__v__EP1TxFifo__u_fifo__58(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._settle__TOP__v__EP2TxFifo__u_fifo__59(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._settle__TOP__v__EP3TxFifo__u_fifo__60(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__7(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__38(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._settle__TOP__v__u_hostSlaveMux__7(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._settle__TOP__v__u_usbSerialInterfaceEngine__17(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__14(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__16(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._settle__TOP__v__HostTxFifo__u_fifo__76(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__34(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._settle__TOP__v__EP0TxFifo__u_fifo__77(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._settle__TOP__v__EP1TxFifo__u_fifo__78(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._settle__TOP__v__EP2TxFifo__u_fifo__79(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._settle__TOP__v__EP3TxFifo__u_fifo__80(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._settle__TOP__v__HostRxFifo__u_fifo__81(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._settle__TOP__v__EP1RxFifo__u_fifo__82(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._settle__TOP__v__EP0RxFifo__u_fifo__83(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._settle__TOP__v__EP2RxFifo__u_fifo__84(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._settle__TOP__v__EP3RxFifo__u_fifo__85(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._settle__TOP__v__u_hostSlaveMux__10(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__25(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__30(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__53(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__54(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__55(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__56(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__57(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._settle__TOP__v__HostRxFifo__46(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI._settle__TOP__v__HostRxFifo__u_RxfifoBI__16(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._settle__TOP__v__EP1RxFifo__47(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI._settle__TOP__v__EP1RxFifo__u_RxfifoBI__17(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._settle__TOP__v__EP0RxFifo__48(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI._settle__TOP__v__EP0RxFifo__u_RxfifoBI__18(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._settle__TOP__v__EP2RxFifo__49(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI._settle__TOP__v__EP2RxFifo__u_RxfifoBI__19(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._settle__TOP__v__EP3RxFifo__50(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI._settle__TOP__v__EP3RxFifo__u_RxfifoBI__20(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver._settle__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte._settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter._settle__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._settle__TOP__v__u_usbSerialInterfaceEngine__29(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket._settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_endpMux._settle__TOP__v__u_usbSlaveControl__u_endpMux__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter._settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket._settle__TOP__v__u_usbHostControl__u_sendPacket__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketArbiter._settle__TOP__v__u_usbHostControl__u_sendPacketArbiter__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_SOFTransmit._settle__TOP__v__u_usbHostControl__u_SOFTransmit__2(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_HCTxPortArbiter._settle__TOP__v__u_usbHostControl__u_HCTxPortArbiter__2(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__35(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_hostController._settle__TOP__v__u_usbHostControl__u_hostController__2(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._settle__TOP__v__HostTxFifo__u_fifo__102(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._settle__TOP__v__EP0TxFifo__u_fifo__103(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._settle__TOP__v__EP1TxFifo__u_fifo__104(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._settle__TOP__v__EP2TxFifo__u_fifo__105(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._settle__TOP__v__EP3TxFifo__u_fifo__106(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._settle__TOP__v__HostRxFifo__u_fifo__107(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._settle__TOP__v__EP1RxFifo__u_fifo__108(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._settle__TOP__v__EP0RxFifo__u_fifo__109(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._settle__TOP__v__EP2RxFifo__u_fifo__110(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._settle__TOP__v__EP3RxFifo__u_fifo__111(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._settle__TOP__v__HostRxFifo__56(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._settle__TOP__v__EP1RxFifo__57(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._settle__TOP__v__EP0RxFifo__58(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._settle__TOP__v__EP2RxFifo__59(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._settle__TOP__v__EP3RxFifo__60(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte._settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__4(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._settle__TOP__v__u_usbSerialInterfaceEngine__31(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__27(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__32(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_rxStatusMonitor._settle__TOP__v__u_usbHostControl__u_rxStatusMonitor__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_directControl._settle__TOP__v__u_usbHostControl__u_directControl__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_SOFController._settle__TOP__v__u_usbHostControl__u_SOFController__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket._settle__TOP__v__u_usbHostControl__u_sendPacket__5(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket._settle__TOP__v__u_usbHostControl__u_getPacket__4(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_fifoMux._settle__TOP__v__u_usbSlaveControl__u_fifoMux__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor._settle__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_SCTxPortArbiter._settle__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__5(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller._settle__TOP__v__u_usbSlaveControl__u_slavecontroller__3(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__38(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__63(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__64(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__65(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__66(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__67(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__33(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__28(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__40(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__30(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacketCheckPreamble._settle__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__3(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__35(vlSymsp);
    vlSymsp->TOP__v__u_wishBoneBI._settle__TOP__v__u_wishBoneBI__5(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._settle__TOP__v__u_hostSlaveMux__11(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket._settle__TOP__v__u_usbSlaveControl__u_slaveGetPacket__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveDirectControl._settle__TOP__v__u_usbSlaveControl__u_slaveDirectControl__2(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket._settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__4(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__77(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__78(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__79(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__80(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._settle__TOP__v__EP0RxFifo__70(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._settle__TOP__v__EP1RxFifo__71(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._settle__TOP__v__EP2RxFifo__72(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._settle__TOP__v__EP3RxFifo__73(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__43(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._settle__TOP__v__EP0TxFifo__u_fifo__112(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._settle__TOP__v__EP1TxFifo__u_fifo__113(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._settle__TOP__v__EP2TxFifo__u_fifo__114(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._settle__TOP__v__EP3TxFifo__u_fifo__115(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._settle__TOP__v__EP0RxFifo__u_fifo__116(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._settle__TOP__v__EP1RxFifo__u_fifo__117(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._settle__TOP__v__EP2RxFifo__u_fifo__118(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._settle__TOP__v__EP3RxFifo__u_fifo__119(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlSymsp->TOP__v__u_usbHostControl._settle__TOP__v__u_usbHostControl__37(vlSymsp);
    vlSymsp->TOP__v__u_usbSlaveControl._settle__TOP__v__u_usbSlaveControl__32(vlSymsp);
    vlSymsp->TOP__v__u_hostSlaveMux._settle__TOP__v__u_hostSlaveMux__14(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._settle__TOP__v__HostRxFifo__79(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__86(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._settle__TOP__v__EP0RxFifo__80(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__87(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._settle__TOP__v__EP1RxFifo__81(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__88(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._settle__TOP__v__EP2RxFifo__82(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__89(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._settle__TOP__v__EP3RxFifo__83(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__90(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._settle__TOP__v__u_usbSerialInterfaceEngine__34(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__45(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI._settle__TOP__v__HostRxFifo__u_RxfifoBI__26(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI._settle__TOP__v__HostTxFifo__u_TxfifoBI__17(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI._settle__TOP__v__EP0RxFifo__u_RxfifoBI__27(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI._settle__TOP__v__EP0TxFifo__u_TxfifoBI__18(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI._settle__TOP__v__EP1RxFifo__u_RxfifoBI__28(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI._settle__TOP__v__EP1TxFifo__u_TxfifoBI__19(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI._settle__TOP__v__EP2RxFifo__u_RxfifoBI__29(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI._settle__TOP__v__EP2TxFifo__u_TxfifoBI__20(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI._settle__TOP__v__EP3RxFifo__u_RxfifoBI__30(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI._settle__TOP__v__EP3TxFifo__u_TxfifoBI__21(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate._settle__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__1(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo._settle__TOP__v__HostRxFifo__89(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo._settle__TOP__v__HostTxFifo__96(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo._settle__TOP__v__EP0RxFifo__90(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo._settle__TOP__v__EP0TxFifo__97(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo._settle__TOP__v__EP1RxFifo__91(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo._settle__TOP__v__EP1TxFifo__98(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo._settle__TOP__v__EP2RxFifo__92(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo._settle__TOP__v__EP2TxFifo__99(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo._settle__TOP__v__EP3RxFifo__93(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo._settle__TOP__v__EP3TxFifo__100(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine._settle__TOP__v__u_usbSerialInterfaceEngine__36(vlSymsp);
    vlSymsp->TOP__v__HostRxFifo__u_fifo._settle__TOP__v__HostRxFifo__u_fifo__138(vlSymsp);
    vlSymsp->TOP__v__HostTxFifo__u_fifo._settle__TOP__v__HostTxFifo__u_fifo__139(vlSymsp);
    vlSymsp->TOP__v__EP0RxFifo__u_fifo._settle__TOP__v__EP0RxFifo__u_fifo__140(vlSymsp);
    vlSymsp->TOP__v__EP0TxFifo__u_fifo._settle__TOP__v__EP0TxFifo__u_fifo__141(vlSymsp);
    vlSymsp->TOP__v__EP1RxFifo__u_fifo._settle__TOP__v__EP1RxFifo__u_fifo__142(vlSymsp);
    vlSymsp->TOP__v__EP1TxFifo__u_fifo._settle__TOP__v__EP1TxFifo__u_fifo__143(vlSymsp);
    vlSymsp->TOP__v__EP2RxFifo__u_fifo._settle__TOP__v__EP2RxFifo__u_fifo__144(vlSymsp);
    vlSymsp->TOP__v__EP2TxFifo__u_fifo._settle__TOP__v__EP2TxFifo__u_fifo__145(vlSymsp);
    vlSymsp->TOP__v__EP3RxFifo__u_fifo._settle__TOP__v__EP3RxFifo__u_fifo__146(vlSymsp);
    vlSymsp->TOP__v__EP3TxFifo__u_fifo._settle__TOP__v__EP3TxFifo__u_fifo__147(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processTxByte._settle__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxBit._settle__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__3(vlSymsp);
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter._settle__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__3(vlSymsp);
}

IData VusbHostSlave::_change_request(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbHostSlave::_change_request\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus ^ vlTOPp->__Vchglast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__RxStatus));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus ^ vlTOPp->__Vchglast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__RxStatus))) VL_PRINTF("	CHANGE: trunk/RTL/serialInterfaceEngine//processRxByte.v:115: RxStatus\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__RxStatus 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__PVT__RxStatus;
    return __req;
}
