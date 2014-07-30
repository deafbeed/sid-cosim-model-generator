// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpwm__Syms.h"


//======================

void Vpwm::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpwm* t=(Vpwm*)userthis;
    Vpwm__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vpwm::traceChgThis(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 1))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 4))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			       | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 4)) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 6))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 7))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 9))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0xa))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0xd))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x11))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x12))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x13))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x14))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x15))))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x16))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x17))))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x18))))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x19))))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0) 
			      | VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x1a))))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 2)))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 3)))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 4)))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 5)))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 8)))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0xa)))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0xb)))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0xc)))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0xe)))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0xf)))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & VL_BITSEL_IIII(1,32,32,32, vlTOPp->__Vm_traceActivity, 0x10)))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void Vpwm::traceChgThis__2(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlSymsp->TOP__v.ips_xfr_err));
	vcdp->chgBit  (c+2,(vlSymsp->TOP__v.ips_xfr_wait));
	vcdp->chgBus  (c+3,(vlSymsp->TOP__v.ips_rdata),32);
	vcdp->chgBit  (c+4,(vlSymsp->TOP__v.__PVT__rstgen_rst_b));
	vcdp->chgBit  (c+5,(vlSymsp->TOP__v.__PVT__fifo_empty));
	vcdp->chgBit  (c+6,(vlSymsp->TOP__v.__PVT__pwm_en_rst_b));
	vcdp->chgBit  (c+7,(vlSymsp->TOP__v.__PVT__pwm_en));
	vcdp->chgBit  (c+8,(vlSymsp->TOP__v.__PVT__write_pwmsam));
	vcdp->chgBit  (c+9,(vlSymsp->TOP__v.__PVT__pclk));
	vcdp->chgBit  (c+10,(vlSymsp->TOP__v.__PVT__widthmatch));
	vcdp->chgBit  (c+11,(vlSymsp->TOP__v.__PVT__updatesample));
	vcdp->chgBit  (c+12,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_rst_b));
	vcdp->chgBit  (c+13,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en));
	vcdp->chgBit  (c+14,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_err));
	vcdp->chgBit  (c+15,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_wait));
	vcdp->chgBus  (c+16,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rdata),32);
	vcdp->chgBit  (c+17,(vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam));
	vcdp->chgBit  (c+18,(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b));
	vcdp->chgBit  (c+19,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_empty));
	vcdp->chgBit  (c+20,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_event));
	vcdp->chgBit  (c+21,(vlSymsp->TOP__v__pwm_reg.__PVT__pclk));
	vcdp->chgBit  (c+22,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s));
	vcdp->chgBit  (c+23,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_stop));
	vcdp->chgBit  (c+24,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_doze));
	vcdp->chgBit  (c+25,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_wait));
	vcdp->chgBit  (c+26,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_debug));
	vcdp->chgBit  (c+27,(vlSymsp->TOP__v__pwm_reg.__PVT__resp_sel));
	vcdp->chgBit  (c+28,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en));
	vcdp->chgBus  (c+29,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr),12);
	vcdp->chgBit  (c+30,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb));
	vcdp->chgBit  (c+31,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24));
	vcdp->chgBit  (c+32,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16));
	vcdp->chgBit  (c+33,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8));
	vcdp->chgBit  (c+34,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0));
	vcdp->chgBus  (c+35,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata),32);
	vcdp->chgBit  (c+36,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b));
	vcdp->chgBit  (c+37,(vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b));
	vcdp->chgBit  (c+38,(vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async));
	vcdp->chgBit  (c+39,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_reset_b));
	vcdp->chgBit  (c+40,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_reset_b));
	vcdp->chgBit  (c+41,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_reset_b));
	vcdp->chgBit  (c+42,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b));
	vcdp->chgBit  (c+43,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b));
	vcdp->chgBit  (c+44,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b));
	vcdp->chgBit  (c+45,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg));
	vcdp->chgBit  (c+46,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg));
	vcdp->chgBit  (c+47,(vlSymsp->TOP__v__pwm_reg.__PVT__controlsel));
	vcdp->chgBit  (c+48,(vlSymsp->TOP__v__pwm_reg.__PVT__statussel));
	vcdp->chgBit  (c+49,(vlSymsp->TOP__v__pwm_reg.__PVT__intrsel));
	vcdp->chgBit  (c+50,(vlSymsp->TOP__v__pwm_reg.__PVT__samplesel));
	vcdp->chgBit  (c+51,(vlSymsp->TOP__v__pwm_reg.__PVT__periodsel));
	vcdp->chgBit  (c+52,(vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel));
	vcdp->chgBus  (c+53,(vlSymsp->TOP__v__pwm_reg.__PVT__status),6);
	vcdp->chgBit  (c+54,(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
	vcdp->chgBit  (c+55,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_reset_b));
	vcdp->chgBit  (c+56,(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_less));
	vcdp->chgBit  (c+57,(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_full));
	vcdp->chgBit  (c+58,(vlSymsp->TOP__v__pwm_reg.__PVT__invalid_reg_space));
	vcdp->chgBit  (c+59,(vlSymsp->TOP__v__pwm_crm.__PVT__pclk));
	vcdp->chgBit  (c+60,(vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk));
	vcdp->chgBit  (c+61,(vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_highfreq));
	vcdp->chgBit  (c+62,(vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_32k));
	vcdp->chgBit  (c+63,(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b));
	vcdp->chgBit  (c+64,(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en));
	vcdp->chgBit  (c+65,(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_se_gatedclk));
	vcdp->chgBit  (c+66,(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode));
	vcdp->chgBit  (c+67,(vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk));
	vcdp->chgBus  (c+68,(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan),2);
	vcdp->chgBit  (c+69,(vlSymsp->TOP__v__pwm_crm.__PVT__pclk_en));
	vcdp->chgBit  (c+70,(vlSymsp->TOP__v__pwm_crm.__PVT__pre_match));
	vcdp->chgBit  (c+71,(vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample));
	vcdp->chgBit  (c+72,(vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch));
	vcdp->chgBit  (c+73,(vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk));
	vcdp->chgBit  (c+74,(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b));
	vcdp->chgBit  (c+75,(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en));
	vcdp->chgBit  (c+76,(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup));
	vcdp->chgBit  (c+77,(vlSymsp->TOP__v__pwm_outputgen.__PVT__zero_case));
	vcdp->chgBit  (c+78,(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch_1));
	vcdp->chgBit  (c+79,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_empty));
	vcdp->chgBus  (c+80,(vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata),32);
	vcdp->chgBit  (c+81,(vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b));
	vcdp->chgBit  (c+82,(vlSymsp->TOP__v__pwm_fifo.__PVT__read));
	vcdp->chgBit  (c+83,(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s));
	vcdp->chgBit  (c+84,(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk));
	vcdp->chgBit  (c+85,(vlSymsp->TOP__v__pwm_fifo.__PVT__pclk));
	vcdp->chgBit  (c+86,(vlSymsp->TOP__v__pwm_fifo.__PVT__write_pwmsam));
	vcdp->chgBus  (c+87,(vlSymsp->TOP__v__pwm_fifo.__PVT__datain),16);
	vcdp->chgBit  (c+88,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross));
	vcdp->chgBit  (c+89,(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_update));
	vcdp->chgBit  (c+90,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset));
	vcdp->chgBit  (c+91,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__func_reset));
	vcdp->chgBit  (c+92,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async));
	vcdp->chgBit  (c+93,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_reset_b));
	vcdp->chgBit  (c+94,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset));
	vcdp->chgBit  (c+95,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__func_reset));
	vcdp->chgBit  (c+96,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async));
	vcdp->chgBit  (c+97,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_reset_b));
	vcdp->chgBit  (c+98,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset));
	vcdp->chgBit  (c+99,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__func_reset));
	vcdp->chgBit  (c+100,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async));
	vcdp->chgBit  (c+101,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_reset_b));
	vcdp->chgBit  (c+102,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset));
	vcdp->chgBit  (c+103,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__func_reset));
	vcdp->chgBit  (c+104,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async));
	vcdp->chgBit  (c+105,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_reset_b));
	vcdp->chgBit  (c+106,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset));
	vcdp->chgBit  (c+107,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__func_reset));
	vcdp->chgBit  (c+108,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async));
	vcdp->chgBit  (c+109,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_reset_b));
	vcdp->chgBit  (c+110,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__gck));
	vcdp->chgBit  (c+111,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck));
	vcdp->chgBit  (c+112,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__en));
	vcdp->chgBit  (c+113,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__se));
	vcdp->chgBit  (c+114,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck_b));
	vcdp->chgBit  (c+115,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__clk_enable));
    }
}

