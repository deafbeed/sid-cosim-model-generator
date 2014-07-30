sid::bus::status
      HDL_##MOD_NAME##::HDL_register_bus::read(sid::host_int_4 addr, sid::##endian##_int_##bus_size##& data) throw()
{
	return sid::bus::unpermitted;
}

