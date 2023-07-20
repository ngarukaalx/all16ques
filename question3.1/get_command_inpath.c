#include "main.h"

int find_command_in_path(char *token, char **array, char **argv, int cmdnum)
{
	char *com;

	com = create_path(token, array[0]);
	
	if (com == NULL)
	{
		return (1);
	}
	if (access(com,F_OK) == 0)
	{
		if (_execute_path(com, array, argv, cmdnum) == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		free(com);
		return (1);
	}
	return (0);
       	
}

