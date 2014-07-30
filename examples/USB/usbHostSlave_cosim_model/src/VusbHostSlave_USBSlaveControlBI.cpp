// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_USBSlaveControlBI.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_USBSlaveControlBI) {
    // Reset internal values
    // Reset structure values
    __PVT__address = VL_RAND_RESET_I(5);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__strobe_i = VL_RAND_RESET_I(1);
    __PVT__busClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToBusClk = VL_RAND_RESET_I(1);
    __PVT__usbClk = VL_RAND_RESET_I(1);
    __PVT__rstSyncToUsbClk = VL_RAND_RESET_I(1);
    __PVT__dataOut = VL_RAND_RESET_I(8);
    __PVT__SOFRxedIntOut = VL_RAND_RESET_I(1);
    __PVT__resetEventIntOut = VL_RAND_RESET_I(1);
    __PVT__resumeIntOut = VL_RAND_RESET_I(1);
    __PVT__transDoneIntOut = VL_RAND_RESET_I(1);
    __PVT__NAKSentIntOut = VL_RAND_RESET_I(1);
    __PVT__vBusDetIntOut = VL_RAND_RESET_I(1);
    __PVT__endP0TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP0NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP1TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP1NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP2TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP2NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP3TransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP3NAKTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__endP0ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP1ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP2ControlReg = VL_RAND_RESET_I(5);
    __PVT__endP3ControlReg = VL_RAND_RESET_I(5);
    __PVT__EP0StatusReg = VL_RAND_RESET_I(8);
    __PVT__EP1StatusReg = VL_RAND_RESET_I(8);
    __PVT__EP2StatusReg = VL_RAND_RESET_I(8);
    __PVT__EP3StatusReg = VL_RAND_RESET_I(8);
    __PVT__SCAddrReg = VL_RAND_RESET_I(7);
    __PVT__frameNum = VL_RAND_RESET_I(11);
    __PVT__connectStateIn = VL_RAND_RESET_I(2);
    __PVT__vBusDetectIn = VL_RAND_RESET_I(1);
    __PVT__SOFRxedIn = VL_RAND_RESET_I(1);
    __PVT__resetEventIn = VL_RAND_RESET_I(1);
    __PVT__resumeIntIn = VL_RAND_RESET_I(1);
    __PVT__transDoneIn = VL_RAND_RESET_I(1);
    __PVT__NAKSentIn = VL_RAND_RESET_I(1);
    __PVT__slaveControlSelect = VL_RAND_RESET_I(1);
    __PVT__clrEP0Ready = VL_RAND_RESET_I(1);
    __PVT__clrEP1Ready = VL_RAND_RESET_I(1);
    __PVT__clrEP2Ready = VL_RAND_RESET_I(1);
    __PVT__clrEP3Ready = VL_RAND_RESET_I(1);
    __PVT__TxLineState = VL_RAND_RESET_I(2);
    __PVT__LineDirectControlEn = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPol = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__connectSlaveToHost = VL_RAND_RESET_I(1);
    __PVT__SCGlobalEn = VL_RAND_RESET_I(1);
    __PVT__endP0ControlReg1 = VL_RAND_RESET_I(5);
    __PVT__endP1ControlReg1 = VL_RAND_RESET_I(5);
    __PVT__endP2ControlReg1 = VL_RAND_RESET_I(5);
    __PVT__endP3ControlReg1 = VL_RAND_RESET_I(5);
    __PVT__TxEndPReg = VL_RAND_RESET_I(4);
    __PVT__TxLineState_reg1 = VL_RAND_RESET_I(2);
    __PVT__LineDirectControlEn_reg1 = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPol_reg1 = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRate_reg1 = VL_RAND_RESET_I(1);
    __PVT__connectSlaveToHost_reg1 = VL_RAND_RESET_I(1);
    __PVT__SCGlobalEn_reg1 = VL_RAND_RESET_I(1);
    __PVT__SCControlReg = VL_RAND_RESET_I(7);
    __PVT__clrVBusDetReq = VL_RAND_RESET_I(1);
    __PVT__clrNAKReq = VL_RAND_RESET_I(1);
    __PVT__clrSOFReq = VL_RAND_RESET_I(1);
    __PVT__clrResetReq = VL_RAND_RESET_I(1);
    __PVT__clrResInReq = VL_RAND_RESET_I(1);
    __PVT__clrTransDoneReq = VL_RAND_RESET_I(1);
    __PVT__SOFRxedInt = VL_RAND_RESET_I(1);
    __PVT__resetEventInt = VL_RAND_RESET_I(1);
    __PVT__resumeInt = VL_RAND_RESET_I(1);
    __PVT__transDoneInt = VL_RAND_RESET_I(1);
    __PVT__vBusDetInt = VL_RAND_RESET_I(1);
    __PVT__NAKSentInt = VL_RAND_RESET_I(1);
    __PVT__interruptMaskReg = VL_RAND_RESET_I(6);
    __PVT__EP0SetReady = VL_RAND_RESET_I(1);
    __PVT__EP1SetReady = VL_RAND_RESET_I(1);
    __PVT__EP2SetReady = VL_RAND_RESET_I(1);
    __PVT__EP3SetReady = VL_RAND_RESET_I(1);
    __PVT__EP0SendStall = VL_RAND_RESET_I(1);
    __PVT__EP1SendStall = VL_RAND_RESET_I(1);
    __PVT__EP2SendStall = VL_RAND_RESET_I(1);
    __PVT__EP3SendStall = VL_RAND_RESET_I(1);
    __PVT__EP0IsoEn = VL_RAND_RESET_I(1);
    __PVT__EP1IsoEn = VL_RAND_RESET_I(1);
    __PVT__EP2IsoEn = VL_RAND_RESET_I(1);
    __PVT__EP3IsoEn = VL_RAND_RESET_I(1);
    __PVT__EP0DataSequence = VL_RAND_RESET_I(1);
    __PVT__EP1DataSequence = VL_RAND_RESET_I(1);
    __PVT__EP2DataSequence = VL_RAND_RESET_I(1);
    __PVT__EP3DataSequence = VL_RAND_RESET_I(1);
    __PVT__EP0Enable = VL_RAND_RESET_I(1);
    __PVT__EP1Enable = VL_RAND_RESET_I(1);
    __PVT__EP2Enable = VL_RAND_RESET_I(1);
    __PVT__EP3Enable = VL_RAND_RESET_I(1);
    __PVT__EP0Ready = VL_RAND_RESET_I(1);
    __PVT__EP1Ready = VL_RAND_RESET_I(1);
    __PVT__EP2Ready = VL_RAND_RESET_I(1);
    __PVT__EP3Ready = VL_RAND_RESET_I(1);
    __PVT__SOFRxedInExtend = VL_RAND_RESET_I(3);
    __PVT__resetEventInExtend = VL_RAND_RESET_I(3);
    __PVT__resumeIntInExtend = VL_RAND_RESET_I(3);
    __PVT__transDoneInExtend = VL_RAND_RESET_I(3);
    __PVT__NAKSentInExtend = VL_RAND_RESET_I(3);
    __PVT__clrEP0ReadyExtend = VL_RAND_RESET_I(3);
    __PVT__clrEP1ReadyExtend = VL_RAND_RESET_I(3);
    __PVT__clrEP2ReadyExtend = VL_RAND_RESET_I(3);
    __PVT__clrEP3ReadyExtend = VL_RAND_RESET_I(3);
    __PVT__endP0ControlRegSTB = VL_RAND_RESET_I(5);
    __PVT__endP1ControlRegSTB = VL_RAND_RESET_I(5);
    __PVT__endP2ControlRegSTB = VL_RAND_RESET_I(5);
    __PVT__endP3ControlRegSTB = VL_RAND_RESET_I(5);
    __PVT__NAKSentInSTB = VL_RAND_RESET_I(3);
    __PVT__SOFRxedInSTB = VL_RAND_RESET_I(3);
    __PVT__resetEventInSTB = VL_RAND_RESET_I(3);
    __PVT__resumeIntInSTB = VL_RAND_RESET_I(3);
    __PVT__transDoneInSTB = VL_RAND_RESET_I(3);
    __PVT__clrEP0ReadySTB = VL_RAND_RESET_I(3);
    __PVT__clrEP1ReadySTB = VL_RAND_RESET_I(3);
    __PVT__clrEP2ReadySTB = VL_RAND_RESET_I(3);
    __PVT__clrEP3ReadySTB = VL_RAND_RESET_I(3);
    __PVT__SCGlobalEnSTB = VL_RAND_RESET_I(1);
    __PVT__TxLineStateSTB = VL_RAND_RESET_I(2);
    __PVT__LineDirectControlEnSTB = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolSTB = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRateSTB = VL_RAND_RESET_I(1);
    __PVT__connectSlaveToHostSTB = VL_RAND_RESET_I(1);
    __PVT__EP0StatusRegSTB = VL_RAND_RESET_I(8);
    __PVT__EP0StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __PVT__EP1StatusRegSTB = VL_RAND_RESET_I(8);
    __PVT__EP1StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __PVT__EP2StatusRegSTB = VL_RAND_RESET_I(8);
    __PVT__EP2StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __PVT__EP3StatusRegSTB = VL_RAND_RESET_I(8);
    __PVT__EP3StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __PVT__endP0TransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP0TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__endP0NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP0NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__endP1TransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP1TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__endP1NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP1NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__endP2TransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP2TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__endP2NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP2NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__endP3TransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP3TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__endP3NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __PVT__endP3NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __PVT__frameNumSTB = VL_RAND_RESET_I(11);
    __PVT__frameNumSTB_reg1 = VL_RAND_RESET_I(11);
    __PVT__vBusDetectInSTB = VL_RAND_RESET_I(3);
    __PVT__connectStateInSTB = VL_RAND_RESET_I(2);
    __PVT__connectStateInSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__EP0IsoEn = VL_RAND_RESET_I(1);
    __Vdly__EP0SendStall = VL_RAND_RESET_I(1);
    __Vdly__EP0DataSequence = VL_RAND_RESET_I(1);
    __Vdly__EP0Enable = VL_RAND_RESET_I(1);
    __Vdly__EP1IsoEn = VL_RAND_RESET_I(1);
    __Vdly__EP1SendStall = VL_RAND_RESET_I(1);
    __Vdly__EP1DataSequence = VL_RAND_RESET_I(1);
    __Vdly__EP1Enable = VL_RAND_RESET_I(1);
    __Vdly__EP2IsoEn = VL_RAND_RESET_I(1);
    __Vdly__EP2SendStall = VL_RAND_RESET_I(1);
    __Vdly__EP2DataSequence = VL_RAND_RESET_I(1);
    __Vdly__EP2Enable = VL_RAND_RESET_I(1);
    __Vdly__EP3IsoEn = VL_RAND_RESET_I(1);
    __Vdly__EP3SendStall = VL_RAND_RESET_I(1);
    __Vdly__EP3DataSequence = VL_RAND_RESET_I(1);
    __Vdly__EP3Enable = VL_RAND_RESET_I(1);
    __Vdly__SCControlReg = VL_RAND_RESET_I(7);
    __Vdly__SCAddrReg = VL_RAND_RESET_I(7);
    __Vdly__interruptMaskReg = VL_RAND_RESET_I(6);
    __Vdly__clrVBusDetReq = VL_RAND_RESET_I(1);
    __Vdly__clrNAKReq = VL_RAND_RESET_I(1);
    __Vdly__clrSOFReq = VL_RAND_RESET_I(1);
    __Vdly__clrResetReq = VL_RAND_RESET_I(1);
    __Vdly__clrResInReq = VL_RAND_RESET_I(1);
    __Vdly__clrTransDoneReq = VL_RAND_RESET_I(1);
    __Vdly__EP0SetReady = VL_RAND_RESET_I(1);
    __Vdly__EP1SetReady = VL_RAND_RESET_I(1);
    __Vdly__EP2SetReady = VL_RAND_RESET_I(1);
    __Vdly__EP3SetReady = VL_RAND_RESET_I(1);
    __Vdly__vBusDetInt = VL_RAND_RESET_I(1);
    __Vdly__NAKSentInt = VL_RAND_RESET_I(1);
    __Vdly__SOFRxedInt = VL_RAND_RESET_I(1);
    __Vdly__resetEventInt = VL_RAND_RESET_I(1);
    __Vdly__resumeInt = VL_RAND_RESET_I(1);
    __Vdly__transDoneInt = VL_RAND_RESET_I(1);
    __Vdly__EP0Ready = VL_RAND_RESET_I(1);
    __Vdly__EP1Ready = VL_RAND_RESET_I(1);
    __Vdly__EP2Ready = VL_RAND_RESET_I(1);
    __Vdly__EP3Ready = VL_RAND_RESET_I(1);
    __Vdly__vBusDetectInSTB = VL_RAND_RESET_I(3);
    __Vdly__NAKSentInSTB = VL_RAND_RESET_I(3);
    __Vdly__SOFRxedInSTB = VL_RAND_RESET_I(3);
    __Vdly__resetEventInSTB = VL_RAND_RESET_I(3);
    __Vdly__resumeIntInSTB = VL_RAND_RESET_I(3);
    __Vdly__transDoneInSTB = VL_RAND_RESET_I(3);
    __Vdly__clrEP0ReadySTB = VL_RAND_RESET_I(3);
    __Vdly__clrEP1ReadySTB = VL_RAND_RESET_I(3);
    __Vdly__clrEP2ReadySTB = VL_RAND_RESET_I(3);
    __Vdly__clrEP3ReadySTB = VL_RAND_RESET_I(3);
    __Vdly__EP0StatusRegSTB = VL_RAND_RESET_I(8);
    __Vdly__EP0StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __Vdly__EP1StatusRegSTB = VL_RAND_RESET_I(8);
    __Vdly__EP1StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __Vdly__EP2StatusRegSTB = VL_RAND_RESET_I(8);
    __Vdly__EP2StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __Vdly__EP3StatusRegSTB = VL_RAND_RESET_I(8);
    __Vdly__EP3StatusRegSTB_reg1 = VL_RAND_RESET_I(8);
    __Vdly__endP0TransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP0TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__endP1TransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP1TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__endP2TransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP2TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__endP3TransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP3TransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__endP0NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP0NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__endP1NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP1NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__endP2NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP2NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__endP3NAKTransTypeRegSTB = VL_RAND_RESET_I(2);
    __Vdly__endP3NAKTransTypeRegSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__frameNumSTB = VL_RAND_RESET_I(11);
    __Vdly__frameNumSTB_reg1 = VL_RAND_RESET_I(11);
    __Vdly__connectStateInSTB = VL_RAND_RESET_I(2);
    __Vdly__connectStateInSTB_reg1 = VL_RAND_RESET_I(2);
    __Vdly__SOFRxedInExtend = VL_RAND_RESET_I(3);
    __Vdly__resetEventInExtend = VL_RAND_RESET_I(3);
    __Vdly__resumeIntInExtend = VL_RAND_RESET_I(3);
    __Vdly__transDoneInExtend = VL_RAND_RESET_I(3);
    __Vdly__NAKSentInExtend = VL_RAND_RESET_I(3);
    __Vdly__clrEP0ReadyExtend = VL_RAND_RESET_I(3);
    __Vdly__clrEP1ReadyExtend = VL_RAND_RESET_I(3);
    __Vdly__clrEP2ReadyExtend = VL_RAND_RESET_I(3);
    __Vdly__clrEP3ReadyExtend = VL_RAND_RESET_I(3);
    __Vdly__endP0ControlReg = VL_RAND_RESET_I(5);
    __Vdly__endP0ControlReg1 = VL_RAND_RESET_I(5);
    __Vdly__endP1ControlReg = VL_RAND_RESET_I(5);
    __Vdly__endP1ControlReg1 = VL_RAND_RESET_I(5);
    __Vdly__endP2ControlReg = VL_RAND_RESET_I(5);
    __Vdly__endP2ControlReg1 = VL_RAND_RESET_I(5);
    __Vdly__endP3ControlReg = VL_RAND_RESET_I(5);
    __Vdly__endP3ControlReg1 = VL_RAND_RESET_I(5);
    __Vdly__SCGlobalEn = VL_RAND_RESET_I(1);
    __Vdly__SCGlobalEn_reg1 = VL_RAND_RESET_I(1);
    __Vdly__TxLineState = VL_RAND_RESET_I(2);
    __Vdly__TxLineState_reg1 = VL_RAND_RESET_I(2);
    __Vdly__LineDirectControlEn = VL_RAND_RESET_I(1);
    __Vdly__LineDirectControlEn_reg1 = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedPol = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedPol_reg1 = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedRate = VL_RAND_RESET_I(1);
    __Vdly__fullSpeedRate_reg1 = VL_RAND_RESET_I(1);
    __Vdly__connectSlaveToHost = VL_RAND_RESET_I(1);
    __Vdly__connectSlaveToHost_reg1 = VL_RAND_RESET_I(1);
}

