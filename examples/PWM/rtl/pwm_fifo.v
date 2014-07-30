// +FHDR------------------------------------------------------------------------
// Copyright (c) 2001, Motorola.
// Motorola Confidential Proprietary
// -----------------------------------------------------------------------------
// FILE NAME      : pwm_fifo.v
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
// PURPOSE     : This submodule implements the FIFO and all its related
//               functionality. The sample register implementation is done
//               in this section.
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

module pwm_fifo (
                 sample,         // Current sample value
                 fifo_av,        // Signal showing FIFO can be written into
                 fifo_empty,     // Signal showing FIFO watermark is crossed
                 full,           // Signal showing FIFO is full
                 ips_wdata,      // IP data bus
                 rstgen_rst_b,   // sw/hw reset
                 read,           // sample update signal
                 bctr,           // sample byte swap signal
                 hctr,           // sample half word swap signal
                 fifo_watermark, // Fifo watermark level
                 ipg_clk,        // IP Functional clock
                 ipg_clk_s,      // IP Bus clock
                 pclk,           // prescaler output clock
                 write_pwmsam    // Write strobe on sample register
                );

output [15:0]   sample;         // Current sample value
output [2:0]    fifo_av;        // Signal showing FIFO can be written into
output          fifo_empty;     // Signal showing FIFO watermark is crossed
output          full;           // Signal showing FIFO is full
input [31:0]    ips_wdata;      // IP data bus
input           rstgen_rst_b;   // sw/hw reset
input           read;           // sample update signal
input           bctr;           // sample byte swap signal
input           hctr;           // sample half word swap signal
input [1:0]     fifo_watermark; // Fifo watermark level
input           ipg_clk_s;      // IP Bus clock
input           ipg_clk;        // IP Functional clock
input           pclk;           // prescaler output clock
input           write_pwmsam;   // Write strobe on sample register

reg [15:0]      sample;               // present sample value

// Internal registers and wires
reg [15:0]      datain;               // data from write to sample register
reg [15:0]      data0;                // 1st Sample FIFO element
reg [15:0]      data1;                // 2nd Sample FIFO element
reg [15:0]      data2;                // 3rd Sample FIFO element
reg [15:0]      data3;                // 4th Sample FIFO element
reg [1:0]       read_ptr;             // read pointer to FIFO location
reg [1:0]       write_ptr;            // write pointer to FIFO location
reg             write_flag;           // registered sample read 
reg             read_flag;            // registered sample read 
reg             fifo_wm_cross;        // fifo watermark is crossed
reg             fifo_wm_cross1;       // fifo watermark is crossed
reg             fifo_full_reg;        // fifo is full 
wire            fifo_flag;            // registered sample read 
wire [1:0]      sample_ptr;           // sample update signal
wire            sample_update;        // sample update signal
wire            empty;                // sample read pulse
wire            fifo_0data;           // 0 data in FIFO
wire            fifo_1data;           // 1 data in FIFO
wire            fifo_2data;           // 2 data in FIFO
wire            fifo_3data;           // 3 data in FIFO
wire            fifo_1_or_more_empty; // fifo has 1 or more empty slots
wire            fifo_2_or_more_empty; // fifo has 2 or more empty slots
wire            fifo_3_or_more_empty; // fifo has 3 or more empty slots
wire            fifo_4_empty;         // fifo is empty 
wire            fifo_full;            // fifo is full 

