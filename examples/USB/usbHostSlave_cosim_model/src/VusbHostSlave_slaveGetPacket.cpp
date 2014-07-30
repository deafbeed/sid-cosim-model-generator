// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_slaveGetPacket.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_slaveGetPacket) {
    // Reset internal values
    // Reset structure values
    __PVT__RXDataIn = VL_RAND_RESET_I(8);
    __PVT__RXDataValid = VL_RAND_RESET_I(1);
    __PVT__RXFifoFull = VL_RAND_RESET_I(1);
    __PVT__RXStreamStatusIn = VL_RAND_RESET_I(8);
    __PVT__SIERxTimeOut = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__endPointReady = VL_RAND_RESET_I(1);
    __PVT__getPacketEn = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__ACKRxed = VL_RAND_RESET_I(1);
    __PVT__CRCError = VL_RAND_RESET_I(1);
    __PVT__RXFifoData = VL_RAND_RESET_I(8);
    __PVT__RXFifoWEn = VL_RAND_RESET_I(1);
    __PVT__RXOverflow = VL_RAND_RESET_I(1);
    __PVT__RXPacketRdy = VL_RAND_RESET_I(1);
    __PVT__RXTimeOut = VL_RAND_RESET_I(1);
    __PVT__RxPID = VL_RAND_RESET_I(4);
    __PVT__SIERxTimeOutEn = VL_RAND_RESET_I(1);
    __PVT__bitStuffError = VL_RAND_RESET_I(1);
    __PVT__dataSequence = VL_RAND_RESET_I(1);
    __PVT__next_ACKRxed = VL_RAND_RESET_I(1);
    __PVT__next_CRCError = VL_RAND_RESET_I(1);
    __PVT__next_RXFifoData = VL_RAND_RESET_I(8);
    __PVT__next_RXFifoWEn = VL_RAND_RESET_I(1);
    __PVT__next_RXOverflow = VL_RAND_RESET_I(1);
    __PVT__next_RXPacketRdy = VL_RAND_RESET_I(1);
    __PVT__next_RXTimeOut = VL_RAND_RESET_I(1);
    __PVT__next_RxPID = VL_RAND_RESET_I(4);
    __PVT__next_SIERxTimeOutEn = VL_RAND_RESET_I(1);
    __PVT__next_bitStuffError = VL_RAND_RESET_I(1);
    __PVT__next_dataSequence = VL_RAND_RESET_I(1);
    __PVT__RXByteOld = VL_RAND_RESET_I(8);
    __PVT__next_RXByteOld = VL_RAND_RESET_I(8);
    __PVT__RXByteOldest = VL_RAND_RESET_I(8);
    __PVT__next_RXByteOldest = VL_RAND_RESET_I(8);
    __PVT__RXByte = VL_RAND_RESET_I(8);
    __PVT__next_RXByte = VL_RAND_RESET_I(8);
    __PVT__RXStreamStatus = VL_RAND_RESET_I(8);
    __PVT__next_RXStreamStatus = VL_RAND_RESET_I(8);
    __PVT__CurrState_slvGetPkt = VL_RAND_RESET_I(5);
    __PVT__NextState_slvGetPkt = VL_RAND_RESET_I(5);
    __Vdly__CurrState_slvGetPkt = VL_RAND_RESET_I(5);
    __Vdly__RXByteOld = VL_RAND_RESET_I(8);
    __Vdly__RXByteOldest = VL_RAND_RESET_I(8);
    __Vdly__RXByte = VL_RAND_RESET_I(8);
    __Vdly__RXStreamStatus = VL_RAND_RESET_I(8);
    __Vdly__RXPacketRdy = VL_RAND_RESET_I(1);
    __Vdly__RXFifoWEn = VL_RAND_RESET_I(1);
    __Vdly__RXFifoData = VL_RAND_RESET_I(8);
    __Vdly__CRCError = VL_RAND_RESET_I(1);
    __Vdly__bitStuffError = VL_RAND_RESET_I(1);
    __Vdly__RXOverflow = VL_RAND_RESET_I(1);
    __Vdly__RXTimeOut = VL_RAND_RESET_I(1);
    __Vdly__ACKRxed = VL_RAND_RESET_I(1);
    __Vdly__dataSequence = VL_RAND_RESET_I(1);
    __Vdly__SIERxTimeOutEn = VL_RAND_RESET_I(1);
    __Vdly__RxPID = VL_RAND_RESET_I(4);
}

void VusbHostSlave_slaveGetPacket::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_slaveGetPacket::~VusbHostSlave_slaveGetPacket() {
}

//--------------------
// Internal Methods

void VusbHostSlave_slaveGetPacket::_sequent__TOP__v__u_usbSlaveControl__u_slaveGetPacket__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveGetPacket::_sequent__TOP__v__u_usbSlaveControl__u_slaveGetPacket__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__CurrState_slvGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOld 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOld;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOldest 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOldest;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXStreamStatus 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RxPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOutEn;
    // ALWAYS at trunk/RTL/slaveController//slaveGetPacket.v:319
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__CurrState_slvGetPkt 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__rst)
	    ? 0xc : (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt));
    // ALWAYS at trunk/RTL/slaveController//slaveGetPacket.v:330
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOld = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOldest = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByte = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXStreamStatus = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXPacketRdy = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoWEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoData = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__CRCError = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__bitStuffError = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXOverflow = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXTimeOut = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__ACKRxed = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__dataSequence = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__SIERxTimeOutEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RxPID = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOld 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOld;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOldest 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOldest;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByte 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXStreamStatus 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXPacketRdy 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXPacketRdy;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoWEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoData;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__CRCError 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_CRCError;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__bitStuffError 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_bitStuffError;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXOverflow 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXTimeOut 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__ACKRxed 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_ACKRxed;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__dataSequence 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_dataSequence;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__SIERxTimeOutEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_SIERxTimeOutEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RxPID 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RxPID;
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__CurrState_slvGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXStreamStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOldest 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOldest;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOld 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXByteOld;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RxPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RxPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__RXFifoWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vdly__SIERxTimeOutEn;
}

