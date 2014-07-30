		if (fmod(main_time, ##frequency##) == 0) 
		{
			hdl_##MOD_NAME##->##name## = !hdl_##MOD_NAME##->##name##;
		}
