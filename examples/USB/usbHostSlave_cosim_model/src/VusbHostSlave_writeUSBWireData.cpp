// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_writeUSBWireData.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_writeUSBWireData) {
    // Reset internal values
    // Reset structure values
    __PVT__TxBitsIn = VL_RAND_RESET_I(2);
    __PVT__TxCtrlIn = VL_RAND_RESET_I(1);
    __PVT__USBWireWEn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__TxBitsOut = VL_RAND_RESET_I(2);
    __PVT__TxDataOutTick = VL_RAND_RESET_I(1);
    __PVT__TxCtrlOut = VL_RAND_RESET_I(1);
    __PVT__USBWireRdy = VL_RAND_RESET_I(1);
    __PVT__TxWireActiveDrive = VL_RAND_RESET_I(1);
    __PVT__buffer0 = VL_RAND_RESET_I(3);
    __PVT__buffer1 = VL_RAND_RESET_I(3);
    __PVT__buffer2 = VL_RAND_RESET_I(3);
    __PVT__buffer3 = VL_RAND_RESET_I(3);
    __PVT__bufferCnt = VL_RAND_RESET_I(3);
    __PVT__bufferInIndex = VL_RAND_RESET_I(2);
    __PVT__bufferOutIndex = VL_RAND_RESET_I(2);
    __PVT__decBufferCnt = VL_RAND_RESET_I(1);
    __PVT__i = VL_RAND_RESET_I(5);
    __PVT__incBufferCnt = VL_RAND_RESET_I(1);
    __PVT__fullSpeedTick = VL_RAND_RESET_I(1);
    __PVT__lowSpeedTick = VL_RAND_RESET_I(1);
    __PVT__bufferInStMachCurrState = VL_RAND_RESET_I(2);
    __PVT__bufferOutStMachCurrState = VL_RAND_RESET_I(2);
    __Vdly__bufferCnt = VL_RAND_RESET_I(3);
    __Vdly__incBufferCnt = VL_RAND_RESET_I(1);
    __Vdly__bufferInIndex = VL_RAND_RESET_I(2);
    __Vdly__buffer0 = VL_RAND_RESET_I(3);
    __Vdly__buffer1 = VL_RAND_RESET_I(3);
    __Vdly__buffer2 = VL_RAND_RESET_I(3);
    __Vdly__buffer3 = VL_RAND_RESET_I(3);
    __Vdly__USBWireRdy = VL_RAND_RESET_I(1);
    __Vdly__bufferInStMachCurrState = VL_RAND_RESET_I(2);
    __Vdly__i = VL_RAND_RESET_I(5);
    __Vdly__fullSpeedTick = VL_RAND_RESET_I(1);
    __Vdly__lowSpeedTick = VL_RAND_RESET_I(1);
    __Vdly__bufferOutIndex = VL_RAND_RESET_I(2);
    __Vdly__decBufferCnt = VL_RAND_RESET_I(1);
    __Vdly__TxBitsOut = VL_RAND_RESET_I(2);
    __Vdly__TxCtrlOut = VL_RAND_RESET_I(1);
    __Vdly__TxDataOutTick = VL_RAND_RESET_I(1);
    __Vdly__bufferOutStMachCurrState = VL_RAND_RESET_I(2);
}

void VusbHostSlave_writeUSBWireData::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_writeUSBWireData::~VusbHostSlave_writeUSBWireData() {
}

//--------------------
// Internal Methods

void VusbHostSlave_writeUSBWireData::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_writeUSBWireData::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__USBWireRdy;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxDataOutTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxDataOutTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferCnt;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//writeUSBWireData.v:128
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferCnt = 0;
    } else {
	if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__incBufferCnt) 
	     & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__decBufferCnt)))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferCnt 
		= (7 & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferCnt)));
	} else {
	    if (((~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__incBufferCnt)) 
		 & (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__decBufferCnt))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferCnt 
		    = (7 & ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferCnt) 
			    - (IData)(1)));
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__incBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__incBufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__decBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__decBufferCnt;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//writeUSBWireData.v:224
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__decBufferCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxDataOutTick = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutStMachCurrState = 1;
    } else {
	if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutStMachCurrState))) {
	    if ((((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__fullSpeedRate) 
		  & (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__fullSpeedTick)) 
		 | ((~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__fullSpeedRate)) 
		    & (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__lowSpeedTick)))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxDataOutTick 
		    = (1 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxDataOutTick)));
		if ((0 == VL_EXTEND_II(32,3, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferCnt)))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut = 0;
		} else {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutStMachCurrState = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__decBufferCnt = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutIndex 
			= (3 & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutIndex)));
		    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutIndex))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut 
			    = (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer0), 1, 2));
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut 
			    = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer0), 0));
		    } else {
			if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutIndex))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut 
				= (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer1), 1, 2));
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut 
				= (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer1), 0));
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutIndex))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut 
				    = (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer2), 1, 2));
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut 
				    = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer2), 0));
			    } else {
				if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutIndex))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut 
					= (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer3), 1, 2));
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut 
					= (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer3), 0));
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutStMachCurrState))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__decBufferCnt = 0;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutStMachCurrState = 1;
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferOutStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferOutStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__decBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__decBufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__fullSpeedTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__fullSpeedTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__lowSpeedTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__lowSpeedTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxDataOutTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxDataOutTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxBitsOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__TxCtrlOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer0 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer0;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer1 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer1;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer2;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer3 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer3;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//writeUSBWireData.v:199
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__i = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__fullSpeedTick = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__lowSpeedTick = 0;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__i 
	    = (0x1f & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__i)));
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__fullSpeedTick 
	    = (0 == (3 & VL_SEL_IIII(2,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__i), 0, 2)));
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__lowSpeedTick 
	    = (0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__i));
    }
    // ALWAYS at trunk/RTL/serialInterfaceEngine//writeUSBWireData.v:285
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxWireActiveDrive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlOut;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//writeUSBWireData.v:145
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__incBufferCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInIndex = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer0 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer1 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer2 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer3 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__USBWireRdy = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInStMachCurrState = 0;
    } else {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInStMachCurrState))) {
	    if ((4 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferCnt))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInStMachCurrState = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__USBWireRdy = 1;
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInStMachCurrState))) {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__USBWireWEn) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__incBufferCnt = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__USBWireRdy = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInIndex 
			= (3 & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInIndex)));
		    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInIndex))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer0 
			    = VL_CONCAT_III(3,2,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsIn), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlIn));
		    } else {
			if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInIndex))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer1 
				= VL_CONCAT_III(3,2,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsIn), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlIn));
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInIndex))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer2 
				    = VL_CONCAT_III(3,2,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsIn), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlIn));
			    } else {
				if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInIndex))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer3 
					= VL_CONCAT_III(3,2,1, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxBitsIn), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlIn));
				}
			    }
			}
		    }
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInStMachCurrState = 2;
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInStMachCurrState))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__incBufferCnt = 0;
		    if ((3 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferCnt))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInStMachCurrState = 1;
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__USBWireRdy = 1;
		    } else {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInStMachCurrState = 0;
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__i 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__i;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__fullSpeedTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__fullSpeedTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__lowSpeedTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__lowSpeedTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferInStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferInStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer3 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer3;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer2;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer1 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer1;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__buffer0 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__buffer0;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__incBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__incBufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__bufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__bufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__USBWireRdy 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vdly__USBWireRdy;
}

void VusbHostSlave_writeUSBWireData::_settle__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_writeUSBWireData::_settle__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/serialInterfaceEngine//writeUSBWireData.v:285
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxWireActiveDrive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__PVT__TxCtrlOut;
}
