// Generated cpp file for SID HDL Module

////////////////////////////////// Head Starts

#include "XusbConnector.h"
#include <cmath>

vector<string>
HDL_usbConnector::bus_names() throw()
{
  vector<string> buses;
  buses.push_back("usbConnector-registers");
  return buses;
}

sid::bus*
HDL_usbConnector::find_bus(const string& name) throw()
{
  if (name == "usbConnector-registers")
    return &hdl_reg_bus;
  return 0;
}

sid::bus* 
HDL_usbConnector::connected_bus(const string& name) throw()
{
  // No connected buses; return a null pointer.
  return 0;
}

// Drive HDL Clocks
void
HDL_usbConnector::hdl_tick (sid::host_int_4 val)
{
	advance_time ();	
}


// Constructor
HDL_usbConnector::HDL_usbConnector() 
	:main_time (0),
	 triggerpoint_manager (this),
	 hdl_clock_pin (this, &HDL_usbConnector::hdl_tick),
	 hdl_reset_pin (this, &HDL_usbConnector::hdl_reset),
	 hdl_hostDataIn (this, &HDL_usbConnector::HDL_hostDataIn_handler),
	 hdl_hostControl (this, &HDL_usbConnector::HDL_hostControl_handler),
	 hdl_slaveDataIn (this, &HDL_usbConnector::HDL_slaveDataIn_handler),
	 hdl_slaveControl (this, &HDL_usbConnector::HDL_slaveControl_handler),
	 hdl_USBDPlusPullup (this, &HDL_usbConnector::HDL_USBDPlusPullup_handler),
	 hdl_USBDMinusPullup (this, &HDL_usbConnector::HDL_USBDMinusPullup_handler),
	 hdl_reg_bus (this)
{
	// Instantiate the HDL Model
	hdl_usbConnector = new VusbConnector; 

	hdl_init_signals();

	sid_init_signals();

	identifier = "__ipi_empty";
	add_attribute("identifier", &identifier);

	first_call = false;

}

// Destructor
HDL_usbConnector::~HDL_usbConnector()
{
#if VM_TRACE
	vcdfp->close();	
#endif

}

void HDL_usbConnector::Open_VCD(void)
{
  if (identifier == "__ipi_empty")
  {
        printf("Error: Identifier not specified for usbConnector.\n");
        exit(1);
  }

  char vcd_file_name[256];
  sprintf(vcd_file_name, "hdl_usbConnector.%s.vcd", identifier.c_str());
  printf("Identifier: %s (%s)\n", identifier.c_str(), vcd_file_name);
  vcdfp->open (vcd_file_name);  // Open the dump file

}

void HDL_usbConnector::advance_time (void) 
{
#if VM_TRACE
	if (main_time == 0)
		this->Open_VCD();
#endif

		// Evaluate the HDL Module
		hdl_usbConnector->eval();

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

void HDL_usbConnector::drive_outputs (void) 
{
	if (!first_call)
	{
		last_change_hostDataOut = hdl_usbConnector->hostDataOut;
		hdl_hostDataOut.drive(hdl_usbConnector->hostDataOut);
		last_change_slaveDataOut = hdl_usbConnector->slaveDataOut;
		hdl_slaveDataOut.drive(hdl_usbConnector->slaveDataOut);
		first_call = true;
		} 
		else 
		{
		if ( last_change_hostDataOut != hdl_usbConnector->hostDataOut) 
		{
			hdl_hostDataOut.drive(hdl_usbConnector->hostDataOut);
			last_change_hostDataOut = hdl_usbConnector->hostDataOut;
		}
		if ( last_change_slaveDataOut != hdl_usbConnector->slaveDataOut) 
		{
			hdl_slaveDataOut.drive(hdl_usbConnector->slaveDataOut);
			last_change_slaveDataOut = hdl_usbConnector->slaveDataOut;
		}
	}
}

void HDL_usbConnector::HDL_hostDataIn_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 2))) 
	{
		hdl_usbConnector->hostDataIn =  val;
	} 
	else 
	{
		cerr << "HDL_usbConnector Error: Tried to drive " << val << " for input signal of width " << 2 << endl;
	}
}

void HDL_usbConnector::HDL_hostControl_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 1))) 
	{
		hdl_usbConnector->hostControl =  val;
	} 
	else 
	{
		cerr << "HDL_usbConnector Error: Tried to drive " << val << " for input signal of width " << 1 << endl;
	}
}

void HDL_usbConnector::HDL_slaveDataIn_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 2))) 
	{
		hdl_usbConnector->slaveDataIn =  val;
	} 
	else 
	{
		cerr << "HDL_usbConnector Error: Tried to drive " << val << " for input signal of width " << 2 << endl;
	}
}

void HDL_usbConnector::HDL_slaveControl_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 1))) 
	{
		hdl_usbConnector->slaveControl =  val;
	} 
	else 
	{
		cerr << "HDL_usbConnector Error: Tried to drive " << val << " for input signal of width " << 1 << endl;
	}
}

void HDL_usbConnector::HDL_USBDPlusPullup_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 1))) 
	{
		hdl_usbConnector->USBDPlusPullup =  val;
	} 
	else 
	{
		cerr << "HDL_usbConnector Error: Tried to drive " << val << " for input signal of width " << 1 << endl;
	}
}

void HDL_usbConnector::HDL_USBDMinusPullup_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, 1))) 
	{
		hdl_usbConnector->USBDMinusPullup =  val;
	} 
	else 
	{
		cerr << "HDL_usbConnector Error: Tried to drive " << val << " for input signal of width " << 1 << endl;
	}
}

