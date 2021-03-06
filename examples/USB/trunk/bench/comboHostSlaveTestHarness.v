
`include "timescale.v"

/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
/* verilator lint_off STMTDLY */
/* verilator lint_off IMPLICIT */
/* verilator lint_off COMBDLY */
/* verilator lint_off UNOPTFLAT */

module testHarness( dummy_clk, dummy_reset);

input dummy_clk ;
input dummy_reset ;


// -----------------------------------
// Local Wires
// -----------------------------------
reg clk;
reg rst;
reg usbClk;
wire [8:0] adr;
wire [7:0] masterDout;
wire [7:0] masterDin;
wire [7:0] usbSlaveDout;
wire [7:0] usbHostDout;
wire stb;
wire we;
wire ack;
wire host_stb;
wire slave_stb;
wire DPlusPullup;
wire DPlusPullDown;
wire DMinusPullup;
wire DMinusPullDown;
reg USBWireVP;
reg USBWireVM;
wire [1:0] hostUSBWireDataIn;
wire [1:0] hostUSBWireDataOut;
wire [1:0] slaveUSBWireDataIn;
wire [1:0] slaveUSBWireDataOut;
wire hostUSBWireCtrlOut;
wire slaveUSBWireCtrlOut;

initial begin
  $dumpfile("wave.vcd");
  $dumpvars(0, testHarness); 
end

pullup(DPlusPullup);
pulldown(DPlusPullDown);
pullup(DMinusPullup);
pulldown(DMinusPullDown);

assign hostUSBWireDataIn = {USBWireVP, USBWireVM};
assign slaveUSBWireDataIn = {USBWireVP, USBWireVM};
//always @(hostUSBWireCtrlOut or slaveUSBWireCtrlOut or hostUSBWireDataOut or slaveUSBWireDataOut or
//  DPlusPullup or DPlusPullDown or DMinusPullup or DMinusPullDown) begin
always @(*) begin
  if (hostUSBWireCtrlOut == 1'b1 && slaveUSBWireCtrlOut == 1'b0)
    {USBWireVP, USBWireVM} <= hostUSBWireDataOut;
  else if (hostUSBWireCtrlOut == 1'b0 && slaveUSBWireCtrlOut == 1'b1)
    {USBWireVP, USBWireVM} <= slaveUSBWireDataOut;
  else if (hostUSBWireCtrlOut == 1'b1 && slaveUSBWireCtrlOut == 1'b1)
    {USBWireVP, USBWireVM} <= 2'bxx;
  else if (hostUSBWireCtrlOut == 1'b0 && slaveUSBWireCtrlOut == 1'b0) begin
    if (USBDPlusPullup == 1'b1)
      USBWireVP <= DPlusPullup;
    else
      USBWireVP <= DPlusPullDown;
    if (USBDMinusPullup == 1'b1)
      USBWireVM <= DMinusPullup;
    else
      USBWireVM <= DMinusPullDown;
  end
end

assign host_stb = ~adr[8] & stb;
assign slave_stb = adr[8] & stb;
assign masterDin = host_stb == 1'b1 ? usbHostDout : usbSlaveDout;

//Parameters declaration: 
defparam u_usbHost.HOST_FIFO_DEPTH = 64;
parameter HOST_FIFO_DEPTH = 64;
defparam u_usbHost.HOST_FIFO_ADDR_WIDTH = 6;
parameter HOST_FIFO_ADDR_WIDTH = 6;
defparam u_usbHost.EP0_FIFO_DEPTH = 64;
parameter EP0_FIFO_DEPTH = 64;
defparam u_usbHost.EP0_FIFO_ADDR_WIDTH = 6;
parameter EP0_FIFO_ADDR_WIDTH = 6;
defparam u_usbHost.EP1_FIFO_DEPTH = 64;
parameter EP1_FIFO_DEPTH = 64;
defparam u_usbHost.EP1_FIFO_ADDR_WIDTH = 6;
parameter EP1_FIFO_ADDR_WIDTH = 6;
defparam u_usbHost.EP2_FIFO_DEPTH = 64;
parameter EP2_FIFO_DEPTH = 64;
defparam u_usbHost.EP2_FIFO_ADDR_WIDTH = 6;
parameter EP2_FIFO_ADDR_WIDTH = 6;
defparam u_usbHost.EP3_FIFO_DEPTH = 64;
parameter EP3_FIFO_DEPTH = 64;
defparam u_usbHost.EP3_FIFO_ADDR_WIDTH = 6;
parameter EP3_FIFO_ADDR_WIDTH = 6;
usbHostSlave u_usbHost (
  .clk_i(clk),
  .rst_i(rst),
  .address_i(adr[7:0]),
  .data_i(masterDout),
  .data_o(usbHostDout),
  .we_i(we),
  .strobe_i(host_stb),
  .ack_o(ack),
  .usbClk(usbClk),
  .hostSOFSentIntOut(hostSOFSentIntOut),
  .hostConnEventIntOut(hostConnEventIntOut),
  .hostResumeIntOut(hostResumeIntOut),
  .hostTransDoneIntOut(hostTransDoneIntOut),

  .slaveSOFRxedIntOut(),
  .slaveResetEventIntOut(),
  .slaveResumeIntOut(),
  .slaveTransDoneIntOut(),
  .slaveNAKSentIntOut(),
  .slaveVBusDetIntOut(),

  .USBWireDataIn(hostUSBWireDataIn),
  .USBWireDataInTick(USBWireDataInTick),
  .USBWireDataOut(hostUSBWireDataOut),
  .USBWireDataOutTick(USBWireDataOutTick),
  .USBWireCtrlOut(hostUSBWireCtrlOut),
  .USBFullSpeed(USBFullSpeed),
  .USBDPlusPullup(),
  .USBDMinusPullup(),
  .vBusDetect(1'b1)


);



//Parameters declaration: 
defparam u_usbSlave.HOST_FIFO_DEPTH = 64;
// parameter HOST_FIFO_DEPTH = 64;
defparam u_usbSlave.HOST_FIFO_ADDR_WIDTH = 6;
// parameter HOST_FIFO_ADDR_WIDTH = 6;
defparam u_usbSlave.EP0_FIFO_DEPTH = 64;
// parameter EP0_FIFO_DEPTH = 64;
defparam u_usbSlave.EP0_FIFO_ADDR_WIDTH = 6;
// parameter EP0_FIFO_ADDR_WIDTH = 6;
defparam u_usbSlave.EP1_FIFO_DEPTH = 64;
// parameter EP1_FIFO_DEPTH = 64;
defparam u_usbSlave.EP1_FIFO_ADDR_WIDTH = 6;
// parameter EP1_FIFO_ADDR_WIDTH = 6;
defparam u_usbSlave.EP2_FIFO_DEPTH = 64;
// parameter EP2_FIFO_DEPTH = 64;
defparam u_usbSlave.EP2_FIFO_ADDR_WIDTH = 6;
// parameter EP2_FIFO_ADDR_WIDTH = 6;
defparam u_usbSlave.EP3_FIFO_DEPTH = 64;
// parameter EP3_FIFO_DEPTH = 64;
defparam u_usbSlave.EP3_FIFO_ADDR_WIDTH = 6;
// parameter EP3_FIFO_ADDR_WIDTH = 6;
usbHostSlave u_usbSlave (
  .clk_i(clk),
  .rst_i(rst),
  .address_i(adr[7:0]),
  .data_i(masterDout),
  .data_o(usbSlaveDout),
  .we_i(we),
  .strobe_i(slave_stb),
  .ack_o(ack),
  .usbClk(usbClk),

  .hostSOFSentIntOut(),
  .hostConnEventIntOut(),
  .hostResumeIntOut(),
  .hostTransDoneIntOut(),

  .slaveSOFRxedIntOut(slaveSOFRxedIntOut),
  .slaveResetEventIntOut(slaveResetEventIntOut),
  .slaveResumeIntOut(slaveResumeIntOut),
  .slaveTransDoneIntOut(slaveTransDoneIntOut),
  .slaveNAKSentIntOut(slaveNAKSentIntOut),
  .slaveVBusDetIntOut(slaveVBusDetIntOut),

  .USBWireDataIn(slaveUSBWireDataIn),
  .USBWireDataInTick(USBWireDataInTick),
  .USBWireDataOut(slaveUSBWireDataOut),
  .USBWireDataOutTick(USBWireDataOutTick),
  .USBWireCtrlOut(slaveUSBWireCtrlOut),
  .USBFullSpeed(USBFullSpeed),
  .USBDPlusPullup(USBDPlusPullup),
  .USBDMinusPullup(USBDMinusPullup),
  .vBusDetect(1'b1)
);




wb_master_model #(.dwidth(8), .awidth(9)) u_wb_master_model (
  .clk(clk), 
  .rst(rst), 
  .adr(adr), 
  .din(masterDin), 
  .dout(masterDout), 
  .cyc(), 
  .stb(stb), 
  .we(we), 
  .sel(), 
  .ack(ack), 
  .err(1'b0), 
  .rty(1'b0)
);


//--------------- reset ---------------
initial begin
//  @(posedge clk);
//  @(posedge clk);
//  @(posedge clk);
//  @(posedge clk);
//  @(posedge clk);
//  @(posedge clk);
//  @(posedge clk);
//  @(posedge clk);
  #320
  rst = 1'b1;
//  @(posedge clk);
  #40
  rst = 1'b0;
//  @(posedge clk);
end
 
// ******************************  Clock section  ******************************
`define CLK_50MHZ_HALF_PERIOD 10
`define CLK_25MHZ_HALF_PERIOD 20

always begin
  #`CLK_25MHZ_HALF_PERIOD clk <= 1'b0;
  #`CLK_25MHZ_HALF_PERIOD clk <= 1'b1;
end

always begin
  #`CLK_50MHZ_HALF_PERIOD usbClk <= 1'b0;
  #`CLK_50MHZ_HALF_PERIOD usbClk <= 1'b1;
end

endmodule

/* verilator lint_on WIDTH */
/* verilator lint_on CASEINCOMPLETE */
/* verilator lint_on STMTDLY */
/* verilator lint_on IMPLICIT */
/* verilator lint_on COMBDLY */
/* verilator lint_on UNOPTFLAT */

