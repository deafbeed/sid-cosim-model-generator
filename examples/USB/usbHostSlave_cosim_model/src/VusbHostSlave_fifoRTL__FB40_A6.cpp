// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_fifoRTL__FB40_A6.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_fifoRTL__FB40_A6) {
    VL_CELL (__PVT__u_dpMem_dc, VusbHostSlave_dpMem_dc__F8_FB40_A6);
    // Reset internal values
    // Reset structure values
    __PVT__wrClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToWrClk = VL_RAND_RESET_I(1);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__fifoWEn = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToWrClk = VL_RAND_RESET_I(1);
    __PVT__fifoFull = VL_RAND_RESET_I(1);
    __PVT__rdClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToRdClk = VL_RAND_RESET_I(1);
    __PVT__dataOut = VL_RAND_RESET_I(8);
    __PVT__fifoREn = VL_RAND_RESET_I(1);
    __PVT__forceEmptySyncToRdClk = VL_RAND_RESET_I(1);
    __PVT__fifoEmpty = VL_RAND_RESET_I(1);
    __PVT__numElementsInFifo = VL_RAND_RESET_I(16);
    __PVT__forceEmpty = VL_RAND_RESET_I(1);
    __PVT__bufferInIndex = VL_RAND_RESET_I(7);
    __PVT__bufferInIndexSyncToRdClk = VL_RAND_RESET_I(7);
    __PVT__bufferOutIndex = VL_RAND_RESET_I(7);
    __PVT__bufferOutIndexSyncToWrClk = VL_RAND_RESET_I(7);
    __PVT__bufferInIndexToMem = VL_RAND_RESET_I(6);
    __PVT__bufferOutIndexToMem = VL_RAND_RESET_I(6);
    __PVT__bufferCnt = VL_RAND_RESET_I(7);
    __PVT__fifoREnDelayed = VL_RAND_RESET_I(1);
    __PVT__dataFromMem = VL_RAND_RESET_I(8);
    __Vdly__bufferOutIndexSyncToWrClk = VL_RAND_RESET_I(7);
    __Vdly__fifoFull = VL_RAND_RESET_I(1);
    __Vdly__bufferInIndex = VL_RAND_RESET_I(7);
    __Vdly__numElementsInFifo = VL_RAND_RESET_I(16);
    __Vdly__bufferInIndexSyncToRdClk = VL_RAND_RESET_I(7);
    __Vdly__fifoEmpty = VL_RAND_RESET_I(1);
    __Vdly__bufferOutIndex = VL_RAND_RESET_I(7);
    __Vdly__fifoREnDelayed = VL_RAND_RESET_I(1);
    __Vdly__dataOut = VL_RAND_RESET_I(8);
}

void VusbHostSlave_fifoRTL__FB40_A6::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_fifoRTL__FB40_A6::~VusbHostSlave_fifoRTL__FB40_A6() {
}

