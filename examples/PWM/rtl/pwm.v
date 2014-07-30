// +FHDR------------------------------------------------------------------------
// Copyright (c) 2001, Motorola.
// Motorola Confidential Proprietary
// -----------------------------------------------------------------------------
// FILE NAME      : pwm.v
// DEPARTMENT     : Wireless Solutions Division SPS (NIDC)
// AUTHOR         : Soumen Basak
// AUTHOR'S EMAIL : basak.soumen@motorola.com
// -----------------------------------------------------------------------------
// RELEASE HISTORY
// VERSION  DATE          AUTHOR          DESCRIPTION
// 0.0      2003-11-10    Soumen Basak    Initial Ip_Vault RTL release
//                                        - standalone testing complete
//                                        - synthesis, equivalence checking
//                                        & DFT checks done
//                                        - SRS3.1 complaint
// 1.0      2003-12-05    Soumen Basak    Final Ip_Vault RTL release
//                                        - bugs found in functional
//                                        testing rectified
// -----------------------------------------------------------------------------
// KEYWORDS    : General file searching keywords, leave blank if none.
// -----------------------------------------------------------------------------
// PURPOSE     : The pulse-width modulator (PWM) is a 32 bit addressable module 
//               with a 16-bit counter and is optimized to generate sound from 
//               stored sample audio images. It can also generate tones. It 
//               uses 16-bit resolution and a 4x16 data FIFO to generate sound.
// -----------------------------------------------------------------------------
// PARAMETERS - [No PARAMETERS used]
//     PARAM NAME      RANGE    : DESCRIPTION       : DEFAULT : UNITS
// -----------------------------------------------------------------------------
// REUSE ISSUES
//   Reset Strategy        : Asynchronous
//   Clock Domains         : ipg_clk, ipg_clk_32k, ipp_clk_highfreq, ipg_clk_s
//   Critical Timing       : ipp_do_pwmo
//   Test Features         : None
//   Asynchronous I/F      : None
//   Scan Methodology      : mux-d full scan
//   Instantiations        : pwm_reg, pwm_crm, pwm_outputgen, pwm_fifo
//   Synthesizable (y/n)   : Yes
//   Other                 :
// -FHDR------------------------------------------------------------------------

module pwm (
            //*************** start of pad level signals ***************
            // ipp outputs
            ipp_do_pwmo,            // Pulse width modulated output signal
            ipp_obe_pwmo,           // ipp_do_pwmo pad enable

            // ipp inputs

            // ipp inouts

            //************* start of global level signals **************
            // ipg outputs
            ipg_enable_clk,         // Global clock enable;

            // ipg inputs
            ipg_clk_32k,            // 32kHz Low Frequency clock
            ipg_clk,                // IP Global functional clock
            ipg_clk_s,              // IP-Bus reg read write clock
            ipg_clk_highfreq,       // IP Global constant freq clock
            ipg_hard_async_reset_b, // Hardware reset
            ipg_debug,              // IP global debug mode sig
            ipg_doze,               // IP global doze mode signal
            ipg_wait,               // IP global wait mode signal
            ipg_stop,               // IP global stop mode signal

            //************** start of slave bus signals ****************
            // ips outputs
            ips_xfr_err,            // IP-Bus transfer error signal
            ips_xfr_wait,           // IP-Bus transfer wait signal
            ips_rdata,              // IP-Bus read data bus

            // ips inputs
            ips_module_en,          // IP-Bus module anable signal
            ips_byte_7_0,           // IP-Bus byte enables
            ips_byte_15_8,          //
            ips_byte_23_16,         //
            ips_byte_31_24,         //
            ips_rwb,                // IP-Bus r/w transaction indicator signal
            ips_addr,               // IP-Bus address bus
            ips_wdata,              // IP-Bus write data bus
            resp_sel,               // signal qualifying xfr_err generation

            //************** start of interrupt signals ****************
            // ipi outputs
            ipi_int_pwm_rovi,       // IP interrupt signal, FIFO empty interrupt
            ipi_int_pwm_cmpi,       // IP interrupt signal, FIFO empty interrupt
            ipi_int_pwm_fifoi,      // IP interrupt signal, FIFO empty interrupt
            ipi_int_pwm,            // IP interrupt signal, FIFO empty interrupt

            // ipi inputs

            //***************** start of dma signals *******************
            // ipd outputs

            // ipd inputs

            //************* start of ahb master signals ****************
            // ahb master outputs

            // ahb master inputs

            //************** start of ahb slave signals ****************
            // ahb slave outputs

            // ahb slave inputs

            //************** start of test mode signals ****************
            // ipt outputs

            // ipt inputs
            ipt_mode,               // IP scan mode signal
            ipt_se_gatedclk,        // IP scan mode clock gating signal
            ipt_se_async,           // IP scan mode reset and async gating sig
            ipt_reset_b             // IP scan mode reset

            //************* start of inter module signals **************
            // inter module outputs

            // inter module inputs
          ) ;


