// Generated cpp file for SID HDL Module

////////////////////////////////// Head Starts

#include "XusbHostSlave.h"
#include <cmath>

vector<string>
HDL_usbHostSlave::bus_names() throw()
{
  vector<string> buses;
  buses.push_back("usbHostSlave-registers");
  return buses;
}

sid::bus*
HDL_usbHostSlave::find_bus(const string& name) throw()
{
  if (name == "usbHostSlave-registers")
    return &hdl_reg_bus;
  return 0;
}

sid::bus* 
HDL_usbHostSlave::connected_bus(const string& name) throw()
{
  // No connected buses; return a null pointer.
  return 0;
}

// Drive HDL Clocks
void
HDL_usbHostSlave::hdl_tick (sid::host_int_4 val)
{
	advance_time ();	
}


// Constructor
HDL_usbHostSlave::HDL_usbHostSlave() 
	:main_time (0),
	 triggerpoint_manager (this),
	 hdl_clock_pin (this, &HDL_usbHostSlave::hdl_tick),
	 hdl_reset_pin (this, &HDL_usbHostSlave::hdl_reset),
	 hdl_address_i (this, &HDL_usbHostSlave::HDL_address_i_handler),
	 hdl_data_i (this, &HDL_usbHostSlave::HDL_data_i_handler),
	 hdl_we_i (this, &HDL_usbHostSlave::HDL_we_i_handler),
	 hdl_strobe_i (this, &HDL_usbHostSlave::HDL_strobe_i_handler),
	 hdl_USBWireDataIn (this, &HDL_usbHostSlave::HDL_USBWireDataIn_handler),
	 hdl_vBusDetect (this, &HDL_usbHostSlave::HDL_vBusDetect_handler),
	 hdl_reg_bus (this)
{
	// Instantiate the HDL Model
	hdl_usbHostSlave = new VusbHostSlave; 

	hdl_init_signals();

	sid_init_signals();

	identifier = "__ipi_empty";
	add_attribute("identifier", &identifier);

	first_call = false;

}

// Destructor
HDL_usbHostSlave::~HDL_usbHostSlave()
{
#if VM_TRACE
	vcdfp->close();	
#endif

}

void HDL_usbHostSlave::Open_VCD(void)
{
  if (identifier == "__ipi_empty")
  {
        printf("Error: Identifier not specified for usbHostSlave.\n");
        exit(1);
  }

  char vcd_file_name[256];
  sprintf(vcd_file_name, "hdl_usbHostSlave.%s.vcd", identifier.c_str());
  printf("Identifier: %s (%s)\n", identifier.c_str(), vcd_file_name);
  vcdfp->open (vcd_file_name);  // Open the dump file

}

void HDL_usbHostSlave::advance_time (void) 
{
#if VM_TRACE
	if (main_time == 0)
		this->Open_VCD();
#endif

		if (fmod( main_time, 10 ) == 0)
		{
			hdl_usbHostSlave->usbClk = !hdl_usbHostSlave->usbClk;
		}
		if (fmod(main_time, 20) == 0) 
		{
			hdl_usbHostSlave->clk_i = !hdl_usbHostSlave->clk_i;
		}
		// Evaluate the HDL Module
		hdl_usbHostSlave->eval();

		// Check and Drive outputs
		drive_outputs();

		// check for triggerpoints
		triggerpoint_manager.check_and_dispatch();

#if VM_TRACE
		if ((main_time < 1000000) || (1000000 < 0))
			vcdfp->dump (main_time);	// Create waveform trace for this timestamp
#endif

		main_time++;
}

