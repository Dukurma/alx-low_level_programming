#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print sll numbers from input to 98
 * @n: number to begin count at
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d ", n--);
		printf("%d\n", n);
		printf(",");
	}
	else
	{
		while (n < 98)
			printf("%d ", n++);
		printf("%d\n", n);
		printf(",");
		}
}

