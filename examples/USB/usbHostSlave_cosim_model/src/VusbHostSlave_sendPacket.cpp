// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_sendPacket.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_sendPacket) {
    // Reset internal values
    // Reset structure values
    __PVT__HCTxPortGnt = VL_RAND_RESET_I(1);
    __PVT__HCTxPortRdy = VL_RAND_RESET_I(1);
    __PVT__PID = VL_RAND_RESET_I(4);
    __PVT__TxAddr = VL_RAND_RESET_I(7);
    __PVT__TxEndP = VL_RAND_RESET_I(4);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__fifoData = VL_RAND_RESET_I(8);
    __PVT__fifoEmpty = VL_RAND_RESET_I(1);
    __PVT__fullSpeedPolarity = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__HCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__HCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__fifoReadEn = VL_RAND_RESET_I(1);
    __PVT__frameNum = VL_RAND_RESET_I(11);
    __PVT__sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__next_HCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortData = VL_RAND_RESET_I(8);
    __PVT__next_HCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__next_HCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__next_fifoReadEn = VL_RAND_RESET_I(1);
    __PVT__next_frameNum = VL_RAND_RESET_I(11);
    __PVT__next_sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__PIDNotPID = VL_RAND_RESET_I(8);
    __PVT__CurrState_sndPkt = VL_RAND_RESET_I(5);
    __PVT__NextState_sndPkt = VL_RAND_RESET_I(5);
    __Vdly__CurrState_sndPkt = VL_RAND_RESET_I(5);
    __Vdly__sendPacketRdy = VL_RAND_RESET_I(1);
    __Vdly__HCTxPortReq = VL_RAND_RESET_I(1);
    __Vdly__HCTxPortWEn = VL_RAND_RESET_I(1);
    __Vdly__HCTxPortData = VL_RAND_RESET_I(8);
    __Vdly__HCTxPortCntl = VL_RAND_RESET_I(8);
    __Vdly__frameNum = VL_RAND_RESET_I(11);
    __Vdly__fifoReadEn = VL_RAND_RESET_I(1);
}

void VusbHostSlave_sendPacket::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_sendPacket::~VusbHostSlave_sendPacket() {
}

//--------------------
// Internal Methods

void VusbHostSlave_sendPacket::_sequent__TOP__v__u_usbHostControl__u_sendPacket__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacket::_sequent__TOP__v__u_usbHostControl__u_sendPacket__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__CurrState_sndPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__frameNum 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__fifoReadEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoReadEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortCntl;
    // ALWAYS at trunk/RTL/hostController//sendPacket.v:321
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__CurrState_sndPkt 
	= ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt));
    // ALWAYS at trunk/RTL/hostController//sendPacket.v:332
    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__rst) {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__sendPacketRdy = 1;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortReq = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortWEn = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortData = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortCntl = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__frameNum = 0;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__fifoReadEn = 0;
    } else {
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__sendPacketRdy 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_sendPacketRdy;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortReq 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortReq;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortWEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortData 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__frameNum 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_frameNum;
	vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__fifoReadEn 
	    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_fifoReadEn;
    }
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__CurrState_sndPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__frameNum;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__sendPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoReadEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__fifoReadEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__Vdly__HCTxPortWEn;
}

void VusbHostSlave_sendPacket::_settle__TOP__v__u_usbHostControl__u_sendPacket__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacket::_settle__TOP__v__u_usbHostControl__u_sendPacket__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacket.v:140
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PIDNotPID 
	= VL_CONCAT_III(8,4,4, (0xf & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID))), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID));
}

void VusbHostSlave_sendPacket::_combo__TOP__v__u_usbHostControl__u_sendPacket__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacket::_combo__TOP__v__u_usbHostControl__u_sendPacket__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacket.v:140
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PIDNotPID 
	= VL_CONCAT_III(8,4,4, (0xf & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID))), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID));
}

