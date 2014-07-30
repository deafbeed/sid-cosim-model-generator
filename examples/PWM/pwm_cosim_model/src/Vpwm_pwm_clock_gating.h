// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef _Vpwm_pwm_clock_gating_H_
#define _Vpwm_pwm_clock_gating_H_

#include "verilated.h"
class Vpwm__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm_pwm_clock_gating) {
  public:
    // CELLS
    
    // PORTS
    VL_OUT8(__PVT__gck,0,0);
    VL_IN8(__PVT__ck,0,0);
    VL_IN8(__PVT__en,0,0);
    VL_IN8(__PVT__se,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__ck_b,0,0);
    VL_SIG8(__PVT__clk_enable,0,0);
    //char	__VpadToAlign10[2];
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign20[4];
    Vpwm__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vpwm_pwm_clock_gating& operator= (const Vpwm_pwm_clock_gating&);	///< Copying not allowed
    Vpwm_pwm_clock_gating(const Vpwm_pwm_clock_gating&);	///< Copying not allowed
  public:
    Vpwm_pwm_clock_gating(const char* name="TOP");
    ~Vpwm_pwm_clock_gating();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
    static void	_combo__TOP__v__pwm_crm__pclk_gen__2(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_crm__pclk_gen__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_crm__pclk_gen__5(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__pclk_gen__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__pclk_gen__4(Vpwm__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
