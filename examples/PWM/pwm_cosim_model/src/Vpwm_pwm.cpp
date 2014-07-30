// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm_pwm.h"          // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm_pwm) {
    VL_CELL (__PVT__pwm_reg, Vpwm_pwm_reg);
    VL_CELL (__PVT__pwm_crm, Vpwm_pwm_crm);
    VL_CELL (__PVT__pwm_outputgen, Vpwm_pwm_outputgen);
    VL_CELL (__PVT__pwm_fifo, Vpwm_pwm_fifo);
    // Reset internal values
    // Reset structure values
    ipp_do_pwmo = VL_RAND_RESET_I(1);
    ipp_obe_pwmo = VL_RAND_RESET_I(1);
    ipg_enable_clk = VL_RAND_RESET_I(1);
    ipg_clk_32k = VL_RAND_RESET_I(1);
    ipg_clk = VL_RAND_RESET_I(1);
    ipg_clk_s = VL_RAND_RESET_I(1);
    ipg_clk_highfreq = VL_RAND_RESET_I(1);
    ipg_hard_async_reset_b = VL_RAND_RESET_I(1);
    ipg_debug = VL_RAND_RESET_I(1);
    ipg_doze = VL_RAND_RESET_I(1);
    ipg_wait = VL_RAND_RESET_I(1);
    ipg_stop = VL_RAND_RESET_I(1);
    ips_xfr_err = VL_RAND_RESET_I(1);
    ips_xfr_wait = VL_RAND_RESET_I(1);
    ips_rdata = VL_RAND_RESET_I(32);
    ips_module_en = VL_RAND_RESET_I(1);
    ips_byte_7_0 = VL_RAND_RESET_I(1);
    ips_byte_15_8 = VL_RAND_RESET_I(1);
    ips_byte_23_16 = VL_RAND_RESET_I(1);
    ips_byte_31_24 = VL_RAND_RESET_I(1);
    ips_rwb = VL_RAND_RESET_I(1);
    ips_addr = VL_RAND_RESET_I(12);
    ips_wdata = VL_RAND_RESET_I(32);
    resp_sel = VL_RAND_RESET_I(1);
    ipi_int_pwm_rovi = VL_RAND_RESET_I(1);
    ipi_int_pwm_cmpi = VL_RAND_RESET_I(1);
    ipi_int_pwm_fifoi = VL_RAND_RESET_I(1);
    ipi_int_pwm = VL_RAND_RESET_I(1);
    ipt_mode = VL_RAND_RESET_I(1);
    ipt_se_gatedclk = VL_RAND_RESET_I(1);
    ipt_se_async = VL_RAND_RESET_I(1);
    ipt_reset_b = VL_RAND_RESET_I(1);
    __PVT__rstgen_rst_b = VL_RAND_RESET_I(1);
    __PVT__clksrc = VL_RAND_RESET_I(2);
    __PVT__prescaler = VL_RAND_RESET_I(12);
    __PVT__fifo_av = VL_RAND_RESET_I(3);
    __PVT__fifo_empty = VL_RAND_RESET_I(1);
    __PVT__full = VL_RAND_RESET_I(1);
    __PVT__fifo_watermark = VL_RAND_RESET_I(2);
    __PVT__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __PVT__pwm_en = VL_RAND_RESET_I(1);
    __PVT__rep_mode = VL_RAND_RESET_I(2);
    __PVT__sample = VL_RAND_RESET_I(16);
    __PVT__bctr = VL_RAND_RESET_I(1);
    __PVT__hctr = VL_RAND_RESET_I(1);
    __PVT__poutc = VL_RAND_RESET_I(2);
    __PVT__period_reg_data = VL_RAND_RESET_I(16);
    __PVT__count = VL_RAND_RESET_I(16);
    __PVT__write_pwmsam = VL_RAND_RESET_I(1);
    __PVT__pclk = VL_RAND_RESET_I(1);
    __PVT__widthmatch = VL_RAND_RESET_I(1);
    __PVT__rov_event = VL_RAND_RESET_I(1);
    __PVT__updatesample = VL_RAND_RESET_I(1);
}

void Vpwm_pwm::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm_pwm::~Vpwm_pwm() {
}

//--------------------
// Internal Methods

