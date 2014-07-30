// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpwm__Syms.h"


//======================

void Vpwm::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vpwm::traceInit, &Vpwm::traceFull, &Vpwm::traceChg, this);
}
void Vpwm::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vpwm* t=(Vpwm*)userthis;
    Vpwm__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vpwm::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpwm* t=(Vpwm*)userthis;
    Vpwm__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vpwm::traceInitThis(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vpwm::traceFullThis(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void Vpwm::traceInitThis__1(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+215,"ipp_do_pwmo",-1);
	vcdp->declBit  (c+216,"ipp_obe_pwmo",-1);
	vcdp->declBit  (c+217,"ipg_enable_clk",-1);
	vcdp->declBit  (c+218,"ipg_clk_32k",-1);
	vcdp->declBit  (c+219,"ipg_clk",-1);
	vcdp->declBit  (c+220,"ipg_clk_s",-1);
	vcdp->declBit  (c+221,"ipg_clk_highfreq",-1);
	vcdp->declBit  (c+222,"ipg_hard_async_reset_b",-1);
	vcdp->declBit  (c+223,"ipg_debug",-1);
	vcdp->declBit  (c+224,"ipg_doze",-1);
	vcdp->declBit  (c+225,"ipg_wait",-1);
	vcdp->declBit  (c+226,"ipg_stop",-1);
	vcdp->declBit  (c+227,"ips_xfr_err",-1);
	vcdp->declBit  (c+228,"ips_xfr_wait",-1);
	vcdp->declBus  (c+229,"ips_rdata",-1,31,0);
	vcdp->declBit  (c+230,"ips_module_en",-1);
	vcdp->declBit  (c+231,"ips_byte_7_0",-1);
	vcdp->declBit  (c+232,"ips_byte_15_8",-1);
	vcdp->declBit  (c+233,"ips_byte_23_16",-1);
	vcdp->declBit  (c+234,"ips_byte_31_24",-1);
	vcdp->declBit  (c+235,"ips_rwb",-1);
	vcdp->declBus  (c+236,"ips_addr",-1,13,2);
	vcdp->declBus  (c+237,"ips_wdata",-1,31,0);
	vcdp->declBit  (c+238,"resp_sel",-1);
	vcdp->declBit  (c+239,"ipi_int_pwm_rovi",-1);
	vcdp->declBit  (c+240,"ipi_int_pwm_cmpi",-1);
	vcdp->declBit  (c+241,"ipi_int_pwm_fifoi",-1);
	vcdp->declBit  (c+242,"ipi_int_pwm",-1);
	vcdp->declBit  (c+243,"ipt_mode",-1);
	vcdp->declBit  (c+244,"ipt_se_gatedclk",-1);
	vcdp->declBit  (c+245,"ipt_se_async",-1);
	vcdp->declBit  (c+246,"ipt_reset_b",-1);
	vcdp->declBit  (c+137,"v ipp_do_pwmo",-1);
	vcdp->declBit  (c+138,"v ipp_obe_pwmo",-1);
	vcdp->declBit  (c+129,"v ipg_enable_clk",-1);
	vcdp->declBit  (c+247,"v ipg_clk_32k",-1);
	vcdp->declBit  (c+248,"v ipg_clk",-1);
	vcdp->declBit  (c+249,"v ipg_clk_s",-1);
	vcdp->declBit  (c+250,"v ipg_clk_highfreq",-1);
	vcdp->declBit  (c+251,"v ipg_hard_async_reset_b",-1);
	vcdp->declBit  (c+252,"v ipg_debug",-1);
	vcdp->declBit  (c+253,"v ipg_doze",-1);
	vcdp->declBit  (c+254,"v ipg_wait",-1);
	vcdp->declBit  (c+255,"v ipg_stop",-1);
	vcdp->declBit  (c+1,"v ips_xfr_err",-1);
	vcdp->declBit  (c+2,"v ips_xfr_wait",-1);
	vcdp->declBus  (c+3,"v ips_rdata",-1,31,0);
	vcdp->declBit  (c+256,"v ips_module_en",-1);
	vcdp->declBit  (c+257,"v ips_byte_7_0",-1);
	vcdp->declBit  (c+258,"v ips_byte_15_8",-1);
	vcdp->declBit  (c+259,"v ips_byte_23_16",-1);
	vcdp->declBit  (c+260,"v ips_byte_31_24",-1);
	vcdp->declBit  (c+261,"v ips_rwb",-1);
	vcdp->declBus  (c+262,"v ips_addr",-1,13,2);
	vcdp->declBus  (c+263,"v ips_wdata",-1,31,0);
	vcdp->declBit  (c+264,"v resp_sel",-1);
	vcdp->declBit  (c+155,"v ipi_int_pwm_rovi",-1);
	vcdp->declBit  (c+157,"v ipi_int_pwm_cmpi",-1);
	vcdp->declBit  (c+153,"v ipi_int_pwm_fifoi",-1);
	vcdp->declBit  (c+170,"v ipi_int_pwm",-1);
	vcdp->declBit  (c+265,"v ipt_mode",-1);
	vcdp->declBit  (c+266,"v ipt_se_gatedclk",-1);
	vcdp->declBit  (c+267,"v ipt_se_async",-1);
	vcdp->declBit  (c+268,"v ipt_reset_b",-1);
	vcdp->declBit  (c+4,"v rstgen_rst_b",-1);
	vcdp->declBus  (c+116,"v clksrc",-1,1,0);
	vcdp->declBus  (c+117,"v prescaler",-1,11,0);
	vcdp->declBus  (c+159,"v fifo_av",-1,2,0);
	vcdp->declBit  (c+5,"v fifo_empty",-1);
	vcdp->declBit  (c+168,"v full",-1);
	vcdp->declBus  (c+118,"v fifo_watermark",-1,1,0);
	vcdp->declBit  (c+6,"v pwm_en_rst_b",-1);
	vcdp->declBit  (c+7,"v pwm_en",-1);
	vcdp->declBus  (c+119,"v rep_mode",-1,1,0);
	vcdp->declBus  (c+173,"v sample",-1,15,0);
	vcdp->declBit  (c+120,"v bctr",-1);
	vcdp->declBit  (c+121,"v hctr",-1);
	vcdp->declBus  (c+122,"v poutc",-1,1,0);
	vcdp->declBus  (c+130,"v period_reg_data",-1,15,0);
	vcdp->declBus  (c+139,"v count",-1,15,0);
	vcdp->declBit  (c+8,"v write_pwmsam",-1);
	vcdp->declBit  (c+9,"v pclk",-1);
	vcdp->declBit  (c+10,"v widthmatch",-1);
	vcdp->declBit  (c+150,"v rov_event",-1);
	vcdp->declBit  (c+11,"v updatesample",-1);
	vcdp->declBus  (c+183,"v pwm_reg clksrc",-1,1,0);
	vcdp->declBus  (c+184,"v pwm_reg prescaler",-1,11,0);
	vcdp->declBit  (c+158,"v pwm_reg ipi_int_pwm_cmpi",-1);
	vcdp->declBit  (c+156,"v pwm_reg ipi_int_pwm_rovi",-1);
	vcdp->declBit  (c+154,"v pwm_reg ipi_int_pwm_fifoi",-1);
	vcdp->declBit  (c+171,"v pwm_reg ipi_int_pwm",-1);
	vcdp->declBit  (c+12,"v pwm_reg pwm_en_rst_b",-1);
	vcdp->declBit  (c+13,"v pwm_reg pwm_en",-1);
	vcdp->declBus  (c+185,"v pwm_reg rep_mode",-1,1,0);
	vcdp->declBus  (c+186,"v pwm_reg fifo_watermark",-1,1,0);
	vcdp->declBit  (c+14,"v pwm_reg ips_xfr_err",-1);
	vcdp->declBit  (c+15,"v pwm_reg ips_xfr_wait",-1);
	vcdp->declBit  (c+123,"v pwm_reg ipg_enable_clk",-1);
	vcdp->declBit  (c+187,"v pwm_reg bctr",-1);
	vcdp->declBit  (c+188,"v pwm_reg hctr",-1);
	vcdp->declBus  (c+189,"v pwm_reg poutc",-1,1,0);
	vcdp->declBus  (c+124,"v pwm_reg period_reg_data",-1,15,0);
	vcdp->declBus  (c+16,"v pwm_reg ips_rdata",-1,31,0);
	vcdp->declBit  (c+17,"v pwm_reg write_pwmsam",-1);
	vcdp->declBit  (c+18,"v pwm_reg rstgen_rst_b",-1);
	vcdp->declBus  (c+160,"v pwm_reg fifo_av",-1,2,0);
	vcdp->declBit  (c+19,"v pwm_reg fifo_empty",-1);
	vcdp->declBit  (c+172,"v pwm_reg full",-1);
	vcdp->declBit  (c+151,"v pwm_reg rov_event",-1);
	vcdp->declBit  (c+20,"v pwm_reg cmp_event",-1);
	vcdp->declBit  (c+21,"v pwm_reg pclk",-1);
	vcdp->declBus  (c+174,"v pwm_reg sample",-1,15,0);
	vcdp->declBus  (c+152,"v pwm_reg count",-1,15,0);
	vcdp->declBit  (c+22,"v pwm_reg ipg_clk_s",-1);
	vcdp->declBit  (c+23,"v pwm_reg ipg_stop",-1);
	vcdp->declBit  (c+24,"v pwm_reg ipg_doze",-1);
	vcdp->declBit  (c+25,"v pwm_reg ipg_wait",-1);
	vcdp->declBit  (c+26,"v pwm_reg ipg_debug",-1);
	vcdp->declBit  (c+27,"v pwm_reg resp_sel",-1);
	vcdp->declBit  (c+28,"v pwm_reg ips_module_en",-1);
	vcdp->declBus  (c+29,"v pwm_reg ips_addr",-1,13,2);
	vcdp->declBit  (c+30,"v pwm_reg ips_rwb",-1);
	vcdp->declBit  (c+31,"v pwm_reg ips_byte_31_24",-1);
	vcdp->declBit  (c+32,"v pwm_reg ips_byte_23_16",-1);
	vcdp->declBit  (c+33,"v pwm_reg ips_byte_15_8",-1);
	vcdp->declBit  (c+34,"v pwm_reg ips_byte_7_0",-1);
	vcdp->declBus  (c+35,"v pwm_reg ips_wdata",-1,31,0);
	vcdp->declBit  (c+36,"v pwm_reg ipg_hard_async_reset_b",-1);
	vcdp->declBit  (c+37,"v pwm_reg ipt_reset_b",-1);
	vcdp->declBit  (c+38,"v pwm_reg ipt_se_async",-1);
	vcdp->declBit  (c+214,"v pwm_reg cmp_status_clear",-1);
	vcdp->declBit  (c+206,"v pwm_reg cmp_int_status",-1);
	vcdp->declBit  (c+213,"v pwm_reg rov_status_clear",-1);
	vcdp->declBit  (c+207,"v pwm_reg rov_int_status",-1);
	vcdp->declBit  (c+212,"v pwm_reg fifo_status_clear",-1);
	vcdp->declBit  (c+208,"v pwm_reg fifo_int_status",-1);
	vcdp->declBus  (c+190,"v pwm_reg pwmper",-1,15,0);
	vcdp->declBus  (c+191,"v pwm_reg interrupt",-1,2,0);
	vcdp->declBit  (c+193,"v pwm_reg swr",-1);
	vcdp->declBit  (c+194,"v pwm_reg stopen",-1);
	vcdp->declBit  (c+195,"v pwm_reg dozen",-1);
	vcdp->declBit  (c+196,"v pwm_reg waiten",-1);
	vcdp->declBit  (c+197,"v pwm_reg debugen",-1);
	vcdp->declBit  (c+192,"v pwm_reg pwm_enable_bit",-1);
	vcdp->declBus  (c+128,"v pwm_reg pwmcon",-1,27,0);
	vcdp->declBit  (c+39,"v pwm_reg cmp_status_reset_b",-1);
	vcdp->declBit  (c+40,"v pwm_reg rov_status_reset_b",-1);
	vcdp->declBit  (c+41,"v pwm_reg fifo_status_reset_b",-1);
	vcdp->declBit  (c+42,"v pwm_reg cmp_status_rst_b",-1);
	vcdp->declBit  (c+43,"v pwm_reg rov_status_rst_b",-1);
	vcdp->declBit  (c+44,"v pwm_reg fifo_status_rst_b",-1);
	vcdp->declBit  (c+45,"v pwm_reg pwm_read_reg",-1);
	vcdp->declBit  (c+46,"v pwm_reg pwm_write_reg",-1);
	vcdp->declBit  (c+47,"v pwm_reg controlsel",-1);
	vcdp->declBit  (c+48,"v pwm_reg statussel",-1);
	vcdp->declBit  (c+49,"v pwm_reg intrsel",-1);
	vcdp->declBit  (c+50,"v pwm_reg samplesel",-1);
	vcdp->declBit  (c+51,"v pwm_reg periodsel",-1);
	vcdp->declBit  (c+52,"v pwm_reg cntrsel",-1);
	vcdp->declBit  (c+125,"v pwm_reg cmpien",-1);
	vcdp->declBit  (c+126,"v pwm_reg rovien",-1);
	vcdp->declBit  (c+127,"v pwm_reg fifoien",-1);
	vcdp->declBus  (c+53,"v pwm_reg status",-1,5,0);
	vcdp->declBit  (c+54,"v pwm_reg rstgen_reset_b",-1);
	vcdp->declBit  (c+55,"v pwm_reg pwm_en_reset_b",-1);
	vcdp->declBit  (c+56,"v pwm_reg xfr_err_less",-1);
	vcdp->declBit  (c+57,"v pwm_reg xfr_err_full",-1);
	vcdp->declBit  (c+58,"v pwm_reg invalid_reg_space",-1);
	vcdp->declBit  (c+59,"v pwm_crm pclk",-1);
	vcdp->declBit  (c+60,"v pwm_crm ipg_clk",-1);
	vcdp->declBit  (c+61,"v pwm_crm ipg_clk_highfreq",-1);
	vcdp->declBit  (c+62,"v pwm_crm ipg_clk_32k",-1);
	vcdp->declBus  (c+131,"v pwm_crm clksrc",-1,1,0);
	vcdp->declBus  (c+136,"v pwm_crm prescaler",-1,11,0);
	vcdp->declBit  (c+63,"v pwm_crm pwm_en_rst_b",-1);
	vcdp->declBit  (c+64,"v pwm_crm pwm_en",-1);
	vcdp->declBit  (c+65,"v pwm_crm ipt_se_gatedclk",-1);
	vcdp->declBit  (c+66,"v pwm_crm ipt_mode",-1);
	vcdp->declBus  (c+198,"v pwm_crm count",-1,11,0);
	vcdp->declBus  (c+199,"v pwm_crm prescaler_tmp",-1,11,0);
	vcdp->declBit  (c+67,"v pwm_crm sys_clk",-1);
	vcdp->declBus  (c+68,"v pwm_crm clksrc_scan",-1,1,0);
	vcdp->declBit  (c+69,"v pwm_crm pclk_en",-1);
	vcdp->declBit  (c+70,"v pwm_crm pre_match",-1);
	vcdp->declBus  (c+200,"v pwm_outputgen count",-1,15,0);
	vcdp->declBit  (c+140,"v pwm_outputgen rov_event",-1);
	vcdp->declBit  (c+201,"v pwm_outputgen ipp_do_pwmo",-1);
	vcdp->declBit  (c+71,"v pwm_outputgen updatesample",-1);
	vcdp->declBit  (c+72,"v pwm_outputgen widthmatch",-1);
	vcdp->declBit  (c+202,"v pwm_outputgen ipp_obe_pwmo",-1);
	vcdp->declBus  (c+175,"v pwm_outputgen samplein",-1,15,0);
	vcdp->declBus  (c+132,"v pwm_outputgen rep_mode",-1,1,0);
	vcdp->declBus  (c+141,"v pwm_outputgen poutc",-1,1,0);
	vcdp->declBit  (c+73,"v pwm_outputgen pclk",-1);
	vcdp->declBit  (c+74,"v pwm_outputgen pwm_en_rst_b",-1);
	vcdp->declBit  (c+75,"v pwm_outputgen pwm_en",-1);
	vcdp->declBus  (c+142,"v pwm_outputgen period_reg_data",-1,15,0);
	vcdp->declBit  (c+203,"v pwm_outputgen periodmatch",-1);
	vcdp->declBus  (c+204,"v pwm_outputgen period_reg_data_sync",-1,15,0);
	vcdp->declBus  (c+205,"v pwm_outputgen repcount",-1,2,0);
	vcdp->declBit  (c+76,"v pwm_outputgen sample_lookup",-1);
	vcdp->declBit  (c+77,"v pwm_outputgen zero_case",-1);
	vcdp->declBit  (c+78,"v pwm_outputgen periodmatch_1",-1);
	vcdp->declBus  (c+161,"v pwm_fifo sample",-1,15,0);
	vcdp->declBus  (c+143,"v pwm_fifo fifo_av",-1,2,0);
	vcdp->declBit  (c+79,"v pwm_fifo fifo_empty",-1);
	vcdp->declBit  (c+169,"v pwm_fifo full",-1);
	vcdp->declBus  (c+80,"v pwm_fifo ips_wdata",-1,31,0);
	vcdp->declBit  (c+81,"v pwm_fifo rstgen_rst_b",-1);
	vcdp->declBit  (c+82,"v pwm_fifo read",-1);
	vcdp->declBit  (c+133,"v pwm_fifo bctr",-1);
	vcdp->declBit  (c+134,"v pwm_fifo hctr",-1);
	vcdp->declBus  (c+135,"v pwm_fifo fifo_watermark",-1,1,0);
	vcdp->declBit  (c+83,"v pwm_fifo ipg_clk_s",-1);
	vcdp->declBit  (c+84,"v pwm_fifo ipg_clk",-1);
	vcdp->declBit  (c+85,"v pwm_fifo pclk",-1);
	vcdp->declBit  (c+86,"v pwm_fifo write_pwmsam",-1);
	vcdp->declBus  (c+87,"v pwm_fifo datain",-1,15,0);
	vcdp->declBus  (c+177,"v pwm_fifo data0",-1,15,0);
	vcdp->declBus  (c+178,"v pwm_fifo data1",-1,15,0);
	vcdp->declBus  (c+179,"v pwm_fifo data2",-1,15,0);
	vcdp->declBus  (c+180,"v pwm_fifo data3",-1,15,0);
	vcdp->declBus  (c+209,"v pwm_fifo read_ptr",-1,1,0);
	vcdp->declBus  (c+181,"v pwm_fifo write_ptr",-1,1,0);
	vcdp->declBit  (c+182,"v pwm_fifo write_flag",-1);
	vcdp->declBit  (c+210,"v pwm_fifo read_flag",-1);
	vcdp->declBit  (c+88,"v pwm_fifo fifo_wm_cross",-1);
	vcdp->declBit  (c+211,"v pwm_fifo fifo_wm_cross1",-1);
	vcdp->declBit  (c+176,"v pwm_fifo fifo_full_reg",-1);
	vcdp->declBit  (c+144,"v pwm_fifo fifo_flag",-1);
	vcdp->declBus  (c+162,"v pwm_fifo sample_ptr",-1,1,0);
	vcdp->declBit  (c+89,"v pwm_fifo sample_update",-1);
	vcdp->declBit  (c+145,"v pwm_fifo empty",-1);
	vcdp->declBit  (c+163,"v pwm_fifo fifo_0data",-1);
	vcdp->declBit  (c+146,"v pwm_fifo fifo_1data",-1);
	vcdp->declBit  (c+147,"v pwm_fifo fifo_2data",-1);
	vcdp->declBit  (c+148,"v pwm_fifo fifo_3data",-1);
	vcdp->declBit  (c+164,"v pwm_fifo fifo_1_or_more_empty",-1);
	vcdp->declBit  (c+165,"v pwm_fifo fifo_2_or_more_empty",-1);
	vcdp->declBit  (c+166,"v pwm_fifo fifo_3_or_more_empty",-1);
	vcdp->declBit  (c+167,"v pwm_fifo fifo_4_empty",-1);
	vcdp->declBit  (c+149,"v pwm_fifo fifo_full",-1);
	vcdp->declBit  (c+90,"v pwm_reg software_reset_mux dft_reset",-1);
	vcdp->declBit  (c+91,"v pwm_reg software_reset_mux func_reset",-1);
	vcdp->declBit  (c+92,"v pwm_reg software_reset_mux ipt_se_async",-1);
	vcdp->declBit  (c+93,"v pwm_reg software_reset_mux ipt_reset_b",-1);
	vcdp->declBit  (c+94,"v pwm_reg pwm_en_reset_mux dft_reset",-1);
	vcdp->declBit  (c+95,"v pwm_reg pwm_en_reset_mux func_reset",-1);
	vcdp->declBit  (c+96,"v pwm_reg pwm_en_reset_mux ipt_se_async",-1);
	vcdp->declBit  (c+97,"v pwm_reg pwm_en_reset_mux ipt_reset_b",-1);
	vcdp->declBit  (c+98,"v pwm_reg cmp_status_reset_mux dft_reset",-1);
	vcdp->declBit  (c+99,"v pwm_reg cmp_status_reset_mux func_reset",-1);
	vcdp->declBit  (c+100,"v pwm_reg cmp_status_reset_mux ipt_se_async",-1);
	vcdp->declBit  (c+101,"v pwm_reg cmp_status_reset_mux ipt_reset_b",-1);
	vcdp->declBit  (c+102,"v pwm_reg rov_status_reset_mux dft_reset",-1);
	vcdp->declBit  (c+103,"v pwm_reg rov_status_reset_mux func_reset",-1);
	vcdp->declBit  (c+104,"v pwm_reg rov_status_reset_mux ipt_se_async",-1);
	vcdp->declBit  (c+105,"v pwm_reg rov_status_reset_mux ipt_reset_b",-1);
	vcdp->declBit  (c+106,"v pwm_reg fifo_status_reset_mux dft_reset",-1);
	vcdp->declBit  (c+107,"v pwm_reg fifo_status_reset_mux func_reset",-1);
	vcdp->declBit  (c+108,"v pwm_reg fifo_status_reset_mux ipt_se_async",-1);
	vcdp->declBit  (c+109,"v pwm_reg fifo_status_reset_mux ipt_reset_b",-1);
	vcdp->declBit  (c+110,"v pwm_crm pclk_gen gck",-1);
	vcdp->declBit  (c+111,"v pwm_crm pclk_gen ck",-1);
	vcdp->declBit  (c+112,"v pwm_crm pclk_gen en",-1);
	vcdp->declBit  (c+113,"v pwm_crm pclk_gen se",-1);
	vcdp->declBit  (c+114,"v pwm_crm pclk_gen ck_b",-1);
	vcdp->declBit  (c+115,"v pwm_crm pclk_gen clk_enable",-1);
    }
}

