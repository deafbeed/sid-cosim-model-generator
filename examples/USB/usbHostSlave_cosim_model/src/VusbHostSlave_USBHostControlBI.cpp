// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_USBHostControlBI.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_USBHostControlBI) {
    // Reset internal values
    // Reset structure values
    __PVT__address = VL_RAND_RESET_I(4);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__strobe_i = VL_RAND_RESET_I(1);
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__dataOut = VL_RAND_RESET_I(8);
    __PVT__SOFSentIntOut = VL_RAND_RESET_I(1);
    __PVT__connEventIntOut = VL_RAND_RESET_I(1);
    __PVT__resumeIntOut = VL_RAND_RESET_I(1);
    __PVT__transDoneIntOut = VL_RAND_RESET_I(1);
    __PVT__TxTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__TxSOFEnableReg = VL_RAND_RESET_I(1);
    __PVT__TxAddrReg = VL_RAND_RESET_I(7);
    __PVT__TxEndPReg = VL_RAND_RESET_I(4);
    __PVT__frameNumIn = VL_RAND_RESET_I(11);
    __PVT__RxPktStatusIn = VL_RAND_RESET_I(8);
    __PVT__RxPIDIn = VL_RAND_RESET_I(4);
    __PVT__connectStateIn = VL_RAND_RESET_I(2);
    __PVT__SOFSentIn = VL_RAND_RESET_I(1);
    __PVT__connEventIn = VL_RAND_RESET_I(1);
    __PVT__resumeIntIn = VL_RAND_RESET_I(1);
    __PVT__transDoneIn = VL_RAND_RESET_I(1);
    __PVT__hostControlSelect = VL_RAND_RESET_I(1);
    __PVT__clrTransReq = VL_RAND_RESET_I(1);
    __PVT__preambleEn = VL_RAND_RESET_I(1);
    __PVT__SOFSync = VL_RAND_RESET_I(1);
    __PVT__TxLineState = VL_RAND_RESET_I(2);
    __PVT__LineDirectControlEn = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPol = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__transReq = VL_RAND_RESET_I(1);
    __PVT__isoEn = VL_RAND_RESET_I(1);
    __PVT__SOFTimer = VL_RAND_RESET_I(16);
    __PVT__TxTransTypeReg_reg1 = VL_RAND_RESET_I(2);
    __PVT__TxSOFEnableReg_reg1 = VL_RAND_RESET_I(1);
    __PVT__TxAddrReg_reg1 = VL_RAND_RESET_I(7);
    __PVT__TxEndPReg_reg1 = VL_RAND_RESET_I(4);
    __PVT__preambleEn_reg1 = VL_RAND_RESET_I(1);
    __PVT__SOFSync_reg1 = VL_RAND_RESET_I(1);
    __PVT__TxLineState_reg1 = VL_RAND_RESET_I(2);
    __PVT__LineDirectControlEn_reg1 = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPol_reg1 = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRate_reg1 = VL_RAND_RESET_I(1);
    __PVT__transReq_reg1 = VL_RAND_RESET_I(1);
    __PVT__isoEn_reg1 = VL_RAND_RESET_I(1);
    __PVT__TxControlReg = VL_RAND_RESET_I(2);
    __PVT__TxLineControlReg = VL_RAND_RESET_I(5);
    __PVT__clrSOFReq = VL_RAND_RESET_I(1);
    __PVT__clrConnEvtReq = VL_RAND_RESET_I(1);
    __PVT__clrResInReq = VL_RAND_RESET_I(1);
    __PVT__clrTransDoneReq = VL_RAND_RESET_I(1);
    __PVT__SOFSentInt = VL_RAND_RESET_I(1);
    __PVT__connEventInt = VL_RAND_RESET_I(1);
    __PVT__resumeInt = VL_RAND_RESET_I(1);
    __PVT__transDoneInt = VL_RAND_RESET_I(1);
    __PVT__interruptMaskReg = VL_RAND_RESET_I(4);
    __PVT__setTransReq = VL_RAND_RESET_I(1);
    __PVT__resumeIntInExtend = VL_RAND_RESET_I(3);
    __PVT__transDoneInExtend = VL_RAND_RESET_I(3);
    __PVT__connEventInExtend = VL_RAND_RESET_I(3);
    __PVT__SOFSentInExtend = VL_RAND_RESET_I(3);
    __PVT__clrTransReqExtend = VL_RAND_RESET_I(3);
    __PVT__TxTransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__TxSOFEnableRegSTB = VL_RAND_RESET_I(1);
    __PVT__TxAddrRegSTB = VL_RAND_RESET_I(7);
    __PVT__TxEndPRegSTB = VL_RAND_RESET_I(4);
    __PVT__preambleEnSTB = VL_RAND_RESET_I(1);
    __PVT__SOFSyncSTB = VL_RAND_RESET_I(1);
    __PVT__TxLineStateSTB = VL_RAND_RESET_I(2);
    __PVT__LineDirectControlEnSTB = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolSTB = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRateSTB = VL_RAND_RESET_I(1);
    __PVT__transReqSTB = VL_RAND_RESET_I(1);
    __PVT__isoEnSTB = VL_RAND_RESET_I(1);
    __PVT__frameNumInSTB = VL_RAND_RESET_I(11);
    __PVT__frameNumInSTB_reg1 = VL_RAND_RESET_I(11);
    __PVT__RxPktStatusInSTB = VL_RAND_RESET_I(8);
    __PVT__RxPktStatusInSTB_reg1 = VL_RAND_RESET_I(8);
    __PVT__RxPIDInSTB = VL_RAND_RESET_I(4);
    __PVT__RxPIDInSTB_reg1 = VL_RAND_RESET_I(4);
    __PVT__connectStateInSTB = VL_RAND_RESET_I(2);
    __PVT__connectStateInSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__SOFSentInSTB = VL_RAND_RESET_I(3);
    __PVT__connEventInSTB = VL_RAND_RESET_I(3);
    __PVT__resumeIntInSTB = VL_RAND_RESET_I(3);
    __PVT__transDoneInSTB = VL_RAND_RESET_I(3);
    __PVT__clrTransReqSTB = VL_RAND_RESET_I(3);
    __PVT__SOFTimerSTB = VL_RAND_RESET_I(16);
    __PVT__SOFTimerSTB_reg1 = VL_RAND_RESET_I(16);
    __Vdly__isoEnSTB = VL_RAND_RESET_I(1);
    __Vdly__preambleEnSTB = VL_RAND_RESET_I(1);
    __Vdly__SOFSyncSTB = VL_RAND_RESET_I(1);
    __Vdly__TxTransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__TxLineControlReg = VL_RAND_RESET_I(5);
    __Vdly__TxSOFEnableRegSTB = VL_RAND_RESET_I(1);
    __Vdly__TxAddrRegSTB = VL_RAND_RESET_I(7);
    __Vdly__TxEndPRegSTB = VL_RAND_RESET_I(4);
    __Vdly__interruptMaskReg = VL_RAND_RESET_I(4);
    __Vdly__clrSOFReq = VL_RAND_RESET_I(1);
    __Vdly__clrConnEvtReq = VL_RAND_RESET_I(1);
    __Vdly__clrResInReq = VL_RAND_RESET_I(1);
    __Vdly__clrTransDoneReq = VL_RAND_RESET_I(1);
    __Vdly__setTransReq = VL_RAND_RESET_I(1);
    __Vdly__SOFSentInt = VL_RAND_RESET_I(1);
    __Vdly__connEventInt = VL_RAND_RESET_I(1);
    __Vdly__resumeInt = VL_RAND_RESET_I(1);
    __Vdly__transDoneInt = VL_RAND_RESET_I(1);
    __Vdly__transReqSTB = VL_RAND_RESET_I(1);
    __Vdly__SOFSentInSTB = VL_RAND_RESET_I(3);
    __Vdly__connEventInSTB = VL_RAND_RESET_I(3);
    __Vdly__resumeIntInSTB = VL_RAND_RESET_I(3);
    __Vdly__transDoneInSTB = VL_RAND_RESET_I(3);
    __Vdly__clrTransReqSTB = VL_RAND_RESET_I(3);
    __Vdly__frameNumInSTB = VL_RAND_RESET_I(11);
    __Vdly__frameNumInSTB_reg1 = VL_RAND_RESET_I(11);
    __Vdly__RxPktStatusInSTB = VL_RAND_RESET_I(8);
    __Vdly__RxPktStatusInSTB_reg1 = VL_RAND_RESET_I(8);
    __Vdly__RxPIDInSTB = VL_RAND_RESET_I(4);
    __Vdly__RxPIDInSTB_reg1 = VL_RAND_RESET_I(4);
    __Vdly__connectStateInSTB = VL_RAND_RESET_I(2);
    __Vdly__connectStateInSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__SOFTimerSTB = VL_RAND_RESET_I(16);
    __Vdly__SOFTimerSTB_reg1 = VL_RAND_RESET_I(16);
    __Vdly__isoEn = VL_RAND_RESET_I(1);
    __Vdly__isoEn_reg1 = VL_RAND_RESET_I(1);
    __Vdly__preambleEn = VL_RAND_RESET_I(1);
    __Vdly__preambleEn_reg1 = VL_RAND_RESET_I(1);
    __Vdly__SOFSync = VL_RAND_RESET_I(1);
    __Vdly__SOFSync_reg1 = VL_RAND_RESET_I(1);
    __Vdly__TxTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__TxTransTypeReg_reg1 = VL_RAND_RESET_I(2);
    __Vdly__TxSOFEnableReg = VL_RAND_RESET_I(1);
    __Vdly__TxSOFEnableReg_reg1 = VL_RAND_RESET_I(1);
    __Vdly__TxAddrReg = VL_RAND_RESET_I(7);
    __Vdly__TxAddrReg_reg1 = VL_RAND_RESET_I(7);
    __Vdly__TxEndPReg = VL_RAND_RESET_I(4);
    __Vdly__TxEndPReg_reg1 = VL_RAND_RESET_I(4);
    __Vdly__TxLineState = VL_RAND_RESET_I(2);
    __Vdly__TxLineState_reg1 = VL_RAND_RESET_I(2);
    __Vdly__LineDirectControlEn = VL_RAND_RESET_I(1);
    __Vdly__LineDirectControlEn_reg1 = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedPol = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedPol_reg1 = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedRate = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedRate_reg1 = VL_RAND_RESET_I(1);
    __Vdly__transReq = VL_RAND_RESET_I(1);
    __Vdly__transReq_reg1 = VL_RAND_RESET_I(1);
    __Vdly__resumeIntInExtend = VL_RAND_RESET_I(3);
    __Vdly__transDoneInExtend = VL_RAND_RESET_I(3);
    __Vdly__connEventInExtend = VL_RAND_RESET_I(3);
    __Vdly__SOFSentInExtend = VL_RAND_RESET_I(3);
    __Vdly__clrTransReqExtend = VL_RAND_RESET_I(3);
}