void Vpwm_pwm::_initial__TOP__v(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_initial__TOP__v\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at rtl/pwm.v:231
    VL_WRITEF("Sim is running\n");
}

void Vpwm_pwm::_combo__TOP__v__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__rstgen_rst_b = vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b;
}

void Vpwm_pwm::_settle__TOP__v__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__rstgen_rst_b = vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b;
}

void Vpwm_pwm::_settle__TOP__v__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__resp_sel = vlSymsp->TOP__v.resp_sel;
    vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata = vlSymsp->TOP__v.ips_wdata;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async = vlSymsp->TOP__v.ipt_se_async;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b = vlSymsp->TOP__v.ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb = vlSymsp->TOP__v.ips_rwb;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24 
	= vlSymsp->TOP__v.ips_byte_31_24;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16 
	= vlSymsp->TOP__v.ips_byte_23_16;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8 = vlSymsp->TOP__v.ips_byte_15_8;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0 = vlSymsp->TOP__v.ips_byte_7_0;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr = vlSymsp->TOP__v.ips_addr;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en = vlSymsp->TOP__v.ips_module_en;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipt_se_gatedclk 
	= vlSymsp->TOP__v.ipt_se_gatedclk;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_wait = vlSymsp->TOP__v.ipg_wait;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_stop = vlSymsp->TOP__v.ipg_stop;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_debug = vlSymsp->TOP__v.ipg_debug;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_doze = vlSymsp->TOP__v.ipg_doze;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_32k = vlSymsp->TOP__v.ipg_clk_32k;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_highfreq 
	= vlSymsp->TOP__v.ipg_clk_highfreq;
    vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk = vlSymsp->TOP__v.ipg_clk;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk = vlSymsp->TOP__v.ipg_clk;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode = vlSymsp->TOP__v.ipt_mode;
    vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s = vlSymsp->TOP__v.ipg_clk_s;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s = vlSymsp->TOP__v.ipg_clk_s;
}

void Vpwm_pwm::_combo__TOP__v__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__resp_sel = vlSymsp->TOP__v.resp_sel;
    vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata = vlSymsp->TOP__v.ips_wdata;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async = vlSymsp->TOP__v.ipt_se_async;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b = vlSymsp->TOP__v.ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb = vlSymsp->TOP__v.ips_rwb;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24 
	= vlSymsp->TOP__v.ips_byte_31_24;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16 
	= vlSymsp->TOP__v.ips_byte_23_16;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8 = vlSymsp->TOP__v.ips_byte_15_8;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0 = vlSymsp->TOP__v.ips_byte_7_0;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr = vlSymsp->TOP__v.ips_addr;
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en = vlSymsp->TOP__v.ips_module_en;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipt_se_gatedclk 
	= vlSymsp->TOP__v.ipt_se_gatedclk;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_wait = vlSymsp->TOP__v.ipg_wait;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_stop = vlSymsp->TOP__v.ipg_stop;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_debug = vlSymsp->TOP__v.ipg_debug;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_doze = vlSymsp->TOP__v.ipg_doze;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_32k = vlSymsp->TOP__v.ipg_clk_32k;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_highfreq 
	= vlSymsp->TOP__v.ipg_clk_highfreq;
    vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk = vlSymsp->TOP__v.ipg_clk;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk = vlSymsp->TOP__v.ipg_clk;
    vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode = vlSymsp->TOP__v.ipt_mode;
    vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s = vlSymsp->TOP__v.ipg_clk_s;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s = vlSymsp->TOP__v.ipg_clk_s;
}

void Vpwm_pwm::_sequent__TOP__v__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_sequent__TOP__v__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__poutc = vlSymsp->TOP__v__pwm_reg.__PVT__poutc;
    vlSymsp->TOP__v.__PVT__bctr = vlSymsp->TOP__v__pwm_reg.__PVT__bctr;
    vlSymsp->TOP__v.__PVT__hctr = vlSymsp->TOP__v__pwm_reg.__PVT__hctr;
    vlSymsp->TOP__v.__PVT__fifo_watermark = vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark;
    vlSymsp->TOP__v.__PVT__rep_mode = vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode;
    vlSymsp->TOP__v.__PVT__prescaler = vlSymsp->TOP__v__pwm_reg.__PVT__prescaler;
    vlSymsp->TOP__v.__PVT__clksrc = vlSymsp->TOP__v__pwm_reg.__PVT__clksrc;
}

