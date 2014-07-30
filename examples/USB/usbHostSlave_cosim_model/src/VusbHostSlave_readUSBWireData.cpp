// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_readUSBWireData.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_readUSBWireData) {
    // Reset internal values
    // Reset structure values
    __PVT__RxBitsIn = VL_RAND_RESET_I(2);
    __PVT__RxDataInTick = VL_RAND_RESET_I(1);
    __PVT__SIERxRdyIn = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__fullSpeedRate = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__TxWireActiveDrive = VL_RAND_RESET_I(1);
    __PVT__RxBitsOut = VL_RAND_RESET_I(2);
    __PVT__SIERxWEn = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOut = VL_RAND_RESET_I(1);
    __PVT__RxWireActive = VL_RAND_RESET_I(1);
    __PVT__noActivityTimeOutEnable = VL_RAND_RESET_I(1);
    __PVT__buffer0 = VL_RAND_RESET_I(3);
    __PVT__buffer1 = VL_RAND_RESET_I(3);
    __PVT__buffer2 = VL_RAND_RESET_I(3);
    __PVT__buffer3 = VL_RAND_RESET_I(3);
    __PVT__bufferCnt = VL_RAND_RESET_I(3);
    __PVT__bufferInIndex = VL_RAND_RESET_I(2);
    __PVT__bufferOutIndex = VL_RAND_RESET_I(2);
    __PVT__decBufferCnt = VL_RAND_RESET_I(1);
    __PVT__sampleCnt = VL_RAND_RESET_I(5);
    __PVT__incBufferCnt = VL_RAND_RESET_I(1);
    __PVT__oldRxBitsIn = VL_RAND_RESET_I(2);
    __PVT__RxBitsInReg = VL_RAND_RESET_I(2);
    __PVT__timeOutCnt = VL_RAND_RESET_I(16);
    __PVT__rxActiveCnt = VL_RAND_RESET_I(8);
    __PVT__RxWireEdgeDetect = VL_RAND_RESET_I(1);
    __PVT__RxWireActiveReg = VL_RAND_RESET_I(1);
    __PVT__RxWireActiveReg2 = VL_RAND_RESET_I(1);
    __PVT__RxBitsInSyncReg1 = VL_RAND_RESET_I(2);
    __PVT__RxBitsInSyncReg2 = VL_RAND_RESET_I(2);
    __PVT__bufferOutStMachCurrState = VL_RAND_RESET_I(2);
    __Vdly__RxBitsInSyncReg1 = VL_RAND_RESET_I(2);
    __Vdly__RxBitsInSyncReg2 = VL_RAND_RESET_I(2);
    __Vdly__bufferCnt = VL_RAND_RESET_I(3);
    __Vdly__sampleCnt = VL_RAND_RESET_I(5);
    __Vdly__incBufferCnt = VL_RAND_RESET_I(1);
    __Vdly__bufferInIndex = VL_RAND_RESET_I(2);
    __Vdly__buffer0 = VL_RAND_RESET_I(3);
    __Vdly__buffer1 = VL_RAND_RESET_I(3);
    __Vdly__buffer2 = VL_RAND_RESET_I(3);
    __Vdly__buffer3 = VL_RAND_RESET_I(3);
    __Vdly__RxDataInTick = VL_RAND_RESET_I(1);
    __Vdly__RxWireEdgeDetect = VL_RAND_RESET_I(1);
    __Vdly__RxWireActiveReg = VL_RAND_RESET_I(1);
    __Vdly__RxWireActiveReg2 = VL_RAND_RESET_I(1);
    __Vdly__RxBitsInReg = VL_RAND_RESET_I(2);
    __Vdly__oldRxBitsIn = VL_RAND_RESET_I(2);
    __Vdly__rxActiveCnt = VL_RAND_RESET_I(8);
    __Vdly__decBufferCnt = VL_RAND_RESET_I(1);
    __Vdly__bufferOutIndex = VL_RAND_RESET_I(2);
    __Vdly__RxBitsOut = VL_RAND_RESET_I(2);
    __Vdly__SIERxWEn = VL_RAND_RESET_I(1);
    __Vdly__bufferOutStMachCurrState = VL_RAND_RESET_I(2);
    __Vdly__RxWireActive = VL_RAND_RESET_I(1);
    __Vdly__timeOutCnt = VL_RAND_RESET_I(16);
    __Vdly__noActivityTimeOut = VL_RAND_RESET_I(1);
}

void VusbHostSlave_readUSBWireData::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_readUSBWireData::~VusbHostSlave_readUSBWireData() {
}

//--------------------
// Internal Methods

