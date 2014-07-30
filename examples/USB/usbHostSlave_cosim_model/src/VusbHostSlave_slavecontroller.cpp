// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_slavecontroller.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_slavecontroller) {
    // Reset internal values
    // Reset structure values
    __PVT__CRCError = VL_RAND_RESET_I(1);
    __PVT__RxByte = VL_RAND_RESET_I(8);
    __PVT__RxDataWEn = VL_RAND_RESET_I(1);
    __PVT__RxOverflow = VL_RAND_RESET_I(1);
    __PVT__RxStatus = VL_RAND_RESET_I(8);
    __PVT__RxTimeOut = VL_RAND_RESET_I(1);
    __PVT__SCGlobalEn = VL_RAND_RESET_I(1);
    __PVT__USBEndPControlReg = VL_RAND_RESET_I(5);
    __PVT__USBTgtAddress = VL_RAND_RESET_I(7);
    __PVT__bitStuffError = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__getPacketRdy = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__NAKSent = VL_RAND_RESET_I(1);
    __PVT__SOFRxed = VL_RAND_RESET_I(1);
    __PVT__USBEndPNakTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__USBEndPTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__USBEndP = VL_RAND_RESET_I(4);
    __PVT__clrEPRdy = VL_RAND_RESET_I(1);
    __PVT__endPMuxErrorsWEn = VL_RAND_RESET_I(1);
    __PVT__endPointReadyToGetPkt = VL_RAND_RESET_I(1);
    __PVT__frameNum = VL_RAND_RESET_I(11);
    __PVT__getPacketREn = VL_RAND_RESET_I(1);
    __PVT__sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__stallSent = VL_RAND_RESET_I(1);
    __PVT__transDone = VL_RAND_RESET_I(1);
    __PVT__next_NAKSent = VL_RAND_RESET_I(1);
    __PVT__next_SOFRxed = VL_RAND_RESET_I(1);
    __PVT__next_USBEndPNakTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__next_USBEndPTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__next_USBEndP = VL_RAND_RESET_I(4);
    __PVT__next_clrEPRdy = VL_RAND_RESET_I(1);
    __PVT__next_endPMuxErrorsWEn = VL_RAND_RESET_I(1);
    __PVT__next_endPointReadyToGetPkt = VL_RAND_RESET_I(1);
    __PVT__next_frameNum = VL_RAND_RESET_I(11);
    __PVT__next_getPacketREn = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketPID = VL_RAND_RESET_I(4);
    __PVT__next_sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__next_stallSent = VL_RAND_RESET_I(1);
    __PVT__next_transDone = VL_RAND_RESET_I(1);
    __PVT__PIDByte = VL_RAND_RESET_I(8);
    __PVT__next_PIDByte = VL_RAND_RESET_I(8);
    __PVT__USBAddress = VL_RAND_RESET_I(7);
    __PVT__next_USBAddress = VL_RAND_RESET_I(7);
    __PVT__USBEndPControlRegCopy = VL_RAND_RESET_I(5);
    __PVT__next_USBEndPControlRegCopy = VL_RAND_RESET_I(5);
    __PVT__addrEndPTemp = VL_RAND_RESET_I(8);
    __PVT__next_addrEndPTemp = VL_RAND_RESET_I(8);
    __PVT__endpCRCTemp = VL_RAND_RESET_I(8);
    __PVT__next_endpCRCTemp = VL_RAND_RESET_I(8);
    __PVT__tempUSBEndPTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__next_tempUSBEndPTransTypeReg = VL_RAND_RESET_I(2);
    __PVT__CurrState_slvCntrl = VL_RAND_RESET_I(5);
    __PVT__NextState_slvCntrl = VL_RAND_RESET_I(5);
    __Vdly__CurrState_slvCntrl = VL_RAND_RESET_I(5);
    __Vdly__tempUSBEndPTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__addrEndPTemp = VL_RAND_RESET_I(8);
    __Vdly__endpCRCTemp = VL_RAND_RESET_I(8);
    __Vdly__USBAddress = VL_RAND_RESET_I(7);
    __Vdly__PIDByte = VL_RAND_RESET_I(8);
    __Vdly__USBEndPControlRegCopy = VL_RAND_RESET_I(5);
    __Vdly__transDone = VL_RAND_RESET_I(1);
    __Vdly__getPacketREn = VL_RAND_RESET_I(1);
    __Vdly__sendPacketPID = VL_RAND_RESET_I(4);
    __Vdly__sendPacketWEn = VL_RAND_RESET_I(1);
    __Vdly__clrEPRdy = VL_RAND_RESET_I(1);
    __Vdly__USBEndPTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__USBEndPNakTransTypeReg = VL_RAND_RESET_I(2);
    __Vdly__NAKSent = VL_RAND_RESET_I(1);
    __Vdly__stallSent = VL_RAND_RESET_I(1);
    __Vdly__SOFRxed = VL_RAND_RESET_I(1);
    __Vdly__endPMuxErrorsWEn = VL_RAND_RESET_I(1);
    __Vdly__frameNum = VL_RAND_RESET_I(11);
    __Vdly__USBEndP = VL_RAND_RESET_I(4);
    __Vdly__endPointReadyToGetPkt = VL_RAND_RESET_I(1);
}

