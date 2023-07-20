#include "main.h"

int search_comm(char **array, char **argv, int cmdnum)
{
	char *env = get_path();

	char *env_copy = strdup(env);

	char *token = strtok(env_copy, ":");

	if (env == NULL || env_copy == NULL)
	{
		return (1);
	}
	while (token != NULL)
	{
		if (find_command_in_path(token, array, argv, cmdnum) == 0)
		{
			free(env_copy);
			return (0);
		}
		token = strtok(NULL, ":");
	}
	free(env_copy);
	return (1);
}
