 
sid::bus::status
      HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_4& data) throw()
{
	int error_status = 0;
	if ((addr % 4) != 0)
	{
		return sid::bus::misaligned;
	}
	if ((addr / 4) >= 6)
	{
		return sid::bus::unmapped;
	}
	addr = addr/4;

	module_ptr->advance_till_edge(true);
	module_ptr->hdl_pwm->ips_module_en = 1;
	module_ptr->hdl_pwm->ips_rwb = 1;
	module_ptr->hdl_pwm->ips_addr = addr;
	cout << "Signal: pwm->ips_addr \t Value: " << (int) module_ptr->hdl_pwm->ips_addr << " \t Module: " << module_ptr->identifier << endl;
	cout << "Signal: pwm->ips_rdata \t Value: " << (int) module_ptr->hdl_pwm->ips_rdata << " \t Module: " << module_ptr->identifier << endl;
	data = module_ptr->hdl_pwm->ips_rdata;
	module_ptr->hdl_pwm->ips_addr = 0;
	module_ptr->hdl_pwm->ips_module_en = 0;
	cout << "Read task complete.  (Module: " << module_ptr->identifier << ")" << endl;
	module_ptr->advance_half_cycles(1);
	return sid::bus::ok;
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_4 data) throw()
{
	int error_status = 0;
	if ((addr % 4) != 0)
	{
		return sid::bus::misaligned;
	}
	if ((addr / 4) >= 6)
	{
		return sid::bus::unmapped;
	}
	addr = addr/4;

	module_ptr->advance_till_edge(true);
	module_ptr->hdl_pwm->ips_module_en = 1;
	module_ptr->hdl_pwm->ips_rwb = 0;
	module_ptr->hdl_pwm->ips_addr = addr;
	module_ptr->hdl_pwm->ips_wdata = data;
	cout << "Signal: pwm->ips_addr \t Value: " << (int) module_ptr->hdl_pwm->ips_addr << " \t Module: " << module_ptr->identifier << endl;
	cout << "Signal: pwm->ips_wdata \t Value: " << (int) module_ptr->hdl_pwm->ips_wdata << " \t Module: " << module_ptr->identifier << endl;
	module_ptr->hdl_pwm->ips_addr = 0;
	module_ptr->hdl_pwm->ips_wdata = 0;
	module_ptr->hdl_pwm->ips_module_en = 0;
	cout << "Write task complete.  (Module: " << module_ptr->identifier << ")" << endl;
	module_ptr->advance_half_cycles(1);
	return sid::bus::ok;
}

void HDL_pwm::hdl_reset(sid::host_int_4 val)
{
	cout << "Resetting pwm HW Model ..." << endl;

	hdl_pwm->ipg_hard_async_reset_b = 0;
	hdl_pwm->ipg_hard_async_reset_b = 1;
}

sid::bus::status
	HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_4& data) throw()
{
	sid::little_int_4 le_data;
	sid::bus::status st = read(addr, le_data);
	data.set_target_memory_value (le_data.target_memory_value ());
	return st;
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_4 data) throw()
{
	sid::little_int_4 le_data;
	le_data.set_target_memory_value (data.target_memory_value ());
	return write(addr, le_data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_8& data) throw()
{
	return read(addr, (sid::little_int_4&) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_8& data) throw()
{
	return read(addr, (sid::big_int_4&) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_8 data) throw()
{
	return write(addr, (sid::little_int_4) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_8 data) throw()
{
	return write(addr, (sid::big_int_4) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_1& data) throw()
{
	return read(addr, (sid::little_int_4&) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_1& data) throw()
{
	return read(addr, (sid::big_int_4&) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_1 data) throw()
{
	return write(addr, (sid::little_int_4) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_1 data) throw()
{
	return write(addr, (sid::big_int_4) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::little_int_2& data) throw()
{
	return read(addr, (sid::little_int_4&) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_2& data) throw()
{
	return read(addr, (sid::big_int_4&) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_2 data) throw()
{
	return write(addr, (sid::little_int_4) data);
}

sid::bus::status
	HDL_pwm::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_2 data) throw()
{
	return write(addr, (sid::big_int_4) data);
}

