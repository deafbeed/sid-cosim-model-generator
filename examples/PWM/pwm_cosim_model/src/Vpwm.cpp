// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm.h for the primary calling header

#include "Vpwm.h"              // For This
#include "Vpwm__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpwm) {
    Vpwm__Syms* __restrict vlSymsp = __VlSymsp = new Vpwm__Syms(this, name());
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__v, Vpwm_pwm);
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
    __VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_reg____PVT__ipg_hard_async_reset_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_crm____PVT__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_crm____PVT__sys_clk = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_outputgen____PVT__pclk = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_outputgen____PVT__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_reg____PVT__pclk = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__pwm_fifo____PVT__pclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__pwm_fifo__ipg_clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__pwm_fifo__ipg_clk_s = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__pwm_reg__ipg_clk_s = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_reg__ipg_hard_async_reset_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_crm__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_crm__sys_clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_reg__rstgen_rst_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_reg__pclk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_reg__ipg_hard_async_reset_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_reg__cmp_status_rst_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_reg__rov_status_rst_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_reg__fifo_status_rst_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_crm__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_crm__sys_clk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_outputgen__pclk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_outputgen__pwm_en_rst_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_fifo__rstgen_rst_b = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__pwm_fifo__pclk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vpwm::__Vconfigure(Vpwm__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpwm::~Vpwm() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vpwm::eval() {
    Vpwm__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vpwm::eval\n"); );
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vpwm::_eval_initial_loop(Vpwm__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vpwm::_combo__TOP__1(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_combo__TOP__1\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipg_hard_async_reset_b = vlTOPp->ipg_hard_async_reset_b;
    vlSymsp->TOP__v.resp_sel = vlTOPp->resp_sel;
    vlSymsp->TOP__v.ips_wdata = vlTOPp->ips_wdata;
    vlSymsp->TOP__v.ipt_reset_b = vlTOPp->ipt_reset_b;
    vlSymsp->TOP__v.ipt_se_async = vlTOPp->ipt_se_async;
    vlSymsp->TOP__v.ips_byte_31_24 = vlTOPp->ips_byte_31_24;
    vlSymsp->TOP__v.ips_rwb = vlTOPp->ips_rwb;
    vlSymsp->TOP__v.ips_byte_7_0 = vlTOPp->ips_byte_7_0;
    vlSymsp->TOP__v.ips_byte_15_8 = vlTOPp->ips_byte_15_8;
    vlSymsp->TOP__v.ips_byte_23_16 = vlTOPp->ips_byte_23_16;
    vlSymsp->TOP__v.ips_addr = vlTOPp->ips_addr;
    vlSymsp->TOP__v.ips_module_en = vlTOPp->ips_module_en;
    vlSymsp->TOP__v.ipt_se_gatedclk = vlTOPp->ipt_se_gatedclk;
    vlSymsp->TOP__v.ipg_stop = vlTOPp->ipg_stop;
    vlSymsp->TOP__v.ipg_wait = vlTOPp->ipg_wait;
    vlSymsp->TOP__v.ipg_doze = vlTOPp->ipg_doze;
    vlSymsp->TOP__v.ipg_debug = vlTOPp->ipg_debug;
    vlSymsp->TOP__v.ipg_clk_highfreq = vlTOPp->ipg_clk_highfreq;
    vlSymsp->TOP__v.ipg_clk_32k = vlTOPp->ipg_clk_32k;
    vlSymsp->TOP__v.ipg_clk = vlTOPp->ipg_clk;
    vlSymsp->TOP__v.ipt_mode = vlTOPp->ipt_mode;
    vlSymsp->TOP__v.ipg_clk_s = vlTOPp->ipg_clk_s;
}

void Vpwm::_settle__TOP__2(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_settle__TOP__2\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.ipg_hard_async_reset_b = vlTOPp->ipg_hard_async_reset_b;
    vlSymsp->TOP__v.resp_sel = vlTOPp->resp_sel;
    vlSymsp->TOP__v.ips_wdata = vlTOPp->ips_wdata;
    vlSymsp->TOP__v.ipt_se_async = vlTOPp->ipt_se_async;
    vlSymsp->TOP__v.ipt_reset_b = vlTOPp->ipt_reset_b;
    vlSymsp->TOP__v.ips_rwb = vlTOPp->ips_rwb;
    vlSymsp->TOP__v.ips_byte_31_24 = vlTOPp->ips_byte_31_24;
    vlSymsp->TOP__v.ips_byte_23_16 = vlTOPp->ips_byte_23_16;
    vlSymsp->TOP__v.ips_byte_15_8 = vlTOPp->ips_byte_15_8;
    vlSymsp->TOP__v.ips_byte_7_0 = vlTOPp->ips_byte_7_0;
    vlSymsp->TOP__v.ips_addr = vlTOPp->ips_addr;
    vlSymsp->TOP__v.ips_module_en = vlTOPp->ips_module_en;
    vlSymsp->TOP__v.ipt_se_gatedclk = vlTOPp->ipt_se_gatedclk;
    vlSymsp->TOP__v.ipg_wait = vlTOPp->ipg_wait;
    vlSymsp->TOP__v.ipg_stop = vlTOPp->ipg_stop;
    vlSymsp->TOP__v.ipg_debug = vlTOPp->ipg_debug;
    vlSymsp->TOP__v.ipg_doze = vlTOPp->ipg_doze;
    vlSymsp->TOP__v.ipg_clk_32k = vlTOPp->ipg_clk_32k;
    vlSymsp->TOP__v.ipg_clk_highfreq = vlTOPp->ipg_clk_highfreq;
    vlSymsp->TOP__v.ipg_clk = vlTOPp->ipg_clk;
    vlSymsp->TOP__v.ipt_mode = vlTOPp->ipt_mode;
    vlSymsp->TOP__v.ipg_clk_s = vlTOPp->ipg_clk_s;
}

void Vpwm::_sequent__TOP__3(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_sequent__TOP__3\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipg_enable_clk = vlSymsp->TOP__v.ipg_enable_clk;
}

void Vpwm::_settle__TOP__4(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_settle__TOP__4\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipg_enable_clk = vlSymsp->TOP__v.ipg_enable_clk;
}

void Vpwm::_settle__TOP__5(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_settle__TOP__5\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipp_obe_pwmo = vlSymsp->TOP__v.ipp_obe_pwmo;
    vlTOPp->ipp_do_pwmo = vlSymsp->TOP__v.ipp_do_pwmo;
}

void Vpwm::_sequent__TOP__6(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_sequent__TOP__6\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipp_obe_pwmo = vlSymsp->TOP__v.ipp_obe_pwmo;
    vlTOPp->ipp_do_pwmo = vlSymsp->TOP__v.ipp_do_pwmo;
}

void Vpwm::_settle__TOP__7(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_settle__TOP__7\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipi_int_pwm_fifoi = vlSymsp->TOP__v.ipi_int_pwm_fifoi;
    vlTOPp->ipi_int_pwm_rovi = vlSymsp->TOP__v.ipi_int_pwm_rovi;
    vlTOPp->ipi_int_pwm_cmpi = vlSymsp->TOP__v.ipi_int_pwm_cmpi;
}

void Vpwm::_multiclk__TOP__8(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_multiclk__TOP__8\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipi_int_pwm_fifoi = vlSymsp->TOP__v.ipi_int_pwm_fifoi;
}

void Vpwm::_multiclk__TOP__9(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_multiclk__TOP__9\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipi_int_pwm_rovi = vlSymsp->TOP__v.ipi_int_pwm_rovi;
}

void Vpwm::_combo__TOP__10(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_combo__TOP__10\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ips_xfr_wait = vlSymsp->TOP__v.ips_xfr_wait;
}

void Vpwm::_multiclk__TOP__11(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_multiclk__TOP__11\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipi_int_pwm_cmpi = vlSymsp->TOP__v.ipi_int_pwm_cmpi;
}

void Vpwm::_settle__TOP__12(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_settle__TOP__12\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ips_xfr_wait = vlSymsp->TOP__v.ips_xfr_wait;
    vlTOPp->ipi_int_pwm = vlSymsp->TOP__v.ipi_int_pwm;
}

void Vpwm::_multiclk__TOP__13(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_multiclk__TOP__13\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ipi_int_pwm = vlSymsp->TOP__v.ipi_int_pwm;
}

void Vpwm::_settle__TOP__14(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_settle__TOP__14\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ips_rdata = vlSymsp->TOP__v.ips_rdata;
}

void Vpwm::_combo__TOP__15(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_combo__TOP__15\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ips_rdata = vlSymsp->TOP__v.ips_rdata;
    vlTOPp->ips_xfr_err = vlSymsp->TOP__v.ips_xfr_err;
}

void Vpwm::_settle__TOP__16(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_settle__TOP__16\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ips_xfr_err = vlSymsp->TOP__v.ips_xfr_err;
}

void Vpwm::_eval(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_eval\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._combo__TOP__v__1(vlSymsp);
    VL_ASSIGNBIT_IO(1,1, vlTOPp->__Vm_traceActivity, 1);
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__4(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__1(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._combo__TOP__v__pwm_crm__1(vlSymsp);
    if ((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_fifo._sequent__TOP__v__pwm_fifo__1(vlSymsp);
	VL_ASSIGNBIT_IO(1,2, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_fifo._sequent__TOP__v__pwm_fifo__2(vlSymsp);
	VL_ASSIGNBIT_IO(1,3, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b)) 
	  & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b)) 
	 | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__3(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__4(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b)) 
	  & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b)) 
	 | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__5(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__6(vlSymsp);
	VL_ASSIGNBIT_IO(1,4, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__5(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__ipg_hard_async_reset_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__ipg_hard_async_reset_b)))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__7(vlSymsp);
	VL_ASSIGNBIT_IO(1,5, vlTOPp->__Vm_traceActivity, 1);
    }
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__8(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__6(vlSymsp);
    if (((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	  | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__ipg_hard_async_reset_b)) 
	     & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__ipg_hard_async_reset_b))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._multiclk__TOP__v__pwm_reg__10(vlSymsp);
	VL_ASSIGNBIT_IO(1,6, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v._sequent__TOP__v__8(vlSymsp);
	VL_ASSIGNBIT_IO(1,7, vlTOPp->__Vm_traceActivity, 1);
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__11(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__9(vlSymsp);
    vlSymsp->TOP__v__pwm_fifo._combo__TOP__v__pwm_fifo__3(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._combo__TOP__v__pwm_crm__3(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__software_reset_mux._combo__TOP__v__pwm_reg__software_reset_mux__1(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._combo__TOP__v__pwm_crm__5(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux._combo__TOP__v__pwm_reg__pwm_en_reset_mux__4(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__13(vlSymsp);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_crm____PVT__pwm_en_rst_b)) 
	  & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_crm__pwm_en_rst_b)) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_crm____PVT__sys_clk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_crm__sys_clk))))) {
	vlSymsp->TOP__v__pwm_crm._sequent__TOP__v__pwm_crm__7(vlSymsp);
	VL_ASSIGNBIT_IO(1,8, vlTOPp->__Vm_traceActivity, 1);
    }
    vlSymsp->TOP__v__pwm_crm__pclk_gen._combo__TOP__v__pwm_crm__pclk_gen__2(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__12(vlSymsp);
    if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v._sequent__TOP__v__13(vlSymsp);
	VL_ASSIGNBIT_IO(1,9, vlTOPp->__Vm_traceActivity, 1);
    }
    vlSymsp->TOP__v__pwm_crm._combo__TOP__v__pwm_crm__9(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._combo__TOP__v__pwm_crm__11(vlSymsp);
    vlSymsp->TOP__v__pwm_crm__pclk_gen._combo__TOP__v__pwm_crm__pclk_gen__3(vlSymsp);
    vlSymsp->TOP__v__pwm_crm__pclk_gen._combo__TOP__v__pwm_crm__pclk_gen__5(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._combo__TOP__v__pwm_crm__12(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__16(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pclk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pclk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pwm_en_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pwm_en_rst_b)))) {
	vlSymsp->TOP__v__pwm_outputgen._sequent__TOP__v__pwm_outputgen__1(vlSymsp);
	VL_ASSIGNBIT_IO(1,0xa, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__18(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__15(vlSymsp);
	VL_ASSIGNBIT_IO(1,0xb, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_fifo._sequent__TOP__v__pwm_fifo__5(vlSymsp);
	VL_ASSIGNBIT_IO(1,0xc, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v._sequent__TOP__v__19(vlSymsp);
	VL_ASSIGNBIT_IO(1,0xd, vlTOPp->__Vm_traceActivity, 1);
    }
    vlSymsp->TOP__v__pwm_outputgen._combo__TOP__v__pwm_outputgen__3(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__22(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__17(vlSymsp);
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b)) 
	  & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b)) 
	 | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__18(vlSymsp);
	VL_ASSIGNBIT_IO(1,0xe, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__19(vlSymsp);
	VL_ASSIGNBIT_IO(1,0xf, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b)) 
	  & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b)) 
	 | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))))) {
	vlSymsp->TOP__v__pwm_reg._sequent__TOP__v__pwm_reg__20(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x10, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk_s))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_fifo._multiclk__TOP__v__pwm_fifo__7(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x11, vlTOPp->__Vm_traceActivity, 1);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pclk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pclk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pwm_en_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pwm_en_rst_b)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x12, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._sequent__TOP__v__23(vlSymsp);
    }
    if ((((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b)) 
	   | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s)))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._multiclk__TOP__v__pwm_reg__22(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x13, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._multiclk__TOP__v__26(vlSymsp);
    }
    if ((((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	   | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	  | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b)) 
	     & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._multiclk__TOP__v__pwm_reg__23(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x14, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._multiclk__TOP__v__27(vlSymsp);
    }
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__24(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__28(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux._combo__TOP__v__pwm_reg__cmp_status_reset_mux__8(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux._combo__TOP__v__pwm_reg__fifo_status_reset_mux__9(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux._combo__TOP__v__pwm_reg__rov_status_reset_mux__10(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__25(vlSymsp);
    if ((((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b)) 
	   | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s)))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._multiclk__TOP__v__pwm_reg__26(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x15, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._multiclk__TOP__v__29(vlSymsp);
    }
    if (((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk_s))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v._multiclk__TOP__v__30(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x16, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v__pwm_fifo._multiclk__TOP__v__pwm_fifo__9(vlSymsp);
    }
    if ((((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk))) 
	   | ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk_s)))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_fifo._multiclk__TOP__v__pwm_fifo__10(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x17, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._multiclk__TOP__v__31(vlSymsp);
    }
    if ((((((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b)) 
	      & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b)) 
	     | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b)) 
		& (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b))) 
	    | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	       & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s)))) 
	   | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	  | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b)) 
	     & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlSymsp->TOP__v__pwm_reg._multiclk__TOP__v__pwm_reg__28(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x18, vlTOPp->__Vm_traceActivity, 1);
	vlSymsp->TOP__v._multiclk__TOP__v__34(vlSymsp);
    }
    if ((((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b)) 
	   | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s)))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlTOPp->_multiclk__TOP__8(vlSymsp);
    }
    if ((((((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s))) 
	   | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	  | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b)) 
	     & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlTOPp->_multiclk__TOP__9(vlSymsp);
    }
    vlSymsp->TOP__v__pwm_fifo._combo__TOP__v__pwm_fifo__12(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__29(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__35(vlSymsp);
    vlTOPp->_combo__TOP__10(vlSymsp);
    if ((((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b)) 
	   | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s)))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlTOPp->_multiclk__TOP__11(vlSymsp);
    }
    if ((((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk))) 
	   | ((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk_s)))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v._multiclk__TOP__v__36(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x19, vlTOPp->__Vm_traceActivity, 1);
    }
    if (((((IData)(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk_s))) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk)))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b)))) {
	vlSymsp->TOP__v._multiclk__TOP__v__37(vlSymsp);
	VL_ASSIGNBIT_IO(1,0x1a, vlTOPp->__Vm_traceActivity, 1);
    }
    vlSymsp->TOP__v__pwm_reg._combo__TOP__v__pwm_reg__31(vlSymsp);
    vlSymsp->TOP__v__pwm_outputgen._combo__TOP__v__pwm_outputgen__6(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__40(vlSymsp);
    if ((((((((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b)) 
	      & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b)) 
	     | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b)) 
		& (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b))) 
	    | ((IData)(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s) 
	       & (~ (IData)(vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s)))) 
	   | ((IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk)))) 
	  | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b)) 
	     & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b)))) {
	vlTOPp->_multiclk__TOP__13(vlSymsp);
    }
    vlSymsp->TOP__v._combo__TOP__v__42(vlSymsp);
    vlTOPp->_combo__TOP__15(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk = vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__rstgen_rst_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b;
    vlTOPp->__Vclklast__TOP__v__pwm_fifo__ipg_clk_s 
	= vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__cmp_status_rst_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b;
    vlTOPp->__Vclklast__TOP__v__pwm_reg__ipg_clk_s 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rov_status_rst_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__fifo_status_rst_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__rstgen_rst_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__ipg_hard_async_reset_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__ipg_hard_async_reset_b;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_crm__pwm_en_rst_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_crm____PVT__pwm_en_rst_b;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_crm__sys_clk 
	= vlTOPp->__VinpClk__TOP__v__pwm_crm____PVT__sys_clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pclk 
	= vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pclk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_outputgen__pwm_en_rst_b 
	= vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pwm_en_rst_b;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_reg__pclk 
	= vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__pwm_fifo__pclk 
	= vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk;
    vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__rstgen_rst_b 
	= vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b;
    vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__cmp_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b;
    vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rov_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b;
    vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__fifo_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b;
    vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__rstgen_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b;
    vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__ipg_hard_async_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b;
    vlTOPp->__VinpClk__TOP__v__pwm_crm____PVT__pwm_en_rst_b 
	= vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b;
    vlTOPp->__VinpClk__TOP__v__pwm_crm____PVT__sys_clk 
	= vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk;
    vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pclk 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk;
    vlTOPp->__VinpClk__TOP__v__pwm_outputgen____PVT__pwm_en_rst_b 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b;
    vlTOPp->__VinpClk__TOP__v__pwm_reg____PVT__pclk 
	= vlSymsp->TOP__v__pwm_reg.__PVT__pclk;
    vlTOPp->__VinpClk__TOP__v__pwm_fifo____PVT__pclk 
	= vlSymsp->TOP__v__pwm_fifo.__PVT__pclk;
}