void Vpwm_pwm::_combo__TOP__v__6(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__6\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b 
	= vlSymsp->TOP__v.ipg_hard_async_reset_b;
}

void Vpwm_pwm::_settle__TOP__v__7(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__7\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__poutc = vlSymsp->TOP__v__pwm_reg.__PVT__poutc;
    vlSymsp->TOP__v.__PVT__bctr = vlSymsp->TOP__v__pwm_reg.__PVT__bctr;
    vlSymsp->TOP__v.__PVT__hctr = vlSymsp->TOP__v__pwm_reg.__PVT__hctr;
    vlSymsp->TOP__v.__PVT__fifo_watermark = vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark;
    vlSymsp->TOP__v.__PVT__rep_mode = vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode;
    vlSymsp->TOP__v.__PVT__prescaler = vlSymsp->TOP__v__pwm_reg.__PVT__prescaler;
    vlSymsp->TOP__v.__PVT__clksrc = vlSymsp->TOP__v__pwm_reg.__PVT__clksrc;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b 
	= vlSymsp->TOP__v.ipg_hard_async_reset_b;
    vlSymsp->TOP__v.__PVT__period_reg_data = vlSymsp->TOP__v__pwm_reg.__PVT__period_reg_data;
    vlSymsp->TOP__v.ipg_enable_clk = vlSymsp->TOP__v__pwm_reg.__PVT__ipg_enable_clk;
    vlSymsp->TOP__v.__PVT__pwm_en = vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en;
    vlSymsp->TOP__v__pwm_fifo.__PVT__bctr = vlSymsp->TOP__v.__PVT__bctr;
    vlSymsp->TOP__v__pwm_fifo.__PVT__hctr = vlSymsp->TOP__v.__PVT__hctr;
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark 
	= vlSymsp->TOP__v.__PVT__fifo_watermark;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode 
	= vlSymsp->TOP__v.__PVT__rep_mode;
    vlSymsp->TOP__v__pwm_crm.__PVT__clksrc = vlSymsp->TOP__v.__PVT__clksrc;
}

void Vpwm_pwm::_sequent__TOP__v__8(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_sequent__TOP__v__8\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__period_reg_data = vlSymsp->TOP__v__pwm_reg.__PVT__period_reg_data;
    vlSymsp->TOP__v.ipg_enable_clk = vlSymsp->TOP__v__pwm_reg.__PVT__ipg_enable_clk;
    vlSymsp->TOP__v__pwm_fifo.__PVT__bctr = vlSymsp->TOP__v.__PVT__bctr;
    vlSymsp->TOP__v__pwm_fifo.__PVT__hctr = vlSymsp->TOP__v.__PVT__hctr;
    vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark 
	= vlSymsp->TOP__v.__PVT__fifo_watermark;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode 
	= vlSymsp->TOP__v.__PVT__rep_mode;
    vlSymsp->TOP__v__pwm_crm.__PVT__clksrc = vlSymsp->TOP__v.__PVT__clksrc;
}

void Vpwm_pwm::_combo__TOP__v__9(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__9\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__pwm_en = vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en = vlSymsp->TOP__v.__PVT__pwm_en;
    vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en = vlSymsp->TOP__v.__PVT__pwm_en;
}

void Vpwm_pwm::_settle__TOP__v__10(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__10\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en = vlSymsp->TOP__v.__PVT__pwm_en;
    vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en = vlSymsp->TOP__v.__PVT__pwm_en;
}

void Vpwm_pwm::_settle__TOP__v__11(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__11\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__pwm_en_rst_b = vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_rst_b;
}

void Vpwm_pwm::_combo__TOP__v__12(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__12\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__pwm_en_rst_b = vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_rst_b;
    vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b = vlSymsp->TOP__v.__PVT__pwm_en_rst_b;
}

void Vpwm_pwm::_sequent__TOP__v__13(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_sequent__TOP__v__13\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__prescaler = vlSymsp->TOP__v.__PVT__prescaler;
}

void Vpwm_pwm::_settle__TOP__v__14(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__14\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_crm.__PVT__prescaler = vlSymsp->TOP__v.__PVT__prescaler;
    vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b = vlSymsp->TOP__v.__PVT__pwm_en_rst_b;
}