//*************** start of pad level signals ***************
// ipp outputs
output ipp_do_pwmo ;            // Pulse width modulated output signal
output ipp_obe_pwmo ;           // ipp_do_pwmo pad enable

// ipp inputs

// ipp inouts

//************* start of global level signals **************
// ipg outputs
output ipg_enable_clk ;         // Global clock enable;

// ipg inputs
input  ipg_clk_32k ;            // 32kHz Low Frequency clock
input  ipg_clk ;                // IP Global functional clock
input  ipg_clk_s ;              // IP-Bus reg read write clock
input  ipg_clk_highfreq ;       // IP Global constant freq clock
input  ipg_hard_async_reset_b ; // Hardware reset
input  ipg_debug ;              // IP global debug mode sig
input  ipg_doze ;               // IP global doze mode signal
input  ipg_wait ;               // IP global wait mode signal
input  ipg_stop ;               // IP global stop mode signal

//************** start of slave bus signals ****************
// ips outputs
output ips_xfr_err ;            // IP-Bus transfer error signal
output ips_xfr_wait ;           // IP-Bus transfer wait signal
output [31:0] ips_rdata ;       // IP-Bus read data bus

// ips inputs
input  ips_module_en ;          // IP-Bus module anable signal
input  ips_byte_7_0 ;           // IP-Bus byte enables
input  ips_byte_15_8 ;          //
input  ips_byte_23_16 ;         //
input  ips_byte_31_24 ;         //
input  ips_rwb ;                // IP-Bus r/w transaction indicator signal
input  [13:2] ips_addr ;        // IP-Bus address bus
input  [31:0] ips_wdata ;       // IP-Bus write data bus
input  resp_sel;                // signal qualifying xfr_err generation

//************** start of interrupt signals ****************
// ipi outputs
output ipi_int_pwm_rovi ;       // IP interrupt signal, FIFO empty interrupt
output ipi_int_pwm_cmpi ;       // IP interrupt signal, FIFO empty interrupt
output ipi_int_pwm_fifoi ;      // IP interrupt signal, FIFO empty interrupt
output ipi_int_pwm ;            // IP interrupt signal, FIFO empty interrupt

// ipi inputs

//***************** start of dma signals *******************
// ipd outputs

// ipd inputs

//************* start of ahb master signals ****************
// ahb master outputs

// ahb master inputs

//************** start of ahb slave signals ****************
// ahb slave outputs

// ahb slave inputs

//************** start of test mode signals ****************
// ipt outputs

// ipt inputs
input  ipt_mode ;               // IP scan mode signal
input  ipt_se_gatedclk ;        // IP scan mode clock gating signal
input  ipt_se_async ;           // IP scan mode reset and async gating sig
input  ipt_reset_b ;            // IP scan mode reset

//************* start of inter module signals **************
// inter module outputs

// inter module inputs


// -------------- INTERNAL WIRE DECLARATIONS -----------------//

wire            rstgen_rst_b;          // sw/hw reset 
wire [1:0]      clksrc;                // clock source select
wire [11:0]     prescaler;             // prescaler setting
wire [2:0]      fifo_av;               // FIFO available, read only bit
wire            fifo_empty;            // FIFO empty bit
wire            full;                  // FIFO full bit
wire [1:0]      fifo_watermark;        // Fifo watermark level 
wire            pwm_en_rst_b;          // rst signal sw, hw and pwm_enable_bit
wire            pwm_en;                // pwm enable
wire [1:0]      rep_mode;              // sample repeat mode
wire [15:0]     sample;                // sample value to be currently used
wire            bctr;                  // sample value byte swapping bit
wire            hctr;                  // sample value half word swapping bit
wire [1:0]      poutc;                 // PWM output mode control
wire [15:0]     period_reg_data;       // Value of period register
wire [15:0]     count;                 // count value of counter
wire            write_pwmsam;          // sample register write indicator
wire            pclk;                  // prescaler output clock
wire            widthmatch;            // signal which signals a compare event
wire            rov_event;           // signal on which new period is started
wire            updatesample;          // signal on which sample is updated

/* verilator lint_off STMTDLY */

initial begin
	$display ("Sim is running");
