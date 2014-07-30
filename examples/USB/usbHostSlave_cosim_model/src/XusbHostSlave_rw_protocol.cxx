 
sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_1 data) throw()
{
	int error_status = 0;
	if ((addr % 1) != 0)
	{
		return sid::bus::misaligned;
	}
	if ((addr / 1) >= 256)
	{
		return sid::bus::unmapped;
	}
	addr = addr/1;

	module_ptr->advance_till_edge(true);
	cout << "Task: write  (Module: " << module_ptr->identifier << ")" << endl;
	module_ptr->advance_half_cycles(1);
	module_ptr->advance_half_cycles(0);
	module_ptr->hdl_usbHostSlave->address_i = addr;
	module_ptr->hdl_usbHostSlave->data_i = data;
	module_ptr->hdl_usbHostSlave->strobe_i = 1;
	module_ptr->hdl_usbHostSlave->we_i = 1;
	module_ptr->advance_till_edge(true);
	cout << "Signal: usbHostSlave->address_i \t Value: " << (int) module_ptr->hdl_usbHostSlave->address_i << " \t Module: " << module_ptr->identifier << endl;
	module_ptr->advance_half_cycles(1);
	while(module_ptr->hdl_usbHostSlave->ack_o != 1)
	{
		module_ptr->advance_half_cycles(1);
	}
	module_ptr->advance_half_cycles(0);
	cout << "Signal: usbHostSlave->data_i \t Value: " << (int) module_ptr->hdl_usbHostSlave->data_i << " \t Module: " << module_ptr->identifier << endl;
	module_ptr->hdl_usbHostSlave->strobe_i = 0;
	module_ptr->hdl_usbHostSlave->address_i = 0;
	module_ptr->hdl_usbHostSlave->data_i = 0;
	module_ptr->hdl_usbHostSlave->we_i = 0;
	return sid::bus::ok;
}

sid::bus::status
      HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_1& data) throw()
{
	int error_status = 0;
	if ((addr % 1) != 0)
	{
		return sid::bus::misaligned;
	}
	if ((addr / 1) >= 256)
	{
		return sid::bus::unmapped;
	}
	addr = addr/1;

	module_ptr->advance_till_edge(true);
	cout << "Task: read  (Module: " << module_ptr->identifier << ")" << endl;
	module_ptr->advance_half_cycles(1);
	module_ptr->advance_half_cycles(0);
	module_ptr->hdl_usbHostSlave->address_i = addr;
	module_ptr->hdl_usbHostSlave->data_i = 0;
	module_ptr->hdl_usbHostSlave->strobe_i = 1;
	module_ptr->hdl_usbHostSlave->we_i = 0;
	module_ptr->advance_till_edge(true);
	cout << "Signal: usbHostSlave->address_i \t Value: " << (int) module_ptr->hdl_usbHostSlave->address_i << " \t Module: " << module_ptr->identifier << endl;
	module_ptr->advance_half_cycles(1);
	while(module_ptr->hdl_usbHostSlave->ack_o != 1)
	{
		module_ptr->advance_half_cycles(1);
	}
	cout << "Signal: usbHostSlave->data_o \t Value: " << (int) module_ptr->hdl_usbHostSlave->data_o << " \t Module: " << module_ptr->identifier << endl;
	module_ptr->advance_half_cycles(0);
	module_ptr->hdl_usbHostSlave->strobe_i = 0;
	module_ptr->hdl_usbHostSlave->address_i = 0;
	module_ptr->hdl_usbHostSlave->data_i = 0;
	module_ptr->hdl_usbHostSlave->we_i = 0;
	data = module_ptr->hdl_usbHostSlave->data_o;
	return sid::bus::ok;
}

void HDL_usbHostSlave::hdl_reset(sid::host_int_4 val)
{
	cout << "Resetting usbHostSlave HW Model ..." << endl;

	advance_till_edge(true);
	hdl_usbHostSlave->rst_i = 1;
	advance_half_cycles(1);
	advance_till_edge(true);
	hdl_usbHostSlave->rst_i = 0;
	advance_half_cycles(1);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_1& data) throw()
{
	sid::little_int_1 le_data;
	sid::bus::status st = read(addr, le_data);
	data.set_target_memory_value (le_data.target_memory_value ());
	return st;
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_1 data) throw()
{
	sid::little_int_1 le_data;
	le_data.set_target_memory_value (data.target_memory_value ());
	return write(addr, le_data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_8& data) throw()
{
	return read(addr, (sid::little_int_1&) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_8& data) throw()
{
	return read(addr, (sid::big_int_1&) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_8 data) throw()
{
	return write(addr, (sid::little_int_1) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_8 data) throw()
{
	return write(addr, (sid::big_int_1) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_4& data) throw()
{
	return read(addr, (sid::little_int_1&) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_4& data) throw()
{
	return read(addr, (sid::big_int_1&) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_4 data) throw()
{
	return write(addr, (sid::little_int_1) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_4 data) throw()
{
	return write(addr, (sid::big_int_1) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_2& data) throw()
{
	return read(addr, (sid::little_int_1&) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_2& data) throw()
{
	return read(addr, (sid::big_int_1&) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_2 data) throw()
{
	return write(addr, (sid::little_int_1) data);
}

sid::bus::status
	HDL_usbHostSlave::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_2 data) throw()
{
	return write(addr, (sid::big_int_1) data);
}

