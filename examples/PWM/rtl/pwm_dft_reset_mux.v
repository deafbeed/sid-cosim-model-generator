// +FHDR------------------------------------------------------------------------
// Copyright (c) 2001, Motorola.
// Motorola Confidential Proprietary
// -----------------------------------------------------------------------------
// FILE NAME      : pwm_dft_reset_mux.v
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
// PURPOSE     : This submodule ensures the inferring of a mux and is used
//               during bypassing of generated resets for DFT so that other
//               logic is not inferred which may lead to glitches.
// -----------------------------------------------------------------------------
// PARAMETERS
//     PARAM NAME      RANGE    : DESCRIPTION       : DEFAULT : UNITS
// e.g.DATA_WIDTH     [32,16]   : width of the data : 32      :
// -----------------------------------------------------------------------------
// REUSE ISSUES
//   Reset Strategy        : Asynchronous
//   Clock Domains         : N/A 
//   Critical Timing       : 
//   Test Features         : None
//   Asynchronous I/F      : N/A
//   Scan Methodology      : mux-d full scan 
//   Instantiations        : None
//   Synthesizable (y/n)   : Yes
//   Other                 :
// -FHDR------------------------------------------------------------------------

module pwm_dft_reset_mux (
                           dft_reset,         // DFT Compliant Reset
                           func_reset,        // Input Functional Reset
                           ipt_se_async,      // Test async se
                           ipt_reset_b        // Test Reset
                         );

output dft_reset;         // DFT Compliant Reset
input  func_reset;        // Input Functional Reset
input  ipt_se_async;      // Test async se
input  ipt_reset_b;       // Test Reset

reg    dft_reset ;        // DFT Compliant Reset

always @ (func_reset or ipt_se_async or ipt_reset_b)
begin
        case (ipt_se_async) // synopsys infer_mux
                1'b0: dft_reset = func_reset ;
                1'b1: dft_reset = ipt_reset_b ;
        endcase
end
  
endmodule // pwm_dft_reset_mux
