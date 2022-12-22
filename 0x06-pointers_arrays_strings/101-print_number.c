#include "main.h"

/**
 * print_number - prints an integer
 * @n: input parameter
 *
 * Return: the integer
 */
void print_number(int n)
{
	unsigned int i = n;

	if (i < n)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