void Vpwm::traceFullThis__1(Vpwm__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpwm* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlSymsp->TOP__v.ips_xfr_err));
	vcdp->fullBit  (c+2,(vlSymsp->TOP__v.ips_xfr_wait));
	vcdp->fullBus  (c+3,(vlSymsp->TOP__v.ips_rdata),32);
	vcdp->fullBit  (c+4,(vlSymsp->TOP__v.__PVT__rstgen_rst_b));
	vcdp->fullBit  (c+5,(vlSymsp->TOP__v.__PVT__fifo_empty));
	vcdp->fullBit  (c+6,(vlSymsp->TOP__v.__PVT__pwm_en_rst_b));
	vcdp->fullBit  (c+7,(vlSymsp->TOP__v.__PVT__pwm_en));
	vcdp->fullBit  (c+8,(vlSymsp->TOP__v.__PVT__write_pwmsam));
	vcdp->fullBit  (c+9,(vlSymsp->TOP__v.__PVT__pclk));
	vcdp->fullBit  (c+10,(vlSymsp->TOP__v.__PVT__widthmatch));
	vcdp->fullBit  (c+11,(vlSymsp->TOP__v.__PVT__updatesample));
	vcdp->fullBit  (c+12,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_rst_b));
	vcdp->fullBit  (c+13,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en));
	vcdp->fullBit  (c+14,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_err));
	vcdp->fullBit  (c+15,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_xfr_wait));
	vcdp->fullBus  (c+16,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rdata),32);
	vcdp->fullBit  (c+17,(vlSymsp->TOP__v__pwm_reg.__PVT__write_pwmsam));
	vcdp->fullBit  (c+18,(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_rst_b));
	vcdp->fullBit  (c+19,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_empty));
	vcdp->fullBit  (c+20,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_event));
	vcdp->fullBit  (c+21,(vlSymsp->TOP__v__pwm_reg.__PVT__pclk));
	vcdp->fullBit  (c+22,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_clk_s));
	vcdp->fullBit  (c+23,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_stop));
	vcdp->fullBit  (c+24,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_doze));
	vcdp->fullBit  (c+25,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_wait));
	vcdp->fullBit  (c+26,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_debug));
	vcdp->fullBit  (c+27,(vlSymsp->TOP__v__pwm_reg.__PVT__resp_sel));
	vcdp->fullBit  (c+28,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_module_en));
	vcdp->fullBus  (c+29,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_addr),12);
	vcdp->fullBit  (c+30,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_rwb));
	vcdp->fullBit  (c+31,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_31_24));
	vcdp->fullBit  (c+32,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_23_16));
	vcdp->fullBit  (c+33,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_15_8));
	vcdp->fullBit  (c+34,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_byte_7_0));
	vcdp->fullBus  (c+35,(vlSymsp->TOP__v__pwm_reg.__PVT__ips_wdata),32);
	vcdp->fullBit  (c+36,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_hard_async_reset_b));
	vcdp->fullBit  (c+37,(vlSymsp->TOP__v__pwm_reg.__PVT__ipt_reset_b));
	vcdp->fullBit  (c+38,(vlSymsp->TOP__v__pwm_reg.__PVT__ipt_se_async));
	vcdp->fullBit  (c+39,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_reset_b));
	vcdp->fullBit  (c+40,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_reset_b));
	vcdp->fullBit  (c+41,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_reset_b));
	vcdp->fullBit  (c+42,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_rst_b));
	vcdp->fullBit  (c+43,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_rst_b));
	vcdp->fullBit  (c+44,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_rst_b));
	vcdp->fullBit  (c+45,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_read_reg));
	vcdp->fullBit  (c+46,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_write_reg));
	vcdp->fullBit  (c+47,(vlSymsp->TOP__v__pwm_reg.__PVT__controlsel));
	vcdp->fullBit  (c+48,(vlSymsp->TOP__v__pwm_reg.__PVT__statussel));
	vcdp->fullBit  (c+49,(vlSymsp->TOP__v__pwm_reg.__PVT__intrsel));
	vcdp->fullBit  (c+50,(vlSymsp->TOP__v__pwm_reg.__PVT__samplesel));
	vcdp->fullBit  (c+51,(vlSymsp->TOP__v__pwm_reg.__PVT__periodsel));
	vcdp->fullBit  (c+52,(vlSymsp->TOP__v__pwm_reg.__PVT__cntrsel));
	vcdp->fullBus  (c+53,(vlSymsp->TOP__v__pwm_reg.__PVT__status),6);
	vcdp->fullBit  (c+54,(vlSymsp->TOP__v__pwm_reg.__PVT__rstgen_reset_b));
	vcdp->fullBit  (c+55,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_en_reset_b));
	vcdp->fullBit  (c+56,(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_less));
	vcdp->fullBit  (c+57,(vlSymsp->TOP__v__pwm_reg.__PVT__xfr_err_full));
	vcdp->fullBit  (c+58,(vlSymsp->TOP__v__pwm_reg.__PVT__invalid_reg_space));
	vcdp->fullBit  (c+59,(vlSymsp->TOP__v__pwm_crm.__PVT__pclk));
	vcdp->fullBit  (c+60,(vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk));
	vcdp->fullBit  (c+61,(vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_highfreq));
	vcdp->fullBit  (c+62,(vlSymsp->TOP__v__pwm_crm.__PVT__ipg_clk_32k));
	vcdp->fullBit  (c+63,(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en_rst_b));
	vcdp->fullBit  (c+64,(vlSymsp->TOP__v__pwm_crm.__PVT__pwm_en));
	vcdp->fullBit  (c+65,(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_se_gatedclk));
	vcdp->fullBit  (c+66,(vlSymsp->TOP__v__pwm_crm.__PVT__ipt_mode));
	vcdp->fullBit  (c+67,(vlSymsp->TOP__v__pwm_crm.__PVT__sys_clk));
	vcdp->fullBus  (c+68,(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc_scan),2);
	vcdp->fullBit  (c+69,(vlSymsp->TOP__v__pwm_crm.__PVT__pclk_en));
	vcdp->fullBit  (c+70,(vlSymsp->TOP__v__pwm_crm.__PVT__pre_match));
	vcdp->fullBit  (c+71,(vlSymsp->TOP__v__pwm_outputgen.__PVT__updatesample));
	vcdp->fullBit  (c+72,(vlSymsp->TOP__v__pwm_outputgen.__PVT__widthmatch));
	vcdp->fullBit  (c+73,(vlSymsp->TOP__v__pwm_outputgen.__PVT__pclk));
	vcdp->fullBit  (c+74,(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en_rst_b));
	vcdp->fullBit  (c+75,(vlSymsp->TOP__v__pwm_outputgen.__PVT__pwm_en));
	vcdp->fullBit  (c+76,(vlSymsp->TOP__v__pwm_outputgen.__PVT__sample_lookup));
	vcdp->fullBit  (c+77,(vlSymsp->TOP__v__pwm_outputgen.__PVT__zero_case));
	vcdp->fullBit  (c+78,(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch_1));
	vcdp->fullBit  (c+79,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_empty));
	vcdp->fullBus  (c+80,(vlSymsp->TOP__v__pwm_fifo.__PVT__ips_wdata),32);
	vcdp->fullBit  (c+81,(vlSymsp->TOP__v__pwm_fifo.__PVT__rstgen_rst_b));
	vcdp->fullBit  (c+82,(vlSymsp->TOP__v__pwm_fifo.__PVT__read));
	vcdp->fullBit  (c+83,(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk_s));
	vcdp->fullBit  (c+84,(vlSymsp->TOP__v__pwm_fifo.__PVT__ipg_clk));
	vcdp->fullBit  (c+85,(vlSymsp->TOP__v__pwm_fifo.__PVT__pclk));
	vcdp->fullBit  (c+86,(vlSymsp->TOP__v__pwm_fifo.__PVT__write_pwmsam));
	vcdp->fullBus  (c+87,(vlSymsp->TOP__v__pwm_fifo.__PVT__datain),16);
	vcdp->fullBit  (c+88,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross));
	vcdp->fullBit  (c+89,(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_update));
	vcdp->fullBit  (c+90,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__dft_reset));
	vcdp->fullBit  (c+91,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__func_reset));
	vcdp->fullBit  (c+92,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_se_async));
	vcdp->fullBit  (c+93,(vlSymsp->TOP__v__pwm_reg__software_reset_mux.__PVT__ipt_reset_b));
	vcdp->fullBit  (c+94,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__dft_reset));
	vcdp->fullBit  (c+95,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__func_reset));
	vcdp->fullBit  (c+96,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_se_async));
	vcdp->fullBit  (c+97,(vlSymsp->TOP__v__pwm_reg__pwm_en_reset_mux.__PVT__ipt_reset_b));
	vcdp->fullBit  (c+98,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__dft_reset));
	vcdp->fullBit  (c+99,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__func_reset));
	vcdp->fullBit  (c+100,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_se_async));
	vcdp->fullBit  (c+101,(vlSymsp->TOP__v__pwm_reg__cmp_status_reset_mux.__PVT__ipt_reset_b));
	vcdp->fullBit  (c+102,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__dft_reset));
	vcdp->fullBit  (c+103,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__func_reset));
	vcdp->fullBit  (c+104,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_se_async));
	vcdp->fullBit  (c+105,(vlSymsp->TOP__v__pwm_reg__rov_status_reset_mux.__PVT__ipt_reset_b));
	vcdp->fullBit  (c+106,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__dft_reset));
	vcdp->fullBit  (c+107,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__func_reset));
	vcdp->fullBit  (c+108,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_se_async));
	vcdp->fullBit  (c+109,(vlSymsp->TOP__v__pwm_reg__fifo_status_reset_mux.__PVT__ipt_reset_b));
	vcdp->fullBit  (c+110,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__gck));
	vcdp->fullBit  (c+111,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck));
	vcdp->fullBit  (c+112,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__en));
	vcdp->fullBit  (c+113,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__se));
	vcdp->fullBit  (c+114,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__ck_b));
	vcdp->fullBit  (c+115,(vlSymsp->TOP__v__pwm_crm__pclk_gen.__PVT__clk_enable));
	vcdp->fullBus  (c+116,(vlSymsp->TOP__v.__PVT__clksrc),2);
	vcdp->fullBus  (c+117,(vlSymsp->TOP__v.__PVT__prescaler),12);
	vcdp->fullBus  (c+118,(vlSymsp->TOP__v.__PVT__fifo_watermark),2);
	vcdp->fullBus  (c+119,(vlSymsp->TOP__v.__PVT__rep_mode),2);
	vcdp->fullBit  (c+120,(vlSymsp->TOP__v.__PVT__bctr));
	vcdp->fullBit  (c+121,(vlSymsp->TOP__v.__PVT__hctr));
	vcdp->fullBus  (c+122,(vlSymsp->TOP__v.__PVT__poutc),2);
	vcdp->fullBit  (c+123,(vlSymsp->TOP__v__pwm_reg.__PVT__ipg_enable_clk));
	vcdp->fullBus  (c+124,(vlSymsp->TOP__v__pwm_reg.__PVT__period_reg_data),16);
	vcdp->fullBit  (c+125,(vlSymsp->TOP__v__pwm_reg.__PVT__cmpien));
	vcdp->fullBit  (c+126,(vlSymsp->TOP__v__pwm_reg.__PVT__rovien));
	vcdp->fullBit  (c+127,(vlSymsp->TOP__v__pwm_reg.__PVT__fifoien));
	vcdp->fullBus  (c+128,(vlSymsp->TOP__v__pwm_reg.__PVT__pwmcon),28);
	vcdp->fullBit  (c+129,(vlSymsp->TOP__v.ipg_enable_clk));
	vcdp->fullBus  (c+130,(vlSymsp->TOP__v.__PVT__period_reg_data),16);
	vcdp->fullBus  (c+131,(vlSymsp->TOP__v__pwm_crm.__PVT__clksrc),2);
	vcdp->fullBus  (c+132,(vlSymsp->TOP__v__pwm_outputgen.__PVT__rep_mode),2);
	vcdp->fullBit  (c+133,(vlSymsp->TOP__v__pwm_fifo.__PVT__bctr));
	vcdp->fullBit  (c+134,(vlSymsp->TOP__v__pwm_fifo.__PVT__hctr));
	vcdp->fullBus  (c+135,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_watermark),2);
	vcdp->fullBus  (c+136,(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler),12);
	vcdp->fullBit  (c+137,(vlSymsp->TOP__v.ipp_do_pwmo));
	vcdp->fullBit  (c+138,(vlSymsp->TOP__v.ipp_obe_pwmo));
	vcdp->fullBus  (c+139,(vlSymsp->TOP__v.__PVT__count),16);
	vcdp->fullBit  (c+140,(vlSymsp->TOP__v__pwm_outputgen.__PVT__rov_event));
	vcdp->fullBus  (c+141,(vlSymsp->TOP__v__pwm_outputgen.__PVT__poutc),2);
	vcdp->fullBus  (c+142,(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data),16);
	vcdp->fullBus  (c+143,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_av),3);
	vcdp->fullBit  (c+144,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_flag));
	vcdp->fullBit  (c+145,(vlSymsp->TOP__v__pwm_fifo.__PVT__empty));
	vcdp->fullBit  (c+146,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1data));
	vcdp->fullBit  (c+147,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2data));
	vcdp->fullBit  (c+148,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3data));
	vcdp->fullBit  (c+149,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full));
	vcdp->fullBit  (c+150,(vlSymsp->TOP__v.__PVT__rov_event));
	vcdp->fullBit  (c+151,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_event));
	vcdp->fullBus  (c+152,(vlSymsp->TOP__v__pwm_reg.__PVT__count),16);
	vcdp->fullBit  (c+153,(vlSymsp->TOP__v.ipi_int_pwm_fifoi));
	vcdp->fullBit  (c+154,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_fifoi));
	vcdp->fullBit  (c+155,(vlSymsp->TOP__v.ipi_int_pwm_rovi));
	vcdp->fullBit  (c+156,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_rovi));
	vcdp->fullBit  (c+157,(vlSymsp->TOP__v.ipi_int_pwm_cmpi));
	vcdp->fullBit  (c+158,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm_cmpi));
	vcdp->fullBus  (c+159,(vlSymsp->TOP__v.__PVT__fifo_av),3);
	vcdp->fullBus  (c+160,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_av),3);
	vcdp->fullBus  (c+161,(vlSymsp->TOP__v__pwm_fifo.__PVT__sample),16);
	vcdp->fullBus  (c+162,(vlSymsp->TOP__v__pwm_fifo.__PVT__sample_ptr),2);
	vcdp->fullBit  (c+163,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_0data));
	vcdp->fullBit  (c+164,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_1_or_more_empty));
	vcdp->fullBit  (c+165,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_2_or_more_empty));
	vcdp->fullBit  (c+166,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_3_or_more_empty));
	vcdp->fullBit  (c+167,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_4_empty));
	vcdp->fullBit  (c+168,(vlSymsp->TOP__v.__PVT__full));
	vcdp->fullBit  (c+169,(vlSymsp->TOP__v__pwm_fifo.__PVT__full));
	vcdp->fullBit  (c+170,(vlSymsp->TOP__v.ipi_int_pwm));
	vcdp->fullBit  (c+171,(vlSymsp->TOP__v__pwm_reg.__PVT__ipi_int_pwm));
	vcdp->fullBit  (c+172,(vlSymsp->TOP__v__pwm_reg.__PVT__full));
	vcdp->fullBus  (c+173,(vlSymsp->TOP__v.__PVT__sample),16);
	vcdp->fullBus  (c+174,(vlSymsp->TOP__v__pwm_reg.__PVT__sample),16);
	vcdp->fullBus  (c+175,(vlSymsp->TOP__v__pwm_outputgen.__PVT__samplein),16);
	vcdp->fullBit  (c+176,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_full_reg));
	vcdp->fullBus  (c+177,(vlSymsp->TOP__v__pwm_fifo.__PVT__data0),16);
	vcdp->fullBus  (c+178,(vlSymsp->TOP__v__pwm_fifo.__PVT__data1),16);
	vcdp->fullBus  (c+179,(vlSymsp->TOP__v__pwm_fifo.__PVT__data2),16);
	vcdp->fullBus  (c+180,(vlSymsp->TOP__v__pwm_fifo.__PVT__data3),16);
	vcdp->fullBus  (c+181,(vlSymsp->TOP__v__pwm_fifo.__PVT__write_ptr),2);
	vcdp->fullBit  (c+182,(vlSymsp->TOP__v__pwm_fifo.__PVT__write_flag));
	vcdp->fullBus  (c+183,(vlSymsp->TOP__v__pwm_reg.__PVT__clksrc),2);
	vcdp->fullBus  (c+184,(vlSymsp->TOP__v__pwm_reg.__PVT__prescaler),12);
	vcdp->fullBus  (c+185,(vlSymsp->TOP__v__pwm_reg.__PVT__rep_mode),2);
	vcdp->fullBus  (c+186,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_watermark),2);
	vcdp->fullBit  (c+187,(vlSymsp->TOP__v__pwm_reg.__PVT__bctr));
	vcdp->fullBit  (c+188,(vlSymsp->TOP__v__pwm_reg.__PVT__hctr));
	vcdp->fullBus  (c+189,(vlSymsp->TOP__v__pwm_reg.__PVT__poutc),2);
	vcdp->fullBus  (c+190,(vlSymsp->TOP__v__pwm_reg.__PVT__pwmper),16);
	vcdp->fullBus  (c+191,(vlSymsp->TOP__v__pwm_reg.__PVT__interrupt),3);
	vcdp->fullBit  (c+192,(vlSymsp->TOP__v__pwm_reg.__PVT__pwm_enable_bit));
	vcdp->fullBit  (c+193,(vlSymsp->TOP__v__pwm_reg.__PVT__swr));
	vcdp->fullBit  (c+194,(vlSymsp->TOP__v__pwm_reg.__PVT__stopen));
	vcdp->fullBit  (c+195,(vlSymsp->TOP__v__pwm_reg.__PVT__dozen));
	vcdp->fullBit  (c+196,(vlSymsp->TOP__v__pwm_reg.__PVT__waiten));
	vcdp->fullBit  (c+197,(vlSymsp->TOP__v__pwm_reg.__PVT__debugen));
	vcdp->fullBus  (c+198,(vlSymsp->TOP__v__pwm_crm.__PVT__count),12);
	vcdp->fullBus  (c+199,(vlSymsp->TOP__v__pwm_crm.__PVT__prescaler_tmp),12);
	vcdp->fullBus  (c+200,(vlSymsp->TOP__v__pwm_outputgen.__PVT__count),16);
	vcdp->fullBit  (c+201,(vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_do_pwmo));
	vcdp->fullBit  (c+202,(vlSymsp->TOP__v__pwm_outputgen.__PVT__ipp_obe_pwmo));
	vcdp->fullBit  (c+203,(vlSymsp->TOP__v__pwm_outputgen.__PVT__periodmatch));
	vcdp->fullBus  (c+204,(vlSymsp->TOP__v__pwm_outputgen.__PVT__period_reg_data_sync),16);
	vcdp->fullBus  (c+205,(vlSymsp->TOP__v__pwm_outputgen.__PVT__repcount),3);
	vcdp->fullBit  (c+206,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_int_status));
	vcdp->fullBit  (c+207,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_int_status));
	vcdp->fullBit  (c+208,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_int_status));
	vcdp->fullBus  (c+209,(vlSymsp->TOP__v__pwm_fifo.__PVT__read_ptr),2);
	vcdp->fullBit  (c+210,(vlSymsp->TOP__v__pwm_fifo.__PVT__read_flag));
	vcdp->fullBit  (c+211,(vlSymsp->TOP__v__pwm_fifo.__PVT__fifo_wm_cross1));
	vcdp->fullBit  (c+212,(vlSymsp->TOP__v__pwm_reg.__PVT__fifo_status_clear));
	vcdp->fullBit  (c+213,(vlSymsp->TOP__v__pwm_reg.__PVT__rov_status_clear));
	vcdp->fullBit  (c+214,(vlSymsp->TOP__v__pwm_reg.__PVT__cmp_status_clear));
	vcdp->fullBit  (c+215,(vlTOPp->ipp_do_pwmo));
	vcdp->fullBit  (c+216,(vlTOPp->ipp_obe_pwmo));
	vcdp->fullBit  (c+217,(vlTOPp->ipg_enable_clk));
	vcdp->fullBit  (c+218,(vlTOPp->ipg_clk_32k));
	vcdp->fullBit  (c+219,(vlTOPp->ipg_clk));
	vcdp->fullBit  (c+220,(vlTOPp->ipg_clk_s));
	vcdp->fullBit  (c+221,(vlTOPp->ipg_clk_highfreq));
	vcdp->fullBit  (c+222,(vlTOPp->ipg_hard_async_reset_b));
	vcdp->fullBit  (c+223,(vlTOPp->ipg_debug));
	vcdp->fullBit  (c+224,(vlTOPp->ipg_doze));
	vcdp->fullBit  (c+225,(vlTOPp->ipg_wait));
	vcdp->fullBit  (c+226,(vlTOPp->ipg_stop));
	vcdp->fullBit  (c+227,(vlTOPp->ips_xfr_err));
	vcdp->fullBit  (c+228,(vlTOPp->ips_xfr_wait));
	vcdp->fullBus  (c+229,(vlTOPp->ips_rdata),32);
	vcdp->fullBit  (c+230,(vlTOPp->ips_module_en));
	vcdp->fullBit  (c+231,(vlTOPp->ips_byte_7_0));
	vcdp->fullBit  (c+232,(vlTOPp->ips_byte_15_8));
	vcdp->fullBit  (c+233,(vlTOPp->ips_byte_23_16));
	vcdp->fullBit  (c+234,(vlTOPp->ips_byte_31_24));
	vcdp->fullBit  (c+235,(vlTOPp->ips_rwb));
	vcdp->fullBus  (c+236,(vlTOPp->ips_addr),12);
	vcdp->fullBus  (c+237,(vlTOPp->ips_wdata),32);
	vcdp->fullBit  (c+238,(vlTOPp->resp_sel));
	vcdp->fullBit  (c+239,(vlTOPp->ipi_int_pwm_rovi));
	vcdp->fullBit  (c+240,(vlTOPp->ipi_int_pwm_cmpi));
	vcdp->fullBit  (c+241,(vlTOPp->ipi_int_pwm_fifoi));
	vcdp->fullBit  (c+242,(vlTOPp->ipi_int_pwm));
	vcdp->fullBit  (c+243,(vlTOPp->ipt_mode));
	vcdp->fullBit  (c+244,(vlTOPp->ipt_se_gatedclk));
	vcdp->fullBit  (c+245,(vlTOPp->ipt_se_async));
	vcdp->fullBit  (c+246,(vlTOPp->ipt_reset_b));
	vcdp->fullBit  (c+247,(vlSymsp->TOP__v.ipg_clk_32k));
	vcdp->fullBit  (c+248,(vlSymsp->TOP__v.ipg_clk));
	vcdp->fullBit  (c+249,(vlSymsp->TOP__v.ipg_clk_s));
	vcdp->fullBit  (c+250,(vlSymsp->TOP__v.ipg_clk_highfreq));
	vcdp->fullBit  (c+251,(vlSymsp->TOP__v.ipg_hard_async_reset_b));
	vcdp->fullBit  (c+252,(vlSymsp->TOP__v.ipg_debug));
	vcdp->fullBit  (c+253,(vlSymsp->TOP__v.ipg_doze));
	vcdp->fullBit  (c+254,(vlSymsp->TOP__v.ipg_wait));
	vcdp->fullBit  (c+255,(vlSymsp->TOP__v.ipg_stop));
	vcdp->fullBit  (c+256,(vlSymsp->TOP__v.ips_module_en));
	vcdp->fullBit  (c+257,(vlSymsp->TOP__v.ips_byte_7_0));
	vcdp->fullBit  (c+258,(vlSymsp->TOP__v.ips_byte_15_8));
	vcdp->fullBit  (c+259,(vlSymsp->TOP__v.ips_byte_23_16));
	vcdp->fullBit  (c+260,(vlSymsp->TOP__v.ips_byte_31_24));
	vcdp->fullBit  (c+261,(vlSymsp->TOP__v.ips_rwb));
	vcdp->fullBus  (c+262,(vlSymsp->TOP__v.ips_addr),12);
	vcdp->fullBus  (c+263,(vlSymsp->TOP__v.ips_wdata),32);
	vcdp->fullBit  (c+264,(vlSymsp->TOP__v.resp_sel));
	vcdp->fullBit  (c+265,(vlSymsp->TOP__v.ipt_mode));
	vcdp->fullBit  (c+266,(vlSymsp->TOP__v.ipt_se_gatedclk));
	vcdp->fullBit  (c+267,(vlSymsp->TOP__v.ipt_se_async));
	vcdp->fullBit  (c+268,(vlSymsp->TOP__v.ipt_reset_b));
    }
}
