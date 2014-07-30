// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_getPacket.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_getPacket) {
    // Reset internal values
    // Reset structure values
    __PVT__RXDataIn = VL_RAND_RESET_I(8);
    __PVT__RXDataValid = VL_RAND_RESET_I(1);
    __PVT__RXFifoFull = VL_RAND_RESET_I(1);
    __PVT__RXStreamStatusIn = VL_RAND_RESET_I(8);
    __PVT__SIERxTimeOut = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__getPacketEn = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__RXFifoData = VL_RAND_RESET_I(8);
    __PVT__RXFifoWEn = VL_RAND_RESET_I(1);
    __PVT__RXPacketRdy = VL_RAND_RESET_I(1);
    __PVT__RXPktStatus = VL_RAND_RESET_I(8);
    __PVT__RxPID = VL_RAND_RESET_I(4);
    __PVT__SIERxTimeOutEn = VL_RAND_RESET_I(1);
    __PVT__next_RXFifoData = VL_RAND_RESET_I(8);
    __PVT__next_RXFifoWEn = VL_RAND_RESET_I(1);
    __PVT__next_RXPacketRdy = VL_RAND_RESET_I(1);
    __PVT__next_RxPID = VL_RAND_RESET_I(4);
    __PVT__next_SIERxTimeOutEn = VL_RAND_RESET_I(1);
    __PVT__ACKRxed = VL_RAND_RESET_I(1);
    __PVT__next_ACKRxed = VL_RAND_RESET_I(1);
    __PVT__CRCError = VL_RAND_RESET_I(1);
    __PVT__next_CRCError = VL_RAND_RESET_I(1);
    __PVT__NAKRxed = VL_RAND_RESET_I(1);
    __PVT__next_NAKRxed = VL_RAND_RESET_I(1);
    __PVT__RXByteOld = VL_RAND_RESET_I(8);
    __PVT__next_RXByteOld = VL_RAND_RESET_I(8);
    __PVT__RXByteOldest = VL_RAND_RESET_I(8);
    __PVT__next_RXByteOldest = VL_RAND_RESET_I(8);
    __PVT__RXByte = VL_RAND_RESET_I(8);
    __PVT__next_RXByte = VL_RAND_RESET_I(8);
    __PVT__RXOverflow = VL_RAND_RESET_I(1);
    __PVT__next_RXOverflow = VL_RAND_RESET_I(1);
    __PVT__RXStreamStatus = VL_RAND_RESET_I(8);
    __PVT__next_RXStreamStatus = VL_RAND_RESET_I(8);
    __PVT__RXTimeOut = VL_RAND_RESET_I(1);
    __PVT__next_RXTimeOut = VL_RAND_RESET_I(1);
    __PVT__bitStuffError = VL_RAND_RESET_I(1);
    __PVT__next_bitStuffError = VL_RAND_RESET_I(1);
    __PVT__dataSequence = VL_RAND_RESET_I(1);
    __PVT__next_dataSequence = VL_RAND_RESET_I(1);
    __PVT__stallRxed = VL_RAND_RESET_I(1);
    __PVT__next_stallRxed = VL_RAND_RESET_I(1);
    __PVT__CurrState_getPkt = VL_RAND_RESET_I(5);
    __PVT__NextState_getPkt = VL_RAND_RESET_I(5);
    __Vdly__CurrState_getPkt = VL_RAND_RESET_I(5);
    __Vdly__RXByteOld = VL_RAND_RESET_I(8);
    __Vdly__RXByteOldest = VL_RAND_RESET_I(8);
    __Vdly__CRCError = VL_RAND_RESET_I(1);
    __Vdly__bitStuffError = VL_RAND_RESET_I(1);
    __Vdly__RXOverflow = VL_RAND_RESET_I(1);
    __Vdly__RXTimeOut = VL_RAND_RESET_I(1);
    __Vdly__NAKRxed = VL_RAND_RESET_I(1);
    __Vdly__stallRxed = VL_RAND_RESET_I(1);
    __Vdly__ACKRxed = VL_RAND_RESET_I(1);
    __Vdly__dataSequence = VL_RAND_RESET_I(1);
    __Vdly__RXByte = VL_RAND_RESET_I(8);
    __Vdly__RXStreamStatus = VL_RAND_RESET_I(8);
    __Vdly__RXPacketRdy = VL_RAND_RESET_I(1);
    __Vdly__RXFifoWEn = VL_RAND_RESET_I(1);
    __Vdly__RXFifoData = VL_RAND_RESET_I(8);
    __Vdly__RxPID = VL_RAND_RESET_I(4);
    __Vdly__SIERxTimeOutEn = VL_RAND_RESET_I(1);
}

