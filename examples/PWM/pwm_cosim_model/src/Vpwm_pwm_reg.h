// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm.h for the primary calling header

#ifndef _Vpwm_pwm_reg_H_
#define _Vpwm_pwm_reg_H_

#include "verilated.h"
class Vpwm__Syms;
class Vpwm_pwm_dft_reset_mux;
class Vpwm_pwm_dft_reset_mux;
class Vpwm_pwm_dft_reset_mux;
class Vpwm_pwm_dft_reset_mux;
class Vpwm_pwm_dft_reset_mux;
class VerilatedVcd;

//----------

VL_MODULE(Vpwm_pwm_reg) {
  public:
    // CELLS
    Vpwm_pwm_dft_reset_mux*	__PVT__software_reset_mux;
    Vpwm_pwm_dft_reset_mux*	__PVT__pwm_en_reset_mux;
    Vpwm_pwm_dft_reset_mux*	__PVT__cmp_status_reset_mux;
    Vpwm_pwm_dft_reset_mux*	__PVT__rov_status_reset_mux;
    Vpwm_pwm_dft_reset_mux*	__PVT__fifo_status_reset_mux;
    
    // PORTS
    VL_OUT8(__PVT__rstgen_rst_b,0,0);
    VL_IN8(__PVT__pclk,0,0);
    VL_IN8(__PVT__ipg_clk_s,0,0);
    VL_IN8(__PVT__ipg_hard_async_reset_b,0,0);
    VL_OUT8(__PVT__clksrc,1,0);
    VL_OUT8(__PVT__ipi_int_pwm_cmpi,0,0);
    VL_OUT8(__PVT__ipi_int_pwm_rovi,0,0);
    VL_OUT8(__PVT__ipi_int_pwm_fifoi,0,0);
    VL_OUT8(__PVT__ipi_int_pwm,0,0);
    VL_OUT8(__PVT__pwm_en_rst_b,0,0);
    VL_OUT8(__PVT__pwm_en,0,0);
    VL_OUT8(__PVT__rep_mode,1,0);
    VL_OUT8(__PVT__fifo_watermark,1,0);
    VL_OUT8(__PVT__ips_xfr_err,0,0);
    VL_OUT8(__PVT__ips_xfr_wait,0,0);
    VL_OUT8(__PVT__ipg_enable_clk,0,0);
    VL_OUT8(__PVT__bctr,0,0);
    VL_OUT8(__PVT__hctr,0,0);
    VL_OUT8(__PVT__poutc,1,0);
    VL_OUT8(__PVT__write_pwmsam,0,0);
    VL_IN8(__PVT__fifo_av,2,0);
    VL_IN8(__PVT__fifo_empty,0,0);
    VL_IN8(__PVT__full,0,0);
    VL_IN8(__PVT__rov_event,0,0);
    VL_IN8(__PVT__cmp_event,0,0);
    VL_IN8(__PVT__ipg_stop,0,0);
    VL_IN8(__PVT__ipg_doze,0,0);
    VL_IN8(__PVT__ipg_wait,0,0);
    VL_IN8(__PVT__ipg_debug,0,0);
    VL_IN8(__PVT__resp_sel,0,0);
    VL_IN8(__PVT__ips_module_en,0,0);
    VL_IN8(__PVT__ips_rwb,0,0);
    VL_IN8(__PVT__ips_byte_31_24,0,0);
    VL_IN8(__PVT__ips_byte_23_16,0,0);
    VL_IN8(__PVT__ips_byte_15_8,0,0);
    VL_IN8(__PVT__ips_byte_7_0,0,0);
    VL_IN8(__PVT__ipt_reset_b,0,0);
    VL_IN8(__PVT__ipt_se_async,0,0);
    VL_OUT16(__PVT__prescaler,11,0);
    VL_OUT16(__PVT__period_reg_data,15,0);
    VL_IN16(__PVT__sample,15,0);
    VL_IN16(__PVT__count,15,0);
    VL_IN16(__PVT__ips_addr,13,2);
    VL_OUT(__PVT__ips_rdata,31,0);
    VL_IN(__PVT__ips_wdata,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__cmp_status_rst_b,0,0);
    VL_SIG8(__PVT__rov_status_rst_b,0,0);
    VL_SIG8(__PVT__fifo_status_rst_b,0,0);
    VL_SIG8(__PVT__cmp_status_clear,0,0);
    VL_SIG8(__PVT__cmp_int_status,0,0);
    VL_SIG8(__PVT__rov_status_clear,0,0);
    VL_SIG8(__PVT__rov_int_status,0,0);
    VL_SIG8(__PVT__fifo_status_clear,0,0);
    VL_SIG8(__PVT__fifo_int_status,0,0);
    VL_SIG8(__PVT__interrupt,2,0);
    VL_SIG8(__PVT__swr,0,0);
    VL_SIG8(__PVT__stopen,0,0);
    VL_SIG8(__PVT__dozen,0,0);
    VL_SIG8(__PVT__waiten,0,0);
    VL_SIG8(__PVT__debugen,0,0);
    VL_SIG8(__PVT__pwm_enable_bit,0,0);
    VL_SIG8(__PVT__cmp_status_reset_b,0,0);
    VL_SIG8(__PVT__rov_status_reset_b,0,0);
    VL_SIG8(__PVT__fifo_status_reset_b,0,0);
    VL_SIG8(__PVT__pwm_read_reg,0,0);
    VL_SIG8(__PVT__pwm_write_reg,0,0);
    VL_SIG8(__PVT__controlsel,0,0);
    VL_SIG8(__PVT__statussel,0,0);
    VL_SIG8(__PVT__intrsel,0,0);
    VL_SIG8(__PVT__samplesel,0,0);
    VL_SIG8(__PVT__periodsel,0,0);
    VL_SIG8(__PVT__cntrsel,0,0);
    VL_SIG8(__PVT__cmpien,0,0);
    VL_SIG8(__PVT__rovien,0,0);
    VL_SIG8(__PVT__fifoien,0,0);
    VL_SIG8(__PVT__status,5,0);
    VL_SIG8(__PVT__rstgen_reset_b,0,0);
    VL_SIG8(__PVT__pwm_en_reset_b,0,0);
    VL_SIG8(__PVT__xfr_err_less,0,0);
    VL_SIG8(__PVT__xfr_err_full,0,0);
    VL_SIG8(__PVT__invalid_reg_space,0,0);
    VL_SIG16(__PVT__pwmper,15,0);
    //char	__VpadToAlign98[2];
    VL_SIG(__PVT__pwmcon,27,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__swr,0,0);
    VL_SIG8(__Vdly__stopen,0,0);
    VL_SIG8(__Vdly__dozen,0,0);
    VL_SIG8(__Vdly__waiten,0,0);
    VL_SIG8(__Vdly__debugen,0,0);
    VL_SIG8(__Vdly__fifo_watermark,1,0);
    VL_SIG8(__Vdly__bctr,0,0);
    VL_SIG8(__Vdly__hctr,0,0);
    VL_SIG8(__Vdly__poutc,1,0);
    VL_SIG8(__Vdly__clksrc,1,0);
    VL_SIG8(__Vdly__rep_mode,1,0);
    VL_SIG8(__Vdly__pwm_enable_bit,0,0);
    VL_SIG8(__Vdly__interrupt,2,0);
    VL_SIG8(__Vdly__cmp_status_clear,0,0);
    VL_SIG8(__Vdly__rov_status_clear,0,0);
    VL_SIG8(__Vdly__fifo_status_clear,0,0);
    VL_SIG8(__Vdly__cmp_int_status,0,0);
    VL_SIG8(__Vdly__rov_int_status,0,0);
    VL_SIG8(__Vdly__fifo_int_status,0,0);
    //char	__VpadToAlign127[1];
    VL_SIG16(__Vdly__prescaler,11,0);
    VL_SIG16(__Vdly__pwmper,15,0);
    
    // INTERNAL VARIABLES
  private:
    Vpwm__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vpwm_pwm_reg& operator= (const Vpwm_pwm_reg&);	///< Copying not allowed
    Vpwm_pwm_reg(const Vpwm_pwm_reg&);	///< Copying not allowed
  public:
    Vpwm_pwm_reg(const char* name="TOP");
    ~Vpwm_pwm_reg();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vpwm__Syms* symsp, bool first);
    static void	_combo__TOP__v__pwm_reg__1(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__11(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__13(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__17(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__24(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__25(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__29(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__31(Vpwm__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__pwm_reg__8(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_reg__10(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_reg__22(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_reg__23(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_reg__26(Vpwm__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__pwm_reg__28(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__15(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__18(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__19(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__20(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__3(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__4(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__5(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__6(Vpwm__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__pwm_reg__7(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__12(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__14(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__16(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__2(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__21(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__27(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__30(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__32(Vpwm__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__pwm_reg__9(Vpwm__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
