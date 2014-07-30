// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VusbConnector__Syms.h"


//======================

void VusbConnector::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VusbConnector* t=(VusbConnector*)userthis;
    VusbConnector__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VusbConnector::traceChgThis(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0)))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 1))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void VusbConnector::traceChgThis__2(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlSymsp->TOP__v.__PVT__DPlusPullup));
	vcdp->chgBit  (c+2,(vlSymsp->TOP__v.__PVT__DPlusPullDown));
	vcdp->chgBit  (c+3,(vlSymsp->TOP__v.__PVT__DMinusPullup));
	vcdp->chgBit  (c+4,(vlSymsp->TOP__v.__PVT__DMinusPullDown));
    }
}

void VusbConnector::traceChgThis__3(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5,(vlSymsp->TOP__v.hostDataOut),2);
	vcdp->chgBus  (c+6,(vlSymsp->TOP__v.slaveDataOut),2);
	vcdp->chgBit  (c+7,(vlSymsp->TOP__v.__PVT__USBWireVP));
	vcdp->chgBit  (c+8,(vlSymsp->TOP__v.__PVT__USBWireVM));
    }
}

void VusbConnector::traceChgThis__4(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+9,(vlTOPp->hostDataIn),2);
	vcdp->chgBus  (c+10,(vlTOPp->hostDataOut),2);
	vcdp->chgBit  (c+11,(vlTOPp->hostControl));
	vcdp->chgBus  (c+12,(vlTOPp->slaveDataIn),2);
	vcdp->chgBus  (c+13,(vlTOPp->slaveDataOut),2);
	vcdp->chgBit  (c+14,(vlTOPp->slaveControl));
	vcdp->chgBit  (c+15,(vlTOPp->USBDPlusPullup));
	vcdp->chgBit  (c+16,(vlTOPp->USBDMinusPullup));
	vcdp->chgBus  (c+17,(vlSymsp->TOP__v.hostDataIn),2);
	vcdp->chgBit  (c+18,(vlSymsp->TOP__v.hostControl));
	vcdp->chgBus  (c+19,(vlSymsp->TOP__v.slaveDataIn),2);
	vcdp->chgBit  (c+20,(vlSymsp->TOP__v.slaveControl));
	vcdp->chgBit  (c+21,(vlSymsp->TOP__v.USBDPlusPullup));
	vcdp->chgBit  (c+22,(vlSymsp->TOP__v.USBDMinusPullup));
    }
}
