// Clock helper functions
void HDL_##MOD_NAME##::advance_half_cycles (int half_cycles)
{
	while (half_cycles) 
	{
		advance_time();
		half_cycles--;
	}
}

void HDL_##MOD_NAME##::advance_cycles (int cycles)
{
	advance_half_cycles (2*cycles);
}

// True for posedge, False for negedge
void HDL_##MOD_NAME##::advance_till_edge (bool posedge) 
{
	int val = (posedge)?0:1;
	if (hdl_##MOD_NAME##->##BUS_CLOCK_NAME## == val)
	{
		advance_half_cycles(1);
	} 
	else 
	{
		advance_half_cycles(2);
	}
}


// SID Infrastructure Functions

// Return a list of component types supported by this library.
static vector<string>
HDL##MOD_NAME##ListTypes()
{
  vector<string> types;
  types.push_back("hw-hdl-##MOD_NAME##");
  return types;
}

// Instantiate a component, given a specified component type.
static sid::component*
HDL##MOD_NAME##Create(const string& typeName)
{
  if (typeName == "hw-hdl-##MOD_NAME##")
    return new HDL_##MOD_NAME##();

  return 0;
}

// Destruct a component instance.

static void
HDL##MOD_NAME##Delete(sid::component* c)
{
  delete dynamic_cast<HDL_##MOD_NAME##*>(c);
}

// This symbol is used by the library loader to validate the library
// and instantiate components of the types supported by this library.

// static object
DLLEXPORT extern const sid::component_library hdl_##MOD_NAME##_component_library;

const sid::component_library hdl_##MOD_NAME##_component_library =
{
  sid::COMPONENT_LIBRARY_MAGIC,
  & HDL##MOD_NAME##ListTypes, 
  & HDL##MOD_NAME##Create,
  & HDL##MOD_NAME##Delete
};

////////////////////////////////// Tail Ends
