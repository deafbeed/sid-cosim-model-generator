	add_pin( "##MOD_NAME##-##name##", & this->hdl_##name##);
	add_attribute( "##name##", & this->hdl_##name##, "pin" );
	triggerpoint_manager.add_watchable_attribute ("##name##");
	categorize ("##name##", "watchable");

