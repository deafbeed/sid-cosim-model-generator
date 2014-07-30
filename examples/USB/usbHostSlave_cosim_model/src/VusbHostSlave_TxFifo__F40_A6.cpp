// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_TxFifo__F40_A6.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_TxFifo__F40_A6) {
    VL_CELL (__PVT__u_fifo, VusbHostSlave_fifoRTL__FB40_A6);
    VL_CELL (__PVT__u_TxfifoBI, VusbHostSlave_TxfifoBI);
    // Reset internal values
    // Reset structure values
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__fifoREn = VL_RAND_RESET_I(1);
    __PVT__fifoEmpty = VL_RAND_RESET_I(1);
    __PVT__busAddress = VL_RAND_RESET_I(3);
    __PVT__busWriteEn = VL_RAND_RESET_I(1);
    __PVT__busStrobe_i = VL_RAND_RESET_I(1);
    __PVT__busFifoSelect = VL_RAND_RESET_I(1);
    __PVT__busDataIn = VL_RAND_RESET_I(8);
    __PVT__busDataOut = VL_RAND_RESET_I(8);
    __PVT__fifoDataOut = VL_RAND_RESET_I(8);
    __PVT__fifoWEn = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__numElementsInFifo = VL_RAND_RESET_I(16);
    __PVT__fifoFull = VL_RAND_RESET_I(1);
}

void VusbHostSlave_TxFifo__F40_A6::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_TxFifo__F40_A6::~VusbHostSlave_TxFifo__F40_A6() {
}

//--------------------
// Internal Methods

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__busDataOut = vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busClk;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busClk;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoDataOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoFull = vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busStrobe_i;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__33(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__33\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoDataOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoFull = vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__38(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__38\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__39(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__39\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__44(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__HostTxFifo__44\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__53(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__53\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__62(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__62\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToUsbClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__63(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__63\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__68(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__68\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__81(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__81\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__86(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__86\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__91(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__91\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__96(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__HostTxFifo__96\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__HostTxFifo__u_TxfifoBI.__PVT__fifoWEn;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__101(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__HostTxFifo__101\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__HostTxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busStrobe_i;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__34(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__34\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__40(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__40\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__45(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__45\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__46(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP0TxFifo__46\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__54(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__54\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__61(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__61\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__67(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__67\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__72(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__72\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__73(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__73\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__77(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__77\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__82(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__82\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__87(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__87\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__92(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__92\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__97(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP0TxFifo__97\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP0TxFifo__u_TxfifoBI.__PVT__fifoWEn;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__102(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP0TxFifo__102\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP0TxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busStrobe_i;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__35(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__35\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__41(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__41\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__47(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__47\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__48(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP1TxFifo__48\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__55(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__55\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__60(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__60\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__66(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__66\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__71(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__71\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__74(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__74\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__78(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__78\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__83(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__83\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__88(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__88\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__93(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__93\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__98(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP1TxFifo__98\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP1TxFifo__u_TxfifoBI.__PVT__fifoWEn;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__103(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP1TxFifo__103\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP1TxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busStrobe_i;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__36(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__36\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__42(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__42\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__49(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__49\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__50(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP2TxFifo__50\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__56(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__56\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__59(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__59\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__65(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__65\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__70(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__70\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__75(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__75\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__79(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__79\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__84(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__84\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__89(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__89\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__94(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__94\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__99(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP2TxFifo__99\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP2TxFifo__u_TxfifoBI.__PVT__fifoWEn;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__104(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP2TxFifo__104\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP2TxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataOut = vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busDataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__usbClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__usbClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busClk;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataOut;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoFull;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busStrobe_i;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__37(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__37\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoEmpty = vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoDataOut = vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataOut;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoFull = vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__busDataIn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busDataIn;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busWriteEn;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__address 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busAddress;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__strobe_i 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busStrobe_i;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__43(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__43\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__numElementsInFifo;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__51(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__51\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToUsbClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__52(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_sequent__TOP__v__EP3TxFifo__52\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToBusClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__57(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__57\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToUsbClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__forceEmptySyncToBusClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__58(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__58\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rstSyncToRdClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToUsbClk;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__64(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__64\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__69(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__69\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rstSyncToWrClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToBusClk;
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__rstSyncToBusClk 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__rstSyncToBusClk;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__76(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__76\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__80(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__80\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoREn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__85(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__85\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__90(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__90\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoSelect 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__busFifoSelect;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__95(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__95\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__100(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_settle__TOP__v__EP3TxFifo__100\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoWEn = vlSymsp->TOP__v__EP3TxFifo__u_TxfifoBI.__PVT__fifoWEn;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoWEn;
}

void VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__105(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_TxFifo__F40_A6::_combo__TOP__v__EP3TxFifo__105\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoWEn 
	= vlSymsp->TOP__v__EP3TxFifo.__PVT__fifoWEn;
}