void Vpwm::traceChgThis__3(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+116,(vlSymsp->TOP__v.__PVT__clksrc),2);
	vcdp->chgBus  (c+117,(vlSymsp->TOP__v.__PVT__prescaler),12);
	vcdp->chgBus  (c+118,(vlSymsp->TOP__v.__PVT__fifo_watermark),2);
	vcdp->chgBus  (c+119,(vlSymsp->TOP__v.__PVT__rep_mode),2);
	vcdp->chgBit  (c+120,(vlSymsp->TOP__v.__PVT__bctr));
	vcdp->chgBit  (c+121,(vlSymsp->TOP__v.__PVT__hctr));
	vcdp->chgBus  (c+122,(vlSymsp->TOP__v.__PVT__poutc),2);
	vcdp->chgBit  (c+123,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_enable_clk));
	vcdp->chgBus  (c+124,(vlSymsp->TOP__v__pwm_reg.__PVT__period_reg_data),16);
	vcdp->chgBit  (c+125,(vlSymsp->TOP__v__pwm_reg.__PVT__cmpien));
	vcdp->chgBit  (c+126,(vlSymsp->TOP__v__pwm_reg.__PVT__rovien));
	vcdp->chgBit  (c+127,(vlSymsp->TOP__v__pwm_reg.__PVT__fifoien));
    }
}