void HDL_usbConnector::hdl_init_signals ()
{
hdl_usbConnector->USBDPlusPullup = 0;

hdl_usbConnector->slaveControl = 0;

hdl_usbConnector->hostControl = 0;

hdl_usbConnector->slaveDataIn = 0;

hdl_usbConnector->hostDataIn = 0;

hdl_usbConnector->USBDMinusPullup = 0;

#if VM_TRACE
  Verilated::traceEverOn(true); // Verilator must compute traced signals
#ifdef VERILATED_TRACE
  vcdfp = new VerilatedVcdC;
#endif
#ifdef SP_TRACE
  vcdfp = new SpTraceVcdCFile;
#endif
  hdl_usbConnector->trace (vcdfp, 99);     // Trace 99 levels of hierarchy

#endif
}

void HDL_usbConnector::sid_init_signals ()
{

	// Add Reset Pin
	add_pin("usbConnector-hw-reset", & this->hdl_reset_pin);
	add_attribute("reset", & this->hdl_reset_pin, "pin" );
	triggerpoint_manager.add_watchable_attribute ("reset");
	categorize ("reset", "watchable");

	// Add Clock Pin
	add_pin("usbConnector-hw-clk", & this->hdl_clock_pin);
	add_attribute("clk", & this->hdl_clock_pin, "pin");
	triggerpoint_manager.add_watchable_attribute ("clk");
	categorize ("clk", "watchable");

	// Add Input & Output Pins (Repeat 4 lines below for each)

	add_pin( "usbConnector-hostDataIn", & this->hdl_hostDataIn);
	add_attribute( "hostDataIn", & this->hdl_hostDataIn, "pin" );
	triggerpoint_manager.add_watchable_attribute ("hostDataIn");
	categorize ("hostDataIn", "watchable");

	add_pin( "usbConnector-hostControl", & this->hdl_hostControl);
	add_attribute( "hostControl", & this->hdl_hostControl, "pin" );
	triggerpoint_manager.add_watchable_attribute ("hostControl");
	categorize ("hostControl", "watchable");

	add_pin( "usbConnector-slaveDataIn", & this->hdl_slaveDataIn);
	add_attribute( "slaveDataIn", & this->hdl_slaveDataIn, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveDataIn");
	categorize ("slaveDataIn", "watchable");

	add_pin( "usbConnector-slaveControl", & this->hdl_slaveControl);
	add_attribute( "slaveControl", & this->hdl_slaveControl, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveControl");
	categorize ("slaveControl", "watchable");

	add_pin( "usbConnector-USBDPlusPullup", & this->hdl_USBDPlusPullup);
	add_attribute( "USBDPlusPullup", & this->hdl_USBDPlusPullup, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBDPlusPullup");
	categorize ("USBDPlusPullup", "watchable");

	add_pin( "usbConnector-USBDMinusPullup", & this->hdl_USBDMinusPullup);
	add_attribute( "USBDMinusPullup", & this->hdl_USBDMinusPullup, "pin" );
	triggerpoint_manager.add_watchable_attribute ("USBDMinusPullup");
	categorize ("USBDMinusPullup", "watchable");

	add_pin( "usbConnector-hostDataOut", & this->hdl_hostDataOut);
	add_attribute( "hostDataOut", & this->hdl_hostDataOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("hostDataOut");
	categorize ("hostDataOut", "watchable");

	add_pin( "usbConnector-slaveDataOut", & this->hdl_slaveDataOut);
	add_attribute( "slaveDataOut", & this->hdl_slaveDataOut, "pin" );
	triggerpoint_manager.add_watchable_attribute ("slaveDataOut");
	categorize ("slaveDataOut", "watchable");

}

// Clock helper functions
void HDL_usbConnector::advance_half_cycles (int half_cycles)
{
	while (half_cycles) 
	{
		advance_time();
		half_cycles--;
	}
}

void HDL_usbConnector::advance_cycles (int cycles)
{
	advance_half_cycles (2*cycles);
}

// True for posedge, False for negedge
void HDL_usbConnector::advance_till_edge (bool posedge) 
{
	int val = (posedge)?0:1;
	{
		advance_half_cycles(1);
	} 
}


// SID Infrastructure Functions

// Return a list of component types supported by this library.
static vector<string>
HDLusbConnectorListTypes()
{
  vector<string> types;
  types.push_back("hw-hdl-usbConnector");
  return types;
}

// Instantiate a component, given a specified component type.
static sid::component*
HDLusbConnectorCreate(const string& typeName)
{
  if (typeName == "hw-hdl-usbConnector")
    return new HDL_usbConnector();

  return 0;
}

// Destruct a component instance.

static void
HDLusbConnectorDelete(sid::component* c)
{
  delete dynamic_cast<HDL_usbConnector*>(c);
}

// This symbol is used by the library loader to validate the library
// and instantiate components of the types supported by this library.

// static object
DLLEXPORT extern const sid::component_library hdl_usbConnector_component_library;

const sid::component_library hdl_usbConnector_component_library =
{
  sid::COMPONENT_LIBRARY_MAGIC,
  & HDLusbConnectorListTypes, 
  & HDLusbConnectorCreate,
  & HDLusbConnectorDelete
};

////////////////////////////////// Tail Ends

#include "XusbConnector_rw_protocol.cxx"
