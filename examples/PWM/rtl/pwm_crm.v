// +FHDR------------------------------------------------------------------------
// Copyright (c) 2001, Motorola.
// Motorola Confidential Proprietary
// -----------------------------------------------------------------------------
// FILE NAME      : pwm_crm.v
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
// PURPOSE     : This submodule generated the clocks used by the PWM for
//               running the counter and other purposes. The 'sys_clk' is the
//               clock selected and after prescaling it 'pclk' is generated 
//               which is used to run the counter.
// -----------------------------------------------------------------------------
// PARAMETERS - [No PARAMETERS used]
//     PARAM NAME      RANGE    : DESCRIPTION       : DEFAULT : UNITS
// -----------------------------------------------------------------------------
// REUSE ISSUES
//   Reset Strategy        : Asynchronous
//   Clock Domains         : ipg_clk, ipg_clk_32k, ipp_clk_highfreq,
//                           sys_clk, pclk
//   Critical Timing       : 
//   Test Features         : None
//   Asynchronous I/F      : None
//   Scan Methodology      : mux-d full scan
//   Instantiations        : pwm_clock_gating
//   Synthesizable (y/n)   : Yes
//   Other                 :
// -FHDR------------------------------------------------------------------------

/* verilator lint_off UNOPTFLAT */
module pwm_crm (
                   pclk,                // main clock for the PWM system
                   ipg_clk,             // IP global functional clock
                   ipg_clk_highfreq,    // IP constant freq clock 
                   ipg_clk_32k,         // 32KHz clock
                   clksrc,              // Select clock for running counter
                   prescaler,           // prescaler value
                   pwm_en_rst_b,        // PWM enable for reset purposes
                   pwm_en,              // PWM enable
                   ipt_se_gatedclk,     // scan mode clock gating bypass signal
                   ipt_mode             // scan mode signal
                  );
output        pclk;                // main clock for the PWM system
input         ipg_clk;             // IP global functional clock
input         ipg_clk_highfreq;    // IP constant freq clock
input         ipg_clk_32k;         // 32KHz clock
input [1:0]   clksrc;              // Select clock for running counter
input [11:0]  prescaler;           // prescaler value
input         pwm_en_rst_b;        // PWM enable for reset purposes
input         pwm_en;              // PWM enable
input         ipt_se_gatedclk;     // scan mode clock gating bypass signal
input         ipt_mode;            // scan mode signal
            
reg [11:0]    count;               // prescaler counter
reg [11:0]    prescaler_tmp;       // prescaler counter
reg           sys_clk;             // clock on which PWM counter runs
wire [1:0]    clksrc_scan;         // clock source select (with ipt_mode)
wire          pclk_en;             // prescaler clock enable signal
wire          pre_match;           // clock on which PWM counter runs
/* verilator lint_on UNOPTFLAT */

// Registering prescaler value to detect its value change
always @ (posedge sys_clk or negedge pwm_en_rst_b)
        if (!pwm_en_rst_b)
                prescaler_tmp <= 12'h000;
        else
                prescaler_tmp <= prescaler;        

// Generating the clock select which takes scan mode into consideration
assign clksrc_scan[1] = ~ipt_mode & clksrc[1] ;
assign clksrc_scan[0] = ipt_mode | clksrc[0] ;

// Selecting the clock source to the Prescaler
always @ (clksrc_scan or ipg_clk or ipg_clk_highfreq or ipg_clk_32k)
        case(clksrc_scan)
                2'b00 : sys_clk = 1'b0;
                2'b01 : sys_clk = ipg_clk;
                2'b10 : sys_clk = ipg_clk_highfreq;
                2'b11 : sys_clk = ipg_clk_32k;
        endcase

assign pre_match = (count == prescaler) | (prescaler != prescaler_tmp);
assign pclk_en   = pre_match & pwm_en;

// prescaler counter
always @(posedge sys_clk or negedge pwm_en_rst_b)
        if (!pwm_en_rst_b)
                count <= 12'h00;
        else 
        begin
                if (pre_match)
                        count <= 12'h00;
                else
                        count <= count + 12'h1;
        end
        
pwm_clock_gating   pclk_gen (
                       .gck(pclk),
                       .en(pclk_en),
                       .se(ipt_se_gatedclk),
                       .ck(sys_clk)
                      );
endmodule
