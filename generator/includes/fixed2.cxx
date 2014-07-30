		// Evaluate the HDL Module
		hdl_##MOD_NAME##->eval();

		// Check and Drive outputs
		drive_outputs();

		// check for triggerpoints
		triggerpoint_manager.check_and_dispatch();

#if VM_TRACE
		if ((main_time < ##VCD_TIME##) || (##VCD_TIME## < 0))
			vcdfp->dump (main_time);	// Create waveform trace for this timestamp
#endif

		main_time++;
}

