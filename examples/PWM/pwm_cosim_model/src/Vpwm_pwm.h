// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef _Vpwm_pwm_H_
#define _Vpwm_pwm_H_

#include "verilated.h"
class Vpwm__Syms;
class Vpwm_pwm_reg;
class Vpwm_pwm_crm;
class Vpwm_pwm_outputgen;
class Vpwm_pwm_fifo;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm_pwm) {
  public:
    // CELLS
    Vpwm_pwm_reg*      	__PVT__pwm_reg;
    Vpwm_pwm_crm*      	__PVT__pwm_crm;
    Vpwm_pwm_outputgen*	__PVT__pwm_outputgen;
    Vpwm_pwm_fifo*     	__PVT__pwm_fifo;
    
    // PORTS
    VL_OUT8(ipp_do_pwmo,0,0);
    VL_OUT8(ipp_obe_pwmo,0,0);
    VL_OUT8(ipg_enable_clk,0,0);
    VL_IN8(ipg_clk_32k,0,0);
    VL_IN8(ipg_clk,0,0);
    VL_IN8(ipg_clk_s,0,0);
    VL_IN8(ipg_clk_highfreq,0,0);
    VL_IN8(ipg_hard_async_reset_b,0,0);
    VL_IN8(ipg_debug,0,0);
    VL_IN8(ipg_doze,0,0);
    VL_IN8(ipg_wait,0,0);
    VL_IN8(ipg_stop,0,0);
    VL_OUT8(ips_xfr_err,0,0);
    VL_OUT8(ips_xfr_wait,0,0);
    VL_IN8(ips_module_en,0,0);
    VL_IN8(ips_byte_7_0,0,0);
    VL_IN8(ips_byte_15_8,0,0);
    VL_IN8(ips_byte_23_16,0,0);
    VL_IN8(ips_byte_31_24,0,0);
    VL_IN8(ips_rwb,0,0);
    VL_IN8(resp_sel,0,0);
    VL_OUT8(ipi_int_pwm_rovi,0,0);
    VL_OUT8(ipi_int_pwm_cmpi,0,0);
    VL_OUT8(ipi_int_pwm_fifoi,0,0);
    VL_OUT8(ipi_int_pwm,0,0);
    VL_IN8(ipt_mode,0,0);
    VL_IN8(ipt_se_gatedclk,0,0);
    VL_IN8(ipt_se_async,0,0);
    VL_IN8(ipt_reset_b,0,0);
    //char	__VpadToAlign29[1];
    VL_IN16(ips_addr,13,2);
    VL_OUT(ips_rdata,31,0);
    VL_IN(ips_wdata,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__rstgen_rst_b,0,0);
    VL_SIG8(__PVT__clksrc,1,0);
    VL_SIG8(__PVT__fifo_av,2,0);
    VL_SIG8(__PVT__fifo_empty,0,0);
    VL_SIG8(__PVT__full,0,0);
    VL_SIG8(__PVT__fifo_watermark,1,0);
    VL_SIG8(__PVT__pwm_en_rst_b,0,0);
    VL_SIG8(__PVT__pwm_en,0,0);
    VL_SIG8(__PVT__rep_mode,1,0);
    VL_SIG8(__PVT__bctr,0,0);
    VL_SIG8(__PVT__hctr,0,0);
    VL_SIG8(__PVT__poutc,1,0);
    VL_SIG8(__PVT__write_pwmsam,0,0);
    VL_SIG8(__PVT__pclk,0,0);
    VL_SIG8(__PVT__widthmatch,0,0);
    VL_SIG8(__PVT__rov_event,0,0);
    VL_SIG8(__PVT__updatesample,0,0);
    //char	__VpadToAlign61[1];
    VL_SIG16(__PVT__prescaler,11,0);
    VL_SIG16(__PVT__sample,15,0);
    VL_SIG16(__PVT__period_reg_data,15,0);
    VL_SIG16(__PVT__count,15,0);
    //char	__VpadToAlign70[2];
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vpwm__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vpwm_pwm& operator= (const Vpwm_pwm&);	///< Copying not allowed
    Vpwm_pwm(const Vpwm_pwm&);	///< Copying not allowed
  public:
    Vpwm_pwm(const char* name="TOP");
    ~Vpwm_pwm();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
    static void	_combo__TOP__v__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__12(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__16(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__22(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__28(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__35(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__4(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__40(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__42(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__6(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__9(Vpwm__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__26(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__27(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__29(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__30(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__31(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__34(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__36(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__37(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__13(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__18(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__19(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__23(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__5(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__8(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__10(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__11(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__14(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__15(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__17(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__2(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__20(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__21(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__24(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__25(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__32(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__33(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__38(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__39(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__41(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__7(Vpwm__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
