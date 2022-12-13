#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int num, mult, p;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			p = num * mult;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
			_putchar('\n');
	}
}