void VusbHostSlave_USBHostControlBI::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_USBHostControlBI::~VusbHostSlave_USBHostControlBI() {
}

//--------------------
// Internal Methods

void VusbHostSlave_USBHostControlBI::_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBHostControlBI::_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineState_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEn_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPol_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRate_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReq_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSync_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEn_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEn_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineState;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSync;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRate;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPol;
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:417
    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToUsbClk) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInExtend = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInExtend = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInExtend = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInExtend = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqExtend = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReq)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqExtend), 1, 2))));
    }
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:361
    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToUsbClk) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq_reg1 = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEnSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEn_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEnSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEn_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSyncSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSync_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeRegSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeReg_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableRegSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableReg_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrRegSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrReg_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPRegSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPReg_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineStateSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineState_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEnSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEn_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPolSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPol_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRateSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRate_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReqSTB;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReq_reg1;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPol_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeReg_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRate_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSync_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineState_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEn_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReq_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEn_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEn_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineState 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineState;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSync 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSync;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEn;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedRate;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__fullSpeedPol;
}

void VusbHostSlave_USBHostControlBI::_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBHostControlBI::_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimerSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimerSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSyncSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSyncSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEnSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEnSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEnSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEnSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineControlReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__interruptMaskReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReqSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReqSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInt;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeInt;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInt;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInt;
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:451
    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB_reg1 = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumIn;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusIn;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusInSTB_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDIn;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDInSTB_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateIn;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateInSTB_reg1;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB_reg1 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimer;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB 
	    = vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimerSTB_reg1;
    }
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:317
    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReqSTB = 0;
    } else {
	if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__setTransReq) {
	    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReqSTB = 1;
	} else {
	    if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqSTB), 1) 
		      & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqSTB), 0))))) {
		vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReqSTB = 0;
	    }
	}
    }
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:271
    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInt = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInt = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeInt = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInt = 0;
    } else {
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrSOFReq) {
		vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrConnEvtReq) {
		vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrResInReq) {
		vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransDoneReq) {
		vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInt = 0;
	    }
	}
    }
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimerSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB_reg1 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB_reg1;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__frameNumInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPktStatusInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__RxPIDInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connectStateInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimerSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFTimerSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReqSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transReqSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__setTransReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__setTransReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInt;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeInt;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInt;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInt 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInt;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrSOFReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrSOFReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrConnEvtReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrConnEvtReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrResInReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrResInReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransDoneReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransDoneReq;
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:225
    if (vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEnSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEnSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSyncSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineControlReg = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableRegSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrRegSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPRegSTB = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__interruptMaskReg = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrSOFReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrConnEvtReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrResInReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransDoneReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__setTransReq = 0;
	if ((((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__strobe_i)) 
	     & (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__hostControlSelect))) {
	    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address)) 
		       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		     | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		    | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		   | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		  | (8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		 | (9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address)))) {
		if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEnSTB 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 3));
		    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEnSTB 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 2));
		    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSyncSTB 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 1));
		    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__setTransReq 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0));
		} else {
		    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) {
			vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeRegSTB 
			    = (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0, 2));
		    } else {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineControlReg 
				= (0x1f & VL_SEL_IIII(5,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0, 5));
			} else {
			    if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) {
				vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableRegSTB 
				    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0));
			    } else {
				if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrRegSTB 
					= (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0, 7));
				} else {
				    if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) {
					vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPRegSTB 
					    = (0xf 
					       & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0, 4));
				    } else {
					if ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) {
					    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrSOFReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 3));
					    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrConnEvtReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 2));
					    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrResInReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 1));
					    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransDoneReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0));
					} else {
					    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__interruptMaskReg 
						= (0xf 
						   & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataIn), 0, 4));
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__setTransReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__setTransReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransDoneReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransDoneReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrResInReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrResInReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrConnEvtReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrConnEvtReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrSOFReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrSOFReq;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxEndPRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxAddrRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxSOFEnableRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSyncSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSyncSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEnSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__preambleEnSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEnSTB 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__isoEnSTB;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__TxLineControlReg;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__interruptMaskReg;
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:331
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineStateSTB 
	= (3 & VL_SEL_IIII(2,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 0, 2));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEnSTB 
	= (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 2));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPolSTB 
	= (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 3));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRateSTB 
	= (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 4));
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:303
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 0));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 1));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 2));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 3));
}

