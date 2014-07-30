// +FHDR------------------------------------------------------------------------
// Copyright (c) 2001, Motorola.
// Motorola Confidential Proprietary
// -----------------------------------------------------------------------------
// FILE NAME      : pwm_clock_gating.v
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
// KEYWORDS    : 
// -----------------------------------------------------------------------------
// PURPOSE     : This is a RTL implementation of the library clock gating
//               cell. During synthesis, this file should be replaced with 
//               the library cell.
// -----------------------------------------------------------------------------
// PARAMETERS - [No PARAMETERS used]
//     PARAM NAME      RANGE    : DESCRIPTION       : DEFAULT : UNITS
// -----------------------------------------------------------------------------
// REUSE ISSUES
//   Reset Strategy        : Asynchronous
//   Clock Domains         : N/A
//   Critical Timing       : 
//   Test Features         : None
//   Asynchronous I/F      : None
//   Scan Methodology      : mux-d full scan
//   Instantiations        : None
//   Synthesizable (y/n)   : Yes
//   Other                 :
// -FHDR------------------------------------------------------------------------

module pwm_clock_gating (
                          gck,       // gated clock signal 
                          ck,        // clock to be gated
                          en,        // gating enable 
                          se         // scan enable
                        );

output  gck;        // gated clock signal

input   ck;         // clock to be gated
input   en;         // gating enable
input   se;         // scan enable

wire    ck_b;             // inverted clock from input clock
reg     clk_enable;       // clock enable

assign ck_b = !ck;

// enable signal generation
always @(ck_b or en or se)
  begin
    if (ck_b)
    begin
      if (en | se)
        clk_enable = 1'b1;
      else 
        clk_enable = 1'b0;
    end
  end

assign gck = ck & clk_enable;

endmodule // pwm_clock_gating
