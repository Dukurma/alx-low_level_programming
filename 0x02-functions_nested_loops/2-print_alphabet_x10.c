#include "main.h"

/**
 * print_alphabet_x10 - print x10 times in lower case
 *
 * Return: 0 Success
 */
void print_alphabet_x10(void)
{
	int b = 0;
	char a;

	while (b++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
	}
}
