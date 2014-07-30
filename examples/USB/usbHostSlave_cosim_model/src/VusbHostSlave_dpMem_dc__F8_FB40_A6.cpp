// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_dpMem_dc__F8_FB40_A6.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_dpMem_dc__F8_FB40_A6) {
    // Reset internal values
    // Reset structure values
    __PVT__wrClk = VL_RAND_RESET_I(1);
    __PVT__rdClk = VL_RAND_RESET_I(1);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__dataOut = VL_RAND_RESET_I(8);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__readEn = VL_RAND_RESET_I(1);
    __PVT__addrIn = VL_RAND_RESET_I(6);
    __PVT__addrOut = VL_RAND_RESET_I(6);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    __PVT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __Vdly__dataOut = VL_RAND_RESET_I(8);
    __Vdlyvdim0__buffer__v0 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v1 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v2 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v2 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v3 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v3 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v4 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v4 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v4 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v5 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v5 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v5 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v6 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v6 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v6 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v7 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v7 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v7 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v8 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v8 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v8 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__buffer__v9 = VL_RAND_RESET_I(6);
    __Vdlyvval__buffer__v9 = VL_RAND_RESET_I(8);
    __Vdlyvset__buffer__v9 = VL_RAND_RESET_I(1);
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_dpMem_dc__F8_FB40_A6::~VusbHostSlave_dpMem_dc__F8_FB40_A6() {
}

//--------------------
// Internal Methods

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v0 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v0 
	    = vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v0 = 1;
	vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v0 
	    = vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v0) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v0)] 
	    = vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v0;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v1 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v1 
	    = vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v1 = 1;
	vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v1 
	    = vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v1) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v1)] 
	    = vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v1;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v2 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v2 
	    = vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v2 = 1;
	vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v2 
	    = vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v2) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v2)] 
	    = vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v2;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v3 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v3 
	    = vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v3 = 1;
	vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v3 
	    = vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v3) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v3)] 
	    = vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v3;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v4 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v4 
	    = vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v4 = 1;
	vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v4 
	    = vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v4) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v4)] 
	    = vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v4;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v5 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v5 
	    = vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v5 = 1;
	vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v5 
	    = vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v5) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v5)] 
	    = vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v5;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v6 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v6 
	    = vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v6 = 1;
	vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v6 
	    = vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v6) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v6)] 
	    = vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v6;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v7 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v7 
	    = vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v7 = 1;
	vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v7 
	    = vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v7) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v7)] 
	    = vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v7;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v8 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v8 
	    = vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v8 = 1;
	vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v8 
	    = vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v8) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v8)] 
	    = vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v8;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v9 = 0;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:90
    if (vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v9 
	    = vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn;
	vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v9 = 1;
	vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v9 
	    = vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn;
    }
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//dpMem_dc.v:85
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut 
	= (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer)
	[(IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut)];
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdly__dataOut;
}

void VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            VusbHostSlave_dpMem_dc__F8_FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at trunk/RTL/buffers//dpMem_dc.v:92
    if (vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdlyvset__buffer__v9) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__buffer[(IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdlyvdim0__buffer__v9)] 
	    = vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vdlyvval__buffer__v9;
    }
}