void VusbHostSlave_USBHostControlBI::_settle__TOP__v__u_usbHostControl__u_USBHostControlBI__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBHostControlBI::_settle__TOP__v__u_usbHostControl__u_USBHostControlBI__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:331
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineStateSTB 
	= (3 & VL_SEL_IIII(2,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 0, 2));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__LineDirectControlEnSTB 
	= (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 2));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedPolSTB 
	= (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 3));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__fullSpeedRateSTB 
	= (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg), 4));
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:303
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 0));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 1));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 2));
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInt) 
	   & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg), 3));
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:339
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataOut 
	= (0xff & (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address)) 
			  | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
			 | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
			| (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		       | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		      | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		     | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		    | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address)))
		    ? ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
		        ? VL_CONCAT_III(8,5,3, VL_EXTEND_II(5,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEnSTB)), 
					VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEnSTB), 
						      VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSyncSTB), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReqSTB))))
		        : ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeRegSTB))
			    : ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			        ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg))
			        : ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableRegSTB))
				    : ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,7, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrRegSTB))
				        : ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
					    ? VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPRegSTB))
					    : ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
					        ? VL_EXTEND_II(8,3, 
							       (7 
								& VL_SEL_IIII(3,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB), 8, 3)))
					        : VL_SEL_IIII(8,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB), 0, 8))))))))
		    : ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
		        ? VL_CONCAT_III(8,5,3, VL_EXTEND_II(5,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInt)), 
					VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInt), 
						      VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeInt), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInt))))
		        : ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg))
			    : ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			        ? (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusInSTB)
			        : ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDInSTB))
				    : ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateInSTB))
				        : ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
					    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimerSTB), 8, 8)
					    : 0))))))));
}

