// Generated cpp file for SID HDL Module

////////////////////////////////// Head Starts

#include "Xpwm.h"
#include <cmath>

vector<string>
HDL_pwm::bus_names() throw()
{
  vector<string> buses;
  buses.push_back("pwm-registers");
  return buses;
}

sid::bus*
HDL_pwm::find_bus(const string& name) throw()
{
  if (name == "pwm-registers")
    return &hdl_reg_bus;
  return 0;
}

sid::bus* 
HDL_pwm::connected_bus(const string& name) throw()
{
  // No connected buses; return a null pointer.
  return 0;
}

// Drive HDL Clocks
void
HDL_pwm::hdl_tick (sid::host_int_4 val)
{
	advance_time ();	
}


// Constructor
HDL_pwm::HDL_pwm() 
	:main_time (0),
	 triggerpoint_manager (this),
	 hdl_clock_pin (this, &HDL_pwm::hdl_tick),
	 hdl_reset_pin (this, &HDL_pwm::hdl_reset),
	 hdl_reg_bus (this)
{
	// Instantiate the HDL Model
	hdl_pwm = new Vpwm; 

	hdl_init_signals();

	sid_init_signals();

	identifier = "__ipi_empty";
	add_attribute("identifier", &identifier);

	first_call = false;

}

// Destructor
HDL_pwm::~HDL_pwm()
{
#if VM_TRACE
	vcdfp->close();	
#endif

}

void HDL_pwm::Open_VCD(void)
{
  if (identifier == "__ipi_empty")
  {
        printf("Error: Identifier not specified for pwm.\n");
        exit(1);
  }

  char vcd_file_name[256];
  sprintf(vcd_file_name, "hdl_pwm.%s.vcd", identifier.c_str());
  printf("Identifier: %s (%s)\n", identifier.c_str(), vcd_file_name);
  vcdfp->open (vcd_file_name);  // Open the dump file

}

void HDL_pwm::advance_time (void) 
{
#if VM_TRACE
	if (main_time == 0)
		this->Open_VCD();
#endif

		if (fmod( main_time, 2 ) == 0)
		{
			hdl_pwm->ipg_clk = !hdl_pwm->ipg_clk;
		}
		if (fmod( main_time, 1 ) == 0)
		{
			hdl_pwm->ipg_clk_highfreq = !hdl_pwm->ipg_clk_highfreq;
		}
		if (fmod( main_time, 8 ) == 0)
		{
			hdl_pwm->ipg_clk_32k = !hdl_pwm->ipg_clk_32k;
		}
		if (fmod(main_time, 2) == 0) 
		{
			hdl_pwm->ipg_clk_s = !hdl_pwm->ipg_clk_s;
		}
		// Evaluate the HDL Module
		hdl_pwm->eval();

		// Check and Drive outputs
		drive_outputs();

		// check for triggerpoints
		triggerpoint_manager.check_and_dispatch();

#if VM_TRACE
		if ((main_time < -1) || (-1 < 0))
			vcdfp->dump (main_time);	// Create waveform trace for this timestamp
#endif

		main_time++;
}

void HDL_pwm::drive_outputs (void) 
{
	if (!first_call)
	{
		last_change_ipi_int_pwm = hdl_pwm->ipi_int_pwm;
		hdl_ipi_int_pwm.drive(hdl_pwm->ipi_int_pwm);
		first_call = true;
		} 
		else 
		{
		if ( last_change_ipi_int_pwm != hdl_pwm->ipi_int_pwm) 
		{
			hdl_ipi_int_pwm.drive(hdl_pwm->ipi_int_pwm);
			last_change_ipi_int_pwm = hdl_pwm->ipi_int_pwm;
		}
	}
}

