
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
		
