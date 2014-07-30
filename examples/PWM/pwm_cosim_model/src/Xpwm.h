// Generated Header file for SID hdl Module

#ifndef __pwm_DEF_H__
#define __pwm_DEF_H__

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
#include "Vpwm.h"

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

// Module Template (will go into hdl_pwm.h)
class HDL_pwm : public virtual sid::component,
      public sidutil::no_accessor_component,
      public sidutil::no_relation_component,
      public sidutil::fixed_attribute_map_component,			 
      public sidutil::fixed_pin_map_component
{
public:
	HDL_pwm(); // Constructor
	~HDL_pwm(); // Destructor

	// Bus Related Functions
  vector<string> bus_names() throw();
  sid::bus* find_bus(const string& name) throw();
  sid::bus* connected_bus(const string& name) throw();

	// Attached to specialized input Reset pin
  void hdl_reset(sid::host_int_4);

private:
	// Verilated Module Instance (usually V< module name >)
	Vpwm * hdl_pwm; 

	// Identifier
	string identifier;

	// identifying first call to drive outputs
	bool first_call;

	// Open appropriate VCD file, based on identifier
	void Open_VCD(void);

	// Triggerpoint Manager (for adding module related values to tcl/tk GUI)
	friend class sidutil::self_watcher<HDL_pwm>;
	sidutil::self_watcher<HDL_pwm> triggerpoint_manager;

	// Clock Pin (This single clock pin internally drives all other hw clocks)
	friend class sidutil::callback_pin<HDL_pwm>;
	sidutil::callback_pin<HDL_pwm> hdl_clock_pin;
	// This method is attached to the above clock pin
	void hdl_tick (sid::host_int_4);
		
        // Specialized input Reset pin
  sidutil::callback_pin<HDL_pwm> hdl_reset_pin;

	int last_change_ipi_int_pwm;

	// Register Bus (The SID bus transactions are translated to the appropriate HW bus protocol)
	class HDL_register_bus: public sid::bus
	{
	public:

		HDL_register_bus (HDL_pwm* module) : module_ptr(module) {}

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
                HDL_pwm* module_ptr;

	};

	friend class HDL_register_bus;
	HDL_register_bus hdl_reg_bus; // The Register Bus instance
		
	sidutil::output_pin hdl_ipi_int_pwm;

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
