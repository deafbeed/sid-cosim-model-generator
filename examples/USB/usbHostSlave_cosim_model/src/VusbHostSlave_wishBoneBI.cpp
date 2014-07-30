// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VusbHostSlave.h for the primary calling header

#include "VusbHostSlave_wishBoneBI.h" // For This
#include "VusbHostSlave__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VusbHostSlave_wishBoneBI) {
    // Reset internal values
    // Reset structure values
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__address = VL_RAND_RESET_I(8);
    __PVT__dataIn = VL_RAND_RESET_I(8);
    __PVT__dataOut = VL_RAND_RESET_I(8);
    __PVT__strobe_i = VL_RAND_RESET_I(1);
    __PVT__ack_o = VL_RAND_RESET_I(1);
    __PVT__writeEn = VL_RAND_RESET_I(1);
    __PVT__hostControlSel = VL_RAND_RESET_I(1);
    __PVT__hostRxFifoSel = VL_RAND_RESET_I(1);
    __PVT__hostTxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveControlSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP0RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP1RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP2RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP3RxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP0TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP1TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP2TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__slaveEP3TxFifoSel = VL_RAND_RESET_I(1);
    __PVT__hostSlaveMuxSel = VL_RAND_RESET_I(1);
    __PVT__dataFromHostControl = VL_RAND_RESET_I(8);
    __PVT__dataFromHostRxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromHostTxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromSlaveControl = VL_RAND_RESET_I(8);
    __PVT__dataFromEP0RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP1RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP2RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP3RxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP0TxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP1TxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP2TxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromEP3TxFifo = VL_RAND_RESET_I(8);
    __PVT__dataFromHostSlaveMux = VL_RAND_RESET_I(8);
    __PVT__ack_delayed = VL_RAND_RESET_I(1);
    __PVT__ack_immediate = VL_RAND_RESET_I(1);
    __Vdly__ack_delayed = VL_RAND_RESET_I(1);
}

