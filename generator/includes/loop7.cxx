void HDL_##MOD_NAME##::HDL_##name##_handler (sid::host_int_4 val) 
{
	// Get the width of the signal
	if ((val >= 0) && (val < pow(2.0, ##width##))) 
	{
		hdl_##MOD_NAME##->##name## =  val;
	} 
	else 
	{
		cerr << "HDL_##MOD_NAME## Error: Tried to drive " << val << " for input signal of width " << ##width## << endl;
	}
}

