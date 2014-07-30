// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_RxFifo__F40_A6.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_RxFifo__F40_A6) {
    VL_CELL (__PVT__u_fifo, VusbHostSlave_fifoRTL__FB40_A6);
    VL_CELL (__PVT__u_RxfifoBI, VusbHostSlave_RxfifoBI);
    // Reset internal values
    // Reset structure values
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__fifoWEn = VL_RAND_RESET_I(1);
    __PVT__fifoFull = VL_RAND_RESET_I(1);
    __PVT__busAddress = VL_RAND_RESET_I(3);
    __PVT__busWriteEn = VL_RAND_RESET_I(1);
    __PVT__busStrobe_i = VL_RAND_RESET_I(1);
    __PVT__busFifoSelect = VL_RAND_RESET_I(1);
    __PVT__busDataIn = VL_RAND_RESET_I(8);
    __PVT__busDataOut = VL_RAND_RESET_I(8);
    __PVT__fifoDataIn = VL_RAND_RESET_I(8);
    __PVT__dataFromFifoToBus = VL_RAND_RESET_I(8);
    __PVT__fifoREn = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__numElementsInFifo = VL_RAND_RESET_I(16);
    __PVT__fifoEmpty = VL_RAND_RESET_I(1);
}

void VusbHostSlave_RxFifo__F40_A6::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_RxFifo__F40_A6::~VusbHostSlave_RxFifo__F40_A6() {
}

//--------------------
// Internal Methods

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoFull = vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__HostRxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__HostRxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busAddress;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoFull = vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__HostRxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__HostRxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__33(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__HostRxFifo__33\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__46(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__46\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__fifoWEn;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__fifoDataIn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__51(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__51\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__fifoWEn;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__fifoDataIn;
    vlSymsp->TOP__v__HostRxFifo.__PVT__busDataOut = vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__56(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__56\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__busDataOut = vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__busDataOut;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__65(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__65\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__74(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__74\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__79(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__79\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__84(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__84\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoREn = vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__89(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__HostRxFifo__89\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo.__PVT__fifoREn = vlSymsp->TOP__v__HostRxFifo__u_RxfifoBI.__PVT__fifoREn;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__94(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__HostRxFifo__94\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__HostRxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busAddress;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__37(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__37\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__38(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__38\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__39(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP0RxFifo__39\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__48(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__48\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoDataIn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__52(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__52\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoDataIn;
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__58(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__58\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__busDataOut;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__64(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__64\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__66(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__66\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__70(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__70\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__75(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__75\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__80(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__80\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__85(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__85\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__90(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP0RxFifo__90\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP0RxFifo__u_RxfifoBI.__PVT__fifoREn;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__95(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP0RxFifo__95\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP0RxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busAddress;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__34(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__34\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__35(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__35\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__36(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP1RxFifo__36\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__47(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__47\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoDataIn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__53(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__53\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoDataIn;
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__57(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__57\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__busDataOut;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__63(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__63\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__67(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__67\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__71(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__71\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__76(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__76\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__81(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__81\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__86(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__86\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__91(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP1RxFifo__91\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP1RxFifo__u_RxfifoBI.__PVT__fifoREn;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__96(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP1RxFifo__96\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP1RxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busAddress;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__40(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__40\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__41(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__41\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__42(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP2RxFifo__42\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__49(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__49\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoDataIn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__54(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__54\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoDataIn;
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__59(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__59\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__busDataOut;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__62(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__62\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__68(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__68\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__72(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__72\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__77(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__77\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__82(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__82\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__87(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__87\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__92(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP2RxFifo__92\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP2RxFifo__u_RxfifoBI.__PVT__fifoREn;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__97(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP2RxFifo__97\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP2RxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busAddress;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__dataFromFifoToBus 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__43(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__43\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__44(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__44\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__45(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_sequent__TOP__v__EP3RxFifo__45\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoDataIn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__dataFromFifoToBus;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__50(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__50\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoDataIn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__55(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__55\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoDataIn;
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__60(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__60\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__busDataOut;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__61(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__61\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__69(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__69\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__73(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__73\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__78(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__78\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__83(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__83\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__88(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__88\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__93(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_settle__TOP__v__EP3RxFifo__93\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoREn = vlSymsp->TOP__v__EP3RxFifo__u_RxfifoBI.__PVT__fifoREn;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoREn;
}

void VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__98(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_RxFifo__F40_A6::_combo__TOP__v__EP3RxFifo__98\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP3RxFifo.__PVT__fifoREn;
}
