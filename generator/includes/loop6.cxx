		if ( last_change_##name## != hdl_##MOD_NAME##->##name##) 
		{
			hdl_##name##.drive(hdl_##MOD_NAME##->##name##);
			last_change_##name## = hdl_##MOD_NAME##->##name##;
		}