void VusbHostSlave_USBHostControlBI::_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBHostControlBI::_sequent__TOP__v__u_usbHostControl__u_USBHostControlBI__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeIntInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__resumeIntInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__connEventInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__SOFSentInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__transDoneInExtend;
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__clrTransReqExtend 
	= vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__Vdly__clrTransReqExtend;
}

void VusbHostSlave_USBHostControlBI::_combo__TOP__v__u_usbHostControl__u_USBHostControlBI__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBHostControlBI::_combo__TOP__v__u_usbHostControl__u_USBHostControlBI__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//USBHostControlBI.v:339
    vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__dataOut 
	= (0xff & (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address)) 
			  | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
			 | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
			| (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		       | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		      | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		     | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))) 
		    | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address)))
		    ? ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
		        ? VL_CONCAT_III(8,5,3, VL_EXTEND_II(5,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__isoEnSTB)), 
					VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__preambleEnSTB), 
						      VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSyncSTB), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transReqSTB))))
		        : ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxTransTypeRegSTB))
			    : ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			        ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxLineControlReg))
			        : ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxSOFEnableRegSTB))
				    : ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,7, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxAddrRegSTB))
				        : ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
					    ? VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__TxEndPRegSTB))
					    : ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
					        ? VL_EXTEND_II(8,3, 
							       (7 
								& VL_SEL_IIII(3,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB), 8, 3)))
					        : VL_SEL_IIII(8,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__frameNumInSTB), 0, 8))))))))
		    : ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
		        ? VL_CONCAT_III(8,5,3, VL_EXTEND_II(5,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFSentInt)), 
					VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connEventInt), 
						      VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__resumeInt), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__transDoneInt))))
		        : ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__interruptMaskReg))
			    : ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
			        ? (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPktStatusInSTB)
			        : ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__RxPIDInSTB))
				    : ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__connectStateInSTB))
				        : ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__address))
					    ? VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_USBHostControlBI.__PVT__SOFTimerSTB), 8, 8)
					    : 0))))))));
}
