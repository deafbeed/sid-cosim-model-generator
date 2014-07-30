// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VusbConnector__Syms.h"


//======================

void VusbConnector::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VusbConnector::traceInit, &VusbConnector::traceFull, &VusbConnector::traceChg, this);
}
void VusbConnector::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VusbConnector* t=(VusbConnector*)userthis;
    VusbConnector__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VusbConnector::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VusbConnector* t=(VusbConnector*)userthis;
    VusbConnector__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VusbConnector::traceInitThis(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VusbConnector::traceFullThis(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void VusbConnector::traceInitThis__1(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+9,"hostDataIn",-1,1,0);
	vcdp->declBus  (c+10,"hostDataOut",-1,1,0);
	vcdp->declBit  (c+11,"hostControl",-1);
	vcdp->declBus  (c+12,"slaveDataIn",-1,1,0);
	vcdp->declBus  (c+13,"slaveDataOut",-1,1,0);
	vcdp->declBit  (c+14,"slaveControl",-1);
	vcdp->declBit  (c+15,"USBDPlusPullup",-1);
	vcdp->declBit  (c+16,"USBDMinusPullup",-1);
	vcdp->declBus  (c+17,"v hostDataIn",-1,1,0);
	vcdp->declBus  (c+5,"v hostDataOut",-1,1,0);
	vcdp->declBit  (c+18,"v hostControl",-1);
	vcdp->declBus  (c+19,"v slaveDataIn",-1,1,0);
	vcdp->declBus  (c+6,"v slaveDataOut",-1,1,0);
	vcdp->declBit  (c+20,"v slaveControl",-1);
	vcdp->declBit  (c+21,"v USBDPlusPullup",-1);
	vcdp->declBit  (c+22,"v USBDMinusPullup",-1);
	vcdp->declBit  (c+1,"v DPlusPullup",-1);
	vcdp->declBit  (c+2,"v DPlusPullDown",-1);
	vcdp->declBit  (c+3,"v DMinusPullup",-1);
	vcdp->declBit  (c+4,"v DMinusPullDown",-1);
	vcdp->declBit  (c+7,"v USBWireVP",-1);
	vcdp->declBit  (c+8,"v USBWireVM",-1);
    }
}

void VusbConnector::traceFullThis__1(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlSymsp->TOP__v.__PVT__DPlusPullup));
	vcdp->fullBit  (c+2,(vlSymsp->TOP__v.__PVT__DPlusPullDown));
	vcdp->fullBit  (c+3,(vlSymsp->TOP__v.__PVT__DMinusPullup));
	vcdp->fullBit  (c+4,(vlSymsp->TOP__v.__PVT__DMinusPullDown));
	vcdp->fullBus  (c+5,(vlSymsp->TOP__v.hostDataOut),2);
	vcdp->fullBus  (c+6,(vlSymsp->TOP__v.slaveDataOut),2);
	vcdp->fullBit  (c+7,(vlSymsp->TOP__v.__PVT__USBWireVP));
	vcdp->fullBit  (c+8,(vlSymsp->TOP__v.__PVT__USBWireVM));
	vcdp->fullBus  (c+9,(vlTOPp->hostDataIn),2);
	vcdp->fullBus  (c+10,(vlTOPp->hostDataOut),2);
	vcdp->fullBit  (c+11,(vlTOPp->hostControl));
	vcdp->fullBus  (c+12,(vlTOPp->slaveDataIn),2);
	vcdp->fullBus  (c+13,(vlTOPp->slaveDataOut),2);
	vcdp->fullBit  (c+14,(vlTOPp->slaveControl));
	vcdp->fullBit  (c+15,(vlTOPp->USBDPlusPullup));
	vcdp->fullBit  (c+16,(vlTOPp->USBDMinusPullup));
	vcdp->fullBus  (c+17,(vlSymsp->TOP__v.hostDataIn),2);
	vcdp->fullBit  (c+18,(vlSymsp->TOP__v.hostControl));
	vcdp->fullBus  (c+19,(vlSymsp->TOP__v.slaveDataIn),2);
	vcdp->fullBit  (c+20,(vlSymsp->TOP__v.slaveControl));
	vcdp->fullBit  (c+21,(vlSymsp->TOP__v.USBDPlusPullup));
	vcdp->fullBit  (c+22,(vlSymsp->TOP__v.USBDMinusPullup));
    }
}
