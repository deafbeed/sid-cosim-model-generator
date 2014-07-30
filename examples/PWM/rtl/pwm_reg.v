// +FHDR------------------------------------------------------------------------
// Copyright (c) 2001, Motorola.
// Motorola Confidential Proprietary
// -----------------------------------------------------------------------------
// FILE NAME      : pwm_reg.v
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
// PURPOSE     : This submodule implements all the registers (except the
//               sample register which is implemented with the FIFO) and the IP
//               Slave bus interface for accesses to them. It also
//               implements the various resets that are being used in the
//               module. Interrupt generation is also done here.
// -----------------------------------------------------------------------------
// PARAMETERS - [No PARAMETERS used]
//     PARAM NAME      RANGE    : DESCRIPTION       : DEFAULT : UNITS
// -----------------------------------------------------------------------------
// REUSE ISSUES
//   Reset Strategy        : Asynchronous
//   Clock Domains         : ipg_clk_s, pclk
//   Critical Timing       : 
//   Test Features         : None
//   Asynchronous I/F      : None
//   Scan Methodology      : mux-d full scan
//   Instantiations        : None
//   Synthesizable (y/n)   : Yes
//   Other                 :
// -FHDR------------------------------------------------------------------------

module pwm_reg (
                clksrc,                 // clock source select
                prescaler,              // Prescaler value
                ipi_int_pwm_cmpi,       // pwm compare interrupt signal
                ipi_int_pwm_rovi,       // pwm rollover interrupt signal
                ipi_int_pwm_fifoi,      // pwm fifo interrupt signal
                ipi_int_pwm,            // pwm interrupt signal
                pwm_en_rst_b,           // pwm enable for reset purposes
                pwm_en,                 // pwm enable 
                rep_mode,               // sample repeat value
                fifo_watermark,         // Fifo watermark level
                ips_xfr_err,            // IP bus transfer error signal
                ips_xfr_wait,           // IP bus transfer wait signal
                ipg_enable_clk,         // IP global clock enable
                bctr,                   // sample byte swapping bit
                hctr,                   // sample half word swapping bit
                poutc,                  // PWM output mode control
                period_reg_data,        // period register value
                ips_rdata,              // IP read data bus
                write_pwmsam,           // sample register write strobe
                rstgen_rst_b,           // sw/hw reset 
                fifo_av,                // sig denoting FIFO can be written into
                fifo_empty,             // sig denoting FIFO watermark has been
                                        // crossed
                full,                   // sig denoting FIFO is full
                rov_event,              // rollover event sig
                cmp_event,              // compare event sig
                pclk,                   // clock running the counter
                sample,                 // current sample value
                count,                  // current count value
                ipg_clk_s,              // IP Bus clock
                ipg_stop,               // IP global stop mode signal
                ipg_doze,               // IP global doze mode signal
                ipg_wait,               // IP global wait mode signal
                ipg_debug,              // IP global debug mode signal
                resp_sel,               // signal qualifying xfr_err generation
                ips_module_en,          // IP Bus module enable
                ips_addr,               // IP address bus
                ips_rwb,                // IP Bus r/w signal
                ips_byte_31_24,         // IP Bus byte enables
                ips_byte_23_16,         //
                ips_byte_15_8,          //
                ips_byte_7_0,           //
                ips_wdata,              // IP write data bus
                ipg_hard_async_reset_b, // hw reset
                ipt_reset_b,            // scan mode reset signal
                ipt_se_async            // scan mode generated-reset bypass sig
                );

output [1:0]  clksrc;                 // clock source select
output [11:0] prescaler;              // Prescaler value
output        ipi_int_pwm_cmpi;       // pwm compare interrupt signal
output        ipi_int_pwm_rovi;       // pwm rollover interrupt signal
output        ipi_int_pwm_fifoi;      // pwm fifo interrupt signal
output        ipi_int_pwm;            // pwm interrupt signal
output        pwm_en_rst_b;           // pwm enable for reset purposes
output        pwm_en;                 // pwm enable
output [1:0]  rep_mode;               // sample repeat value
output [1:0]  fifo_watermark;         // Fifo watermark level
output        ips_xfr_err;            // IP bus transfer error signal
output        ips_xfr_wait;           // IP bus transfer wait signal
output        ipg_enable_clk;         // IP global clock enable
output        bctr;                   // sample byte swapping bit
output        hctr;                   // sample half word swapping bit
output [1:0]  poutc;                  // PWM output mode control
output [15:0] period_reg_data;        // period register value
output [31:0] ips_rdata;              // IP read data bus
output        write_pwmsam;           // sample register write strobe
output        rstgen_rst_b;           // sw/hw reset