void VusbHostSlave_getPacket::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_getPacket::~VusbHostSlave_getPacket() {
}

//--------------------
// Internal Methods

void VusbHostSlave_getPacket::_sequent__TOP__v__u_usbHostControl__u_getPacket__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_getPacket::_sequent__TOP__v__u_usbHostControl__u_getPacket__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__CurrState_getPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOld 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOld;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOldest 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOldest;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXStreamStatus 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByte 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RxPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoData 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoData;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__dataSequence 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__ACKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__stallRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__stallRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__NAKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NAKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXTimeOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXOverflow 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__bitStuffError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__CRCError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOutEn;
    // ALWAYS at trunk/RTL/hostController//getPacket.v:333
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__CurrState_getPkt 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__rst)
	    ? 0xc : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt));
    // ALWAYS at trunk/RTL/hostController//getPacket.v:344
    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOld = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOldest = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__CRCError = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__bitStuffError = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXOverflow = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXTimeOut = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__NAKRxed = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__stallRxed = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__ACKRxed = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__dataSequence = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByte = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXStreamStatus = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXPacketRdy = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoWEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoData = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RxPID = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__SIERxTimeOutEn = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOld 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOld;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOldest 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOldest;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__CRCError 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_CRCError;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__bitStuffError 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_bitStuffError;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXOverflow 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXTimeOut 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__NAKRxed 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_NAKRxed;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__stallRxed 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_stallRxed;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__ACKRxed 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_ACKRxed;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__dataSequence 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_dataSequence;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByte 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXStreamStatus 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXPacketRdy 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXPacketRdy;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoWEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoData 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoData;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RxPID 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RxPID;
	vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__SIERxTimeOutEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_SIERxTimeOutEn;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__CurrState_getPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOld 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOld;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOldest 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByteOldest;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXByte;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXStreamStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RxPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RxPID;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoData 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXFifoData;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__dataSequence 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__dataSequence;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__ACKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__ACKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__stallRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__stallRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NAKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__NAKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXTimeOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXTimeOut;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXOverflow 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__RXOverflow;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__bitStuffError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__bitStuffError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CRCError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__CRCError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__Vdly__SIERxTimeOutEn;
    // ALWAYS at trunk/RTL/hostController//getPacket.v:139
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPktStatus 
	= VL_CONCAT_III(8,1,7, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__dataSequence), 
			VL_CONCAT_III(7,1,6, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__ACKRxed), 
				      VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__stallRxed), 
						    VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NAKRxed), 
								  VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXTimeOut), 
										VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXOverflow), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__bitStuffError), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CRCError))))))));
}

void VusbHostSlave_getPacket::_settle__TOP__v__u_usbHostControl__u_getPacket__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_getPacket::_settle__TOP__v__u_usbHostControl__u_getPacket__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//getPacket.v:139
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPktStatus 
	= VL_CONCAT_III(8,1,7, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__dataSequence), 
			VL_CONCAT_III(7,1,6, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__ACKRxed), 
				      VL_CONCAT_III(6,1,5, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__stallRxed), 
						    VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NAKRxed), 
								  VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXTimeOut), 
										VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXOverflow), 
										VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__bitStuffError), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CRCError))))))));
}