//--------------------
// Internal Methods

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__11(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__11\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__21(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__21\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__numElementsInFifo;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__22(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__22\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__fifoFull;
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__41(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__41\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__56(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__56\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__61(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostTxFifo__u_fifo__61\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__Vdly__bufferOutIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__71(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__71\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__76(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__76\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex)));
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__HostTxFifo__u_fifo__86(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__HostTxFifo__u_fifo__86\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__97(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__97\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__102(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__102\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__bufferOutIndexToMem;
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__129(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostTxFifo__u_fifo__129\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__139(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostTxFifo__u_fifo__139\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__HostTxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostRxFifo__u_fifo__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostRxFifo__u_fifo__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__16(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__16\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__31(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__31\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoFull;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoFull;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__32(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__32\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferOutIndex;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__dataOut;
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__numElementsInFifo;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__46(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__46\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__51(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__51\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex)));
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__66(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__HostRxFifo__u_fifo__66\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__81(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__81\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__HostRxFifo__u_fifo__91(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__HostRxFifo__u_fifo__91\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostRxFifo__u_fifo__96(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostRxFifo__u_fifo__96\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoWEn;
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__107(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__107\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__bufferOutIndexToMem;
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoWEn;
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostRxFifo__u_fifo__128(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__HostRxFifo__u_fifo__128\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__138(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__HostRxFifo__u_fifo__138\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__HostRxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__12(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__12\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__23(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__23\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__numElementsInFifo;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__24(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__24\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__fifoFull;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__42(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__42\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__57(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__57\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__62(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0TxFifo__u_fifo__62\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__Vdly__bufferOutIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__72(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__72\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__77(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__77\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex)));
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP0TxFifo__u_fifo__87(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP0TxFifo__u_fifo__87\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__103(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__103\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__112(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__112\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__120(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__120\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__131(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0TxFifo__u_fifo__131\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__141(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0TxFifo__u_fifo__141\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__13(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__13\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__25(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__25\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__numElementsInFifo;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__26(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__26\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__fifoFull;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__43(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__43\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__58(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__58\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__63(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1TxFifo__u_fifo__63\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__Vdly__bufferOutIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__73(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__73\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__78(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__78\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex)));
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP1TxFifo__u_fifo__88(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP1TxFifo__u_fifo__88\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__104(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__104\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__113(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__113\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__121(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__121\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__133(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1TxFifo__u_fifo__133\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__143(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1TxFifo__u_fifo__143\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__14(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__14\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__27(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__27\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__numElementsInFifo;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__28(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__28\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__fifoFull;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__44(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__44\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__59(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__59\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__64(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2TxFifo__u_fifo__64\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__Vdly__bufferOutIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__74(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__74\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__79(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__79\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex)));
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP2TxFifo__u_fifo__89(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP2TxFifo__u_fifo__89\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__105(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__105\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__114(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__114\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__122(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__122\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__135(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2TxFifo__u_fifo__135\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__145(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2TxFifo__u_fifo__145\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__15(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__15\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rdClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__wrClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__29(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__29\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__numElementsInFifo;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__30(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__30\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoFull;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__fifoFull;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__45(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__45\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__60(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__60\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__65(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3TxFifo__u_fifo__65\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__Vdly__bufferOutIndex;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__75(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__75\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__80(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__80\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex)));
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP3TxFifo__u_fifo__90(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP3TxFifo__u_fifo__90\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__106(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__106\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__115(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__115\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__123(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__123\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__137(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3TxFifo__u_fifo__137\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__147(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3TxFifo__u_fifo__147\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3TxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__8(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__8\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__18(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__18\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__35(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__35\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoFull;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoFull;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__36(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__36\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferOutIndex;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__dataOut;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__numElementsInFifo;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__48(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__48\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__53(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__53\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex)));
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__68(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP0RxFifo__u_fifo__68\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__83(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__83\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP0RxFifo__u_fifo__93(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP0RxFifo__u_fifo__93\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__98(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__98\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__109(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__109\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__116(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__116\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__124(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__124\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__130(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP0RxFifo__u_fifo__130\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__140(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP0RxFifo__u_fifo__140\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP0RxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__7(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__7\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__17(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__17\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__33(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__33\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoFull;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoFull;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__34(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__34\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferOutIndex;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__dataOut;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__numElementsInFifo;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__47(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__47\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__52(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__52\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex)));
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__67(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP1RxFifo__u_fifo__67\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__82(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__82\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP1RxFifo__u_fifo__92(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP1RxFifo__u_fifo__92\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__99(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__99\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__108(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__108\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__117(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__117\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__125(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__125\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__132(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP1RxFifo__u_fifo__132\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__142(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP1RxFifo__u_fifo__142\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP1RxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__9(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__9\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__19(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__19\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__37(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__37\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoFull;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoFull;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__38(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__38\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferOutIndex;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__dataOut;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__numElementsInFifo;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__49(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__49\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__54(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__54\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex)));
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__69(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP2RxFifo__u_fifo__69\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__84(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__84\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP2RxFifo__u_fifo__94(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP2RxFifo__u_fifo__94\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__100(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__100\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__110(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__110\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__118(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__118\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__126(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__126\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__134(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP2RxFifo__u_fifo__134\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__144(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP2RxFifo__u_fifo__144\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP2RxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__10(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__10\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__20(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__20\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__wrClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__wrClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__rdClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rdClk;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__39(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__39\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoFull 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoFull;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:113
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex;
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rstSyncToWrClk) 
	 | (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__forceEmptySyncToWrClk))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoFull = 0;
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferInIndex = 0;
    } else {
	if (vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoWEn) {
	    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferInIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex)));
	}
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoFull 
	    = (((0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 0, 6)) 
		== (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6))) 
	       & ((1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk), 6)) 
		  != (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex), 6))));
    }
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexSyncToWrClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferOutIndexSyncToWrClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoFull 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoFull;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__40(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__40\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREnDelayed;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoEmpty 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoEmpty;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__numElementsInFifo;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__dataOut 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataOut;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:137
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__numElementsInFifo 
	= (0xffff & VL_SEL_IIII(16,18,32,32, VL_EXTEND_II(18,7, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferCnt)), 0, 0x10));
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex;
    if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__rstSyncToRdClk) 
	 | (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__forceEmptySyncToRdClk))) {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoEmpty = 1;
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoREnDelayed = 0;
    } else {
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoREnDelayed 
	    = vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREn;
	if (((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREn) 
	     & (~ (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREnDelayed)))) {
	    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__dataOut 
		= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataFromMem;
	    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferOutIndex 
		= (0x7f & ((IData)(1) + (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex)));
	}
	vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoEmpty 
	    = ((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
	       == (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex));
    }
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREnDelayed 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoREnDelayed;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoEmpty 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__fifoEmpty;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferInIndexSyncToRdClk;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferOutIndex;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataOut 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__dataOut;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__numElementsInFifo 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__numElementsInFifo;
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex)));
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__50(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__50\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__55(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__55\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:134
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferCnt 
	= (0x7f & ((IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexSyncToRdClk) 
		   - (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex)));
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataFromMem 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__dataOut;
}

void VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__70(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_sequent__TOP__v__EP3RxFifo__u_fifo__70\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__Vdly__bufferInIndex;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__85(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__85\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
}

void VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP3RxFifo__u_fifo__95(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_multiclk__TOP__v__EP3RxFifo__u_fifo__95\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/buffers//fifoRTL.v:162
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndex), 0, 6));
    vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexToMem 
	= (0x3f & VL_SEL_IIII(6,7,3,32, (IData)(vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndex), 0, 6));
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__101(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__101\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__111(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__111\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__addrIn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferInIndexToMem;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__addrOut 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__bufferOutIndexToMem;
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__dataIn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__dataIn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__119(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__119\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__127(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__127\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__writeEn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoWEn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__136(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_combo__TOP__v__EP3RxFifo__u_fifo__136\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREn;
}

void VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__146(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_fifoRTL__FB40_A6::_settle__TOP__v__EP3RxFifo__u_fifo__146\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__PVT__readEn 
	= vlSymsp->TOP__v__EP3RxFifo__u_fifo.__PVT__fifoREn;
}
