// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom Script Commands
 * Place the body of custom script commands in this file.
 * Format:
 *	BUILDIN_FUNC(command_name)
 *	{
 *		<code>;
 *	}
 **/

//BUILDIN_FUNC(example)
//{
//	ShowInfo("buildin_example: It works!\n");
//	script_pushint(st,1);
//	return 0;
//}

BUILDIN_FUNC(attendance_addpoints) 
{
	TBL_PC* sd;
	if (!script_rid2sd(sd))
		return SCRIPT_CMD_FAILURE;

	int points = script_getnum(st, 2);

	pc_attendance_addpoints(sd, points);

	return SCRIPT_CMD_SUCCESS;
}