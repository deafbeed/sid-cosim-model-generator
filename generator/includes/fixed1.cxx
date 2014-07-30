// Generated cpp file for SID HDL Module

////////////////////////////////// Head Starts

#include "X##MOD_NAME##.h"
#include <cmath>

vector<string>
HDL_##MOD_NAME##::bus_names() throw()
{
  vector<string> buses;
  buses.push_back("##MOD_NAME##-registers");
  return buses;
}

sid::bus*
HDL_##MOD_NAME##::find_bus(const string& name) throw()
{
  if (name == "##MOD_NAME##-registers")
    return &hdl_reg_bus;
  return 0;
}

sid::bus* 
HDL_##MOD_NAME##::connected_bus(const string& name) throw()
{
  // No connected buses; return a null pointer.
  return 0;
}

// Drive HDL Clocks
void
HDL_##MOD_NAME##::hdl_tick (sid::host_int_4 val)
{
	advance_time ();	
}


// Constructor
HDL_##MOD_NAME##::HDL_##MOD_NAME##() 
	:main_time (0),
	 triggerpoint_manager (this),
	 hdl_clock_pin (this, &HDL_##MOD_NAME##::hdl_tick),
	 hdl_reset_pin (this, &HDL_##MOD_NAME##::hdl_reset),
