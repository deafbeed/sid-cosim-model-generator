// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VusbHostSlave_H_
#define _VusbHostSlave_H_

#include "verilated.h"
class VusbHostSlave__Syms;
class VusbHostSlave_usbHostSlave;
class VerilatedVcd;

//----------

VL_MODULE(VusbHostSlave) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VusbHostSlave_usbHostSlave*	__PVT__v;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(address_i,7,0);
    VL_IN8(data_i,7,0);
    VL_OUT8(data_o,7,0);
    VL_IN8(we_i,0,0);
    VL_IN8(strobe_i,0,0);
    VL_OUT8(ack_o,0,0);
    VL_IN8(usbClk,0,0);
    VL_OUT8(hostSOFSentIntOut,0,0);
    VL_OUT8(hostConnEventIntOut,0,0);
    VL_OUT8(hostResumeIntOut,0,0);
    VL_OUT8(hostTransDoneIntOut,0,0);
    VL_OUT8(slaveSOFRxedIntOut,0,0);
    VL_OUT8(slaveResetEventIntOut,0,0);
    VL_OUT8(slaveResumeIntOut,0,0);
    VL_OUT8(slaveTransDoneIntOut,0,0);
    VL_OUT8(slaveNAKSentIntOut,0,0);
    VL_OUT8(slaveVBusDetIntOut,0,0);
    VL_IN8(USBWireDataIn,1,0);
    VL_OUT8(USBWireDataOut,1,0);
    VL_OUT8(USBWireDataOutTick,0,0);
    VL_OUT8(USBWireDataInTick,0,0);
    VL_OUT8(USBWireCtrlOut,0,0);
    VL_OUT8(USBFullSpeed,0,0);
    VL_OUT8(USBDPlusPullup,0,0);
    VL_OUT8(USBDMinusPullup,0,0);
    VL_IN8(vBusDetect,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__v__u_wishBoneBI__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostTxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostTxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostTxFifo__u_TxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0TxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0TxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0TxFifo__u_TxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1TxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1TxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1TxFifo__u_TxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2TxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2TxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2TxFifo__u_TxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3TxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3TxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3TxFifo__u_TxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostRxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostRxFifo__u_RxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostRxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1RxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1RxFifo__u_RxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1RxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0RxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0RxFifo__u_RxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0RxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2RxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2RxFifo__u_RxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2RxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3RxFifo__u_fifo__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3RxFifo__u_RxfifoBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3RxFifo__u_fifo__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processTxByte__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxBit__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_endpMux__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_slavecontroller__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_slaveGetPacket__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_SCTxPortArbiter__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_slaveDirectControl__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_slaveSendPacket__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbSlaveControl__u_USBSlaveControlBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_rxStatusMonitor__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_sendPacketArbiter__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_sendPacketCheckPreamble__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_SOFTransmit__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_hostController__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_getPacket__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_HCTxPortArbiter__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_directControl__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_SOFController__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_sendPacket__clk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__usbClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__u_usbHostControl__u_USBHostControlBI__busClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostTxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__HostRxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__wrClk,0,0);
    VL_SIG8(__Vclklast__TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc__rdClk,0,0);
    VL_SIG8(__Vchglast__TOP__v__u_usbSerialInterfaceEngine__u_processRxByte__RxStatus,7,0);
    //char	__VpadToAlign133[3];
    VL_SIGW(__Vm_traceActivity,191,0,6);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign164[4];
    VusbHostSlave__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VusbHostSlave& operator= (const VusbHostSlave&);	///< Copying not allowed
    VusbHostSlave(const VusbHostSlave&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VusbHostSlave(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VusbHostSlave();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VusbHostSlave__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VusbHostSlave__Syms* symsp, bool first);
  private:
    static IData	_change_request(VusbHostSlave__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__11(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__14(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__2(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_eval(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_eval_initial(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_eval_settle(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__13(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VusbHostSlave__Syms* __restrict vlSymsp);
    static void	traceChgThis(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__100(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__101(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__102(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__103(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__104(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__105(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__106(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__107(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__108(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__109(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__110(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__111(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__112(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__113(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__114(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__115(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__116(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__117(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__118(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__119(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__12(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__120(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__121(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__122(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__123(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__124(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__125(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__126(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__127(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__128(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__129(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__13(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__130(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__131(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__132(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__133(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__134(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__135(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__136(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__137(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__138(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__139(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__14(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__140(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__141(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__142(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__143(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__144(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__145(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__146(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__147(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__148(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__149(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__15(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__150(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__151(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__152(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__153(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__154(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__155(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__156(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__157(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__158(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__159(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__16(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__160(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__161(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__162(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__163(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__164(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__165(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__166(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__167(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__168(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__169(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__17(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__170(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__171(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__172(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__173(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__174(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__175(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__176(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__177(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__178(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__179(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__18(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__180(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__181(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__182(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__183(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__184(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__185(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__186(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__187(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__188(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__189(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__19(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__190(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__191(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__192(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__193(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__194(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__195(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__196(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__197(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__198(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__199(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__20(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__200(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__201(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__202(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__203(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__204(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__205(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__206(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__207(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__208(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__209(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__21(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__210(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__211(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__212(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__213(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__214(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__215(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__216(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__217(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__218(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__219(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__22(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__220(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__221(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__222(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__223(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__224(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__225(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__226(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__227(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__228(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__229(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__23(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__230(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__231(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__232(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__233(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__234(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__235(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__236(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__237(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__238(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__239(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__24(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__240(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__241(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__242(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__243(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__244(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__245(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__246(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__247(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__248(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__249(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__25(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__250(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__251(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__252(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__253(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__254(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__255(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__256(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__257(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__258(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__259(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__26(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__260(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__261(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__262(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__263(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__264(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__265(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__266(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__267(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__268(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__27(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__28(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__29(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__30(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__31(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__32(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__33(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__34(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__35(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__36(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__37(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__38(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__39(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__40(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__41(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__42(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__43(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__44(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__45(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__46(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__47(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__48(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__49(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__50(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__51(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__52(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__53(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__54(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__55(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__56(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__57(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__58(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__59(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__60(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__61(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__62(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__63(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__64(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__65(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__66(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__67(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__68(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__69(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__70(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__71(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__72(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__73(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__74(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__75(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__76(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__77(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__78(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__79(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__80(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__81(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__82(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__83(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__84(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__85(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__86(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__87(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__88(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__89(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__90(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__91(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__92(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__93(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__94(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__95(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__96(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__97(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__98(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__99(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VusbHostSlave__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
