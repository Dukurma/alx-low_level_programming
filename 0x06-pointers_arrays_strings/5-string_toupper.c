#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	char *c;

	for (c = s; *c; ++c)
	{
		if ('a' <= *c && *c <= 'z')
			*c -= 'a' - 'A';
	}
	return (s);
}
