#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s);
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (c[b] != '\0')
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
			b++;
		}
		a++;
	}

	return (s);
}
