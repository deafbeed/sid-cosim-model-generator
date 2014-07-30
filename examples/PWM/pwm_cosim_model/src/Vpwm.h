// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vpwm_H_
#define _Vpwm_H_

#include "verilated.h"
class Vpwm__Syms;
class Vpwm_pwm;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vpwm_pwm*          	__PVT__v;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
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
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_reg____PVT__ipg_hard_async_reset_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_crm____PVT__pwm_en_rst_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_crm____PVT__sys_clk,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_outputgen____PVT__pclk,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_outputgen____PVT__pwm_en_rst_b,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_reg____PVT__pclk,0,0);
    VL_SIG8(__VinpClk__TOP__v__pwm_fifo____PVT__pclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__pwm_fifo__ipg_clk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b,0,0);
    VL_SIG8(__Vclklast__TOP__v__pwm_fifo__ipg_clk_s,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b,0,0);
    VL_SIG8(__Vclklast__TOP__v__pwm_reg__ipg_clk_s,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__ipg_hard_async_reset_b,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_crm__pwm_en_rst_b,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_crm__sys_clk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pclk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pwm_en_rst_b,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_reg__rstgen_rst_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_reg__pclk,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_reg__ipg_hard_async_reset_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_reg__cmp_status_rst_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_reg__rov_status_rst_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_reg__fifo_status_rst_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_crm__pwm_en_rst_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_crm__sys_clk,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_outputgen__pclk,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_outputgen__pwm_en_rst_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_fifo__rstgen_rst_b,0,0);
    VL_SIG8(__Vchglast__TOP__v__pwm_fifo__pclk,0,0);
    //char	__VpadToAlign87[1];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vpwm__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vpwm& operator= (const Vpwm&);	///< Copying not allowed
    Vpwm(const Vpwm&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vpwm(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vpwm();
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
    static void _eval_initial_loop(Vpwm__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
  private:
    static IData	_change_request(Vpwm__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__10(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__15(Vpwm__Syms* __restrict vlSymsp);
    static void	_eval(Vpwm__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vpwm__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__11(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__13(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__8(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__9(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__14(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__16(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vpwm__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__12(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__13(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__14(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__15(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__16(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__17(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__18(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__19(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__20(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__21(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__22(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__23(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__24(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__25(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__26(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__27(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__28(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__29(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__30(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