void VusbHostSlave_wishBoneBI::__Vconfigure(VusbHostSlave__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VusbHostSlave_wishBoneBI::~VusbHostSlave_wishBoneBI() {
}

//--------------------
// Internal Methods

void VusbHostSlave_wishBoneBI::_sequent__TOP__v__u_wishBoneBI__1(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_wishBoneBI::_sequent__TOP__v__u_wishBoneBI__1\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u_wishBoneBI.__Vdly__ack_delayed 
	= vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_delayed;
    // ALWAYS at trunk/RTL/busInterface//wishBoneBI.v:226
    vlSymsp->TOP__v__u_wishBoneBI.__Vdly__ack_delayed 
	= vlSymsp->TOP__v__u_wishBoneBI.__PVT__strobe_i;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_delayed 
	= vlSymsp->TOP__v__u_wishBoneBI.__Vdly__ack_delayed;
}

void VusbHostSlave_wishBoneBI::_combo__TOP__v__u_wishBoneBI__2(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_wishBoneBI::_combo__TOP__v__u_wishBoneBI__2\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/busInterface//wishBoneBI.v:231
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_immediate 
	= vlSymsp->TOP__v__u_wishBoneBI.__PVT__strobe_i;
}

void VusbHostSlave_wishBoneBI::_settle__TOP__v__u_wishBoneBI__3(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_wishBoneBI::_settle__TOP__v__u_wishBoneBI__3\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/busInterface//wishBoneBI.v:231
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_immediate 
	= vlSymsp->TOP__v__u_wishBoneBI.__PVT__strobe_i;
    // ALWAYS at trunk/RTL/busInterface//wishBoneBI.v:236
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_o = ((
						   (~ (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__writeEn)) 
						   & ((((((((((0x20 
							       == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)) 
							      | (0x30 
								 == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							     | (0x60 
								== (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							    | (0x70 
							       == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							   | (0x80 
							      == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							  | (0x90 
							     == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							 | (0xa0 
							    == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							| (0xb0 
							   == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
						       | (0xc0 
							  == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
						      | (0xd0 
							 == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))))
						   ? 
						  ((IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_delayed) 
						   & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_immediate))
						   : (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_immediate));
}

void VusbHostSlave_wishBoneBI::_combo__TOP__v__u_wishBoneBI__4(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_wishBoneBI::_combo__TOP__v__u_wishBoneBI__4\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/busInterface//wishBoneBI.v:236
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_o = ((
						   (~ (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__writeEn)) 
						   & ((((((((((0x20 
							       == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)) 
							      | (0x30 
								 == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							     | (0x60 
								== (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							    | (0x70 
							       == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							   | (0x80 
							      == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							  | (0x90 
							     == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							 | (0xa0 
							    == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
							| (0xb0 
							   == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
						       | (0xc0 
							  == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
						      | (0xd0 
							 == (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))))
						   ? 
						  ((IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_delayed) 
						   & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_immediate))
						   : (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__ack_immediate));
}

void VusbHostSlave_wishBoneBI::_settle__TOP__v__u_wishBoneBI__5(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_wishBoneBI::_settle__TOP__v__u_wishBoneBI__5\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/busInterface//wishBoneBI.v:131
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostRxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostTxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostSlaveMuxSel = 0;
    if (((((((((0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
	       | (0x10 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	      | (0x20 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	     | (0x30 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	    | (0x40 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	   | (0x50 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	  | (0x60 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	 | (0x70 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))))) {
	if ((0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel = 1;
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostControl;
	} else {
	    if ((0x10 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel = 1;
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostControl;
	    } else {
		if ((0x20 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostRxFifoSel = 1;
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostRxFifo;
		} else {
		    if ((0x30 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostTxFifoSel = 1;
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostTxFifo;
		    } else {
			if ((0x40 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel = 1;
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromSlaveControl;
			} else {
			    if ((0x50 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel = 1;
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromSlaveControl;
			    } else {
				if ((0x60 == (0xf0 
					      & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0RxFifoSel = 1;
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
					= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0RxFifo;
				} else {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0TxFifoSel = 1;
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
					= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0TxFifo;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((0x80 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1RxFifoSel = 1;
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1RxFifo;
	} else {
	    if ((0x90 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1TxFifoSel = 1;
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1TxFifo;
	    } else {
		if ((0xa0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2RxFifoSel = 1;
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2RxFifo;
		} else {
		    if ((0xb0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2TxFifoSel = 1;
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2TxFifo;
		    } else {
			if ((0xc0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3RxFifoSel = 1;
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3RxFifo;
			} else {
			    if ((0xd0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3TxFifoSel = 1;
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3TxFifo;
			    } else {
				if ((0xe0 == (0xf0 
					      & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostSlaveMuxSel = 1;
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
					= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostSlaveMux;
				} else {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut = 0;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void VusbHostSlave_wishBoneBI::_combo__TOP__v__u_wishBoneBI__6(VusbHostSlave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VusbHostSlave_wishBoneBI::_combo__TOP__v__u_wishBoneBI__6\n"); );
    VusbHostSlave* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at trunk/RTL/busInterface//wishBoneBI.v:131
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostRxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostTxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3RxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3TxFifoSel = 0;
    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostSlaveMuxSel = 0;
    if (((((((((0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))) 
	       | (0x10 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	      | (0x20 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	     | (0x30 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	    | (0x40 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	   | (0x50 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	  | (0x60 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) 
	 | (0x70 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address))))) {
	if ((0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel = 1;
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostControl;
	} else {
	    if ((0x10 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostControlSel = 1;
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostControl;
	    } else {
		if ((0x20 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostRxFifoSel = 1;
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostRxFifo;
		} else {
		    if ((0x30 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostTxFifoSel = 1;
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostTxFifo;
		    } else {
			if ((0x40 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel = 1;
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromSlaveControl;
			} else {
			    if ((0x50 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveControlSel = 1;
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromSlaveControl;
			    } else {
				if ((0x60 == (0xf0 
					      & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0RxFifoSel = 1;
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
					= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0RxFifo;
				} else {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP0TxFifoSel = 1;
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
					= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP0TxFifo;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((0x80 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1RxFifoSel = 1;
	    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1RxFifo;
	} else {
	    if ((0x90 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP1TxFifoSel = 1;
		vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
		    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP1TxFifo;
	    } else {
		if ((0xa0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2RxFifoSel = 1;
		    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2RxFifo;
		} else {
		    if ((0xb0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP2TxFifoSel = 1;
			vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
			    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP2TxFifo;
		    } else {
			if ((0xc0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3RxFifoSel = 1;
			    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3RxFifo;
			} else {
			    if ((0xd0 == (0xf0 & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__slaveEP3TxFifoSel = 1;
				vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
				    = vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromEP3TxFifo;
			    } else {
				if ((0xe0 == (0xf0 
					      & (IData)(vlSymsp->TOP__v__u_wishBoneBI.__PVT__address)))) {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__hostSlaveMuxSel = 1;
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut 
					= vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataFromHostSlaveMux;
				} else {
				    vlSymsp->TOP__v__u_wishBoneBI.__PVT__dataOut = 0;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}
