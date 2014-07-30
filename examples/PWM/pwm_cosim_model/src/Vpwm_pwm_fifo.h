// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef _Vpwm_pwm_fifo_H_
#define _Vpwm_pwm_fifo_H_

#include "verilated.h"
class Vpwm__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm_pwm_fifo) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__rstgen_rst_b,0,0);
    VL_IN8(__PVT__ipg_clk_s,0,0);
    VL_IN8(__PVT__ipg_clk,0,0);
    VL_IN8(__PVT__pclk,0,0);
    VL_OUT8(__PVT__fifo_av,2,0);
    VL_OUT8(__PVT__fifo_empty,0,0);
    VL_OUT8(__PVT__full,0,0);
    VL_IN8(__PVT__read,0,0);
    VL_IN8(__PVT__bctr,0,0);
    VL_IN8(__PVT__hctr,0,0);
    VL_IN8(__PVT__fifo_watermark,1,0);
    VL_IN8(__PVT__write_pwmsam,0,0);
    VL_OUT16(__PVT__sample,15,0);
    //char	__VpadToAlign14[2];
    VL_IN(__PVT__ips_wdata,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__read_ptr,1,0);
    VL_SIG8(__PVT__write_ptr,1,0);
    VL_SIG8(__PVT__write_flag,0,0);
    VL_SIG8(__PVT__read_flag,0,0);
    VL_SIG8(__PVT__fifo_wm_cross,0,0);
    VL_SIG8(__PVT__fifo_wm_cross1,0,0);
    VL_SIG8(__PVT__fifo_full_reg,0,0);
    VL_SIG8(__PVT__fifo_flag,0,0);
    VL_SIG8(__PVT__sample_ptr,1,0);
    VL_SIG8(__PVT__sample_update,0,0);
    VL_SIG8(__PVT__empty,0,0);
    VL_SIG8(__PVT__fifo_0data,0,0);
    VL_SIG8(__PVT__fifo_1data,0,0);
    VL_SIG8(__PVT__fifo_2data,0,0);
    VL_SIG8(__PVT__fifo_3data,0,0);
    VL_SIG8(__PVT__fifo_1_or_more_empty,0,0);
    VL_SIG8(__PVT__fifo_2_or_more_empty,0,0);
    VL_SIG8(__PVT__fifo_3_or_more_empty,0,0);
    VL_SIG8(__PVT__fifo_4_empty,0,0);
    VL_SIG8(__PVT__fifo_full,0,0);
    VL_SIG16(__PVT__datain,15,0);
    VL_SIG16(__PVT__data0,15,0);
    VL_SIG16(__PVT__data1,15,0);
    VL_SIG16(__PVT__data2,15,0);
    VL_SIG16(__PVT__data3,15,0);
    //char	__VpadToAlign54[2];
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__fifo_full_reg,0,0);
    VL_SIG8(__Vdly__fifo_wm_cross1,0,0);
    VL_SIG8(__Vdly__read_flag,0,0);
    VL_SIG8(__Vdly__read_ptr,1,0);
    VL_SIG8(__Vdly__write_flag,0,0);
    VL_SIG8(__Vdly__write_ptr,1,0);
    VL_SIG16(__Vdly__data0,15,0);
    VL_SIG16(__Vdly__data1,15,0);
    VL_SIG16(__Vdly__data2,15,0);
    VL_SIG16(__Vdly__data3,15,0);
    //char	__VpadToAlign74[2];
    
    // INTERNAL VARIABLES
  private:
    Vpwm__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vpwm_pwm_fifo& operator= (const Vpwm_pwm_fifo&);	///< Copying not allowed
    Vpwm_pwm_fifo(const Vpwm_pwm_fifo&);	///< Copying not allowed
  public:
    Vpwm_pwm_fifo(const char* name="TOP");
    ~Vpwm_pwm_fifo();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
    static void	_combo__TOP__v__pwm_fifo__12(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_fifo__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_fifo__10(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_fifo__7(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_fifo__9(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_fifo__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_fifo__2(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_fifo__5(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_fifo__11(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_fifo__13(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_fifo__4(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_fifo__6(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_fifo__8(Vpwm__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
