#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: the string to encode
 * Description: Each letter is replaced with the 13th letter after it.
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int a, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (c[b] != '\0')
		{
			if (s[a] == c[b])
			{
				s[a] = rot[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (s);
}