input [2:0]   fifo_av;                // sig denoting FIFO can be written into
input         fifo_empty;             // sig denoting FIFO watermark has been
                                      // crossed
input         full;                   // sig denoting FIFO is full
input         rov_event;              // rollover event sig
input         cmp_event;              // compare event sig
input         pclk;                   // clock running the counter
input  [15:0] sample;                 // current sample value
input  [15:0] count;                  // current count value
input         ipg_clk_s;              // IP Bus clock
input         ipg_stop;               // IP global stop mode signal
input         ipg_doze;               // IP global doze mode signal
input         ipg_wait;               // IP global wait mode signal
input         ipg_debug;              // IP global debug mode signal
input         resp_sel;               // signal qualifying xfr_err generation
input         ips_module_en;          // IP Bus module enable
input  [13:2] ips_addr;               // IP address bus
input         ips_rwb;                // IP Bus r/w signal
input         ips_byte_31_24;         // IP Bus byte enables
input         ips_byte_23_16;         //
input         ips_byte_15_8;          //
input         ips_byte_7_0;           //
input  [31:0] ips_wdata;              // IP write data bus
input         ipg_hard_async_reset_b; // hw reset
input         ipt_reset_b;            // scan mode reset signal
input         ipt_se_async;           // scan mode generated-reset bypass sig

reg [31:0]    ips_rdata;              // IP bus read data
reg [1:0]     clksrc;                 // clock source select
reg [11:0]    prescaler;              // Prescaler value
reg [1:0]     rep_mode;               // sample repeat value
reg [1:0]     fifo_watermark;         // Fifo watermark level
reg           bctr;                   // sample byte swapping bit
reg           hctr;                   // sample half word swapping bit
reg [1:0]     poutc;                  // PWM output mode control

// Internal Registers and Wires
reg           cmp_status_clear;       // compare interrupt status clear sig
reg           cmp_int_status;         // compare interrupt status
reg           rov_status_clear;       // rollover interrupt status clear sig
reg           rov_int_status;         // rollover interrupt status
reg           fifo_status_clear;      // fifo interrupt status clear sig
reg           fifo_int_status;        // fifo interrupt status
reg [15:0]    pwmper;                 // pwm period register
reg [2:0]     interrupt;              // Interrupt register value
reg           swr;                    // software reset
reg           stopen;                 // stop mode enable 
reg           dozen;                  // doze mode enable 
reg           waiten;                 // wait mode enable 
reg           debugen;                // debug mode enable 
reg           pwm_enable_bit;         // PWM enable bit
wire [27:0]   pwmcon;                 // control register value
wire          cmp_status_reset_b;     // compare status clear sig reset
wire          rov_status_reset_b;     // rollover status clear sig reset
wire          fifo_status_reset_b;    // fifo status clear sig reset
wire          cmp_status_rst_b;       // compare status clear sig reset
wire          rov_status_rst_b;       // rollover status clear sig reset
wire          fifo_status_rst_b;      // fifo status clear sig reset
wire          pwm_read_reg;           // register read strobe
wire          pwm_write_reg;          // register write strobe
wire          controlsel;             // control reg select
wire          statussel;              // status reg select
wire          intrsel;                // interrupt reg select
wire          samplesel;              // sample reg select
wire          periodsel;              // period reg select
wire          cntrsel;                // counter reg select
wire          cmpien;                 // compare interrupt enable
wire          rovien;                 // rollover interrupt enable
wire          fifoien;                // fifo interrupt enable
wire [5:0]    status;                 // status reg value
wire          rstgen_reset_b;         // sw/hw reset
wire          pwm_en_reset_b;         // pwm enable for reset purposes
wire          xfr_err_less;           // xfr error according to dbmx project
wire          xfr_err_full;           // xfr error according to other projects
wire          invalid_reg_space;      // shows access to unimplemented reg addr