void VusbHostSlave_USBSlaveControlBI::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_USBSlaveControlBI::~VusbHostSlave_USBSlaveControlBI() {
}

//--------------------
// Internal Methods

void VusbHostSlave_USBSlaveControlBI::_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBSlaveControlBI::_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHost_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRate_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPol_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEn_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineState_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEn_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineState;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHost;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPol;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRate;
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:540
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToUsbClk) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadyExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadyExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadyExtend = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadyExtend = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentIn)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadyExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0Ready)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadyExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadyExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1Ready)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadyExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadyExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2Ready)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadyExtend), 1, 2))));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadyExtend 
	    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3Ready)
	        ? 7 : VL_EXTEND_II(3,2, (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadyExtend), 1, 2))));
    }
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:593
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToUsbClk) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost_reg1 = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlRegSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlReg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlRegSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlReg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlRegSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlReg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlRegSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlReg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEnSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEn_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineStateSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineState_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEnSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEn_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPolSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPol_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRateSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRate_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHostSTB;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHost_reg1;
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPol_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRate_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEn_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEn_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHost_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineState_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlReg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3ControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineState 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__TxLineState;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__LineDirectControlEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHost 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectSlaveToHost;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCGlobalEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRate 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedRate;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPol 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__fullSpeedPol;
}