void Vpwm::_eval_initial(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_eval_initial\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._initial__TOP__v(vlSymsp);
}

void Vpwm::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::final\n"); );
    // Variables
    Vpwm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpwm::_eval_settle(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_eval_settle\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._settle__TOP__v__2(vlSymsp);
    VL_ASSIGNBIT_IO(1,0, vlTOPp->__Vm_traceActivity, 1);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__3(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__2(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._settle__TOP__v__pwm_crm__2(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__9(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__7(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlSymsp->TOP__v__pwm_fifo._settle__TOP__v__pwm_fifo__4(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._settle__TOP__v__pwm_crm__4(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__software_reset_mux._settle__TOP__v__pwm_reg__software_reset_mux__2(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__12(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__10(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux._settle__TOP__v__pwm_reg__pwm_en_reset_mux__3(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._settle__TOP__v__pwm_crm__6(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__14(vlSymsp);
    vlSymsp->TOP__v__pwm_crm__pclk_gen._settle__TOP__v__pwm_crm__pclk_gen__1(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__11(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__14(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._settle__TOP__v__pwm_crm__8(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._settle__TOP__v__pwm_crm__10(vlSymsp);
    vlSymsp->TOP__v__pwm_crm__pclk_gen._settle__TOP__v__pwm_crm__pclk_gen__4(vlSymsp);
    vlSymsp->TOP__v__pwm_crm._settle__TOP__v__pwm_crm__13(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__15(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__17(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__20(vlSymsp);
    vlSymsp->TOP__v__pwm_outputgen._settle__TOP__v__pwm_outputgen__2(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__16(vlSymsp);
    vlSymsp->TOP__v__pwm_fifo._settle__TOP__v__pwm_fifo__6(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__21(vlSymsp);
    vlSymsp->TOP__v__pwm_outputgen._settle__TOP__v__pwm_outputgen__4(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__21(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__24(vlSymsp);
    vlSymsp->TOP__v__pwm_fifo._settle__TOP__v__pwm_fifo__8(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux._settle__TOP__v__pwm_reg__cmp_status_reset_mux__5(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux._settle__TOP__v__pwm_reg__fifo_status_reset_mux__6(vlSymsp);
    vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux._settle__TOP__v__pwm_reg__rov_status_reset_mux__7(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__25(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__32(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__27(vlSymsp);
    vlSymsp->TOP__v__pwm_fifo._settle__TOP__v__pwm_fifo__11(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__33(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__38(vlSymsp);
    vlSymsp->TOP__v__pwm_fifo._settle__TOP__v__pwm_fifo__13(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__30(vlSymsp);
    vlSymsp->TOP__v__pwm_outputgen._settle__TOP__v__pwm_outputgen__5(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__39(vlSymsp);
    vlSymsp->TOP__v__pwm_reg._settle__TOP__v__pwm_reg__32(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__41(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlTOPp->_settle__TOP__16(vlSymsp);
}

IData Vpwm::_change_request(Vpwm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vpwm::_change_request\n"); );
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__rstgen_rst_b)
	 | (vlSymsp->TOP__v__pwm_reg.__PVT__pclk ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__pclk)
	 | (vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__ipg_hard_async_reset_b)
	 | (vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__cmp_status_rst_b)
	 | (vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__rov_status_rst_b)
	 | (vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__fifo_status_rst_b)
	 | (vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_crm__pwm_en_rst_b)
	 | (vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk ^ vlTOPp->__Vchglast__TOP__v__pwm_crm__sys_clk)
	 | (vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk ^ vlTOPp->__Vchglast__TOP__v__pwm_outputgen__pclk)
	 | (vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_outputgen__pwm_en_rst_b)
	|| (vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_fifo__rstgen_rst_b)
	 | (vlSymsp->TOP__v__pwm_fifo.__PVT__pclk ^ vlTOPp->__Vchglast__TOP__v__pwm_fifo__pclk));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__rstgen_rst_b))) VL_PRINTF("	CHANGE: rtl/pwm_reg.v:112: rstgen_rst_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_reg.__PVT__pclk ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__pclk))) VL_PRINTF("	CHANGE: rtl/pwm_reg.v:120: pclk\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__ipg_hard_async_reset_b))) VL_PRINTF("	CHANGE: rtl/pwm_reg.v:137: ipg_hard_async_reset_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__cmp_status_rst_b))) VL_PRINTF("	CHANGE: rtl/pwm_reg.v:169: cmp_status_rst_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__rov_status_rst_b))) VL_PRINTF("	CHANGE: rtl/pwm_reg.v:170: rov_status_rst_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_reg__fifo_status_rst_b))) VL_PRINTF("	CHANGE: rtl/pwm_reg.v:171: fifo_status_rst_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_crm__pwm_en_rst_b))) VL_PRINTF("	CHANGE: rtl/pwm_crm.v:63: pwm_en_rst_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk ^ vlTOPp->__Vchglast__TOP__v__pwm_crm__sys_clk))) VL_PRINTF("	CHANGE: rtl/pwm_crm.v:70: sys_clk\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk ^ vlTOPp->__Vchglast__TOP__v__pwm_outputgen__pclk))) VL_PRINTF("	CHANGE: rtl/pwm_outputgen.v:66: pclk\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_outputgen__pwm_en_rst_b))) VL_PRINTF("	CHANGE: rtl/pwm_outputgen.v:67: pwm_en_rst_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b ^ vlTOPp->__Vchglast__TOP__v__pwm_fifo__rstgen_rst_b))) VL_PRINTF("	CHANGE: rtl/pwm_fifo.v:64: rstgen_rst_b\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__pwm_fifo.__PVT__pclk ^ vlTOPp->__Vchglast__TOP__v__pwm_fifo__pclk))) VL_PRINTF("	CHANGE: rtl/pwm_fifo.v:71: pclk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__v__pwm_reg__rstgen_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b;
    vlTOPp->__Vchglast__TOP__v__pwm_reg__pclk = vlSymsp->TOP__v__pwm_reg.__PVT__pclk;
    vlTOPp->__Vchglast__TOP__v__pwm_reg__ipg_hard_async_reset_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b;
    vlTOPp->__Vchglast__TOP__v__pwm_reg__cmp_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b;
    vlTOPp->__Vchglast__TOP__v__pwm_reg__rov_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b;
    vlTOPp->__Vchglast__TOP__v__pwm_reg__fifo_status_rst_b 
	= vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b;
    vlTOPp->__Vchglast__TOP__v__pwm_crm__pwm_en_rst_b 
	= vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b;
    vlTOPp->__Vchglast__TOP__v__pwm_crm__sys_clk = vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk;
    vlTOPp->__Vchglast__TOP__v__pwm_outputgen__pclk 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk;
    vlTOPp->__Vchglast__TOP__v__pwm_outputgen__pwm_en_rst_b 
	= vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b;
    vlTOPp->__Vchglast__TOP__v__pwm_fifo__rstgen_rst_b 
	= vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b;
    vlTOPp->__Vchglast__TOP__v__pwm_fifo__pclk = vlSymsp->TOP__v__pwm_fifo.__PVT__pclk;
    return __req;
}