void VusbHostSlave_slaveGetPacket::_settle__TOP__v__u_usbSlaveControl__u_slaveGetPacket__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveGetPacket::_settle__TOP__v__u_usbSlaveControl__u_slaveGetPacket__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveGetPacket.v:148
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RxPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOldest 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOldest;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOld 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOld;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoData;
    if (((((((((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)) 
	       | (0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	      | (0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	     | (0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	    | (0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	   | (0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	  | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	 | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)))) {
	if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xf;
	} else {
	    if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_CRCError = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_bitStuffError = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_ACKRxed = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_dataSequence = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_SIERxTimeOutEn = 1;
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xe;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
		} else {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOut) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut = 1;
		    }
		}
	    } else {
		if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		    if ((0 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RxPID 
			    = (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0, 4));
		    } else {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut = 1;
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXPacketRdy = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_SIERxTimeOutEn = 0;
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__getPacketEn) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xd;
			}
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXPacketRdy = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xf;
			} else {
			    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt 
				    = ((2 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0, 2)))
				        ? 1 : ((3 == 
						(3 
						 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0, 2)))
					        ? 2
					        : 0x10));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn), 2));
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_ACKRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn), 5));
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 3;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
					    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
					    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)) 
		   | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
		  | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
		 | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
		| (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	       | (8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	      | (9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	     | (0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)))) {
	    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 4;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOldest 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
		} else {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 5;
		}
	    } else {
		if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 6;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_CRCError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_bitStuffError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 1));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_dataSequence 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 6));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
		    } else {
			if ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			    if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 7;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOld 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
			    } else {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 5;
			    }
			} else {
			    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 8;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
				}
			    } else {
				if ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt 
					= ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))
					    ? 9 : 5);
				} else {
				    if ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
					if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__endPointReady) {
					    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoFull) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xa;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow = 1;
					    } else {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xb;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoWEn = 1;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoData 
						    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOldest;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOldest 
						    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOld;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOld 
						    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
					    }
					} else {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x12;
					}
				    } else {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xb;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoWEn = 0;
		if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) 
		     & (1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn))))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x11;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
		} else {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 5;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
		    }
		}
	    } else {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 9;
		} else {
		    if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xb;
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_slaveGetPacket::_combo__TOP__v__u_usbSlaveControl__u_slaveGetPacket__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveGetPacket::_combo__TOP__v__u_usbSlaveControl__u_slaveGetPacket__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveGetPacket.v:148
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_CRCError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_ACKRxed 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_dataSequence 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RxPID 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOldest 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOldest;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOld 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOld;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoData;
    if (((((((((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)) 
	       | (0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	      | (0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	     | (0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	    | (0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	   | (0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	  | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	 | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)))) {
	if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xf;
	} else {
	    if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_CRCError = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_bitStuffError = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_ACKRxed = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_dataSequence = 0;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_SIERxTimeOutEn = 1;
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xe;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
		} else {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__SIERxTimeOut) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut = 1;
		    }
		}
	    } else {
		if ((0xe == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		    if ((0 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RxPID 
			    = (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0, 4));
		    } else {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXTimeOut = 1;
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXPacketRdy = 0;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_SIERxTimeOutEn = 0;
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__getPacketEn) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xd;
			}
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXPacketRdy = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xf;
			} else {
			    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt 
				    = ((2 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0, 2)))
				        ? 1 : ((3 == 
						(3 
						 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0, 2)))
					        ? 2
					        : 0x10));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn), 2));
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_ACKRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn), 5));
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 3;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
					    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
					    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)) 
		   | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
		  | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
		 | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
		| (7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	       | (8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	      | (9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) 
	     | (0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt)))) {
	    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 4;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOldest 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
		} else {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 5;
		}
	    } else {
		if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 6;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_CRCError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 0));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_bitStuffError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 1));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_dataSequence 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte), 6));
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x10;
		    } else {
			if ((6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			    if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 7;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOld 
				    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
			    } else {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 5;
			    }
			} else {
			    if ((7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 8;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXStreamStatus 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn;
				}
			    } else {
				if ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt 
					= ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatus)))
					    ? 9 : 5);
				} else {
				    if ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
					if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__endPointReady) {
					    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXFifoFull) {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xa;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXOverflow = 1;
					    } else {
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xb;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoWEn = 1;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoData 
						    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOldest;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOldest 
						    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByteOld;
						vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByteOld 
						    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXByte;
					    }
					} else {
					    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x12;
					}
				    } else {
					vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xb;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXFifoWEn = 0;
		if (((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) 
		     & (1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXStreamStatusIn))))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0x11;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
		} else {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 5;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__RXDataIn;
		    }
		}
	    } else {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 9;
		} else {
		    if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__CurrState_slvGetPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveGetPacket.__PVT__NextState_slvGetPkt = 0xb;
		    }
		}
	    }
	}
    }
}
