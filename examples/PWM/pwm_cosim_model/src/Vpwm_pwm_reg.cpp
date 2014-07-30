// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm_pwm_reg.h"      // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm_pwm_reg) {
    VL_CELL (__PVT__software_reset_mux, Vpwm_pwm_dft_reset_mux);
    VL_CELL (__PVT__pwm_en_reset_mux, Vpwm_pwm_dft_reset_mux);
    VL_CELL (__PVT__cmp_status_reset_mux, Vpwm_pwm_dft_reset_mux);
    VL_CELL (__PVT__rov_status_reset_mux, Vpwm_pwm_dft_reset_mux);
    VL_CELL (__PVT__fifo_status_reset_mux, Vpwm_pwm_dft_reset_mux);
    // Reset internal values
    // Reset structure values
    __PVT__clksrc = VL_RAND_RESET_I(2);
    __PVT__prescaler = VL_RAND_RESET_I(12);
    __PVT__ipi_int_pwm_cmpi = VL_RAND_RESET_I(1);
    __PVT__ipi_int_pwm_rovi = VL_RAND_RESET_I(1);
    __PVT__ipi_int_pwm_fifoi = VL_RAND_RESET_I(1);
    __PVT__ipi_int_pwm = VL_RAND_RESET_I(1);
    __PVT__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __PVT__pwm_en = VL_RAND_RESET_I(1);
    __PVT__rep_mode = VL_RAND_RESET_I(2);
    __PVT__fifo_watermark = VL_RAND_RESET_I(2);
    __PVT__ips_xfr_err = VL_RAND_RESET_I(1);
    __PVT__ips_xfr_wait = VL_RAND_RESET_I(1);
    __PVT__ipg_enable_clk = VL_RAND_RESET_I(1);
    __PVT__bctr = VL_RAND_RESET_I(1);
    __PVT__hctr = VL_RAND_RESET_I(1);
    __PVT__poutc = VL_RAND_RESET_I(2);
    __PVT__period_reg_data = VL_RAND_RESET_I(16);
    __PVT__ips_rdata = VL_RAND_RESET_I(32);
    __PVT__write_pwmsam = VL_RAND_RESET_I(1);
    __PVT__rstgen_rst_b = VL_RAND_RESET_I(1);
    __PVT__fifo_av = VL_RAND_RESET_I(3);
    __PVT__fifo_empty = VL_RAND_RESET_I(1);
    __PVT__full = VL_RAND_RESET_I(1);
    __PVT__rov_event = VL_RAND_RESET_I(1);
    __PVT__cmp_event = VL_RAND_RESET_I(1);
    __PVT__pclk = VL_RAND_RESET_I(1);
    __PVT__sample = VL_RAND_RESET_I(16);
    __PVT__count = VL_RAND_RESET_I(16);
    __PVT__ipg_clk_s = VL_RAND_RESET_I(1);
    __PVT__ipg_stop = VL_RAND_RESET_I(1);
    __PVT__ipg_doze = VL_RAND_RESET_I(1);
    __PVT__ipg_wait = VL_RAND_RESET_I(1);
    __PVT__ipg_debug = VL_RAND_RESET_I(1);
    __PVT__resp_sel = VL_RAND_RESET_I(1);
    __PVT__ips_module_en = VL_RAND_RESET_I(1);
    __PVT__ips_addr = VL_RAND_RESET_I(12);
    __PVT__ips_rwb = VL_RAND_RESET_I(1);
    __PVT__ips_byte_31_24 = VL_RAND_RESET_I(1);
    __PVT__ips_byte_23_16 = VL_RAND_RESET_I(1);
    __PVT__ips_byte_15_8 = VL_RAND_RESET_I(1);
    __PVT__ips_byte_7_0 = VL_RAND_RESET_I(1);
    __PVT__ips_wdata = VL_RAND_RESET_I(32);
    __PVT__ipg_hard_async_reset_b = VL_RAND_RESET_I(1);
    __PVT__ipt_reset_b = VL_RAND_RESET_I(1);
    __PVT__ipt_se_async = VL_RAND_RESET_I(1);
    __PVT__cmp_status_clear = VL_RAND_RESET_I(1);
    __PVT__cmp_int_status = VL_RAND_RESET_I(1);
    __PVT__rov_status_clear = VL_RAND_RESET_I(1);
    __PVT__rov_int_status = VL_RAND_RESET_I(1);
    __PVT__fifo_status_clear = VL_RAND_RESET_I(1);
    __PVT__fifo_int_status = VL_RAND_RESET_I(1);
    __PVT__pwmper = VL_RAND_RESET_I(16);
    __PVT__interrupt = VL_RAND_RESET_I(3);
    __PVT__swr = VL_RAND_RESET_I(1);
    __PVT__stopen = VL_RAND_RESET_I(1);
    __PVT__dozen = VL_RAND_RESET_I(1);
    __PVT__waiten = VL_RAND_RESET_I(1);
    __PVT__debugen = VL_RAND_RESET_I(1);
    __PVT__pwm_enable_bit = VL_RAND_RESET_I(1);
    __PVT__pwmcon = VL_RAND_RESET_I(28);
    __PVT__cmp_status_reset_b = VL_RAND_RESET_I(1);
    __PVT__rov_status_reset_b = VL_RAND_RESET_I(1);
    __PVT__fifo_status_reset_b = VL_RAND_RESET_I(1);
    __PVT__cmp_status_rst_b = VL_RAND_RESET_I(1);
    __PVT__rov_status_rst_b = VL_RAND_RESET_I(1);
    __PVT__fifo_status_rst_b = VL_RAND_RESET_I(1);
    __PVT__pwm_read_reg = VL_RAND_RESET_I(1);
    __PVT__pwm_write_reg = VL_RAND_RESET_I(1);
    __PVT__controlsel = VL_RAND_RESET_I(1);
    __PVT__statussel = VL_RAND_RESET_I(1);
    __PVT__intrsel = VL_RAND_RESET_I(1);
    __PVT__samplesel = VL_RAND_RESET_I(1);
    __PVT__periodsel = VL_RAND_RESET_I(1);
    __PVT__cntrsel = VL_RAND_RESET_I(1);
    __PVT__cmpien = VL_RAND_RESET_I(1);
    __PVT__rovien = VL_RAND_RESET_I(1);
    __PVT__fifoien = VL_RAND_RESET_I(1);
    __PVT__status = VL_RAND_RESET_I(6);
    __PVT__rstgen_reset_b = VL_RAND_RESET_I(1);
    __PVT__pwm_en_reset_b = VL_RAND_RESET_I(1);
    __PVT__xfr_err_less = VL_RAND_RESET_I(1);
    __PVT__xfr_err_full = VL_RAND_RESET_I(1);
    __PVT__invalid_reg_space = VL_RAND_RESET_I(1);
    __Vdly__swr = VL_RAND_RESET_I(1);
    __Vdly__stopen = VL_RAND_RESET_I(1);
    __Vdly__dozen = VL_RAND_RESET_I(1);
    __Vdly__waiten = VL_RAND_RESET_I(1);
    __Vdly__debugen = VL_RAND_RESET_I(1);
    __Vdly__fifo_watermark = VL_RAND_RESET_I(2);
    __Vdly__bctr = VL_RAND_RESET_I(1);
    __Vdly__hctr = VL_RAND_RESET_I(1);
    __Vdly__poutc = VL_RAND_RESET_I(2);
    __Vdly__clksrc = VL_RAND_RESET_I(2);
    __Vdly__prescaler = VL_RAND_RESET_I(12);
    __Vdly__rep_mode = VL_RAND_RESET_I(2);
    __Vdly__pwm_enable_bit = VL_RAND_RESET_I(1);
    __Vdly__interrupt = VL_RAND_RESET_I(3);
    __Vdly__pwmper = VL_RAND_RESET_I(16);
    __Vdly__cmp_status_clear = VL_RAND_RESET_I(1);
    __Vdly__rov_status_clear = VL_RAND_RESET_I(1);
    __Vdly__fifo_status_clear = VL_RAND_RESET_I(1);
    __Vdly__cmp_int_status = VL_RAND_RESET_I(1);
    __Vdly__rov_int_status = VL_RAND_RESET_I(1);
    __Vdly__fifo_int_status = VL_RAND_RESET_I(1);
}

