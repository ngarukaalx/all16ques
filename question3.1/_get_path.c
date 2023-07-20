#include "main.h"

char *get_path(void)
{
	char *path = getenv("PATH");

	if (path == NULL)
	{
		perror("Error");
		return (NULL);
	}
	return (path);
}