void VusbHostSlave_slavecontroller::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_slavecontroller::~VusbHostSlave_slavecontroller() {
}

//--------------------
// Internal Methods

void VusbHostSlave_slavecontroller::_sequent__TOP__v__u_usbSlaveControl__u_slavecontroller__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slavecontroller::_sequent__TOP__v__u_usbSlaveControl__u_slavecontroller__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__CurrState_slvCntrl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__tempUSBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__addrEndPTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endpCRCTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBAddress;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__PIDByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPControlRegCopy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPNakTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPNakTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__SOFRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__transDone 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__getPacketREn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPointReadyToGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPointReadyToGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP;
    // ALWAYS at trunk/RTL/slaveController//slavecontroller.v:426
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__CurrState_slvCntrl 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__rst)
	    ? 0xe : (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl));
    // ALWAYS at trunk/RTL/slaveController//slavecontroller.v:437
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__tempUSBEndPTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__addrEndPTemp = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endpCRCTemp = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBAddress = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__PIDByte = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPControlRegCopy = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__transDone = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__getPacketREn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketPID = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketWEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__clrEPRdy = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPNakTransTypeReg = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__NAKSent = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__stallSent = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__SOFRxed = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPMuxErrorsWEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__frameNum = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndP = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPointReadyToGetPkt = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__tempUSBEndPTransTypeReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__addrEndPTemp 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_addrEndPTemp;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endpCRCTemp 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endpCRCTemp;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBAddress 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBAddress;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__PIDByte 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_PIDByte;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPControlRegCopy 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPControlRegCopy;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__transDone 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_transDone;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__getPacketREn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketPID 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketWEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__clrEPRdy 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_clrEPRdy;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPTransTypeReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPTransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPNakTransTypeReg 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPNakTransTypeReg;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__NAKSent 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__stallSent 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__SOFRxed 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_SOFRxed;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPMuxErrorsWEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__frameNum 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_frameNum;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndP 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndP;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPointReadyToGetPkt 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPointReadyToGetPkt;
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__CurrState_slvCntrl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__tempUSBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__addrEndPTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endpCRCTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBAddress;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__PIDByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPControlRegCopy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPNakTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPNakTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__transDone 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SOFRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketREn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPointReadyToGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__endPointReadyToGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__sendPacketPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__Vdly__USBEndP;
}

