// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbConnector.h for the primary calling header

#include "VusbConnector.h"     // For This
#include "VusbConnector__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbConnector) {
    VusbConnector__Syms* __restrict vlSymsp = __VlSymsp = new VusbConnector__Syms(this, name());
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__v, VusbConnector_usbConnector);
    // Reset internal values
    
    // Reset structure values
    hostDataIn = VL_RAND_RESET_I(2);
    hostDataOut = VL_RAND_RESET_I(2);
    hostControl = VL_RAND_RESET_I(1);
    slaveDataIn = VL_RAND_RESET_I(2);
    slaveDataOut = VL_RAND_RESET_I(2);
    slaveControl = VL_RAND_RESET_I(1);
    USBDPlusPullup = VL_RAND_RESET_I(1);
    USBDMinusPullup = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VusbConnector::__Vconfigure(VusbConnector__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbConnector::~VusbConnector() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VusbConnector::eval() {
    VusbConnector__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VusbConnector::eval\n"); );
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

void VusbConnector::_eval_initial_loop(VusbConnector__Syms* __restrict vlSymsp) {
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

void VusbConnector::_settle__TOP__1(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_settle__TOP__1\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.hostDataIn = vlTOPp->hostDataIn;
    vlSymsp->TOP__v.hostControl = vlTOPp->hostControl;
    vlSymsp->TOP__v.slaveDataIn = vlTOPp->slaveDataIn;
    vlSymsp->TOP__v.slaveControl = vlTOPp->slaveControl;
    vlSymsp->TOP__v.USBDPlusPullup = vlTOPp->USBDPlusPullup;
    vlSymsp->TOP__v.USBDMinusPullup = vlTOPp->USBDMinusPullup;
}

void VusbConnector::_combo__TOP__2(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_combo__TOP__2\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.hostDataIn = vlTOPp->hostDataIn;
    vlSymsp->TOP__v.hostControl = vlTOPp->hostControl;
    vlSymsp->TOP__v.slaveDataIn = vlTOPp->slaveDataIn;
    vlSymsp->TOP__v.slaveControl = vlTOPp->slaveControl;
    vlSymsp->TOP__v.USBDPlusPullup = vlTOPp->USBDPlusPullup;
    vlSymsp->TOP__v.USBDMinusPullup = vlTOPp->USBDMinusPullup;
}

void VusbConnector::_combo__TOP__3(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_combo__TOP__3\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hostDataOut = vlSymsp->TOP__v.hostDataOut;
    vlTOPp->slaveDataOut = vlSymsp->TOP__v.slaveDataOut;
}

void VusbConnector::_settle__TOP__4(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_settle__TOP__4\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->hostDataOut = vlSymsp->TOP__v.hostDataOut;
    vlTOPp->slaveDataOut = vlSymsp->TOP__v.slaveDataOut;
}

void VusbConnector::_eval(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_eval\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    VL_ASSIGNBIT_IO(1,1, vlTOPp->__Vm_traceActivity, 1);
    vlSymsp->TOP__v._combo__TOP__v__2(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__4(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void VusbConnector::_eval_initial(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_eval_initial\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._initial__TOP__v(vlSymsp);
}

void VusbConnector::final() {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::final\n"); );
    // Variables
    VusbConnector__Syms* __restrict vlSymsp = this->__VlSymsp;
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VusbConnector::_eval_settle(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_eval_settle\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._settle__TOP__v__1(vlSymsp);
    VL_ASSIGNBIT_IO(1,0, vlTOPp->__Vm_traceActivity, 1);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__3(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

IData VusbConnector::_change_request(VusbConnector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VusbConnector::_change_request\n"); );
    VusbConnector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    return __req;
}