void Vpwm::traceChgThis__4(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+128,(vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon),28);
    }
}

void Vpwm::traceChgThis__5(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+129,(vlSymsp->TOP__v.ipg_enable_clk));
	vcdp->chgBus  (c+130,(vlSymsp->TOP__v.__PVT__period_reg_data),16);
	vcdp->chgBus  (c+131,(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc),2);
	vcdp->chgBus  (c+132,(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode),2);
	vcdp->chgBit  (c+133,(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr));
	vcdp->chgBit  (c+134,(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr));
	vcdp->chgBus  (c+135,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark),2);
    }
}

void Vpwm::traceChgThis__6(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+136,(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler),12);
    }
}

void Vpwm::traceChgThis__7(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+137,(vlSymsp->TOP__v.ipp_do_pwmo));
	vcdp->chgBit  (c+138,(vlSymsp->TOP__v.ipp_obe_pwmo));
	vcdp->chgBus  (c+139,(vlSymsp->TOP__v.__PVT__count),16);
	vcdp->chgBit  (c+140,(vlSymsp->TOP__v__pwm_outputgen.__PVT__rov_event));
    }
}

void Vpwm::traceChgThis__8(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+141,(vlSymsp->TOP__v__pwm_outputgen.__PVT__poutc),2);
	vcdp->chgBus  (c+142,(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data),16);
    }
}

void Vpwm::traceChgThis__9(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+143,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_av),3);
	vcdp->chgBit  (c+144,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag));
	vcdp->chgBit  (c+145,(vlSymsp->TOP__v__pwm_fifo.__PVT__empty));
	vcdp->chgBit  (c+146,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data));
	vcdp->chgBit  (c+147,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data));
	vcdp->chgBit  (c+148,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3data));
	vcdp->chgBit  (c+149,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full));
    }
}

void Vpwm::traceChgThis__10(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+150,(vlSymsp->TOP__v.__PVT__rov_event));
	vcdp->chgBit  (c+151,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_event));
	vcdp->chgBus  (c+152,(vlSymsp->TOP__v__pwm_reg.__PVT__count),16);
    }
}

void Vpwm::traceChgThis__11(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+153,(vlSymsp->TOP__v.ipi_int_pwm_fifoi));
	vcdp->chgBit  (c+154,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi));
    }
}

void Vpwm::traceChgThis__12(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+155,(vlSymsp->TOP__v.ipi_int_pwm_rovi));
	vcdp->chgBit  (c+156,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi));
    }
}

void Vpwm::traceChgThis__13(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+157,(vlSymsp->TOP__v.ipi_int_pwm_cmpi));
	vcdp->chgBit  (c+158,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi));
    }
}

void Vpwm::traceChgThis__14(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+159,(vlSymsp->TOP__v.__PVT__fifo_av),3);
	vcdp->chgBus  (c+160,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_av),3);
	vcdp->chgBus  (c+161,(vlSymsp->TOP__v__pwm_fifo.__PVT__sample),16);
	vcdp->chgBus  (c+162,(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr),2);
	vcdp->chgBit  (c+163,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data));
	vcdp->chgBit  (c+164,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1_or_more_empty));
	vcdp->chgBit  (c+165,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2_or_more_empty));
	vcdp->chgBit  (c+166,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3_or_more_empty));
	vcdp->chgBit  (c+167,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_4_empty));
    }
}

void Vpwm::traceChgThis__15(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+168,(vlSymsp->TOP__v.__PVT__full));
	vcdp->chgBit  (c+169,(vlSymsp->TOP__v__pwm_fifo.__PVT__full));
    }
}

void Vpwm::traceChgThis__16(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+170,(vlSymsp->TOP__v.ipi_int_pwm));
	vcdp->chgBit  (c+171,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm));
    }
}

