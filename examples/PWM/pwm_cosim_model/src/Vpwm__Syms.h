// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vpwm__Syms_H_
#define _Vpwm__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vpwm.h"
#include "Vpwm_pwm.h"
#include "Vpwm_pwm_reg.h"
#include "Vpwm_pwm_crm.h"
#include "Vpwm_pwm_outputgen.h"
#include "Vpwm_pwm_fifo.h"
#include "Vpwm_pwm_dft_reset_mux.h"
#include "Vpwm_pwm_clock_gating.h"

// SYMS CLASS
class Vpwm__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vpwm*                          TOPp;
    Vpwm_pwm                       TOP__v;
    Vpwm_pwm_crm                   TOP__v__pwm_crm;
    Vpwm_pwm_clock_gating          TOP__v__pwm_crm__pclk_gen;
    Vpwm_pwm_fifo                  TOP__v__pwm_fifo;
    Vpwm_pwm_outputgen             TOP__v__pwm_outputgen;
    Vpwm_pwm_reg                   TOP__v__pwm_reg;
    Vpwm_pwm_dft_reset_mux         TOP__v__pwm_reg__cmp_status_reset_mux;
    Vpwm_pwm_dft_reset_mux         TOP__v__pwm_reg__fifo_status_reset_mux;
    Vpwm_pwm_dft_reset_mux         TOP__v__pwm_reg__pwm_en_reset_mux;
    Vpwm_pwm_dft_reset_mux         TOP__v__pwm_reg__rov_status_reset_mux;
    Vpwm_pwm_dft_reset_mux         TOP__v__pwm_reg__software_reset_mux;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vpwm__Syms(Vpwm* topp, const char* namep);
    ~Vpwm__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);
#endif  /*guard*/