void HDL_usbHostSlave::drive_outputs (void) 
{
	if (!first_call)
	{
		last_change_data_o = hdl_usbHostSlave->data_o;
		hdl_data_o.drive(hdl_usbHostSlave->data_o);
		last_change_ack_o = hdl_usbHostSlave->ack_o;
		hdl_ack_o.drive(hdl_usbHostSlave->ack_o);
		last_change_hostSOFSentIntOut = hdl_usbHostSlave->hostSOFSentIntOut;
		hdl_hostSOFSentIntOut.drive(hdl_usbHostSlave->hostSOFSentIntOut);
		last_change_hostConnEventIntOut = hdl_usbHostSlave->hostConnEventIntOut;
		hdl_hostConnEventIntOut.drive(hdl_usbHostSlave->hostConnEventIntOut);
		last_change_hostResumeIntOut = hdl_usbHostSlave->hostResumeIntOut;
		hdl_hostResumeIntOut.drive(hdl_usbHostSlave->hostResumeIntOut);
		last_change_hostTransDoneIntOut = hdl_usbHostSlave->hostTransDoneIntOut;
		hdl_hostTransDoneIntOut.drive(hdl_usbHostSlave->hostTransDoneIntOut);
		last_change_slaveSOFRxedIntOut = hdl_usbHostSlave->slaveSOFRxedIntOut;
		hdl_slaveSOFRxedIntOut.drive(hdl_usbHostSlave->slaveSOFRxedIntOut);
		last_change_slaveResetEventIntOut = hdl_usbHostSlave->slaveResetEventIntOut;
		hdl_slaveResetEventIntOut.drive(hdl_usbHostSlave->slaveResetEventIntOut);
		last_change_slaveResumeIntOut = hdl_usbHostSlave->slaveResumeIntOut;
		hdl_slaveResumeIntOut.drive(hdl_usbHostSlave->slaveResumeIntOut);
		last_change_slaveTransDoneIntOut = hdl_usbHostSlave->slaveTransDoneIntOut;
		hdl_slaveTransDoneIntOut.drive(hdl_usbHostSlave->slaveTransDoneIntOut);
		last_change_slaveNAKSentIntOut = hdl_usbHostSlave->slaveNAKSentIntOut;
		hdl_slaveNAKSentIntOut.drive(hdl_usbHostSlave->slaveNAKSentIntOut);
		last_change_slaveVBusDetIntOut = hdl_usbHostSlave->slaveVBusDetIntOut;
		hdl_slaveVBusDetIntOut.drive(hdl_usbHostSlave->slaveVBusDetIntOut);
		last_change_USBWireDataOut = hdl_usbHostSlave->USBWireDataOut;
		hdl_USBWireDataOut.drive(hdl_usbHostSlave->USBWireDataOut);
		last_change_USBWireDataOutTick = hdl_usbHostSlave->USBWireDataOutTick;
		hdl_USBWireDataOutTick.drive(hdl_usbHostSlave->USBWireDataOutTick);
		last_change_USBWireDataInTick = hdl_usbHostSlave->USBWireDataInTick;
		hdl_USBWireDataInTick.drive(hdl_usbHostSlave->USBWireDataInTick);
		last_change_USBWireCtrlOut = hdl_usbHostSlave->USBWireCtrlOut;
		hdl_USBWireCtrlOut.drive(hdl_usbHostSlave->USBWireCtrlOut);
		last_change_USBFullSpeed = hdl_usbHostSlave->USBFullSpeed;
		hdl_USBFullSpeed.drive(hdl_usbHostSlave->USBFullSpeed);
		last_change_USBDPlusPullup = hdl_usbHostSlave->USBDPlusPullup;
		hdl_USBDPlusPullup.drive(hdl_usbHostSlave->USBDPlusPullup);
		last_change_USBDMinusPullup = hdl_usbHostSlave->USBDMinusPullup;
		hdl_USBDMinusPullup.drive(hdl_usbHostSlave->USBDMinusPullup);
		first_call = true;
		} 
		else 
		{
		if ( last_change_data_o != hdl_usbHostSlave->data_o) 
		{
			hdl_data_o.drive(hdl_usbHostSlave->data_o);
			last_change_data_o = hdl_usbHostSlave->data_o;
		}
		if ( last_change_ack_o != hdl_usbHostSlave->ack_o) 
		{
			hdl_ack_o.drive(hdl_usbHostSlave->ack_o);
			last_change_ack_o = hdl_usbHostSlave->ack_o;
		}
		if ( last_change_hostSOFSentIntOut != hdl_usbHostSlave->hostSOFSentIntOut) 
		{
			hdl_hostSOFSentIntOut.drive(hdl_usbHostSlave->hostSOFSentIntOut);
			last_change_hostSOFSentIntOut = hdl_usbHostSlave->hostSOFSentIntOut;
		}
		if ( last_change_hostConnEventIntOut != hdl_usbHostSlave->hostConnEventIntOut) 
		{
			hdl_hostConnEventIntOut.drive(hdl_usbHostSlave->hostConnEventIntOut);
			last_change_hostConnEventIntOut = hdl_usbHostSlave->hostConnEventIntOut;
		}
		if ( last_change_hostResumeIntOut != hdl_usbHostSlave->hostResumeIntOut) 
		{
			hdl_hostResumeIntOut.drive(hdl_usbHostSlave->hostResumeIntOut);
			last_change_hostResumeIntOut = hdl_usbHostSlave->hostResumeIntOut;
		}
		if ( last_change_hostTransDoneIntOut != hdl_usbHostSlave->hostTransDoneIntOut) 
		{
			hdl_hostTransDoneIntOut.drive(hdl_usbHostSlave->hostTransDoneIntOut);
			last_change_hostTransDoneIntOut = hdl_usbHostSlave->hostTransDoneIntOut;
		}
		if ( last_change_slaveSOFRxedIntOut != hdl_usbHostSlave->slaveSOFRxedIntOut) 
		{
			hdl_slaveSOFRxedIntOut.drive(hdl_usbHostSlave->slaveSOFRxedIntOut);
			last_change_slaveSOFRxedIntOut = hdl_usbHostSlave->slaveSOFRxedIntOut;
		}
		if ( last_change_slaveResetEventIntOut != hdl_usbHostSlave->slaveResetEventIntOut) 
		{
			hdl_slaveResetEventIntOut.drive(hdl_usbHostSlave->slaveResetEventIntOut);
			last_change_slaveResetEventIntOut = hdl_usbHostSlave->slaveResetEventIntOut;
		}
		if ( last_change_slaveResumeIntOut != hdl_usbHostSlave->slaveResumeIntOut) 
		{
			hdl_slaveResumeIntOut.drive(hdl_usbHostSlave->slaveResumeIntOut);
			last_change_slaveResumeIntOut = hdl_usbHostSlave->slaveResumeIntOut;
		}
		if ( last_change_slaveTransDoneIntOut != hdl_usbHostSlave->slaveTransDoneIntOut) 
		{
			hdl_slaveTransDoneIntOut.drive(hdl_usbHostSlave->slaveTransDoneIntOut);
			last_change_slaveTransDoneIntOut = hdl_usbHostSlave->slaveTransDoneIntOut;
		}
		if ( last_change_slaveNAKSentIntOut != hdl_usbHostSlave->slaveNAKSentIntOut) 
		{
			hdl_slaveNAKSentIntOut.drive(hdl_usbHostSlave->slaveNAKSentIntOut);
			last_change_slaveNAKSentIntOut = hdl_usbHostSlave->slaveNAKSentIntOut;
		}
		if ( last_change_slaveVBusDetIntOut != hdl_usbHostSlave->slaveVBusDetIntOut) 
		{
			hdl_slaveVBusDetIntOut.drive(hdl_usbHostSlave->slaveVBusDetIntOut);
			last_change_slaveVBusDetIntOut = hdl_usbHostSlave->slaveVBusDetIntOut;
		}
		if ( last_change_USBWireDataOut != hdl_usbHostSlave->USBWireDataOut) 
		{
			hdl_USBWireDataOut.drive(hdl_usbHostSlave->USBWireDataOut);
			last_change_USBWireDataOut = hdl_usbHostSlave->USBWireDataOut;
		}
		if ( last_change_USBWireDataOutTick != hdl_usbHostSlave->USBWireDataOutTick) 
		{
			hdl_USBWireDataOutTick.drive(hdl_usbHostSlave->USBWireDataOutTick);
			last_change_USBWireDataOutTick = hdl_usbHostSlave->USBWireDataOutTick;
		}
		if ( last_change_USBWireDataInTick != hdl_usbHostSlave->USBWireDataInTick) 
		{
			hdl_USBWireDataInTick.drive(hdl_usbHostSlave->USBWireDataInTick);
			last_change_USBWireDataInTick = hdl_usbHostSlave->USBWireDataInTick;
		}
		if ( last_change_USBWireCtrlOut != hdl_usbHostSlave->USBWireCtrlOut) 
		{
			hdl_USBWireCtrlOut.drive(hdl_usbHostSlave->USBWireCtrlOut);
			last_change_USBWireCtrlOut = hdl_usbHostSlave->USBWireCtrlOut;
		}
		if ( last_change_USBFullSpeed != hdl_usbHostSlave->USBFullSpeed) 
		{
			hdl_USBFullSpeed.drive(hdl_usbHostSlave->USBFullSpeed);
			last_change_USBFullSpeed = hdl_usbHostSlave->USBFullSpeed;
		}
		if ( last_change_USBDPlusPullup != hdl_usbHostSlave->USBDPlusPullup) 
		{
			hdl_USBDPlusPullup.drive(hdl_usbHostSlave->USBDPlusPullup);
			last_change_USBDPlusPullup = hdl_usbHostSlave->USBDPlusPullup;
		}
		if ( last_change_USBDMinusPullup != hdl_usbHostSlave->USBDMinusPullup) 
		{
			hdl_USBDMinusPullup.drive(hdl_usbHostSlave->USBDMinusPullup);
			last_change_USBDMinusPullup = hdl_usbHostSlave->USBDMinusPullup;
		}
	}
}