void Vpwm_pwm::_settle__TOP__v__15(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__15\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__pclk = vlSymsp->TOP__v__pwm_crm.__PVT__pclk;
}

void Vpwm_pwm::_combo__TOP__v__16(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__16\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__pclk = vlSymsp->TOP__v__pwm_crm.__PVT__pclk;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk = vlSymsp->TOP__v.__PVT__pclk;
    vlSymsp->TOP__v__pwm_reg.__PVT__pclk = vlSymsp->TOP__v.__PVT__pclk;
    vlSymsp->TOP__v__pwm_fifo.__PVT__pclk = vlSymsp->TOP__v.__PVT__pclk;
}

void Vpwm_pwm::_settle__TOP__v__17(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__17\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk = vlSymsp->TOP__v.__PVT__pclk;
    vlSymsp->TOP__v__pwm_reg.__PVT__pclk = vlSymsp->TOP__v.__PVT__pclk;
    vlSymsp->TOP__v__pwm_fifo.__PVT__pclk = vlSymsp->TOP__v.__PVT__pclk;
}

void Vpwm_pwm::_sequent__TOP__v__18(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_sequent__TOP__v__18\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipp_obe_pwmo = vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_obe_pwmo;
    vlSymsp->TOP__v.ipp_do_pwmo = vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_do_pwmo;
    vlSymsp->TOP__v.__PVT__count = vlSymsp->TOP__v__pwm_outputgen.__PVT__count;
}

void Vpwm_pwm::_sequent__TOP__v__19(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_sequent__TOP__v__19\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__poutc = vlSymsp->TOP__v.__PVT__poutc;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data 
	= vlSymsp->TOP__v.__PVT__period_reg_data;
}

void Vpwm_pwm::_settle__TOP__v__20(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__20\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__poutc = vlSymsp->TOP__v.__PVT__poutc;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data 
	= vlSymsp->TOP__v.__PVT__period_reg_data;
    vlSymsp->TOP__v.ipp_obe_pwmo = vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_obe_pwmo;
    vlSymsp->TOP__v.ipp_do_pwmo = vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_do_pwmo;
    vlSymsp->TOP__v.__PVT__count = vlSymsp->TOP__v__pwm_outputgen.__PVT__count;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b 
	= vlSymsp->TOP__v.__PVT__pwm_en_rst_b;
    vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b = vlSymsp->TOP__v.__PVT__rstgen_rst_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__count = vlSymsp->TOP__v.__PVT__count;
}

void Vpwm_pwm::_settle__TOP__v__21(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__21\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__rov_event = vlSymsp->TOP__v__pwm_outputgen.__PVT__rov_event;
}

void Vpwm_pwm::_combo__TOP__v__22(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__22\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b 
	= vlSymsp->TOP__v.__PVT__pwm_en_rst_b;
    vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b = vlSymsp->TOP__v.__PVT__rstgen_rst_b;
}

void Vpwm_pwm::_sequent__TOP__v__23(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_sequent__TOP__v__23\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__count = vlSymsp->TOP__v.__PVT__count;
    vlSymsp->TOP__v.__PVT__rov_event = vlSymsp->TOP__v__pwm_outputgen.__PVT__rov_event;
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_event = vlSymsp->TOP__v.__PVT__rov_event;
}

void Vpwm_pwm::_settle__TOP__v__24(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__24\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata = vlSymsp->TOP__v.ips_wdata;
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_event = vlSymsp->TOP__v.__PVT__rov_event;
    vlSymsp->TOP__v.__PVT__updatesample = vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample;
}

void Vpwm_pwm::_settle__TOP__v__25(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__25\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__fifo_av = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_av;
}

void Vpwm_pwm::_multiclk__TOP__v__26(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__26\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipi_int_pwm_fifoi = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi;
}

void Vpwm_pwm::_multiclk__TOP__v__27(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__27\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipi_int_pwm_rovi = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi;
}

void Vpwm_pwm::_combo__TOP__v__28(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__28\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata = vlSymsp->TOP__v.ips_wdata;
    vlSymsp->TOP__v.__PVT__updatesample = vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample;
    vlSymsp->TOP__v__pwm_fifo.__PVT__read = vlSymsp->TOP__v.__PVT__updatesample;
}

