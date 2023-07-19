#include "main.h"
/**
* handle_line - the function name
* @line: parameter of type char *.
* @num_tokens: parameter of type int .
* @argv: parameter of type char **.
* @cmdnum: parameter of type int .
* __attribute__ - unused.
* Return: int .
*/
int handle_line(char *line, int num_tokens,
char __attribute__((__unused__)) **argv,
int __attribute__((__unused__)) cmdnum)
{
	char **array2 = NULL;
	int status = 0;

	array2 = create_array_from_line(line, num_tokens, NULL);
	if (array2 == NULL)
	{
		return (1);
	}
	if (_strcmp(array2[0], "exit") == 0)
	{
		free_array(array2);
		free(line);
		exit(0);
	}
	free(line);
	free_array(array2);
	return (status);
}
