#include "main.h"

int _execute_path(char *path, char **array, char **argv, int cmdnum)
{
	int status = 0;

	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		exit(1);
	}
	if (child_pid == 0)
	{
		if (execve(path, array, environ) == -1)
		{
			_print_f("%s: %d: %s: not found\n", argv[0], cmdnum, array[0]);
			free(path);
			_exit(-1);
		}
	}
	else
	{
		wait(&status);
		free(path);
		return (0);
	}
	return (status);
}
