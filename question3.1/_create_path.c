#include "main.h"

char *create_path(char *token, char *command)
{
	int token_len = _strlen(token);
	
	int x, z;

	int command_len = _strlen(command);

	char *path = malloc(sizeof(char) * (token_len + command_len + 2));

	if (path == NULL)
	{
		free(path);
		return(NULL);
	}
	for (x = 0; x < token_len; x++)
	{
		path[x] = token[x];
	}
	path[x++] = '/';
	
	for (z = 0; z < command_len; z++, x++)
	{
		path[x] = command[z];
	}
	path[x] = '\0';
	return (path);

}

