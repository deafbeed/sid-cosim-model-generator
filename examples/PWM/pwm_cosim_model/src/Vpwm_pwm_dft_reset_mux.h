// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef _Vpwm_pwm_dft_reset_mux_H_
#define _Vpwm_pwm_dft_reset_mux_H_

#include "verilated.h"
class Vpwm__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm_pwm_dft_reset_mux) {
  public:
    // CELLS
    
    // PORTS
    VL_OUT8(__PVT__dft_reset,0,0);
    VL_IN8(__PVT__func_reset,0,0);
    VL_IN8(__PVT__ipt_se_async,0,0);
    VL_IN8(__PVT__ipt_reset_b,0,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vpwm__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vpwm_pwm_dft_reset_mux& operator= (const Vpwm_pwm_dft_reset_mux&);	///< Copying not allowed
    Vpwm_pwm_dft_reset_mux(const Vpwm_pwm_dft_reset_mux&);	///< Copying not allowed
  public:
    Vpwm_pwm_dft_reset_mux(const char* name="TOP");
    ~Vpwm_pwm_dft_reset_mux();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
    static void	_combo__TOP__v__pwm_reg__cmp_status_reset_mux__8(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__fifo_status_reset_mux__9(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__pwm_en_reset_mux__4(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__rov_status_reset_mux__10(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__software_reset_mux__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__cmp_status_reset_mux__5(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__fifo_status_reset_mux__6(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__pwm_en_reset_mux__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__rov_status_reset_mux__7(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__software_reset_mux__2(Vpwm__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