void VusbHostSlave_sendPacket::_combo__TOP__v__u_usbHostControl__u_sendPacket__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacket::_combo__TOP__v__u_usbHostControl__u_sendPacket__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacket.v:151
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_frameNum 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_fifoReadEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoReadEn;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	     | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	    | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	   | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketWEn) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 2;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_sendPacketRdy = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortGnt) 
			 & ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)) 
			    & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fullSpeedPolarity))))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x15;
		    } else {
			if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortGnt) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 3;
			}
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_sendPacketRdy = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortReq = 0;
		    } else {
			if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 4;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
				    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PIDNotPID;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 2;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt 
				    = (((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)) 
					| (0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)))
				        ? 0xe : ((5 
						  == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID))
						  ? 0xa
						  : 
						 ((((1 
						     == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)) 
						    | (9 
						       == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID))) 
						   | (0xd 
						      == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)))
						   ? 6
						   : 5)));
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x11;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					    = VL_CONCAT_III(8,1,7, 
							    (1 
							     & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxEndP), 0)), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxAddr));
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 8;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					    = VL_EXTEND_II(8,3, 
							   (7 
							    & VL_SEL_IIII(3,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxEndP), 1, 3)));
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)) 
		   | (0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
		  | (9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
		 | (0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
		| (0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	       | (0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	      | (0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	     | (0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)))) {
	    if ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
	    } else {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 7;
		} else {
		    if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_frameNum 
			    = (0x7ff & ((IData)(1) 
					+ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum)));
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
		    } else {
			if ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x12;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
				    = (0xff & VL_SEL_IIII(8,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum), 0, 8));
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
			    }
			} else {
			    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 9;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					= VL_EXTEND_II(8,3, 
						       (7 
							& VL_SEL_IIII(3,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum), 8, 3)));
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
				}
			    } else {
				if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xb;
				} else {
				    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoData;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x13;
				    } else {
					if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x14;
					    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_fifoReadEn = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt 
		    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoEmpty)
		        ? 0x10 : 0xd);
	    } else {
		if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
		} else {
		    if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xf;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 4;
			}
		    } else {
			if ((0x13 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xe;
			} else {
			    if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_fifoReadEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xc;
			    } else {
				if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x16;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 6;
				    }
				} else {
				    if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
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

void VusbHostSlave_sendPacket::_settle__TOP__v__u_usbHostControl__u_sendPacket__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_sendPacket::_settle__TOP__v__u_usbHostControl__u_sendPacket__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/hostController//sendPacket.v:151
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_sendPacketRdy 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortReq 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortReq;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortWEn;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortData;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortCntl;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_frameNum 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum;
    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_fifoReadEn 
	= vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoReadEn;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	     | (5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	    | (3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	   | (4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	  | (6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	 | (7 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
	    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__sendPacketWEn) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 2;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_sendPacketRdy = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		    if (((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortGnt) 
			 & ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)) 
			    & (~ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fullSpeedPolarity))))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x15;
		    } else {
			if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortGnt) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 3;
			}
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_sendPacketRdy = 1;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortReq = 0;
		    } else {
			if ((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 4;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
				    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PIDNotPID;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 2;
			    }
			} else {
			    if ((4 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt 
				    = (((3 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)) 
					| (0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)))
				        ? 0xe : ((5 
						  == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID))
						  ? 0xa
						  : 
						 ((((1 
						     == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)) 
						    | (9 
						       == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID))) 
						   | (0xd 
						      == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__PID)))
						   ? 6
						   : 5)));
			    } else {
				if ((6 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x11;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					    = VL_CONCAT_III(8,1,7, 
							    (1 
							     & VL_BITSEL_IIII(1,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxEndP), 0)), (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxAddr));
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
				    }
				} else {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 8;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					    = VL_EXTEND_II(8,3, 
							   (7 
							    & VL_SEL_IIII(3,4,2,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__TxEndP), 1, 3)));
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)) 
		   | (0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
		  | (9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
		 | (0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
		| (0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	       | (0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	      | (0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) 
	     | (0xd == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt)))) {
	    if ((8 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
	    } else {
		if ((0x11 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 7;
		} else {
		    if ((9 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_frameNum 
			    = (0x7ff & ((IData)(1) 
					+ (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum)));
			vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
		    } else {
			if ((0xa == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x12;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
				    = (0xff & VL_SEL_IIII(8,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum), 0, 8));
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
			    }
			} else {
			    if ((0xb == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 9;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					= VL_EXTEND_II(8,3, 
						       (7 
							& VL_SEL_IIII(3,11,4,32, (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__frameNum), 8, 3)));
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
				}
			    } else {
				if ((0x12 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
				    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xb;
				} else {
				    if ((0xc == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData 
					    = vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoData;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 3;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x13;
				    } else {
					if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x14;
					    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_fifoReadEn = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((0xe == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt 
		    = ((IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__fifoEmpty)
		        ? 0x10 : 0xd);
	    } else {
		if ((0xf == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
		    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
		} else {
		    if ((0x10 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xf;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 4;
			}
		    } else {
			if ((0x13 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
			    vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xe;
			} else {
			    if ((0x14 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_fifoReadEn = 0;
				vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0xc;
			    } else {
				if ((0x15 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
				    if (vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__HCTxPortRdy) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 0x16;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 1;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortData = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortCntl = 6;
				    }
				} else {
				    if ((0x16 == (IData)(vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__CurrState_sndPkt))) {
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__next_HCTxPortWEn = 0;
					vlSymsp->TOP__v__u_usbHostControl__u_sendPacket.__PVT__NextState_sndPkt = 5;
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