void VusbHostSlave_USBSlaveControlBI::_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBSlaveControlBI::_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateInSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetectInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__interruptMaskReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCAddrReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCAddrReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Enable;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Enable;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Enable;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Enable;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetInt;
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:643
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetectInSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadySTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadySTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadySTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadySTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB_reg1 = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB_reg1 = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetectInSTB 
	    = VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectIn), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInSTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInSTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadySTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadyExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadySTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadySTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadyExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadySTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadySTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadyExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadySTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadySTB 
	    = VL_CONCAT_III(3,1,2, (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadyExtend), 0)), 
			    (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadySTB), 1, 2)));
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeRegSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNum;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB_reg1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB_reg1 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateIn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateInSTB_reg1;
    }
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:455
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Ready = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Ready = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Ready = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Ready = 0;
    } else {
	if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0SetReady) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Ready = 1;
	} else {
	    if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadySTB), 1) 
		      & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadySTB), 0))))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Ready = 0;
	    }
	}
	if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1SetReady) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Ready = 1;
	} else {
	    if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadySTB), 1) 
		      & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadySTB), 0))))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Ready = 0;
	    }
	}
	if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2SetReady) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Ready = 1;
	} else {
	    if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadySTB), 1) 
		      & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadySTB), 0))))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Ready = 0;
	    }
	}
	if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3SetReady) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Ready = 1;
	} else {
	    if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadySTB), 1) 
		      & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadySTB), 0))))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Ready = 0;
	    }
	}
    }
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:395
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetInt = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInt = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInt = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInt = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeInt = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInt = 0;
    } else {
	if (((1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectInSTB), 0)) 
	     != (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectInSTB), 1)))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrVBusDetReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrNAKReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrSOFReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrResetReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrResInReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeInt = 0;
	    }
	}
	if ((1 & (VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInSTB), 1) 
		  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInSTB), 0))))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInt = 1;
	} else {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrTransDoneReq) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInt = 0;
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateInSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusRegSTB_reg1 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB_reg1;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__connectStateInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__frameNumSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0NAKTransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP3TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP2TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP1TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__endP0TransTypeRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusRegSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0StatusRegSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadySTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadySTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Ready 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Ready;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectInSTB 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetectInSTB;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetInt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__vBusDetInt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrSOFReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrSOFReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrNAKReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrNAKReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResetReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrResetReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResInReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrResInReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrVBusDetReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrVBusDetReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrTransDoneReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrTransDoneReq;
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:313
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__rstSyncToBusClk) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0IsoEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SendStall = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0DataSequence = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Enable = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1IsoEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SendStall = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1DataSequence = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Enable = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2IsoEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SendStall = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2DataSequence = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Enable = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3IsoEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SendStall = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3DataSequence = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Enable = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCControlReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCAddrReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__interruptMaskReg = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrVBusDetReq = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrNAKReq = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrSOFReq = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResetReq = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResInReq = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrTransDoneReq = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SetReady = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SetReady = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SetReady = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SetReady = 0;
	if ((((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__writeEn) 
	      & (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__strobe_i)) 
	     & (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__slaveControlSelect))) {
	    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)) 
		       | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		      | (8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		     | (0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		    | (0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		   | (0x14 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		  | (0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		 | (0x13 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)))) {
		if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0IsoEn 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 4));
		    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SendStall 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 3));
		    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0DataSequence 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 2));
		    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SetReady 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 1));
		    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Enable 
			= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0));
		} else {
		    if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1IsoEn 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 4));
			vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SendStall 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 3));
			vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1DataSequence 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 2));
			vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SetReady 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 1));
			vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Enable 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0));
		    } else {
			if ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2IsoEn 
				= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 4));
			    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SendStall 
				= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 3));
			    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2DataSequence 
				= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 2));
			    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SetReady 
				= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 1));
			    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Enable 
				= (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0));
			} else {
			    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3IsoEn 
				    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 4));
				vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SendStall 
				    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 3));
				vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3DataSequence 
				    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 2));
				vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SetReady 
				    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 1));
				vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Enable 
				    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0));
			    } else {
				if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCControlReg 
					= (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0, 7));
				} else {
				    if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCAddrReg 
					    = (0x7f 
					       & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0, 7));
				    } else {
					if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrVBusDetReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 5));
					    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrNAKReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 4));
					    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrSOFReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 3));
					    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResetReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 2));
					    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResInReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 1));
					    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrTransDoneReq 
						= (1 
						   & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0));
					} else {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__interruptMaskReg 
						= (0x3f 
						   & VL_SEL_IIII(6,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataIn), 0, 6));
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
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrVBusDetReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrVBusDetReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrNAKReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrNAKReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrSOFReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrSOFReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrResetReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResetReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrResInReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrResInReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrTransDoneReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrTransDoneReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3SetReady 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SetReady;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCControlReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__interruptMaskReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCAddrReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SCAddrReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP0Enable;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP1Enable;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP2Enable;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3IsoEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3IsoEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3SendStall 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3SendStall;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3DataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3DataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Enable 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__EP3Enable;
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:487
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEnSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 0));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineStateSTB 
	= (3 & VL_SEL_IIII(2,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 1, 2));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEnSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 3));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPolSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 4));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRateSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 5));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHostSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 6));
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:439
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 0));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 1));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 2));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 3));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 4));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 5));
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:497
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Enable)))));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Enable)))));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Enable)))));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Enable)))));
}

