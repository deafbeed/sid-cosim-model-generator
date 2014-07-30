sid::bus::status
	HDL_##MOD_NAME##::HDL_register_bus::write(sid::host_int_4 addr, sid::little_int_##bus_size## data) throw()
{
	int error_status = 0;
	if ((addr % ##bus_size##) != 0)
	{
		return sid::bus::misaligned;
	}
	if ((addr / ##bus_size##) > ##registers##)
	{
		return sid::bus::unmapped;
	}
	addr = addr/##bus_size##;

