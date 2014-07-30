	 hdl_reg_bus (this)
{
	// Instantiate the HDL Model
	hdl_##MOD_NAME## = new V##FILE_NAME##; 

	hdl_init_signals();

	sid_init_signals();

	identifier = "__ipi_empty";
	add_attribute("identifier", &identifier);

	first_call = false;

}

// Destructor
HDL_##MOD_NAME##::~HDL_##MOD_NAME##()
{
#if VM_TRACE
	vcdfp->close();	
#endif

}

void HDL_##MOD_NAME##::Open_VCD(void)
{
  if (identifier == "__ipi_empty")
  {
        printf("Error: Identifier not specified for ##MOD_NAME##.\n");
        exit(1);
  }

  char vcd_file_name[256];
  sprintf(vcd_file_name, "hdl_##MOD_NAME##.%s.vcd", identifier.c_str());
  printf("Identifier: %s (%s)\n", identifier.c_str(), vcd_file_name);
  vcdfp->open (vcd_file_name);  // Open the dump file

}

void HDL_##MOD_NAME##::advance_time (void) 
{
#if VM_TRACE
	if (main_time == 0)
		this->Open_VCD();
#endif