void VusbHostSlave_USBSlaveControlBI::_settle__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBSlaveControlBI::_settle__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:487
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCGlobalEnSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 0));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__TxLineStateSTB 
	= (3 & VL_SEL_IIII(2,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 1, 2));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__LineDirectControlEnSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 3));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedPolSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 4));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__fullSpeedRateSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 5));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectSlaveToHostSTB 
	= (1 & VL_BITSEL_IIII(1,7,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg), 6));
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:439
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 0));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 1));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 2));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 3));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 4));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetIntOut 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetInt) 
	   & VL_BITSEL_IIII(1,6,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg), 5));
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:497
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0Enable)))));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1Enable)))));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2Enable)))));
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlRegSTB 
	= VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3IsoEn), 
			VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3SendStall), 
				      VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3DataSequence), 
						    VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Ready), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3Enable)))));
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:507
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataOut 
	= (0xff & (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)) 
			  | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			 | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			| (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		       | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		      | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		     | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		    | (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)))
		    ? ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
		        ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlRegSTB))
		        : ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			    ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusRegSTB)
			    : ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeRegSTB))
			        : ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeRegSTB))
				    : ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlRegSTB))
				        : ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					    ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusRegSTB)
					    : ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeRegSTB))
					        : VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeRegSTB)))))))))
		    : (((((((((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)) 
			      | (9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			     | (0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			    | (0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			   | (0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			  | (0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			 | (0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			| (0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)))
		        ? ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlRegSTB))
			    : ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			        ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusRegSTB)
			        : ((0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeRegSTB))
				    : ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeRegSTB))
				        : ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					    ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlRegSTB))
					    : ((0xd 
						== (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					        ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusRegSTB)
					        : (
						   (0xe 
						    == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
						    ? 
						   VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeRegSTB))
						    : 
						   VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeRegSTB)))))))))
		        : ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,7, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg))
			    : ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			        ? VL_CONCAT_III(8,6,2, 
						VL_EXTEND_II(6,1, 
							     (1 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectInSTB), 0))), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateInSTB))
			        : ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				    ? VL_CONCAT_III(8,3,5, 
						    VL_EXTEND_II(3,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetInt)), 
						    VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInt), 
								  VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInt), 
										VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInt), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeInt), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInt))))))
				    : ((0x13 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,6, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg))
				        : ((0x14 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					    ? VL_EXTEND_II(8,7, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCAddrReg))
					    : ((0x15 
						== (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					        ? VL_EXTEND_II(8,3, 
							       (7 
								& VL_SEL_IIII(3,11,4,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB), 8, 3)))
					        : (
						   (0x16 
						    == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
						    ? 
						   VL_SEL_IIII(8,11,4,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB), 0, 8)
						    : 0))))))))));
}

