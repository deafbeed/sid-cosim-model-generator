// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef _Vpwm_pwm_crm_H_
#define _Vpwm_pwm_crm_H_

#include "verilated.h"
class Vpwm__Syms;
class Vpwm_pwm_clock_gating;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm_pwm_crm) {
  public:
    // CELLS
    Vpwm_pwm_clock_gating*	__PVT__pclk_gen;
    
    // PORTS
    VL_IN8(__PVT__pwm_en_rst_b,0,0);
    VL_OUT8(__PVT__pclk,0,0);
    VL_IN8(__PVT__ipg_clk,0,0);
    VL_IN8(__PVT__ipg_clk_highfreq,0,0);
    VL_IN8(__PVT__ipg_clk_32k,0,0);
    VL_IN8(__PVT__clksrc,1,0);
    VL_IN8(__PVT__pwm_en,0,0);
    VL_IN8(__PVT__ipt_se_gatedclk,0,0);
    VL_IN8(__PVT__ipt_mode,0,0);
    //char	__VpadToAlign9[1];
    VL_IN16(__PVT__prescaler,11,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__sys_clk,0,0);
    VL_SIG8(__PVT__clksrc_scan,1,0);
    VL_SIG8(__PVT__pclk_en,0,0);
    VL_SIG8(__PVT__pre_match,0,0);
    VL_SIG16(__PVT__count,11,0);
    VL_SIG16(__PVT__prescaler_tmp,11,0);
    
    // LOCAL VARIABLES
    VL_SIG16(__Vdly__prescaler_tmp,11,0);
    VL_SIG16(__Vdly__count,11,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign36[4];
    Vpwm__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vpwm_pwm_crm& operator= (const Vpwm_pwm_crm&);	///< Copying not allowed
    Vpwm_pwm_crm(const Vpwm_pwm_crm&);	///< Copying not allowed
  public:
    Vpwm_pwm_crm(const char* name="TOP");
    ~Vpwm_pwm_crm();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
    static void	_combo__TOP__v__pwm_crm__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_crm__11(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_crm__12(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_crm__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_crm__5(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_crm__9(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_crm__7(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__10(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__13(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__2(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__4(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__6(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_crm__8(Vpwm__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
