#include "main.h"

/**
 * _strcmp - compares strings
 * @str1:pointer to string1
 * @str2:pointer to string2
 *
 * Return:0 if equal
 */

int _strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