void Vpwm_pwm_reg::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm_pwm_reg::~Vpwm_pwm_reg() {
}

//--------------------
// Internal Methods

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel = (5 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__samplesel = (3 
						 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg = 
	((((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb)) 
	    & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24)) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16)) 
	  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8)) 
	 & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0));
    vlSymsp->TOP__v__pwm_reg.__PVT__invalid_reg_space 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en) 
	   & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr) 
	      > 5));
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async;
    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel = (5 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__samplesel = (3 
						 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg = 
	((((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb)) 
	    & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24)) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16)) 
	  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8)) 
	 & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0));
    vlSymsp->TOP__v__pwm_reg.__PVT__invalid_reg_space 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en) 
	   & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr) 
	      > 5));
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__6(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__6\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__Vdly__pwmper = vlSymsp->TOP__v__pwm_reg.__PVT__pwmper;
    vlSymsp->TOP__v__pwm_reg.__Vdly__interrupt = vlSymsp->TOP__v__pwm_reg.__PVT__interrupt;
    vlSymsp->TOP__v__pwm_reg.__Vdly__poutc = vlSymsp->TOP__v__pwm_reg.__PVT__poutc;
    vlSymsp->TOP__v__pwm_reg.__Vdly__bctr = vlSymsp->TOP__v__pwm_reg.__PVT__bctr;
    vlSymsp->TOP__v__pwm_reg.__Vdly__hctr = vlSymsp->TOP__v__pwm_reg.__PVT__hctr;
    vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_watermark 
	= vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark;
    vlSymsp->TOP__v__pwm_reg.__Vdly__rep_mode = vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode;
    vlSymsp->TOP__v__pwm_reg.__Vdly__prescaler = vlSymsp->TOP__v__pwm_reg.__PVT__prescaler;
    vlSymsp->TOP__v__pwm_reg.__Vdly__pwm_enable_bit 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit;
    vlSymsp->TOP__v__pwm_reg.__Vdly__clksrc = vlSymsp->TOP__v__pwm_reg.__PVT__clksrc;
    // ALWAYS at rtl/pwm_reg.v:424
    if (vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b) {
	if (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__periodsel))) {
	    vlSymsp->TOP__v__pwm_reg.__Vdly__pwmper 
		= (0xffff & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0, 0x10));
	}
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__pwmper = 0xfffe;
    }
    // ALWAYS at rtl/pwm_reg.v:409
    if (vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b) {
	if (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__intrsel))) {
	    vlSymsp->TOP__v__pwm_reg.__Vdly__interrupt 
		= (7 & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0, 3));
	}
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__interrupt = 0;
    }
    // ALWAYS at rtl/pwm_reg.v:288
    if (vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b) {
	if (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__controlsel))) {
	    vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_watermark 
		= (3 & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x1a, 2));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__bctr = 
		(1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x15));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__hctr = 
		(1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x14));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__poutc 
		= (3 & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x12, 2));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__clksrc 
		= (3 & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x10, 2));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__prescaler 
		= (0xfff & VL_SEL_IIII(12,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 4, 0xc));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__rep_mode 
		= (3 & VL_SEL_IIII(2,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 1, 2));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__pwm_enable_bit 
		= (1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0));
	}
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_watermark = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__bctr = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__hctr = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__poutc = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__clksrc = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__prescaler = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__rep_mode = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__pwm_enable_bit = 0;
    }
    vlSymsp->TOP__v__pwm_reg.__PVT__pwmper = vlSymsp->TOP__v__pwm_reg.__Vdly__pwmper;
    vlSymsp->TOP__v__pwm_reg.__PVT__interrupt = vlSymsp->TOP__v__pwm_reg.__Vdly__interrupt;
    vlSymsp->TOP__v__pwm_reg.__PVT__poutc = vlSymsp->TOP__v__pwm_reg.__Vdly__poutc;
    vlSymsp->TOP__v__pwm_reg.__PVT__bctr = vlSymsp->TOP__v__pwm_reg.__Vdly__bctr;
    vlSymsp->TOP__v__pwm_reg.__PVT__hctr = vlSymsp->TOP__v__pwm_reg.__Vdly__hctr;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_watermark;
    vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode = vlSymsp->TOP__v__pwm_reg.__Vdly__rep_mode;
    vlSymsp->TOP__v__pwm_reg.__PVT__prescaler = vlSymsp->TOP__v__pwm_reg.__Vdly__prescaler;
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__pwm_enable_bit;
    vlSymsp->TOP__v__pwm_reg.__PVT__clksrc = vlSymsp->TOP__v__pwm_reg.__Vdly__clksrc;
    vlSymsp->TOP__v__pwm_reg.__PVT__period_reg_data 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pwmper;
    vlSymsp->TOP__v__pwm_reg.__PVT__cmpien = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt), 2));
    vlSymsp->TOP__v__pwm_reg.__PVT__rovien = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt), 1));
    vlSymsp->TOP__v__pwm_reg.__PVT__fifoien = (1 & 
					       VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt), 0));
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_enable_clk 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit;
    VL_ASSIGNBIT_II(1,0, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit);
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__7(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__7\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__Vdly__swr = vlSymsp->TOP__v__pwm_reg.__PVT__swr;
    vlSymsp->TOP__v__pwm_reg.__Vdly__waiten = vlSymsp->TOP__v__pwm_reg.__PVT__waiten;
    vlSymsp->TOP__v__pwm_reg.__Vdly__debugen = vlSymsp->TOP__v__pwm_reg.__PVT__debugen;
    vlSymsp->TOP__v__pwm_reg.__Vdly__dozen = vlSymsp->TOP__v__pwm_reg.__PVT__dozen;
    vlSymsp->TOP__v__pwm_reg.__Vdly__stopen = vlSymsp->TOP__v__pwm_reg.__PVT__stopen;
    // ALWAYS at rtl/pwm_reg.v:263
    if (vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b) {
	if (vlSymsp->TOP__v__pwm_reg.__PVT__swr) {
	    vlSymsp->TOP__v__pwm_reg.__Vdly__swr = 0;
	}
	if (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__controlsel))) {
	    if ((1 & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__swr)))) {
		vlSymsp->TOP__v__pwm_reg.__Vdly__swr 
		    = (1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 3));
	    }
	    vlSymsp->TOP__v__pwm_reg.__Vdly__stopen 
		= (1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x19));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__dozen 
		= (1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x18));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__waiten 
		= (1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x17));
	    vlSymsp->TOP__v__pwm_reg.__Vdly__debugen 
		= (1 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 0x16));
	}
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__swr = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__stopen = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__dozen = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__waiten = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__debugen = 0;
    }
    vlSymsp->TOP__v__pwm_reg.__PVT__swr = vlSymsp->TOP__v__pwm_reg.__Vdly__swr;
    vlSymsp->TOP__v__pwm_reg.__PVT__stopen = vlSymsp->TOP__v__pwm_reg.__Vdly__stopen;
    vlSymsp->TOP__v__pwm_reg.__PVT__dozen = vlSymsp->TOP__v__pwm_reg.__Vdly__dozen;
    vlSymsp->TOP__v__pwm_reg.__PVT__waiten = vlSymsp->TOP__v__pwm_reg.__Vdly__waiten;
    vlSymsp->TOP__v__pwm_reg.__PVT__debugen = vlSymsp->TOP__v__pwm_reg.__Vdly__debugen;
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__8(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__8\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__periodsel = (4 
						 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__intrsel = (2 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__controlsel = (0 
						  == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b 
	= ((~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__swr)) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b));
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en = (((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit) 
						 & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__stopen) 
						    | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_stop)))) 
						& ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__dozen) 
						   | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_doze)))) 
					       & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__waiten) 
						  | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_wait)))) 
					      & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__debugen) 
						 | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_debug))));
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__9(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__9\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__periodsel = (4 
						 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__intrsel = (2 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__period_reg_data 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pwmper;
    vlSymsp->TOP__v__pwm_reg.__PVT__cmpien = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt), 2));
    vlSymsp->TOP__v__pwm_reg.__PVT__rovien = (1 & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt), 1));
    vlSymsp->TOP__v__pwm_reg.__PVT__fifoien = (1 & 
					       VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt), 0));
    vlSymsp->TOP__v__pwm_reg.__PVT__ipg_enable_clk 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit;
    VL_ASSIGNBIT_II(1,0, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit);
    vlSymsp->TOP__v__pwm_reg.__PVT__controlsel = (0 
						  == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    VL_ASSIGNSEL_IIII(17,1, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, 
		      VL_CONCAT_III(17,2,15, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__clksrc), 
				    VL_CONCAT_III(15,12,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__prescaler), 
						  VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__swr), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode)))));
    vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b 
	= ((~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__swr)) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b));
    VL_ASSIGNSEL_IIII(5,0x17, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, 
		      VL_CONCAT_III(5,2,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark), 
				    VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__stopen), 
						  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__dozen), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__waiten)))));
    VL_ASSIGNSEL_IIII(5,0x12, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, 
		      VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__debugen), 
				    VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__bctr), 
						  VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__hctr), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__poutc)))));
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en = (((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit) 
						 & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__stopen) 
						    | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_stop)))) 
						& ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__dozen) 
						   | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_doze)))) 
					       & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__waiten) 
						  | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_wait)))) 
					      & ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__debugen) 
						 | (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_debug))));
    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
}

void Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__10(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__10\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNSEL_IIII(17,1, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, 
		      VL_CONCAT_III(17,2,15, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__clksrc), 
				    VL_CONCAT_III(15,12,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__prescaler), 
						  VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__swr), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode)))));
    VL_ASSIGNSEL_IIII(5,0x17, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, 
		      VL_CONCAT_III(5,2,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark), 
				    VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__stopen), 
						  VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__dozen), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__waiten)))));
    VL_ASSIGNSEL_IIII(5,0x12, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon, 
		      VL_CONCAT_III(5,1,4, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__debugen), 
				    VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__bctr), 
						  VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__hctr), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__poutc)))));
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__11(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__11\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_reset_b;
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__12(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__12\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_reset_b;
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__13(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__13\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_rst_b = vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset;
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__14(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__14\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_rst_b = vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset;
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__15(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__15\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_int_status 
	= vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status;
    vlSymsp->TOP__v__pwm_reg.__Vdly__rov_int_status 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status;
    vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_int_status 
	= vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status;
    // ALWAYS at rtl/pwm_reg.v:377
    if (vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b) {
	vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_int_status 
	    = ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_event) 
	       | ((~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear)) 
		  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status)));
	vlSymsp->TOP__v__pwm_reg.__Vdly__rov_int_status 
	    = ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_event) 
	       | ((~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear)) 
		  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status)));
	vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_int_status 
	    = ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_empty) 
	       | ((~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear)) 
		  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status)));
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_int_status = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__rov_int_status = 0;
	vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_int_status = 1;
    }
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_int_status;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_int_status;
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__rov_int_status;
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__16(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__16\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b = vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset;
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__17(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__17\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b = vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset;
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_reset_b 
	= ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_reset_b;
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_reset_b;
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_reset_b;
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__18(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__18\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_status_clear 
	= vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear;
    // ALWAYS at rtl/pwm_reg.v:367
    if (vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b) {
	if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__statussel) 
	      & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg)) 
	     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 3))) {
	    vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_status_clear = 1;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_status_clear = 0;
    }
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__fifo_status_clear;
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__19(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__19\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__Vdly__rov_status_clear 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear;
    // ALWAYS at rtl/pwm_reg.v:357
    if (vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b) {
	if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__statussel) 
	      & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg)) 
	     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 4))) {
	    vlSymsp->TOP__v__pwm_reg.__Vdly__rov_status_clear = 1;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__rov_status_clear = 0;
    }
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__rov_status_clear;
}

void Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__20(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_sequent__TOP__v__pwm_reg__20\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_status_clear 
	= vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear;
    // ALWAYS at rtl/pwm_reg.v:347
    if (vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b) {
	if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__statussel) 
	      & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg)) 
	     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 5))) {
	    vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_status_clear = 1;
	}
    } else {
	vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_status_clear = 0;
    }
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear 
	= vlSymsp->TOP__v__pwm_reg.__Vdly__cmp_status_clear;
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__21(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__21\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_reset_b;
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_reset_b;
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__func_reset 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_reset_b;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi 
	= (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status) 
	    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear))) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifoien));
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi 
	= (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status) 
	    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear))) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rovien));
    vlSymsp->TOP__v__pwm_reg.__PVT__statussel = (1 
						 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg = 
	((((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24)) 
	    & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16)) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8)) 
	  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0)) 
	 & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb)));
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi 
	= (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status) 
	    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear))) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmpien));
}

void Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__22(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__22\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi 
	= (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status) 
	    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear))) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifoien));
}

void Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__23(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__23\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi 
	= (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status) 
	    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear))) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rovien));
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__24(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__24\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__statussel = (1 
						 == (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr));
    vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg = 
	((((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24)) 
	    & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16)) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8)) 
	  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0)) 
	 & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb)));
    vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam = 
	((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	 & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__samplesel));
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__25(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__25\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_wait = 
	((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__controlsel)) 
	  & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 3)) 
	 & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__swr)));
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset;
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset;
}

void Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__26(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__26\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi 
	= (((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status) 
	    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear))) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmpien));
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__27(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__27\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam = 
	((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	 & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__samplesel));
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_wait = 
	((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__controlsel)) 
	  & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata, 3)) 
	 & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__swr)));
    vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset;
    vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset;
    vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset;
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm = (
						   ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi) 
						    | (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi)) 
						   | (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi));
    vlSymsp->TOP__v__pwm_reg.__PVT__status = VL_CONCAT_III(6,1,5, 
							   ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status) 
							    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear))), 
							   VL_CONCAT_III(5,1,4, 
									 ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status) 
									  & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear))), 
									 VL_CONCAT_III(4,1,3, 
										((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status) 
										& (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear))), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_av))));
}

void Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__28(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_multiclk__TOP__v__pwm_reg__28\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm = (
						   ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi) 
						    | (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi)) 
						   | (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi));
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__29(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__29\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__status = VL_CONCAT_III(6,1,5, 
							   ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status) 
							    & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear))), 
							   VL_CONCAT_III(5,1,4, 
									 ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status) 
									  & (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear))), 
									 VL_CONCAT_III(4,1,3, 
										((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status) 
										& (~ (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear))), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_av))));
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__30(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__30\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_less = 
	(((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel)) 
	 | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__full) 
	    & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam)));
    vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_full = 
	((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel)) 
	  | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__full) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam))) 
	 | (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__invalid_reg_space));
    // ALWAYS at rtl/pwm_reg.v:233
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_rdata = ((0x1000 
						  == 
						  VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						  ? 
						 VL_EXTEND_II(32,28, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon)
						  : 
						 ((0x1001 
						   == 
						   VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						   ? 
						  VL_EXTEND_II(32,6, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__status))
						   : 
						  ((0x1002 
						    == 
						    VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						    ? 
						   VL_EXTEND_II(32,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt))
						    : 
						   ((0x1003 
						     == 
						     VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						     ? 
						    VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__sample))
						     : 
						    ((0x1004 
						      == 
						      VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						      ? 
						     VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwmper))
						      : 
						     ((0x1005 
						       == 
						       VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						       ? 
						      VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__count))
						       : 0))))));
}

void Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__31(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_combo__TOP__v__pwm_reg__31\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_less = 
	(((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	  & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel)) 
	 | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__full) 
	    & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam)));
    vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_full = 
	((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg) 
	   & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel)) 
	  | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__full) 
	     & (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam))) 
	 | (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__invalid_reg_space));
    // ALWAYS at rtl/pwm_reg.v:233
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_rdata = ((0x1000 
						  == 
						  VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						  ? 
						 VL_EXTEND_II(32,28, vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon)
						  : 
						 ((0x1001 
						   == 
						   VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						   ? 
						  VL_EXTEND_II(32,6, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__status))
						   : 
						  ((0x1002 
						    == 
						    VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						    ? 
						   VL_EXTEND_II(32,3, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt))
						    : 
						   ((0x1003 
						     == 
						     VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						     ? 
						    VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__sample))
						     : 
						    ((0x1004 
						      == 
						      VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						      ? 
						     VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwmper))
						      : 
						     ((0x1005 
						       == 
						       VL_CONCAT_III(13,1,12, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg), (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr)))
						       ? 
						      VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__count))
						       : 0))))));
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_err = ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__resp_sel)
						    ? (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_less)
						    : (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_full));
}

void Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__32(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vpwm_pwm_reg::_settle__TOP__v__pwm_reg__32\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_err = ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__resp_sel)
						    ? (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_less)
						    : (IData)(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_full));
}