void HDL_usbHostSlave::HDL_address_i_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 8))) 
	{
		hdl_usbHostSlave->address_i =  val;
	} 
	else 
	{
		cerr << "HDL_usbHostSlave Error: Tried to drive " << val << " for input signal of width " << 8 << endl;
	}
}

void HDL_usbHostSlave::HDL_data_i_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 8))) 
	{
		hdl_usbHostSlave->data_i =  val;
	} 
	else 
	{
		cerr << "HDL_usbHostSlave Error: Tried to drive " << val << " for input signal of width " << 8 << endl;
	}
}

void HDL_usbHostSlave::HDL_we_i_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 1))) 
	{
		hdl_usbHostSlave->we_i =  val;
	} 
	else 
	{
		cerr << "HDL_usbHostSlave Error: Tried to drive " << val << " for input signal of width " << 1 << endl;
	}
}

void HDL_usbHostSlave::HDL_strobe_i_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 1))) 
	{
		hdl_usbHostSlave->strobe_i =  val;
	} 
	else 
	{
		cerr << "HDL_usbHostSlave Error: Tried to drive " << val << " for input signal of width " << 1 << endl;
	}
}

void HDL_usbHostSlave::HDL_USBWireDataIn_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 2))) 
	{
		hdl_usbHostSlave->USBWireDataIn =  val;
	} 
	else 
	{
		cerr << "HDL_usbHostSlave Error: Tried to drive " << val << " for input signal of width " << 2 << endl;
	}
}

