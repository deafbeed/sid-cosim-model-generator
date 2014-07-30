// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef _Vpwm_pwm_outputgen_H_
#define _Vpwm_pwm_outputgen_H_

#include "verilated.h"
class Vpwm__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm_pwm_outputgen) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__pclk,0,0);
    VL_IN8(__PVT__pwm_en_rst_b,0,0);
    VL_OUT8(__PVT__rov_event,0,0);
    VL_OUT8(__PVT__ipp_do_pwmo,0,0);
    VL_OUT8(__PVT__updatesample,0,0);
    VL_OUT8(__PVT__widthmatch,0,0);
    VL_OUT8(__PVT__ipp_obe_pwmo,0,0);
    VL_IN8(__PVT__rep_mode,1,0);
    VL_IN8(__PVT__poutc,1,0);
    VL_IN8(__PVT__pwm_en,0,0);
    VL_OUT16(__PVT__count,15,0);
    VL_IN16(__PVT__samplein,15,0);
    VL_IN16(__PVT__period_reg_data,15,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__periodmatch,0,0);
    VL_SIG8(__PVT__repcount,2,0);
    VL_SIG8(__PVT__sample_lookup,0,0);
    VL_SIG8(__PVT__zero_case,0,0);
    VL_SIG8(__PVT__periodmatch_1,0,0);
    //char	__VpadToAlign25[1];
    VL_SIG16(__PVT__period_reg_data_sync,15,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__ipp_obe_pwmo,0,0);
    VL_SIG8(__Vdly__ipp_do_pwmo,0,0);
    VL_SIG8(__Vdly__repcount,2,0);
    VL_SIG8(__Vdly__periodmatch,0,0);
    VL_SIG16(__Vdly__period_reg_data_sync,15,0);
    VL_SIG16(__Vdly__count,15,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign44[4];
    Vpwm__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vpwm_pwm_outputgen& operator= (const Vpwm_pwm_outputgen&);	///< Copying not allowed
    Vpwm_pwm_outputgen(const Vpwm_pwm_outputgen&);	///< Copying not allowed
  public:
    Vpwm_pwm_outputgen(const char* name="TOP");
    ~Vpwm_pwm_outputgen();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
    static void	_combo__TOP__v__pwm_outputgen__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_outputgen__6(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_outputgen__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_outputgen__2(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_outputgen__4(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_outputgen__5(Vpwm__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