void VusbHostSlave_readUSBWireData::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VusbHostSlave_readUSBWireData::_sequent__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInSyncReg1 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInSyncReg1;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__rxActiveCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rxActiveCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__oldRxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__oldRxBitsIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__sampleCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__sampleCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInReg 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInReg;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferInIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferInIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg2;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxDataInTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxDataInTick;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__SIERxWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__SIERxWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsOut;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__timeOutCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__timeOutCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__noActivityTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__noActivityTimeOut;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//readUSBWireData.v:148
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferCnt = 0;
    } else {
	if (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__incBufferCnt) 
	     & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__decBufferCnt)))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferCnt 
		= (7 & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferCnt)));
	} else {
	    if (((~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__incBufferCnt)) 
		 & (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__decBufferCnt))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferCnt 
		    = (7 & ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferCnt) 
			    - (IData)(1)));
	    }
	}
    }
    // ALWAYS at trunk/RTL/serialInterfaceEngine//readUSBWireData.v:268
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__timeOutCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__noActivityTimeOut = 0;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__timeOutCnt 
	    = (0xffff & ((1 & (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__TxWireActiveDrive) 
				| (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireEdgeDetect)) 
			       | (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__noActivityTimeOutEnable))))
			  ? 0 : ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__timeOutCnt))));
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__noActivityTimeOut 
	    = (((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate) 
		& (0x48 == VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__timeOutCnt)))) 
	       | ((~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate)) 
		  & (0x240 == VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__timeOutCnt)))));
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__incBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__incBufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__decBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__decBufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__timeOutCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__timeOutCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireEdgeDetect 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireEdgeDetect;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__noActivityTimeOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__noActivityTimeOut;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//readUSBWireData.v:221
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__decBufferCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutIndex = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsOut = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__SIERxWEn = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutStMachCurrState = 0;
    } else {
	if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutStMachCurrState))) {
	    if ((0 != (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferCnt))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutStMachCurrState = 1;
	    }
	} else {
	    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutStMachCurrState))) {
		if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__SIERxRdyIn) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__SIERxWEn = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutStMachCurrState = 2;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__decBufferCnt = 1;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutIndex 
			= (3 & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutIndex)));
		    if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutIndex))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsOut 
			    = (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer0), 0, 2));
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActive 
			    = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer0), 2));
		    } else {
			if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutIndex))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsOut 
				= (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer1), 0, 2));
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActive 
				= (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer1), 2));
			} else {
			    if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutIndex))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsOut 
				    = (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer2), 0, 2));
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActive 
				    = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer2), 2));
			    } else {
				if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutIndex))) {
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsOut 
					= (3 & VL_SEL_IIII(2,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer3), 0, 2));
				    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActive 
					= (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer3), 2));
				}
			    }
			}
		    }
		}
	    } else {
		if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutStMachCurrState))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__SIERxWEn = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__decBufferCnt = 0;
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutStMachCurrState = 0;
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutStMachCurrState 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutStMachCurrState;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferOutIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferOutIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__decBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__decBufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer0 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer0;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer1 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer1;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer2;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer3 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer3;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActive 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActive;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__SIERxWEn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__SIERxWEn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsOut 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsOut;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//readUSBWireData.v:165
    if (vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rst) {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__sampleCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__incBufferCnt = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferInIndex = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer0 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer1 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer2 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer3 = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxDataInTick = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireEdgeDetect = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg = 0;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg2 = 0;
    } else {
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg2 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInReg 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInSyncReg2;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__oldRxBitsIn 
	    = vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInReg;
	vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__incBufferCnt = 0;
	if (((~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__TxWireActiveDrive)) 
	     & ((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInSyncReg2) 
		!= (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInReg)))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__sampleCnt = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireEdgeDetect = 1;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg = 1;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__rxActiveCnt = 0;
	} else {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__sampleCnt 
		= (0x1f & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__sampleCnt)));
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireEdgeDetect = 0;
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__rxActiveCnt 
		= (0xff & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rxActiveCnt)));
	    if ((((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate) 
		  & (0x1c == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rxActiveCnt)))) 
		 | ((~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate)) 
		    & (0xe0 == VL_EXTEND_II(32,8, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rxActiveCnt)))))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg = 0;
	    }
	}
	if ((((IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate) 
	      & (2 == (3 & VL_SEL_IIII(2,5,3,32, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__sampleCnt), 0, 2)))) 
	     | ((~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__fullSpeedRate)) 
		& (0x10 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__sampleCnt))))) {
	    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxDataInTick 
		= (1 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxDataInTick)));
	    if ((1 & (~ (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__TxWireActiveDrive)))) {
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__incBufferCnt = 1;
		vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferInIndex 
		    = (3 & ((IData)(1) + (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferInIndex)));
		if ((0 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferInIndex))) {
		    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer0 
			= VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg2), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__oldRxBitsIn));
		} else {
		    if ((1 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferInIndex))) {
			vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer1 
			    = VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg2), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__oldRxBitsIn));
		    } else {
			if ((2 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferInIndex))) {
			    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer2 
				= VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg2), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__oldRxBitsIn));
			} else {
			    if ((3 == (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferInIndex))) {
				vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer3 
				    = VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg2), (IData)(vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__oldRxBitsIn));
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__rxActiveCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__rxActiveCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__sampleCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__sampleCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__bufferInIndex 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__bufferInIndex;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg2;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__oldRxBitsIn 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__oldRxBitsIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInReg 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInReg;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireActiveReg 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireActiveReg;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer0 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer0;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer1 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer1;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__incBufferCnt 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__incBufferCnt;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer2;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__buffer3 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__buffer3;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxWireEdgeDetect 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxWireEdgeDetect;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInSyncReg2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInSyncReg2;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxDataInTick 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxDataInTick;
    // ALWAYS at trunk/RTL/serialInterfaceEngine//readUSBWireData.v:140
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInSyncReg1 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsIn;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInSyncReg2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInSyncReg1;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInSyncReg1 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInSyncReg1;
    vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__PVT__RxBitsInSyncReg2 
	= vlSymsp->TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vdly__RxBitsInSyncReg2;
}
