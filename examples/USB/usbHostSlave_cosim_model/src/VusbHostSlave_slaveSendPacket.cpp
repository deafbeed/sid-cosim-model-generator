// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_slaveSendPacket.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_slaveSendPacket) {
    // Reset internal values
    // Reset structure values
    __PVT__PID = VL_RAND_RESET_I(4);
    __PVT__SCTxPortGnt = VL_RAND_RESET_I(1);
    __PVT__SCTxPortRdy = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__fifoData = VL_RAND_RESET_I(8);
    __PVT__fifoEmpty = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__sendPacketWEn = VL_RAND_RESET_I(1);
    __PVT__SCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__SCTxPortData = VL_RAND_RESET_I(8);
    __PVT__SCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__SCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__fifoReadEn = VL_RAND_RESET_I(1);
    __PVT__sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__next_SCTxPortCntl = VL_RAND_RESET_I(8);
    __PVT__next_SCTxPortData = VL_RAND_RESET_I(8);
    __PVT__next_SCTxPortReq = VL_RAND_RESET_I(1);
    __PVT__next_SCTxPortWEn = VL_RAND_RESET_I(1);
    __PVT__next_fifoReadEn = VL_RAND_RESET_I(1);
    __PVT__next_sendPacketRdy = VL_RAND_RESET_I(1);
    __PVT__PIDNotPID = VL_RAND_RESET_I(8);
    __PVT__CurrState_slvSndPkt = VL_RAND_RESET_I(4);
    __PVT__NextState_slvSndPkt = VL_RAND_RESET_I(4);
    __Vdly__CurrState_slvSndPkt = VL_RAND_RESET_I(4);
    __Vdly__sendPacketRdy = VL_RAND_RESET_I(1);
    __Vdly__SCTxPortReq = VL_RAND_RESET_I(1);
    __Vdly__SCTxPortWEn = VL_RAND_RESET_I(1);
    __Vdly__SCTxPortData = VL_RAND_RESET_I(8);
    __Vdly__SCTxPortCntl = VL_RAND_RESET_I(8);
    __Vdly__fifoReadEn = VL_RAND_RESET_I(1);
}

void VusbHostSlave_slaveSendPacket::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_slaveSendPacket::~VusbHostSlave_slaveSendPacket() {
}

//--------------------
// Internal Methods

void VusbHostSlave_slaveSendPacket::_sequent__TOP__v__u_usbSlaveControl__u_slaveSendPacket__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveSendPacket::_sequent__TOP__v__u_usbSlaveControl__u_slaveSendPacket__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__CurrState_slvSndPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__fifoReadEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoReadEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortCntl;
    // ALWAYS at trunk/RTL/slaveController//slaveSendPacket.v:232
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__CurrState_slvSndPkt 
	= ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__rst)
	    ? 0 : (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt));
    // ALWAYS at trunk/RTL/slaveController//slaveSendPacket.v:243
    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__sendPacketRdy = 1;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortReq = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortWEn = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortData = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortCntl = 0;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__fifoReadEn = 0;
    } else {
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__sendPacketRdy 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_sendPacketRdy;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortReq 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortReq;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortWEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortData 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortCntl 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl;
	vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__fifoReadEn 
	    = vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_fifoReadEn;
    }
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__CurrState_slvSndPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__sendPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoReadEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__fifoReadEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vdly__SCTxPortWEn;
}

void VusbHostSlave_slaveSendPacket::_settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveSendPacket::_settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveSendPacket.v:124
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PIDNotPID 
	= VL_CONCAT_III(8,4,4, (0xf & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID))), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID));
}

void VusbHostSlave_slaveSendPacket::_combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveSendPacket::_combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveSendPacket.v:124
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PIDNotPID 
	= VL_CONCAT_III(8,4,4, (0xf & (~ (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID))), (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID));
}

void VusbHostSlave_slaveSendPacket::_settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveSendPacket::_settle__TOP__v__u_usbSlaveControl__u_slaveSendPacket__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveSendPacket.v:135
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_sendPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_fifoReadEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoReadEn;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	     | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	    | (0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	   | (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	  | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	 | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketWEn) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 2;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_sendPacketRdy = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortGnt) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 3;
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 1;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_sendPacketRdy = 1;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortReq = 0;
		    } else {
			if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 5;
			} else {
			    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
				if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 4;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PIDNotPID;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl = 2;
				}
			    } else {
				if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 0;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt 
					= (((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID)) 
					    | (0xb 
					       == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID)))
					    ? 8 : 0xb);
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoData;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl = 3;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 0xc;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 0xd;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_fifoReadEn = 1;
	    }
	} else {
	    if ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt 
		    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoEmpty)
		        ? 0xa : 7);
	    } else {
		if ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 5;
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 9;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData = 0;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl = 4;
			}
		    } else {
			if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 0;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 8;
			} else {
			    if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_fifoReadEn = 0;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 6;
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_slaveSendPacket::_combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_slaveSendPacket::_combo__TOP__v__u_usbSlaveControl__u_slaveSendPacket__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/slaveController//slaveSendPacket.v:135
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_sendPacketRdy 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketRdy;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortReq 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortReq;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortWEn;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortData;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortCntl;
    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_fifoReadEn 
	= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoReadEn;
    if (((((((((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt)) 
	       | (1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	      | (2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	     | (5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	    | (0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	   | (3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	  | (4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) 
	 | (6 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt)))) {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
	    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 1;
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__sendPacketWEn) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 2;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_sendPacketRdy = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortReq = 1;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortGnt) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 3;
		    }
		} else {
		    if ((5 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 1;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_sendPacketRdy = 1;
			vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortReq = 0;
		    } else {
			if ((0xb == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 5;
			} else {
			    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
				if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 4;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PIDNotPID;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl = 2;
				}
			    } else {
				if ((4 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 0;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt 
					= (((3 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID)) 
					    | (0xb 
					       == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__PID)))
					    ? 8 : 0xb);
				} else {
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 1;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData 
					= vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoData;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl = 3;
				    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 0xc;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((7 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
	    if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 0xd;
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_fifoReadEn = 1;
	    }
	} else {
	    if ((8 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt 
		    = ((IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__fifoEmpty)
		        ? 0xa : 7);
	    } else {
		if ((9 == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 0;
		    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 5;
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			if (vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__SCTxPortRdy) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 9;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 1;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortData = 0;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortCntl = 4;
			}
		    } else {
			if ((0xc == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_SCTxPortWEn = 0;
			    vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 8;
			} else {
			    if ((0xd == (IData)(vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__CurrState_slvSndPkt))) {
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__next_fifoReadEn = 0;
				vlSymsp->TOP__v__u_usbSlaveControl__u_slaveSendPacket.__PVT__NextState_slvSndPkt = 6;
			    }
			}
		    }
		}
	    }
	}
    }
}
