
// ---------------------------------- testcase0.v ----------------------------
`include "timescale.v"
`include "usbHostSlave_h.v"
`include "usbHostControl_h.v"
`include "usbHostSlaveTB_defines.v"




/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
/* verilator lint_off STMTDLY */
/* verilator lint_off IMPLICIT */
/* verilator lint_off COMBDLY */
/* verilator lint_off UNOPTFLAT */

module testCase0();

reg ack;
reg [7:0] data;
reg [15:0] dataWord;
reg [7:0] dataRead;
reg [7:0] dataWrite;
reg [7:0] USBAddress;
reg [7:0] USBEndPoint;
reg [7:0] transType;
integer dataSize;
integer i;
integer j;

initial
begin
  $write("\n\n");
  #1000;

  testHarness.u_wb_master_model.wb_read(1, `SIM_SLAVE_BASE_ADDR + `HOST_SLAVE_CONTROL_BASE+`HOST_SLAVE_VERSION_REG , dataRead);
  $display("Slave Version number = 0x%0x\n", dataRead);

  $write("Testing slave register read/write  ");
  testHarness.u_wb_master_model.wb_write(1, `SIM_SLAVE_BASE_ADDR + `SCREG_BASE+`SC_CONTROL_REG , 8'h70);
  testHarness.u_wb_master_model.wb_cmp(1, `SIM_SLAVE_BASE_ADDR + `SCREG_BASE+`SC_CONTROL_REG , 8'h70);
  $write("--- PASSED\n");

  $stop;

end

endmodule



/* verilator lint_on WIDTH */
/* verilator lint_on CASEINCOMPLETE */
/* verilator lint_on STMTDLY */
/* verilator lint_on IMPLICIT */
/* verilator lint_on COMBDLY */
/* verilator lint_on UNOPTFLAT */

