sid::bus::status
	HDL_##MOD_NAME##::HDL_register_bus::write(sid::host_int_4 addr, sid::##endian##_int_##bus_size## data) throw()
{
	return write(addr, (sid::##endian##_int_##base_bus_size##) data);
}