void HDL_usbHostSlave::HDL_vBusDetect_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 1))) 
	{
		hdl_usbHostSlave->vBusDetect =  val;
	} 
	else 
	{
		cerr << "HDL_usbHostSlave Error: Tried to drive " << val << " for input signal of width " << 1 << endl;
	}
}

void HDL_usbHostSlave::hdl_init_signals ()
{
hdl_usbHostSlave->USBWireDataIn = 0;

hdl_usbHostSlave->strobe_i = 0;

hdl_usbHostSlave->we_i = 0;

hdl_usbHostSlave->vBusDetect = 1;

hdl_usbHostSlave->address_i = 0;

hdl_usbHostSlave->usbClk = 0;

hdl_usbHostSlave->rst_i = 0;

hdl_usbHostSlave->data_i = 0;

hdl_usbHostSlave->clk_i = 0;

#if VM_TRACE
  Verilated::traceEverOn(true); // Verilator must compute traced signals
#ifdef VERILATED_TRACE
  vcdfp = new VerilatedVcdC;
#endif
#ifdef SP_TRACE
  vcdfp = new SpTraceVcdCFile;
#endif
  hdl_usbHostSlave->trace (vcdfp, 99);     // Trace 99 levels of hierarchy

#endif
}

void HDL_usbHostSlave::sid_init_signals ()
{

	// Add Reset Pin
	add_pin("usbHostSlave-hw-reset", & this->hdl_reset_pin);
	add_attribute("reset", & this->hdl_reset_pin, "pin" );
	triggerpoint_manager.add_watchable_attribute ("reset");
	categorize ("reset", "watchable");

	// Add Clock Pin
	add_pin("usbHostSlave-hw-clk", & this->hdl_clock_pin);
	add_attribute("clk", & this->hdl_clock_pin, "pin");
	triggerpoint_manager.add_watchable_attribute ("clk");
	categorize ("clk", "watchable");

	// Add Input & Output Pins (Repeat 4 lines below for each)

	add_pin( "usbHostSlave-address_i", & this->hdl_address_i);
	add_attribute( "address_i", & this->hdl_address_i, "pin" );
	triggerpoint_manager.add_watchable_attribute ("address_i");
	categorize ("address_i", "watchable");

	add_pin( "usbHostSlave-data_i", & this->hdl_data_i);
	add_attribute( "data_i", & this->hdl_data_i, "pin" );
	triggerpoint_manager.add_watchable_attribute ("data_i");
	categorize ("data_i", "watchable");

	add_pin( "usbHostSlave-we_i", & this->hdl_we_i);
	add_attribute( "we_i", & this->hdl_we_i, "pin" );
	triggerpoint_manager.add_watchable_attribute ("we_i");
	categorize ("we_i", "watchable");

	add_pin( "usbHostSlave-strobe_i", & this->hdl_strobe_i);
	add_attribute( "strobe_i", & this->hdl_strobe_i, "pin" );
	triggerpoint_manager.add_watchable_attribute ("strobe_i");
	categorize ("strobe_i", "watchable");

	add_pin( "usbHostSlave-USBWireDataIn", & this->hdl_USBWireDataIn);
	add_attribute( "USBWireDataIn", & this->hdl_USBWireDataIn, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBWireDataIn");
	categorize ("USBWireDataIn", "watchable");

	add_pin( "usbHostSlave-vBusDetect", & this->hdl_vBusDetect);
	add_attribute( "vBusDetect", & this->hdl_vBusDetect, "pin" );
	triggerpoint_manager.add_watchable_attribute ("vBusDetect");
	categorize ("vBusDetect", "watchable");

	add_pin( "usbHostSlave-data_o", & this->hdl_data_o);
	add_attribute( "data_o", & this->hdl_data_o, "pin" );
	triggerpoint_manager.add_watchable_attribute ("data_o");
	categorize ("data_o", "watchable");

	add_pin( "usbHostSlave-ack_o", & this->hdl_ack_o);
	add_attribute( "ack_o", & this->hdl_ack_o, "pin" );
	triggerpoint_manager.add_watchable_attribute ("ack_o");
	categorize ("ack_o", "watchable");

	add_pin( "usbHostSlave-hostSOFSentIntOut", & this->hdl_hostSOFSentIntOut);
	add_attribute( "hostSOFSentIntOut", & this->hdl_hostSOFSentIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("hostSOFSentIntOut");
	categorize ("hostSOFSentIntOut", "watchable");

	add_pin( "usbHostSlave-hostConnEventIntOut", & this->hdl_hostConnEventIntOut);
	add_attribute( "hostConnEventIntOut", & this->hdl_hostConnEventIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("hostConnEventIntOut");
	categorize ("hostConnEventIntOut", "watchable");

	add_pin( "usbHostSlave-hostResumeIntOut", & this->hdl_hostResumeIntOut);
	add_attribute( "hostResumeIntOut", & this->hdl_hostResumeIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("hostResumeIntOut");
	categorize ("hostResumeIntOut", "watchable");

	add_pin( "usbHostSlave-hostTransDoneIntOut", & this->hdl_hostTransDoneIntOut);
	add_attribute( "hostTransDoneIntOut", & this->hdl_hostTransDoneIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("hostTransDoneIntOut");
	categorize ("hostTransDoneIntOut", "watchable");

	add_pin( "usbHostSlave-slaveSOFRxedIntOut", & this->hdl_slaveSOFRxedIntOut);
	add_attribute( "slaveSOFRxedIntOut", & this->hdl_slaveSOFRxedIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveSOFRxedIntOut");
	categorize ("slaveSOFRxedIntOut", "watchable");

	add_pin( "usbHostSlave-slaveResetEventIntOut", & this->hdl_slaveResetEventIntOut);
	add_attribute( "slaveResetEventIntOut", & this->hdl_slaveResetEventIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveResetEventIntOut");
	categorize ("slaveResetEventIntOut", "watchable");

	add_pin( "usbHostSlave-slaveResumeIntOut", & this->hdl_slaveResumeIntOut);
	add_attribute( "slaveResumeIntOut", & this->hdl_slaveResumeIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveResumeIntOut");
	categorize ("slaveResumeIntOut", "watchable");

	add_pin( "usbHostSlave-slaveTransDoneIntOut", & this->hdl_slaveTransDoneIntOut);
	add_attribute( "slaveTransDoneIntOut", & this->hdl_slaveTransDoneIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveTransDoneIntOut");
	categorize ("slaveTransDoneIntOut", "watchable");

	add_pin( "usbHostSlave-slaveNAKSentIntOut", & this->hdl_slaveNAKSentIntOut);
	add_attribute( "slaveNAKSentIntOut", & this->hdl_slaveNAKSentIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveNAKSentIntOut");
	categorize ("slaveNAKSentIntOut", "watchable");

	add_pin( "usbHostSlave-slaveVBusDetIntOut", & this->hdl_slaveVBusDetIntOut);
	add_attribute( "slaveVBusDetIntOut", & this->hdl_slaveVBusDetIntOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveVBusDetIntOut");
	categorize ("slaveVBusDetIntOut", "watchable");

	add_pin( "usbHostSlave-USBWireDataOut", & this->hdl_USBWireDataOut);
	add_attribute( "USBWireDataOut", & this->hdl_USBWireDataOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBWireDataOut");
	categorize ("USBWireDataOut", "watchable");

	add_pin( "usbHostSlave-USBWireDataOutTick", & this->hdl_USBWireDataOutTick);
	add_attribute( "USBWireDataOutTick", & this->hdl_USBWireDataOutTick, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBWireDataOutTick");
	categorize ("USBWireDataOutTick", "watchable");

	add_pin( "usbHostSlave-USBWireDataInTick", & this->hdl_USBWireDataInTick);
	add_attribute( "USBWireDataInTick", & this->hdl_USBWireDataInTick, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBWireDataInTick");
	categorize ("USBWireDataInTick", "watchable");

	add_pin( "usbHostSlave-USBWireCtrlOut", & this->hdl_USBWireCtrlOut);
	add_attribute( "USBWireCtrlOut", & this->hdl_USBWireCtrlOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBWireCtrlOut");
	categorize ("USBWireCtrlOut", "watchable");

	add_pin( "usbHostSlave-USBFullSpeed", & this->hdl_USBFullSpeed);
	add_attribute( "USBFullSpeed", & this->hdl_USBFullSpeed, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBFullSpeed");
	categorize ("USBFullSpeed", "watchable");

	add_pin( "usbHostSlave-USBDPlusPullup", & this->hdl_USBDPlusPullup);
	add_attribute( "USBDPlusPullup", & this->hdl_USBDPlusPullup, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBDPlusPullup");
	categorize ("USBDPlusPullup", "watchable");

	add_pin( "usbHostSlave-USBDMinusPullup", & this->hdl_USBDMinusPullup);
	add_attribute( "USBDMinusPullup", & this->hdl_USBDMinusPullup, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBDMinusPullup");
	categorize ("USBDMinusPullup", "watchable");

}

// Clock helper functions
void HDL_usbHostSlave::advance_half_cycles (int half_cycles)
{
	while (half_cycles) 
	{
		advance_time();
		half_cycles--;
	}
}

void HDL_usbHostSlave::advance_cycles (int cycles)
{
	advance_half_cycles (2*cycles);
}

// True for posedge, False for negedge
void HDL_usbHostSlave::advance_till_edge (bool posedge) 
{
	int val = (posedge)?0:1;
	while ((hdl_usbHostSlave->clk_i != val) || (fmod(main_time, 20) != 0))
	{
		advance_half_cycles(1);
	} 
}


// SID Infrastructure Functions

// Return a list of component types supported by this library.
static vector<string>
HDLusbHostSlaveListTypes()
{
  vector<string> types;
  types.push_back("hw-hdl-usbHostSlave");
  return types;
}

// Instantiate a component, given a specified component type.
static sid::component*
HDLusbHostSlaveCreate(const string& typeName)
{
  if (typeName == "hw-hdl-usbHostSlave")
    return new HDL_usbHostSlave();

  return 0;
}

// Destruct a component instance.

static void
HDLusbHostSlaveDelete(sid::component* c)
{
  delete dynamic_cast<HDL_usbHostSlave*>(c);
}

// This symbol is used by the library loader to validate the library
// and instantiate components of the types supported by this library.

// static object
DLLEXPORT extern const sid::component_library hdl_usbHostSlave_component_library;

const sid::component_library hdl_usbHostSlave_component_library =
{
  sid::COMPONENT_LIBRARY_MAGIC,
  & HDLusbHostSlaveListTypes, 
  & HDLusbHostSlaveCreate,
  & HDLusbHostSlaveDelete
};

////////////////////////////////// Tail Ends

#include "XusbHostSlave_rw_protocol.cxx"
