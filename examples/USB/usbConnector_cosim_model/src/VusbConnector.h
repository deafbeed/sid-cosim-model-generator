// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VusbConnector_H_
#define _VusbConnector_H_

#include "verilated.h"
class VusbConnector__Syms;
class VusbConnector_usbConnector;
class VerilatedVcd;

//----------

VL_MODULE(VusbConnector) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VusbConnector_usbConnector*	__PVT__v;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(hostDataIn,1,0);
    VL_OUT8(hostDataOut,1,0);
    VL_IN8(hostControl,0,0);
    VL_IN8(slaveDataIn,1,0);
    VL_OUT8(slaveDataOut,1,0);
    VL_IN8(slaveControl,0,0);
    VL_IN8(USBDPlusPullup,0,0);
    VL_IN8(USBDMinusPullup,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VusbConnector__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VusbConnector& operator= (const VusbConnector&);	///< Copying not allowed
    VusbConnector(const VusbConnector&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VusbConnector(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VusbConnector();
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
    static void _eval_initial_loop(VusbConnector__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VusbConnector__Syms* symsp, bool first);
  private:
    static IData	_change_request(VusbConnector__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(VusbConnector__Syms* __restrict vlSymsp);
    static void	_combo__TOP__3(VusbConnector__Syms* __restrict vlSymsp);
    static void	_eval(VusbConnector__Syms* __restrict vlSymsp);
    static void	_eval_initial(VusbConnector__Syms* __restrict vlSymsp);
    static void	_eval_settle(VusbConnector__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(VusbConnector__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VusbConnector__Syms* __restrict vlSymsp);
    static void	traceChgThis(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VusbConnector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
