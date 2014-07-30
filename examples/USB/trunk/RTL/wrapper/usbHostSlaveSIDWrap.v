// Wrapper for USBHostSlave, to be integrated with SID. Written by DSipher.

`include "timescale.v"

/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
/* verilator lint_off STMTDLY */
/* verilator lint_off IMPLICIT */
/* verilator lint_off COMBDLY */
/* verilator lint_off UNOPTFLAT */

module usbHostSlaveSIDWrap(
  clk_i,
  rst_i,
  address_i, 
  data_i, 
  data_o, 
  we_i, 
  strobe_i,
  ack_o,
  usbClk,
  hostSOFSentIntOut, 
  hostConnEventIntOut, 
  hostResumeIntOut, 
  hostTransDoneIntOut,
  slaveVBusDetIntOut,
  slaveNAKSentIntOut,
  slaveSOFRxedIntOut, 
  slaveResetEventIntOut, 
  slaveResumeIntOut, 
  slaveTransDoneIntOut,
  USBWireDataIn,
  USBWireDataInTick,
  USBWireDataOut,
  USBWireDataOutTick,
  USBWireCtrlOut,
  USBFullSpeed,
  USBDPlusPullup,
  USBDMinusPullup,
  vBusDetect
   );

input clk_i;               //Wishbone bus clock. Min = usbClk/2 = 24MHz. Max 5*usbClk=240MHz
input rst_i;               //Wishbone bus sync reset. Synchronous to 'clk_i'. Resets all logic
input [7:0] address_i;     //Wishbone bus address in
input [7:0] data_i;        //Wishbone bus data in
output [7:0] data_o;       //Wishbone bus data out
input we_i;                //Wishbone bus write enable in
input strobe_i;            //Wishbone bus strobe in
output ack_o;              //Wishbone bus acknowledge out
input usbClk;              //usb clock. 48Mhz +/-0.25%
output hostSOFSentIntOut; 
output hostConnEventIntOut; 
output hostResumeIntOut; 
output hostTransDoneIntOut;
output slaveSOFRxedIntOut; 
output slaveResetEventIntOut; 
output slaveResumeIntOut; 
output slaveTransDoneIntOut;
output slaveNAKSentIntOut;
output slaveVBusDetIntOut;
input [1:0] USBWireDataIn;
output [1:0] USBWireDataOut;
output USBWireDataOutTick;
output USBWireDataInTick;
output USBWireCtrlOut;
output USBFullSpeed;
output USBDPlusPullup;
output USBDMinusPullup;
input vBusDetect;

wire clk_i;
wire rst_i;
wire [7:0] address_i; 
wire [7:0] data_i; 
wire [7:0] data_o; 
wire we_i; 
wire strobe_i;
wire ack_o;
wire usbClk;
wire hostSOFSentIntOut; 
wire hostConnEventIntOut; 
wire hostResumeIntOut; 
wire hostTransDoneIntOut;
wire slaveSOFRxedIntOut; 
wire slaveResetEventIntOut; 
wire slaveResumeIntOut; 
wire slaveTransDoneIntOut;
wire slaveNAKSentIntOut;
wire slaveVBusDetIntOut;
wire [1:0] USBWireDataIn;
wire [1:0] USBWireDataOut;
wire USBWireDataOutTick;
wire USBWireDataInTick;
wire USBWireCtrlOut;
wire USBFullSpeed;
wire USBDPlusPullup;
wire USBDMinusPullup;
wire vBusDetect;

wire [1:0] USBWireDataOutInt;
// wire DPlusPullup;
// wire DPlusPullDown;
// wire DMinusPullup;
// wire DMinusPullDown;
reg USBWireVP;
reg USBWireVM;

// pullup(DPlusPullup);
// pulldown(DPlusPullDown);
// pullup(DMinusPullup);
// pulldown(DMinusPullDown);

assign USBWireDataOut = {USBWireVP, USBWireVM};

always @(*) begin
  if (USBWireCtrlOut == 1'b1)
    {USBWireVP, USBWireVM} <= USBWireDataOutInt;
//  else begin
//    if (USBDPlusPullup == 1'b1)
//      USBWireVP <= DPlusPullup;
//    else
//      USBWireVP <= DPlusPullDown;
//    if (USBDMinusPullup == 1'b1)
//      USBWireVM <= DMinusPullup;
//    else
//      USBWireVM <= DMinusPullDown;
//  end
end

defparam u_usbHostSlave.HOST_FIFO_DEPTH = 64;
parameter HOST_FIFO_DEPTH = 64;
defparam u_usbHostSlave.HOST_FIFO_ADDR_WIDTH = 6;
parameter HOST_FIFO_ADDR_WIDTH = 6;
defparam u_usbHostSlave.EP0_FIFO_DEPTH = 64;
parameter EP0_FIFO_DEPTH = 64;
defparam u_usbHostSlave.EP0_FIFO_ADDR_WIDTH = 6;
parameter EP0_FIFO_ADDR_WIDTH = 6;
defparam u_usbHostSlave.EP1_FIFO_DEPTH = 64;
parameter EP1_FIFO_DEPTH = 64;
defparam u_usbHostSlave.EP1_FIFO_ADDR_WIDTH = 6;
parameter EP1_FIFO_ADDR_WIDTH = 6;
defparam u_usbHostSlave.EP2_FIFO_DEPTH = 64;
parameter EP2_FIFO_DEPTH = 64;
defparam u_usbHostSlave.EP2_FIFO_ADDR_WIDTH = 6;
parameter EP2_FIFO_ADDR_WIDTH = 6;
defparam u_usbHostSlave.EP3_FIFO_DEPTH = 64;
parameter EP3_FIFO_DEPTH = 64;
defparam u_usbHostSlave.EP3_FIFO_ADDR_WIDTH = 6;
parameter EP3_FIFO_ADDR_WIDTH = 6;

usbHostSlave u_usbHostSlave(
  .clk_i(clk_i),
  .rst_i(rst_i),
  .address_i(address_i), 
  .data_i(data_i), 
  .data_o(data_o), 
  .we_i(we_i), 
  .strobe_i(strobe_i),
  .ack_o(ack_o),
  .usbClk(usbClk),
  .hostSOFSentIntOut(hostSOFSentIntOut), 
  .hostConnEventIntOut(hostConnEventIntOut), 
  .hostResumeIntOut(hostResumeIntOut), 
  .hostTransDoneIntOut(hostTransDoneIntOut),
  .slaveVBusDetIntOut(slaveVBusDetIntOut),
  .slaveNAKSentIntOut(slaveNAKSentIntOut),
  .slaveSOFRxedIntOut(slaveSOFRxedIntOut), 
  .slaveResetEventIntOut(slaveResetEventIntOut), 
  .slaveResumeIntOut(slaveResumeIntOut), 
  .slaveTransDoneIntOut(slaveTransDoneIntOut),
  .USBWireDataIn(USBWireDataIn),
  .USBWireDataInTick(USBWireDataInTick),
  .USBWireDataOut(USBWireDataOutInt),
  .USBWireDataOutTick(USBWireDataOutTick),
  .USBWireCtrlOut(USBWireCtrlOut),
  .USBFullSpeed(USBFullSpeed),
  .USBDPlusPullup(USBDPlusPullup),
  .USBDMinusPullup(USBDMinusPullup),
  .vBusDetect(vBusDetect)
   );

endmodule

/* verilator lint_on WIDTH */
/* verilator lint_on CASEINCOMPLETE */
/* verilator lint_on STMTDLY */
/* verilator lint_on IMPLICIT */
/* verilator lint_on COMBDLY */
/* verilator lint_on UNOPTFLAT */