void VusbHostSlave_getPacket::_combo__TOP__v__u_usbHostControl__u_getPacket__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_getPacket::_combo__TOP__v__u_usbHostControl__u_getPacket__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//getPacket.v:158
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_CRCError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_NAKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NAKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_stallRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__stallRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_ACKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_dataSequence 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RxPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOldest 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOldest;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOld 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOld;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoData 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoData;
    if (((((((((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)) 
	       | (0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	      | (0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	     | (0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	    | (0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	   | (0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	  | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	 | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)))) {
	if ((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xf;
	} else {
	    if ((0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_CRCError = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_bitStuffError = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_NAKRxed = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_stallRxed = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_ACKRxed = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_dataSequence = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_SIERxTimeOutEn = 1;
		if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOut) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut = 1;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xe;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		    }
		}
	    } else {
		if ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		    if ((0 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RxPID 
			    = (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0, 4));
		    } else {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut = 1;
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXPacketRdy = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_SIERxTimeOutEn = 0;
			if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__getPacketEn) {
			    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xd;
			}
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXPacketRdy = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xf;
			} else {
			    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt 
				    = ((2 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0, 2)))
				        ? 1 : ((3 == 
						(3 
						 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0, 2)))
					        ? 2
					        : 0x10));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 2));
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_NAKRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 3));
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_stallRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 4));
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_ACKRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 5));
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 3;
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
					    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
					    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)) 
		   | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
		  | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
		 | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
		| (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	       | (8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	      | (9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	     | (0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)))) {
	    if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 4;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOldest 
			= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
		} else {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 5;
		}
	    } else {
		if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 6;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_CRCError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0));
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_bitStuffError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 1));
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_dataSequence 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 6));
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
		    } else {
			if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			    if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))) {
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 7;
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOld 
				    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
			    } else {
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 5;
			    }
			} else {
			    if ((7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 8;
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
					= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
					= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
				}
			    } else {
				if ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt 
					= ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))
					    ? 9 : 5);
				} else {
				    if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
					if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoFull) {
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xa;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow = 1;
					} else {
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xb;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoWEn = 1;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoData 
						= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOldest;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOldest 
						= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOld;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOld 
						= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
					}
				    } else {
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xb;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoWEn = 0;
		if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) 
		     & (1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn))))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x11;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 5;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		    }
		}
	    } else {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 9;
		}
	    }
	}
    }
}

void VusbHostSlave_getPacket::_settle__TOP__v__u_usbHostControl__u_getPacket__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_getPacket::_settle__TOP__v__u_usbHostControl__u_getPacket__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//getPacket.v:158
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_CRCError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CRCError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_bitStuffError 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__bitStuffError;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXOverflow;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXTimeOut;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_NAKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NAKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_stallRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__stallRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_ACKRxed 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__ACKRxed;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_dataSequence 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__dataSequence;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_SIERxTimeOutEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOutEn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RxPID 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RxPID;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOldest 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOldest;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOld 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOld;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoData 
	= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoData;
    if (((((((((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)) 
	       | (0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	      | (0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	     | (0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	    | (0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	   | (0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	  | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	 | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)))) {
	if ((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xf;
	} else {
	    if ((0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_CRCError = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_bitStuffError = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_NAKRxed = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_stallRxed = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_ACKRxed = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_dataSequence = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_SIERxTimeOutEn = 1;
		if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__SIERxTimeOut) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut = 1;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xe;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		    }
		}
	    } else {
		if ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		    if ((0 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RxPID 
			    = (0xf & VL_SEL_IIII(4,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0, 4));
		    } else {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXTimeOut = 1;
		    }
		} else {
		    if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXPacketRdy = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_SIERxTimeOutEn = 0;
			if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__getPacketEn) {
			    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xd;
			}
		    } else {
			if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXPacketRdy = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xf;
			} else {
			    if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt 
				    = ((2 == (3 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0, 2)))
				        ? 1 : ((3 == 
						(3 
						 & VL_SEL_IIII(2,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0, 2)))
					        ? 2
					        : 0x10));
			    } else {
				if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 2));
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_NAKRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 3));
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_stallRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 4));
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_ACKRxed 
					    = (1 & 
					       VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn), 5));
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 3;
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
					    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
					    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)) 
		   | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
		  | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
		 | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
		| (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	       | (8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	      | (9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) 
	     | (0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt)))) {
	    if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 4;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOldest 
			= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
		} else {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 5;
		}
	    } else {
		if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 6;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_CRCError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 0));
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_bitStuffError 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 1));
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_dataSequence 
			    = (1 & VL_BITSEL_IIII(1,8,3,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte), 6));
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x10;
		    } else {
			if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
			    if ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))) {
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 7;
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOld 
				    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
			    } else {
				vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 5;
			    }
			} else {
			    if ((7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 8;
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
					= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
					= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
				}
			    } else {
				if ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt 
					= ((1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatus)))
					    ? 9 : 5);
				} else {
				    if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
					if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXFifoFull) {
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xa;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXOverflow = 1;
					} else {
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xb;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoWEn = 1;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoData 
						= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOldest;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOldest 
						= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByteOld;
					    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByteOld 
						= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXByte;
					}
				    } else {
					vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0xb;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXFifoWEn = 0;
		if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) 
		     & (1 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn))))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 0x11;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			= vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		} else {
		    if (vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataValid) {
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 5;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXByte 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXDataIn;
			vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__next_RXStreamStatus 
			    = vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__RXStreamStatusIn;
		    }
		}
	    } else {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__CurrState_getPkt))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_getPacket.__PVT__NextState_getPkt = 9;
		}
	    }
	}
    }
}