void VusbHostSlave_slavecontroller::_combo__TOP__v__u_usbSlaveControl__u_slavecontroller__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slavecontroller::_combo__TOP__v__u_usbSlaveControl__u_slavecontroller__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slavecontroller.v:168
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_SOFRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_PIDByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_transDone 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPNakTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPNakTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endpCRCTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_addrEndPTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBAddress;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPControlRegCopy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPointReadyToGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPointReadyToGetPkt;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	      | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	     | (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	    | (8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	   | (0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	  | (0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	 | (0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_SOFRxed = 0;
	    if ((((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
		  & (0 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus)))) 
		 & (1 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 0, 2))))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 3;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_PIDByte 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte;
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_transDone = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_clrEPRdy = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
	    } else {
		if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		    if ((0xd == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xd;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 1;
		    } else {
			if ((1 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xd;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 2;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 1;
			} else {
			    if (((9 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4))) 
				 & (~ VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 4)))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xa;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
			    } else {
				if ((((9 == (0xf & 
					     VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4))) 
				      & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1)) 
				     & (~ VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 2)))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 3;
				} else {
				    if (((9 == (0xf 
						& VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4))) 
					 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xb;
				    } else {
					if ((9 == (0xf 
						   & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
					} else {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 7;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
		    } else {
			if ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_transDone = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_clrEPRdy = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPTransTypeReg 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn = 1;
			    } else {
				if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPNakTransTypeReg 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn = 1;
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 1;
				}
			    }
			} else {
			    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
				    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 3))) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xc;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xe;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent = 1;
				    } else {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xc;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 2;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xc;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xa;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent = 1;
				}
			    } else {
				if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 0;
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 0;
				    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) 
					 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 4))) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
				    } else {
					if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) 
					     & ((((~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CRCError)) 
						  & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__bitStuffError))) 
						 & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxOverflow))) 
						& (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxTimeOut))))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xb;
					} else {
					    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
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
    } else {
	if (((((((((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)) 
		   | (0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
		  | (0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
		 | (0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
		| (0x13 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	       | (0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)))) {
	    if ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 0;
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
		}
	    } else {
		if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
			if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 3))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 9;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xe;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent = 1;
			} else {
			    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 2))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xb;
			    } else {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 3;
			    }
			}
		    } else {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 9;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xa;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent = 1;
		    }
		} else {
		    if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 0;
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
			}
		    } else {
			if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 0;
			    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x13;
			    }
			} else {
			    if ((0x13 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 4))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x11;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 1;
				}
			    } else {
				if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
					if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
					     & (1 == 
						VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 4;
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endpCRCTemp 
						= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte;
					} else {
					    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
						 & (1 
						    != 
						    VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
					    }
					}
				    } else {
					if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
					     & (1 == 
						VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 2;
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_addrEndPTemp 
						= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte;
					} else {
					    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
						 & (1 
						    != 
						    VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
		     & (((~ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 0)) 
			 & (~ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 1))) 
			& (~ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 2))))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 6;
		} else {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
		    }
		}
	    } else {
		if ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		    if ((5 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_frameNum 
			    = VL_CONCAT_III(11,3,8, 
					    (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp), 0, 3)), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_SOFRxed = 1;
		    } else {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xf;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBAddress 
			    = (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp), 0, 7));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndP 
			    = VL_CONCAT_III(4,3,1, 
					    (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp), 0, 3)), 
					    (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp), 7)));
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x10;
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			    if (((((VL_EXTEND_II(32,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP)) 
				    < 4) & ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBAddress) 
					    == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBTgtAddress))) 
				  & (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SCGlobalEn)) 
				 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg), 0))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 5;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPControlRegCopy 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPointReadyToGetPkt 
				    = (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg), 1));
			    } else {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_slavecontroller::_settle__TOP__v__u_usbSlaveControl__u_slavecontroller__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slavecontroller::_settle__TOP__v__u_usbSlaveControl__u_slavecontroller__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slavecontroller.v:168
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__stallSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_SOFRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SOFRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_PIDByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_transDone 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__transDone;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_clrEPRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__clrEPRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPMuxErrorsWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketREn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPNakTransTypeReg 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPNakTransTypeReg;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endpCRCTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_addrEndPTemp 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_frameNum 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBAddress 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBAddress;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndP 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPControlRegCopy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPointReadyToGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endPointReadyToGetPkt;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	      | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	     | (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	    | (8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	   | (0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	  | (0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	 | (0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent = 0;
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_SOFRxed = 0;
	    if ((((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
		  & (0 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus)))) 
		 & (1 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 0, 2))))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 3;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_PIDByte 
		    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte;
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_transDone = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_clrEPRdy = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
	    } else {
		if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		    if ((0xd == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xd;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 1;
		    } else {
			if ((1 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xd;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 2;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 1;
			} else {
			    if (((9 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4))) 
				 & (~ VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 4)))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xa;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
			    } else {
				if ((((9 == (0xf & 
					     VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4))) 
				      & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1)) 
				     & (~ VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 2)))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 3;
				} else {
				    if (((9 == (0xf 
						& VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4))) 
					 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xb;
				    } else {
					if ((9 == (0xf 
						   & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_tempUSBEndPTransTypeReg = 1;
					} else {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 7;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
		    } else {
			if ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_transDone = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_clrEPRdy = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPTransTypeReg 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn = 1;
			    } else {
				if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NAKSent) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPNakTransTypeReg 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__tempUSBEndPTransTypeReg;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPMuxErrorsWEn = 1;
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 1;
				}
			    }
			} else {
			    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
				    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 3))) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xc;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xe;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent = 1;
				    } else {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xc;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 2;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xc;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xa;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent = 1;
				}
			    } else {
				if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 0;
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
				    }
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 0;
				    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) 
					 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 4))) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
				    } else {
					if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) 
					     & ((((~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CRCError)) 
						  & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__bitStuffError))) 
						 & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxOverflow))) 
						& (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxTimeOut))))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xb;
					} else {
					    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
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
    } else {
	if (((((((((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)) 
		   | (0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
		  | (0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
		 | (0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
		| (0x13 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	       | (0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) 
	     | (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl)))) {
	    if ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 0;
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
		}
	    } else {
		if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 1))) {
			if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 3))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 9;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xe;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_stallSent = 1;
			} else {
			    if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 2))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xb;
			    } else {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x12;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 3;
			    }
			}
		    } else {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 9;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 1;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketPID = 0xa;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_NAKSent = 1;
		    }
		} else {
		    if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 0;
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__getPacketRdy) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
			}
		    } else {
			if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_sendPacketWEn = 0;
			    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__sendPacketRdy) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x13;
			    }
			} else {
			    if ((0x13 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				if ((1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlRegCopy), 4))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 8;
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x11;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_getPacketREn = 1;
				}
			    } else {
				if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
				} else {
				    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
					if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
					     & (1 == 
						VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 4;
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endpCRCTemp 
						= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte;
					} else {
					    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
						 & (1 
						    != 
						    VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
					    }
					}
				    } else {
					if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
					     & (1 == 
						VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 2;
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_addrEndPTemp 
						= vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte;
					} else {
					    if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
						 & (1 
						    != 
						    VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxStatus))))) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) 
		     & (((~ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 0)) 
			 & (~ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 1))) 
			& (~ VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxByte), 2))))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 6;
		} else {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__RxDataWEn) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
		    }
		}
	    } else {
		if ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
		    if ((5 == (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__PIDByte), 0, 4)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_frameNum 
			    = VL_CONCAT_III(11,3,8, 
					    (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp), 0, 3)), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_SOFRxed = 1;
		    } else {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0xf;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBAddress 
			    = (0x7f & VL_SEL_IIII(7,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp), 0, 7));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndP 
			    = VL_CONCAT_III(4,3,1, 
					    (7 & VL_SEL_IIII(3,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__endpCRCTemp), 0, 3)), 
					    (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__addrEndPTemp), 7)));
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0x10;
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__CurrState_slvCntrl))) {
			    if (((((VL_EXTEND_II(32,4, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndP)) 
				    < 4) & ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBAddress) 
					    == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBTgtAddress))) 
				  & (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__SCGlobalEn)) 
				 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg), 0))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 5;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_USBEndPControlRegCopy 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__next_endPointReadyToGetPkt 
				    = (1 & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__USBEndPControlReg), 1));
			    } else {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slavecontroller.__PVT__NextState_slvCntrl = 0;
			    }
			}
		    }
		}
	    }
	}
    }
}
