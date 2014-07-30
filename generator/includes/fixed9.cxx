}

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
