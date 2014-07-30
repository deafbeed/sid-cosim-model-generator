// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_lineControlUpdate.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_lineControlUpdate) {
    // Reset internal values
    // Reset structure values
    __PVT__fullSpeedPolarity = VL_RAND_RESET_I(1);
    __PVT__fullSpeedBitRate = VL_RAND_RESET_I(1);
    __PVT__JBit = VL_RAND_RESET_I(2);
    __PVT__KBit = VL_RAND_RESET_I(2);
}

void VusbHostSlave_lineControlUpdate::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_lineControlUpdate::~VusbHostSlave_lineControlUpdate() {
}

//--------------------
// Internal Methods

void VusbHostSlave_lineControlUpdate::_settle__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_lineControlUpdate::_settle__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//lineControlUpdate.v:72
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__fullSpeedPolarity) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__JBit = 2;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__KBit = 1;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__JBit = 1;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__KBit = 2;
    }
}

void VusbHostSlave_lineControlUpdate::_combo__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_lineControlUpdate::_combo__TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//lineControlUpdate.v:72
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__fullSpeedPolarity) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__JBit = 2;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__KBit = 1;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__JBit = 1;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__PVT__KBit = 2;
    }
}