void Vpwm_pwm::_multiclk__TOP__v__29(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__29\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipi_int_pwm_cmpi = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi;
}

void Vpwm_pwm::_multiclk__TOP__v__30(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__30\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__fifo_av = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_av;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_av = vlSymsp->TOP__v.__PVT__fifo_av;
}

void Vpwm_pwm::_multiclk__TOP__v__31(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__31\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__full = vlSymsp->TOP__v__pwm_fifo.__PVT__full;
}

void Vpwm_pwm::_settle__TOP__v__32(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__32\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipi_int_pwm_fifoi = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi;
    vlSymsp->TOP__v.ipi_int_pwm_rovi = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi;
    vlSymsp->TOP__v__pwm_fifo.__PVT__read = vlSymsp->TOP__v.__PVT__updatesample;
    vlSymsp->TOP__v.ipi_int_pwm_cmpi = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_av = vlSymsp->TOP__v.__PVT__fifo_av;
    vlSymsp->TOP__v.__PVT__full = vlSymsp->TOP__v__pwm_fifo.__PVT__full;
    vlSymsp->TOP__v__pwm_reg.__PVT__full = vlSymsp->TOP__v.__PVT__full;
}

void Vpwm_pwm::_settle__TOP__v__33(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__33\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__write_pwmsam = vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam;
    vlSymsp->TOP__v.ips_xfr_wait = vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_wait;
    vlSymsp->TOP__v.__PVT__sample = vlSymsp->TOP__v__pwm_fifo.__PVT__sample;
}

void Vpwm_pwm::_multiclk__TOP__v__34(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__34\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipi_int_pwm = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm;
}

void Vpwm_pwm::_combo__TOP__v__35(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__35\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__write_pwmsam = vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam;
    vlSymsp->TOP__v.ips_xfr_wait = vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_wait;
    vlSymsp->TOP__v__pwm_fifo.__PVT__write_pwmsam = vlSymsp->TOP__v.__PVT__write_pwmsam;
}

void Vpwm_pwm::_multiclk__TOP__v__36(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__36\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__full = vlSymsp->TOP__v.__PVT__full;
}

void Vpwm_pwm::_multiclk__TOP__v__37(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_multiclk__TOP__v__37\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__sample = vlSymsp->TOP__v__pwm_fifo.__PVT__sample;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein 
	= vlSymsp->TOP__v.__PVT__sample;
    vlSymsp->TOP__v__pwm_reg.__PVT__sample = vlSymsp->TOP__v.__PVT__sample;
}

void Vpwm_pwm::_settle__TOP__v__38(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__38\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipi_int_pwm = vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm;
    vlSymsp->TOP__v__pwm_fifo.__PVT__write_pwmsam = vlSymsp->TOP__v.__PVT__write_pwmsam;
    vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein 
	= vlSymsp->TOP__v.__PVT__sample;
    vlSymsp->TOP__v__pwm_reg.__PVT__sample = vlSymsp->TOP__v.__PVT__sample;
}

void Vpwm_pwm::_settle__TOP__v__39(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__39\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__fifo_empty = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_empty;
}

void Vpwm_pwm::_combo__TOP__v__40(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__40\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__PVT__fifo_empty = vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_empty;
    vlSymsp->TOP__v.ips_rdata = vlSymsp->TOP__v__pwm_reg.__PVT__ips_rdata;
    vlSymsp->TOP__v.__PVT__widthmatch = vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_empty = vlSymsp->TOP__v.__PVT__fifo_empty;
}

void Vpwm_pwm::_settle__TOP__v__41(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_settle__TOP__v__41\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ips_rdata = vlSymsp->TOP__v__pwm_reg.__PVT__ips_rdata;
    vlSymsp->TOP__v.__PVT__widthmatch = vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_empty = vlSymsp->TOP__v.__PVT__fifo_empty;
    vlSymsp->TOP__v.ips_xfr_err = vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_err;
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_event = vlSymsp->TOP__v.__PVT__widthmatch;
}

void Vpwm_pwm::_combo__TOP__v__42(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vpwm_pwm::_combo__TOP__v__42\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ips_xfr_err = vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_err;
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_event = vlSymsp->TOP__v.__PVT__widthmatch;
}
