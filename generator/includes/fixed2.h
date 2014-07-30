
	// Internal Functions and Variables
	// Global time
	double main_time;

	// Set initial values for signals
        void hdl_init_signals (void);

        // Initialize SID signals
        void sid_init_signals (void);

	// Advance Global Time
	void advance_time (void);

	// Advance for 'n' cycles of the bus clock
	void advance_cycles (int);

	// Advance for 'n' half cycles of the bus clock
        void advance_half_cycles (int);

	// Advance till pos/negedge of the bus clock
	void advance_till_edge (bool posedge = true);

	// Check and Drive all outputs
	void drive_outputs (void);

 // Virtual pin interfaces between self_watcher and fixed_pin_map_component
 sid::component::status
 pin_factory(const string& name)
 {
   return this->triggerpoint_manager.create_virtual_pin (name);
 }

 void
 pin_junkyard(const string& name)
 {
   this->triggerpoint_manager.destroy_virtual_pin (name);
 }

#if VM_TRACE 
	// VCD File Logging
#ifdef VERILATED_TRACE
	VerilatedVcdC* vcdfp;
#endif
#ifdef SP_TRACE
	SpTraceVcdCFile* vcdfp;
#endif
#endif

};

#endif