void Vpwm::traceChgThis__17(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+172,(vlSymsp->TOP__v__pwm_reg.__PVT__full));
    }
}

void Vpwm::traceChgThis__18(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+173,(vlSymsp->TOP__v.__PVT__sample),16);
	vcdp->chgBus  (c+174,(vlSymsp->TOP__v__pwm_reg.__PVT__sample),16);
	vcdp->chgBus  (c+175,(vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein),16);
    }
}

void Vpwm::traceChgThis__19(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+176,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full_reg));
    }
}

void Vpwm::traceChgThis__20(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+177,(vlSymsp->TOP__v__pwm_fifo.__PVT__data0),16);
	vcdp->chgBus  (c+178,(vlSymsp->TOP__v__pwm_fifo.__PVT__data1),16);
	vcdp->chgBus  (c+179,(vlSymsp->TOP__v__pwm_fifo.__PVT__data2),16);
	vcdp->chgBus  (c+180,(vlSymsp->TOP__v__pwm_fifo.__PVT__data3),16);
	vcdp->chgBus  (c+181,(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr),2);
	vcdp->chgBit  (c+182,(vlSymsp->TOP__v__pwm_fifo.__PVT__write_flag));
    }
}

void Vpwm::traceChgThis__21(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+183,(vlSymsp->TOP__v__pwm_reg.__PVT__clksrc),2);
	vcdp->chgBus  (c+184,(vlSymsp->TOP__v__pwm_reg.__PVT__prescaler),12);
	vcdp->chgBus  (c+185,(vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode),2);
	vcdp->chgBus  (c+186,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark),2);
	vcdp->chgBit  (c+187,(vlSymsp->TOP__v__pwm_reg.__PVT__bctr));
	vcdp->chgBit  (c+188,(vlSymsp->TOP__v__pwm_reg.__PVT__hctr));
	vcdp->chgBus  (c+189,(vlSymsp->TOP__v__pwm_reg.__PVT__poutc),2);
	vcdp->chgBus  (c+190,(vlSymsp->TOP__v__pwm_reg.__PVT__pwmper),16);
	vcdp->chgBus  (c+191,(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt),3);
	vcdp->chgBit  (c+192,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit));
    }
}

void Vpwm::traceChgThis__22(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+193,(vlSymsp->TOP__v__pwm_reg.__PVT__swr));
	vcdp->chgBit  (c+194,(vlSymsp->TOP__v__pwm_reg.__PVT__stopen));
	vcdp->chgBit  (c+195,(vlSymsp->TOP__v__pwm_reg.__PVT__dozen));
	vcdp->chgBit  (c+196,(vlSymsp->TOP__v__pwm_reg.__PVT__waiten));
	vcdp->chgBit  (c+197,(vlSymsp->TOP__v__pwm_reg.__PVT__debugen));
    }
}

void Vpwm::traceChgThis__23(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+198,(vlSymsp->TOP__v__pwm_crm.__PVT__count),12);
	vcdp->chgBus  (c+199,(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler_tmp),12);
    }
}

void Vpwm::traceChgThis__24(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+200,(vlSymsp->TOP__v__pwm_outputgen.__PVT__count),16);
	vcdp->chgBit  (c+201,(vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_do_pwmo));
	vcdp->chgBit  (c+202,(vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_obe_pwmo));
	vcdp->chgBit  (c+203,(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch));
	vcdp->chgBus  (c+204,(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync),16);
	vcdp->chgBus  (c+205,(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount),3);
    }
}

void Vpwm::traceChgThis__25(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+206,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status));
	vcdp->chgBit  (c+207,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status));
	vcdp->chgBit  (c+208,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status));
    }
}

void Vpwm::traceChgThis__26(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+209,(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr),2);
	vcdp->chgBit  (c+210,(vlSymsp->TOP__v__pwm_fifo.__PVT__read_flag));
	vcdp->chgBit  (c+211,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross1));
    }
}

void Vpwm::traceChgThis__27(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+212,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear));
    }
}

void Vpwm::traceChgThis__28(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+213,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear));
    }
}

void Vpwm::traceChgThis__29(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+214,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear));
    }
}