void HDL_pwm::hdl_init_signals ()
{
hdl_pwm->ips_byte_23_16 = 1;

hdl_pwm->ipg_doze = 0;

hdl_pwm->ips_addr = 0;

hdl_pwm->ipg_wait = 0;

hdl_pwm->ipg_stop = 0;

hdl_pwm->ipt_se_gatedclk = 0;

hdl_pwm->resp_sel = 0;

hdl_pwm->ips_byte_7_0 = 1;

hdl_pwm->ipg_hard_async_reset_b = 1;

hdl_pwm->ipg_clk_highfreq = 0;

hdl_pwm->ipt_mode = 0;

hdl_pwm->ipg_debug = 0;

hdl_pwm->ipt_reset_b = 0;

hdl_pwm->ips_byte_15_8 = 1;

hdl_pwm->ips_wdata = 0;

hdl_pwm->ips_rwb = 0;

hdl_pwm->ipg_clk = 0;

hdl_pwm->ips_module_en = 0;

hdl_pwm->ipg_clk_s = 0;

hdl_pwm->ipt_se_async = 0;

hdl_pwm->ipg_clk_32k = 0;

hdl_pwm->ips_byte_31_24 = 1;

#if VM_TRACE
  Verilated::traceEverOn(true); // Verilator must compute traced signals
#ifdef VERILATED_TRACE
  vcdfp = new VerilatedVcdC;
#endif
#ifdef SP_TRACE
  vcdfp = new SpTraceVcdCFile;
#endif
  hdl_pwm->trace (vcdfp, 99);     // Trace 99 levels of hierarchy

#endif
}

void HDL_pwm::sid_init_signals ()
{

	// Add Reset Pin
	add_pin("pwm-hw-reset", & this->hdl_reset_pin);
	add_attribute("reset", & this->hdl_reset_pin, "pin" );
	triggerpoint_manager.add_watchable_attribute ("reset");
	categorize ("reset", "watchable");

	// Add Clock Pin
	add_pin("pwm-hw-clk", & this->hdl_clock_pin);
	add_attribute("clk", & this->hdl_clock_pin, "pin");
	triggerpoint_manager.add_watchable_attribute ("clk");
	categorize ("clk", "watchable");

	// Add Input & Output Pins (Repeat 4 lines below for each)

	add_pin( "pwm-ipi_int_pwm", & this->hdl_ipi_int_pwm);
	add_attribute( "ipi_int_pwm", & this->hdl_ipi_int_pwm, "pin" );
	triggerpoint_manager.add_watchable_attribute ("ipi_int_pwm");
	categorize ("ipi_int_pwm", "watchable");

}

// Clock helper functions
void HDL_pwm::advance_half_cycles (int half_cycles)
{
	while (half_cycles) 
	{
		advance_time();
		half_cycles--;
	}
}

void HDL_pwm::advance_cycles (int cycles)
{
	advance_half_cycles (2*cycles);
}

// True for posedge, False for negedge
void HDL_pwm::advance_till_edge (bool posedge) 
{
	int val = (posedge)?0:1;
	while ((hdl_pwm->ipg_clk_s != val) || (fmod(main_time, 2) != 0))
	{
		advance_half_cycles(1);
	} 
}


// SID Infrastructure Functions

// Return a list of component types supported by this library.
static vector<string>
HDLpwmListTypes()
{
  vector<string> types;
  types.push_back("hw-hdl-pwm");
  return types;
}

// Instantiate a component, given a specified component type.
static sid::component*
HDLpwmCreate(const string& typeName)
{
  if (typeName == "hw-hdl-pwm")
    return new HDL_pwm();

  return 0;
}

// Destruct a component instance.

static void
HDLpwmDelete(sid::component* c)
{
  delete dynamic_cast<HDL_pwm*>(c);
}

// This symbol is used by the library loader to validate the library
// and instantiate components of the types supported by this library.

// static object
DLLEXPORT extern const sid::component_library hdl_pwm_component_library;

const sid::component_library hdl_pwm_component_library =
{
  sid::COMPONENT_LIBRARY_MAGIC,
  & HDLpwmListTypes, 
  & HDLpwmCreate,
  & HDLpwmDelete
};

////////////////////////////////// Tail Ends

#include "Xpwm_rw_protocol.cxx"
