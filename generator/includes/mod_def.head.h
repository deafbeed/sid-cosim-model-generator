// Generated Header file for SID hdl Module

#ifndef __##MOD_NAME##_DEF_H__
#define __##MOD_NAME##_DEF_H__

// SID related Includes
#include <sidtypes.h>
#include <sidcomp.h>
#include <sidcomputil.h>
#include <sidbusutil.h>
#include <sidpinutil.h>
#include <sidattrutil.h>
#include <sidschedutil.h>
#include <sidwatchutil.h>
#include <sidso.h>

#include <verilated.h>	// For Verilator
//#include "V##MOD_NAME##.h" // Include the Verilated hdl Module
#include "V##FILE_NAME##.h"

#if VM_TRACE
#ifdef VERILATED_TRACE
#include <verilated_vcd_c.h>
#endif
#ifdef SP_TRACE
#include <SpTraceVcdC.h>
#endif
#endif

using std::vector;
using std::cout;
using std::cerr;
using std::endl;

// Module Template (will go into hdl_##MOD_NAME##.h)
class HDL_##MOD_NAME## : public virtual sid::component,
      public sidutil::no_accessor_component,
      public sidutil::no_relation_component,
      public sidutil::fixed_attribute_map_component,			 
      public sidutil::fixed_pin_map_component
{
public:
	HDL_##MOD_NAME##(); // Constructor
	~HDL_##MOD_NAME##(); // Destructor

	// Bus Related Functions
  vector<string> bus_names() throw();
  sid::bus* find_bus(const string& name) throw();
  sid::bus* connected_bus(const string& name) throw();

	// Attached to specialized input Reset pin
  void hdl_reset(sid::host_int_4);

	
private:
	// Verilated Module Instance (usually V< module name >)
	V##FILE_NAME## * hdl_##MOD_NAME##; 

	// Triggerpoint Manager (for adding module related values to tcl/tk GUI)
	friend class sidutil::self_watcher<HDL_##MOD_NAME##>;
	sidutil::self_watcher<HDL_##MOD_NAME##> triggerpoint_manager;

	// Clock Pin (This single clock pin internally drives all other hw clocks)
	friend class sidutil::callback_pin<HDL_##MOD_NAME##>;
	sidutil::callback_pin<HDL_##MOD_NAME##> hdl_clock_pin;
	// This method is attached to the above clock pin
	void hdl_tick (sid::host_int_4);
		
        // Specialized input Reset pin
  sidutil::callback_pin<HDL_##MOD_NAME##> hdl_reset_pin;

	// Register Bus (The SID bus transactions are translated to the appropriate HW bus protocol)
	class HDL_register_bus: public sid::bus
	{
	public:

		HDL_register_bus (HDL_##MOD_NAME##* module) : module_ptr(module) {}

		// Prototypes for bus read/write methods of all kinds.
		sid::bus::status read(sid::host_int_4 addr, sid::little_int_1& data) throw();
		sid::bus::status read(sid::host_int_4 addr, sid::big_int_1& data) throw();
		sid::bus::status read(sid::host_int_4 addr, sid::little_int_2& data) throw();
		sid::bus::status read(sid::host_int_4 addr, sid::big_int_2& data) throw();
		sid::bus::status read(sid::host_int_4 addr, sid::little_int_4& data) throw();
		sid::bus::status read(sid::host_int_4 addr, sid::big_int_4& data) throw();
		sid::bus::status read(sid::host_int_4 addr, sid::little_int_8& data) throw();
		sid::bus::status read(sid::host_int_4 addr, sid::big_int_8& data) throw();

		sid::bus::status write(sid::host_int_4 addr, sid::little_int_1 data) throw();
		sid::bus::status write(sid::host_int_4 addr, sid::big_int_1 data) throw();
		sid::bus::status write(sid::host_int_4 addr, sid::little_int_2 data) throw();
		sid::bus::status write(sid::host_int_4 addr, sid::big_int_2 data) throw();
		sid::bus::status write(sid::host_int_4 addr, sid::little_int_4 data) throw();
		sid::bus::status write(sid::host_int_4 addr, sid::big_int_4 data) throw();
		sid::bus::status write(sid::host_int_4 addr, sid::little_int_8 data) throw();
		sid::bus::status write(sid::host_int_4 addr, sid::big_int_8 data) throw();

	private:
                HDL_##MOD_NAME##* module_ptr;

	};

	friend class HDL_register_bus;
	HDL_register_bus hdl_reg_bus; // The Register Bus instance
		
