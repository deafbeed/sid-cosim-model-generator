// +FHDR------------------------------------------------------------------------
// Copyright (c) 2001, Motorola.
// Motorola Confidential Proprietary
// -----------------------------------------------------------------------------
// FILE NAME      : pwm_outputgen.v
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
// PURPOSE     : This submodule implements the generation of the PWM
//               output. The sample repeat functionality is also done here.
// -----------------------------------------------------------------------------
// PARAMETERS - [No PARAMETERS used]
//     PARAM NAME      RANGE    : DESCRIPTION       : DEFAULT : UNITS
// -----------------------------------------------------------------------------
// REUSE ISSUES
//   Reset Strategy        : Asynchronous
//   Clock Domains         : pclk
//   Critical Timing       : 
//   Test Features         : None
//   Asynchronous I/F      : None
//   Scan Methodology      : mux-d full scan
//   Instantiations        : 
//   Synthesizable (y/n)   : Yes
//   Other                 :
// -FHDR------------------------------------------------------------------------

module pwm_outputgen (
                    count,           // current count value 
                    rov_event,       // Rollover event
                    ipp_do_pwmo,     // output signal to pad
                    updatesample,    // update FIFO samples
                    widthmatch,      // counter value == sample
                    ipp_obe_pwmo,    // PWM output pad enable
                    samplein,        // current sample value from FIFO
                    rep_mode,        // rep_mode sample 1, 2, 4, 8 times
                    poutc,           // PWM output mode control
                    pclk,            // clock from prescaler
                    pwm_en_rst_b,    // PWM enable for reset purposes
                    pwm_en,          // PWM enable 
                    period_reg_data  // period register value
                   );

output [15:0]   count;           // current count value
output          rov_event;       // Rollover event
output          ipp_do_pwmo;     // output signal to pad
output          updatesample;    // update FIFO samples
output          widthmatch;      // counter value == sample
output          ipp_obe_pwmo;    // PWM output pad enable
input [15:0]    samplein;        // current sample value from FIFO
input [1:0]     rep_mode;        // rep_mode sample 1, 2, 4, 8 times
input [1:0]     poutc;           // PWM output mode control
input           pclk;            // clock from prescaler
input           pwm_en_rst_b;    // PWM enable for reset purposes
input           pwm_en;          // PWM enable
input [15:0]    period_reg_data; // period register value

reg [15:0]      count;           // Main counter  
reg             periodmatch;     // Signal on which new period is started
reg             ipp_do_pwmo;     // output signal to pad        
reg             updatesample;    // Sample update signal
reg             ipp_obe_pwmo;    // PWM output pad enable

// Internal registers and wires
reg [15:0]      period_reg_data_sync; // period value change detection register
reg [2:0]       repcount;             // Sample repeat counter 
wire            sample_lookup;        // Sample update signal
wire            zero_case;            // sample value == 0
wire            periodmatch_1;        // Signal on which new period is started

// --------------------------------------------------------------- //
// ----- PWM output signal and PAD enable signal generation ------ //
// --------------------------------------------------------------- //
assign widthmatch = ((samplein - 16'h0001) == count);
assign zero_case = (samplein == 16'h0000);
assign rov_event = ((period_reg_data_sync + 16'h001) == count);

// generate the output signal
always @(posedge pclk or negedge pwm_en_rst_b)
        if(!pwm_en_rst_b)
        begin
                ipp_do_pwmo <= 1'b0;
                ipp_obe_pwmo <= 1'b0;
        end
        else
        begin
                if (poutc[1] == 1'b0)
                        ipp_obe_pwmo <= 1'b1;
                case ({zero_case,poutc})
                        3'b000  : if (periodmatch) 
                                          ipp_do_pwmo <= 1'b1;
                                  else if (widthmatch)
                                         ipp_do_pwmo <= 1'b0;
                        3'b001  : if (periodmatch) 
                                          ipp_do_pwmo <= 1'b0;
                                  else if (widthmatch)
                                         ipp_do_pwmo <= 1'b1;
                        default : ipp_do_pwmo <= 1'b0;
                endcase
        end

// --------------------------------------------------------------- //
// -------------- Repeat Sample ipplementation ------------------- //
// --------------------------------------------------------------- //

assign sample_lookup = ((count == 16'hfffe) | (count == period_reg_data_sync))
                       & pwm_en ; 

// Repeat counter
always @ (posedge pclk or negedge pwm_en_rst_b)
        if (!pwm_en_rst_b)
                repcount <= 3'b000;
        else if (sample_lookup)
                repcount <= repcount + 3'b001;

// Sample updation signal generation
always @ (sample_lookup or repcount or rep_mode)
        case (rep_mode)
                2'b00 : updatesample = sample_lookup ;
                2'b01 : updatesample = sample_lookup & repcount[0];
                2'b10 : updatesample = sample_lookup & repcount[0]
                                                     & repcount[1];
                2'b11 : updatesample = sample_lookup & repcount[0]
                                                     & repcount[1]
                                                     & repcount[2];
        endcase

// --------------------------------------------------------------- //
// ---------------- Output signal Period detection --------------- //
// --------------------------------------------------------------- //
assign periodmatch_1 = ((count == 16'hfffe) | 
                       (!periodmatch & ((count == period_reg_data_sync) | 
                       (period_reg_data != period_reg_data_sync)))) & pwm_en; 

// Registering period data to detect value update
always @(posedge pclk or negedge pwm_en_rst_b)
        if(!pwm_en_rst_b)
                period_reg_data_sync <= 16'hfffe;
        else
                period_reg_data_sync <= period_reg_data;

// New period start signal generation
always @(posedge pclk or negedge pwm_en_rst_b)
        if(!pwm_en_rst_b)
                periodmatch <= 1'b1;
        else 
                periodmatch <= periodmatch_1;

// --------------------------------------------------------------- //
// ------------------------ Main counter ------------------------- //
// --------------------------------------------------------------- //
always @ (posedge pclk or negedge pwm_en_rst_b)
        if (!pwm_en_rst_b)
                count <= 16'h0000;
        else
        begin
                if (periodmatch)
                        count <= 16'h0000;
                else 
                        count <= count + 16'h0001;
        end

endmodule        // pwm_outputgen