void VusbHostSlave_USBSlaveControlBI::_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBSlaveControlBI::_sequent__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP3ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP3ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeIntInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resumeIntInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__NAKSentInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP0ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP0ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__SOFRxedInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP1ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP1ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__clrEP2ReadyExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__clrEP2ReadyExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__transDoneInExtend;
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInExtend 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vdly__resetEventInExtend;
}

void VusbHostSlave_USBSlaveControlBI::_combo__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_USBSlaveControlBI::_combo__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//USBSlaveControlBI.v:507
    vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__dataOut 
	= (0xff & (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)) 
			  | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			 | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			| (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		       | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		      | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		     | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
		    | (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)))
		    ? ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
		        ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0ControlRegSTB))
		        : ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			    ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP0StatusRegSTB)
			    : ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0TransTypeRegSTB))
			        : ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP0NAKTransTypeRegSTB))
				    : ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1ControlRegSTB))
				        : ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					    ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP1StatusRegSTB)
					    : ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1TransTypeRegSTB))
					        : VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP1NAKTransTypeRegSTB)))))))))
		    : (((((((((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)) 
			      | (9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			     | (0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			    | (0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			   | (0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			  | (0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			 | (0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))) 
			| (0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address)))
		        ? ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2ControlRegSTB))
			    : ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			        ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP2StatusRegSTB)
			        : ((0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				    ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2TransTypeRegSTB))
				    : ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP2NAKTransTypeRegSTB))
				        : ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					    ? VL_EXTEND_II(8,5, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3ControlRegSTB))
					    : ((0xd 
						== (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					        ? (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__EP3StatusRegSTB)
					        : (
						   (0xe 
						    == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
						    ? 
						   VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3TransTypeRegSTB))
						    : 
						   VL_EXTEND_II(8,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__endP3NAKTransTypeRegSTB)))))))))
		        : ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			    ? VL_EXTEND_II(8,7, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCControlReg))
			    : ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
			        ? VL_CONCAT_III(8,6,2, 
						VL_EXTEND_II(6,1, 
							     (1 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetectInSTB), 0))), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__connectStateInSTB))
			        : ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				    ? VL_CONCAT_III(8,3,5, 
						    VL_EXTEND_II(3,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__vBusDetInt)), 
						    VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__NAKSentInt), 
								  VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SOFRxedInt), 
										VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resetEventInt), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__resumeInt), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__transDoneInt))))))
				    : ((0x13 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
				        ? VL_EXTEND_II(8,6, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__interruptMaskReg))
				        : ((0x14 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					    ? VL_EXTEND_II(8,7, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__SCAddrReg))
					    : ((0x15 
						== (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
					        ? VL_EXTEND_II(8,3, 
							       (7 
								& VL_SEL_IIII(3,11,4,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB), 8, 3)))
					        : (
						   (0x16 
						    == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__address))
						    ? 
						   VL_SEL_IIII(8,11,4,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__PVT__frameNumSTB), 0, 8)
						    : 0))))))))));
}
