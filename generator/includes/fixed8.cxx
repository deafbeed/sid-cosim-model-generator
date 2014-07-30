#if VM_TRACE
  Verilated::traceEverOn(true); // Verilator must compute traced signals
#ifdef VERILATED_TRACE
  vcdfp = new VerilatedVcdC;
#endif
#ifdef SP_TRACE
  vcdfp = new SpTraceVcdCFile;
#endif
  hdl_##MOD_NAME##->trace (vcdfp, 99);     // Trace 99 levels of hierarchy

#endif
}

void HDL_##MOD_NAME##::sid_init_signals ()
{

	// Add Reset Pin
	add_pin("##MOD_NAME##-hw-reset", & this->hdl_reset_pin);
	add_attribute("reset", & this->hdl_reset_pin, "pin" );
	triggerpoint_manager.add_watchable_attribute ("reset");
	categorize ("reset", "watchable");

	// Add Clock Pin
	add_pin("##MOD_NAME##-hw-clk", & this->hdl_clock_pin);
	add_attribute("clk", & this->hdl_clock_pin, "pin");
	triggerpoint_manager.add_watchable_attribute ("clk");
	categorize ("clk", "watchable");

	// Add Input & Output Pins (Repeat 4 lines below for each)