assign controlsel = (ips_addr == 12'h0) ;
assign statussel = (ips_addr == 12'h1) ;
assign intrsel = (ips_addr == 12'h2) ;
assign samplesel = (ips_addr == 12'h3) ;
assign periodsel = (ips_addr == 12'h4) ;
assign cntrsel = (ips_addr == 12'h5) ;
assign invalid_reg_space = (ips_module_en & (ips_addr > 12'h5));
assign pwm_read_reg = ips_module_en & ips_rwb & ips_byte_31_24 & ips_byte_23_16
                    & ips_byte_15_8 & ips_byte_7_0;
assign pwm_write_reg = ips_module_en & ips_byte_31_24 & ips_byte_23_16 & 
                       ips_byte_15_8 & ips_byte_7_0 & ~ips_rwb;
assign write_pwmsam = pwm_write_reg & samplesel;

assign pwm_en = pwm_enable_bit & (stopen | ~ipg_stop) & (dozen | ~ipg_doze) & 
               (waiten | ~ipg_wait) & (debugen | ~ipg_debug);
assign ipg_enable_clk = pwm_enable_bit ;

assign ipi_int_pwm = ipi_int_pwm_cmpi | ipi_int_pwm_rovi | ipi_int_pwm_fifoi;
assign ipi_int_pwm_cmpi = cmp_int_status & ~cmp_status_clear & cmpien;
assign ipi_int_pwm_rovi = rov_int_status & ~rov_status_clear & rovien;
assign ipi_int_pwm_fifoi = fifo_int_status & ~fifo_status_clear & fifoien;

assign xfr_err_less = (pwm_write_reg & cntrsel) | (full & write_pwmsam) ;
assign xfr_err_full = (pwm_write_reg & cntrsel) | (full & write_pwmsam) | invalid_reg_space ;
assign ips_xfr_err = resp_sel ? xfr_err_less : xfr_err_full ;
assign ips_xfr_wait = pwm_write_reg & controlsel & (ips_wdata[3] == 1'b1) 
                      & ~swr;
assign rstgen_reset_b = ~swr & ipg_hard_async_reset_b;
assign pwm_en_reset_b = pwm_en & rstgen_reset_b;
pwm_dft_reset_mux software_reset_mux (
                                      .dft_reset(rstgen_rst_b),
                                      .func_reset(rstgen_reset_b),
                                      .ipt_se_async(ipt_se_async),
                                      .ipt_reset_b(ipt_reset_b)
                                     );
pwm_dft_reset_mux pwm_en_reset_mux (
                                      .dft_reset(pwm_en_rst_b),
                                      .func_reset(pwm_en_reset_b),
                                      .ipt_se_async(ipt_se_async),
                                      .ipt_reset_b(ipt_reset_b)
                                     );

// IP Bus read data 
always @(pwm_read_reg or ips_addr or pwmcon or status or interrupt or sample or
         pwmper or count)
        case ( {pwm_read_reg, ips_addr} )
                {1'b1, 12'h0} : ips_rdata = {4'b0, pwmcon};
                {1'b1, 12'h1} : ips_rdata = {26'b0, status};
                {1'b1, 12'h2} : ips_rdata = {29'b0, interrupt};
                {1'b1, 12'h3} : ips_rdata = {16'b0, sample};
                {1'b1, 12'h4} : ips_rdata = {16'b0, pwmper};
                {1'b1, 12'h5} : ips_rdata = {16'b0, count};
                default       : ips_rdata = 32'b0;
        endcase

// --------------------------------------------------------- //
// -------------------- Control Register ------------------- //
// --------------------------------------------------------- //
assign pwmcon[27:26] = fifo_watermark;
assign pwmcon[25] = stopen;
assign pwmcon[24] = dozen;
assign pwmcon[23] = waiten;
assign pwmcon[22] = debugen;
assign pwmcon[21] = bctr;           
assign pwmcon[20] = hctr;
assign pwmcon[19:18] = poutc;
assign pwmcon[17:16] = clksrc;      
assign pwmcon[15:4] = prescaler;   
assign pwmcon[3] = swr;             
assign pwmcon[2:1] = rep_mode;    
assign pwmcon[0] = pwm_enable_bit;   

// sw reset bit implementation
always @ (posedge ipg_clk_s or negedge ipg_hard_async_reset_b)
        if (!ipg_hard_async_reset_b)
        begin
                swr <= 1'b0;
                stopen <= 1'b0;
                dozen <= 1'b0;
                waiten <= 1'b0;
                debugen <= 1'b0;
        end
        else
        begin
                if (swr)
                        swr <= 1'b0;
                if (pwm_write_reg && controlsel)
                begin
                        if (!swr)
                                swr <= ips_wdata[3];
                        stopen <= ips_wdata[25];
                        dozen <= ips_wdata[24];
                        waiten <= ips_wdata[23];
                        debugen <= ips_wdata[22];
                end
        end

// Rest of pwm reg implementation
always @ (posedge ipg_clk_s or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
        begin
                fifo_watermark <= 2'b00;
                bctr <= 1'b0;           
                hctr <= 1'b0;
                poutc <= 2'b00;
                clksrc <= 2'b00;      
                prescaler <= 12'h000;   
                rep_mode <= 2'b00;    
                pwm_enable_bit <= 1'b0;   
        end
        else 
        begin
                if (pwm_write_reg && controlsel)
                begin
                        fifo_watermark <= ips_wdata[27:26];
                        bctr <= ips_wdata[21];           
                        hctr <= ips_wdata[20];
                        poutc <= ips_wdata[19:18];
                        clksrc <= ips_wdata[17:16];      
                        prescaler <= ips_wdata[15:4];   
                        rep_mode <= ips_wdata[2:1];    
                        pwm_enable_bit <= ips_wdata[0];   
                end
        end

// --------------------------------------------------------- //
// ------------------- Status Register --------------------- //
// --------------------------------------------------------- //

assign status = {(cmp_int_status & ~cmp_status_clear),
                 (rov_int_status & ~rov_status_clear),
                 (fifo_int_status & ~fifo_status_clear),fifo_av} ;


assign cmp_status_reset_b = cmp_int_status & rstgen_reset_b;
assign rov_status_reset_b = rov_int_status & rstgen_reset_b;
assign fifo_status_reset_b = fifo_int_status & rstgen_reset_b;
pwm_dft_reset_mux cmp_status_reset_mux (
                                      .dft_reset(cmp_status_rst_b),
                                      .func_reset(cmp_status_reset_b),
                                      .ipt_se_async(ipt_se_async),
                                      .ipt_reset_b(ipt_reset_b)
                                     );
pwm_dft_reset_mux rov_status_reset_mux (
                                      .dft_reset(rov_status_rst_b),
                                      .func_reset(rov_status_reset_b),
                                      .ipt_se_async(ipt_se_async),
                                      .ipt_reset_b(ipt_reset_b)
                                     );
pwm_dft_reset_mux fifo_status_reset_mux (
                                      .dft_reset(fifo_status_rst_b),
                                      .func_reset(fifo_status_reset_b),
                                      .ipt_se_async(ipt_se_async),
                                      .ipt_reset_b(ipt_reset_b)
                                     );

// Compare interrupt status clear signal
always @ (posedge ipg_clk_s or negedge cmp_status_rst_b)
        if (!cmp_status_rst_b)
                cmp_status_clear <= 1'b0;
        else
        begin
                if (statussel & pwm_write_reg & (ips_wdata[5] == 1'b1))
                        cmp_status_clear <= 1'b1;
        end

//  Rollover interrupt status clear signal
always @ (posedge ipg_clk_s or negedge rov_status_rst_b)
        if (!rov_status_rst_b)
                rov_status_clear <= 1'b0;
        else
        begin
                if (statussel & pwm_write_reg & (ips_wdata[4] == 1'b1))
                        rov_status_clear <= 1'b1;
        end

// Fifo interrupt status clear signal
always @ (posedge ipg_clk_s or negedge fifo_status_rst_b)
        if (!fifo_status_rst_b)
                fifo_status_clear <= 1'b0;
        else
        begin
                if (statussel & pwm_write_reg & (ips_wdata[3] == 1'b1))
                        fifo_status_clear <= 1'b1;
        end

// Interrupt status bits
always @ (posedge pclk or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
        begin
                cmp_int_status <= 1'b0;
                rov_int_status <= 1'b0;
                fifo_int_status <= 1'b1;
        end
        else
        begin
                if (cmp_event)
                        cmp_int_status <= 1'b1;
                else
                        cmp_int_status <= ~cmp_status_clear & cmp_int_status;
                if (rov_event)
                        rov_int_status <= 1'b1;
                else
                        rov_int_status <= ~rov_status_clear & rov_int_status;
                if (fifo_empty)
                        fifo_int_status <= 1'b1;
                else
                        fifo_int_status <= ~fifo_status_clear & fifo_int_status;
        end

// --------------------------------------------------------- //
// ------------------ Interrupt Register ------------------- //
// --------------------------------------------------------- //

assign cmpien = interrupt[2] ;
assign rovien = interrupt[1] ;
assign fifoien = interrupt[0] ;

// Interrupt register
always @ (posedge ipg_clk_s or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
                interrupt <= 3'h0;
        else
        begin
                if (pwm_write_reg && intrsel)
                        interrupt <= ips_wdata[2:0];
        end

// --------------------------------------------------------- //
// ------------------- Period Register --------------------- //
// --------------------------------------------------------- //
assign   period_reg_data = pwmper[15:0];

// Period register
always @ (posedge ipg_clk_s or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
                pwmper <= 16'hfffe;
        else
        begin
                if (pwm_write_reg && periodsel)
                        pwmper[15:0] <= ips_wdata[15:0];
        end
                
endmodule // pwm_reg