end

/* verilator lint_on STMTDLY */


// ----------------- IP interface & register r/w unit ------------------- //

pwm_reg   pwm_reg ( 
                .clksrc                  (clksrc),                
                .prescaler               (prescaler),            
                .ipi_int_pwm             (ipi_int_pwm),    
                .ipi_int_pwm_cmpi        (ipi_int_pwm_cmpi),    
                .ipi_int_pwm_rovi        (ipi_int_pwm_rovi),    
                .ipi_int_pwm_fifoi       (ipi_int_pwm_fifoi),    
                .fifo_av                 (fifo_av),            
                .fifo_empty              (fifo_empty),        
                .full                    (full),        
                .rov_event               (rov_event),        
                .cmp_event               (widthmatch),        
                .pclk                    (pclk),        
                .pwm_en_rst_b            (pwm_en_rst_b),    
                .pwm_en                  (pwm_en),    
                .rep_mode                (rep_mode),       
                .sample                  (sample),      
                .fifo_watermark          (fifo_watermark),
                .bctr                    (bctr),  
                .hctr                    (hctr), 
                .poutc                   (poutc), 
                .period_reg_data         (period_reg_data[15:0]),
                .count                   (count),               
                .ipg_enable_clk          (ipg_enable_clk),      
                .ipg_stop                (ipg_stop),      
                .ipg_doze                (ipg_doze),      
                .ipg_wait                (ipg_wait),      
                .ipg_debug               (ipg_debug),      
                .resp_sel                (resp_sel),      
                .ipg_clk_s               (ipg_clk_s),   
                .ips_module_en           (ips_module_en),        
                .ips_addr                (ips_addr),            
                .ips_rwb                 (ips_rwb),            
                .ips_byte_31_24          (ips_byte_31_24),    
                .ips_byte_23_16          (ips_byte_23_16),   
                .ips_byte_15_8           (ips_byte_15_8),   
                .ips_byte_7_0            (ips_byte_7_0),   
                .ips_wdata               (ips_wdata),     
                .ips_rdata               (ips_rdata),    
                .ips_xfr_err             (ips_xfr_err), 
                .ips_xfr_wait            (ips_xfr_wait), 
                .ipg_hard_async_reset_b  (ipg_hard_async_reset_b),
                .ipt_se_async            (ipt_se_async),    
                .ipt_reset_b             (ipt_reset_b),    
                .rstgen_rst_b            (rstgen_rst_b),       
                .write_pwmsam            (write_pwmsam)      
                );

// ----------------- Clock gating and divider unit ------------------- //

pwm_crm   pwm_crm (
                .pclk                    (pclk),
                .ipg_clk                 (ipg_clk),          
                .ipg_clk_highfreq        (ipg_clk_highfreq),    
                .ipg_clk_32k             (ipg_clk_32k),         
                .clksrc                  (clksrc),               
                .prescaler               (prescaler),             
                .pwm_en_rst_b            (pwm_en_rst_b),
                .pwm_en                  (pwm_en),    
                .ipt_mode                (ipt_mode),
                .ipt_se_gatedclk         (ipt_se_gatedclk) 
                );

// ----------------- PWM main counter and period unit ------------------- //

pwm_outputgen   pwm_outputgen (
                .ipp_do_pwmo             (ipp_do_pwmo),
                .ipp_obe_pwmo            (ipp_obe_pwmo),
                .poutc                   (poutc),
                .samplein                (sample),
                .widthmatch              (widthmatch),
                .rep_mode                (rep_mode),
                .updatesample            (updatesample),
                .count                   (count),
                .rov_event               (rov_event),
                .pclk                    (pclk),
                .pwm_en_rst_b            (pwm_en_rst_b),
                .pwm_en                  (pwm_en),    
                .period_reg_data         (period_reg_data)
                );

// ----------------- PWM FIFO unit ------------------- //

pwm_fifo   pwm_fifo (
                .sample                  (sample),    
                .fifo_av                 (fifo_av),    
                .fifo_empty              (fifo_empty),  
                .full                    (full),        
                .fifo_watermark          (fifo_watermark),
                .ips_wdata               (ips_wdata),    
                .rstgen_rst_b            (rstgen_rst_b),  
                .read                    (updatesample),   
                .bctr                    (bctr),            
                .hctr                    (hctr),             
                .ipg_clk                 (ipg_clk),          
                .ipg_clk_s               (ipg_clk_s),          
                .pclk                    (pclk),        
                .write_pwmsam            (write_pwmsam)  
                );

endmodule // pwm_ip