assign fifo_flag = write_flag ^ read_flag ;
assign empty = (read_ptr == write_ptr) & (fifo_flag == 1'b0);
assign fifo_full = (read_ptr == write_ptr) & (fifo_flag == 1'b1);
// FIFO full registered on ipg_clk
always @ (posedge ipg_clk or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
                fifo_full_reg <= 1'b0;
        else
                fifo_full_reg <= fifo_full ;

assign full = fifo_full_reg | fifo_full ;

assign sample_update = read & ~empty;
assign sample_ptr = empty ? (read_ptr - 2'b01) : read_ptr ;

assign fifo_av = fifo_flag ? (3'b100 - ({1'b0,read_ptr} - {1'b0,write_ptr})) :
                 ({1'b0,write_ptr} - {1'b0,read_ptr}) ;

assign fifo_0data = empty ;
assign fifo_1data = fifo_flag ? ((read_ptr - write_ptr) == 2'b11) : 
                    ((write_ptr - read_ptr) == 2'b01) ;
assign fifo_2data = fifo_flag ? ((read_ptr - write_ptr) == 2'b10) : 
                    ((write_ptr - read_ptr) == 2'b10) ;
assign fifo_3data = fifo_flag ? ((read_ptr - write_ptr) == 2'b01) : 
                    ((write_ptr - read_ptr) == 2'b11) ;

assign fifo_1_or_more_empty = fifo_0data | fifo_1data | fifo_2data | fifo_3data;
assign fifo_2_or_more_empty = fifo_0data | fifo_1data | fifo_2data ;
assign fifo_3_or_more_empty = fifo_0data | fifo_1data ;
assign fifo_4_empty = fifo_0data ;

// FIFO watermark level violation implementation
always @ (fifo_watermark or fifo_1_or_more_empty or fifo_2_or_more_empty or 
          fifo_3_or_more_empty or fifo_4_empty)
        case(fifo_watermark)
                2'b00 : fifo_wm_cross = fifo_1_or_more_empty ;
                2'b01 : fifo_wm_cross = fifo_2_or_more_empty ;
                2'b10 : fifo_wm_cross = fifo_3_or_more_empty ;
                2'b11 : fifo_wm_cross = fifo_4_empty ;
        endcase
// Generate the Fifo watermark crossing pulse
always @ ( posedge pclk or negedge rstgen_rst_b )
        if (!rstgen_rst_b)
                fifo_wm_cross1 <= 1'b0 ;
        else
                fifo_wm_cross1 <= fifo_wm_cross ;

assign fifo_empty = fifo_wm_cross & ~fifo_wm_cross1;

// FIFO write flag implementation
always @ ( posedge ipg_clk_s or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
                write_flag <= 1'b0;
        else
        begin
                if (~full & write_pwmsam & (write_ptr == 2'b11))
                        write_flag <= ~write_flag;
        end
        
// FIFO read flag implementation
always @ ( posedge pclk or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
                read_flag <= 1'b0;
        else
        begin
                if (sample_update & (read_ptr == 2'b11))
                        read_flag <= ~read_flag;
        end
        
// FIFO data write and write pointer implementation
always @ (posedge ipg_clk_s or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
        begin
                data0 <= 16'h0000;
                data1 <= 16'h0000;
                data2 <= 16'h0000;
                data3 <= 16'h0000;
                write_ptr <= 2'b00;
        end
        else 
        begin
                if (~full & write_pwmsam)
                begin
                        case (write_ptr)
                                2'b00 : data0 <= datain;
                                2'b01 : data1 <= datain;
                                2'b10 : data2 <= datain;
                                2'b11 : data3 <= datain;
                        endcase
                        write_ptr <= write_ptr + 2'b01;
                end
        end

// Read pointer implementation
always @ (posedge pclk or negedge rstgen_rst_b)
        if (!rstgen_rst_b)
        begin
                read_ptr <= 2'b00;
        end
        else
        begin
                if (sample_update)
                        read_ptr <= read_ptr + 2'b01;
        end

// Sample value read 
always @ (sample_ptr or data0 or data1 or data2 or data3)
        case (sample_ptr)
                2'b00 : sample = data0;
                2'b01 : sample = data1;
                2'b10 : sample = data2;
                2'b11 : sample = data3;
        endcase

// Half word and Byte swapping implementation
always @ (ips_wdata or bctr or hctr)
        case ({bctr,hctr}) // synopsys parallel_case
                2'b00 : datain = ips_wdata[15:0]; 
                2'b01 : datain = ips_wdata[31:16]; 
                2'b10 : datain = {ips_wdata[7:0],ips_wdata[15:8]}; 
                2'b11 : datain = {ips_wdata[23:16],ips_wdata[31:24]}; 
        endcase

endmodule        // PWMfifo