void Vpwm::traceChgThis__30(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+215,(vlTOPp->ipp_do_pwmo));
	vcdp->chgBit  (c+216,(vlTOPp->ipp_obe_pwmo));
	vcdp->chgBit  (c+217,(vlTOPp->ipg_enable_clk));
	vcdp->chgBit  (c+218,(vlTOPp->ipg_clk_32k));
	vcdp->chgBit  (c+219,(vlTOPp->ipg_clk));
	vcdp->chgBit  (c+220,(vlTOPp->ipg_clk_s));
	vcdp->chgBit  (c+221,(vlTOPp->ipg_clk_highfreq));
	vcdp->chgBit  (c+222,(vlTOPp->ipg_hard_async_reset_b));
	vcdp->chgBit  (c+223,(vlTOPp->ipg_debug));
	vcdp->chgBit  (c+224,(vlTOPp->ipg_doze));
	vcdp->chgBit  (c+225,(vlTOPp->ipg_wait));
	vcdp->chgBit  (c+226,(vlTOPp->ipg_stop));
	vcdp->chgBit  (c+227,(vlTOPp->ips_xfr_err));
	vcdp->chgBit  (c+228,(vlTOPp->ips_xfr_wait));
	vcdp->chgBus  (c+229,(vlTOPp->ips_rdata),32);
	vcdp->chgBit  (c+230,(vlTOPp->ips_module_en));
	vcdp->chgBit  (c+231,(vlTOPp->ips_byte_7_0));
	vcdp->chgBit  (c+232,(vlTOPp->ips_byte_15_8));
	vcdp->chgBit  (c+233,(vlTOPp->ips_byte_23_16));
	vcdp->chgBit  (c+234,(vlTOPp->ips_byte_31_24));
	vcdp->chgBit  (c+235,(vlTOPp->ips_rwb));
	vcdp->chgBus  (c+236,(vlTOPp->ips_addr),12);
	vcdp->chgBus  (c+237,(vlTOPp->ips_wdata),32);
	vcdp->chgBit  (c+238,(vlTOPp->resp_sel));
	vcdp->chgBit  (c+239,(vlTOPp->ipi_int_pwm_rovi));
	vcdp->chgBit  (c+240,(vlTOPp->ipi_int_pwm_cmpi));
	vcdp->chgBit  (c+241,(vlTOPp->ipi_int_pwm_fifoi));
	vcdp->chgBit  (c+242,(vlTOPp->ipi_int_pwm));
	vcdp->chgBit  (c+243,(vlTOPp->ipt_mode));
	vcdp->chgBit  (c+244,(vlTOPp->ipt_se_gatedclk));
	vcdp->chgBit  (c+245,(vlTOPp->ipt_se_async));
	vcdp->chgBit  (c+246,(vlTOPp->ipt_reset_b));
	vcdp->chgBit  (c+247,(vlSymsp->TOP__v.ipg_clk_32k));
	vcdp->chgBit  (c+248,(vlSymsp->TOP__v.ipg_clk));
	vcdp->chgBit  (c+249,(vlSymsp->TOP__v.ipg_clk_s));
	vcdp->chgBit  (c+250,(vlSymsp->TOP__v.ipg_clk_highfreq));
	vcdp->chgBit  (c+251,(vlSymsp->TOP__v.ipg_hard_async_reset_b));
	vcdp->chgBit  (c+252,(vlSymsp->TOP__v.ipg_debug));
	vcdp->chgBit  (c+253,(vlSymsp->TOP__v.ipg_doze));
	vcdp->chgBit  (c+254,(vlSymsp->TOP__v.ipg_wait));
	vcdp->chgBit  (c+255,(vlSymsp->TOP__v.ipg_stop));
	vcdp->chgBit  (c+256,(vlSymsp->TOP__v.ips_module_en));
	vcdp->chgBit  (c+257,(vlSymsp->TOP__v.ips_byte_7_0));
	vcdp->chgBit  (c+258,(vlSymsp->TOP__v.ips_byte_15_8));
	vcdp->chgBit  (c+259,(vlSymsp->TOP__v.ips_byte_23_16));
	vcdp->chgBit  (c+260,(vlSymsp->TOP__v.ips_byte_31_24));
	vcdp->chgBit  (c+261,(vlSymsp->TOP__v.ips_rwb));
	vcdp->chgBus  (c+262,(vlSymsp->TOP__v.ips_addr),12);
	vcdp->chgBus  (c+263,(vlSymsp->TOP__v.ips_wdata),32);
	vcdp->chgBit  (c+264,(vlSymsp->TOP__v.resp_sel));
	vcdp->chgBit  (c+265,(vlSymsp->TOP__v.ipt_mode));
	vcdp->chgBit  (c+266,(vlSymsp->TOP__v.ipt_se_gatedclk));
	vcdp->chgBit  (c+267,(vlSymsp->TOP__v.ipt_se_async));
	vcdp->chgBit  (c+268,(vlSymsp->TOP__v.ipt_reset_b));
    }
}
