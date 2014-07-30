sid::bus::status
	HDL_##MOD_NAME##::HDL_register_bus::read(sid::host_int_4 addr, sid::big_int_##read_bus_size##& data) throw()
{
	sid::little_int_##read_bus_size## le_data;
	sid::bus::status st = read(addr, le_data);
	data.set_target_memory_value (le_data.target_memory_value ());
	return st;
}

sid::bus::status
	HDL_##MOD_NAME##::HDL_register_bus::write(sid::host_int_4 addr, sid::big_int_##write_bus_size## data) throw()
{
	sid::little_int_##write_bus_size## le_data;
	le_data.set_target_memory_value (data.target_memory_value ());
	return write(addr, le_data);
}

