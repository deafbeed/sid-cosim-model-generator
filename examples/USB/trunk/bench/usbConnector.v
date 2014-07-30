`include "timescale.v"

/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
/* verilator lint_off STMTDLY */
/* verilator lint_off IMPLICIT */
/* verilator lint_off COMBDLY */
/* verilator lint_off UNOPTFLAT */

module usbConnector(hostDataIn, hostDataOut, hostControl, slaveDataIn, slaveDataOut, slaveControl, USBDPlusPullup, USBDMinusPullup);

input [1:0] hostDataIn;
output [1:0] hostDataOut;
input hostControl;
input [1:0] slaveDataIn;
output [1:0] slaveDataOut;
input slaveControl;
input USBDPlusPullup;
input USBDMinusPullup;

wire DPlusPullup;
wire DPlusPullDown;
wire DMinusPullup;
wire DMinusPullDown;
reg USBWireVP;
reg USBWireVM;

pullup(DPlusPullup);
pulldown(DPlusPullDown);
pullup(DMinusPullup);
pulldown(DMinusPullDown);

assign hostDataOut = {USBWireVP, USBWireVM};
assign slaveDataOut = {USBWireVP, USBWireVM};

always @(*) begin
  if (hostControl == 1'b1 && slaveControl == 1'b0)
    {USBWireVP, USBWireVM} <= hostDataIn;
  else if (hostControl == 1'b0 && slaveControl == 1'b1)
    {USBWireVP, USBWireVM} <= slaveDataIn;
  else if (hostControl == 1'b1 && slaveControl == 1'b1)
    {USBWireVP, USBWireVM} <= 2'bxx;
  else if (hostControl == 1'b0 && slaveControl == 1'b0) begin
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

endmodule

/* verilator lint_on WIDTH */
/* verilator lint_on CASEINCOMPLETE */
/* verilator lint_on STMTDLY */
/* verilator lint_on IMPLICIT */
/* verilator lint_on COMBDLY */
/* verilator lint_on UNOPTFLAT */
