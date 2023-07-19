#include "main.h"

/**
 * env_var - fuction name prints environment variables
 */

int env_var(void)
{
	char **env;

	for (env = environ; *env != NULL ; env++)
	{
		_print_f("%s\n", *env);
	}
	return (0);
}
