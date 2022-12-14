#include <stdio.h>
/**
 * main - List all natural numbers below 1024 (excluded).
 * that are multiples of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
	int b, sum = 0;

	for (b = 0; b < 1024; b++)
	{
		if ((b % 3) == 0 || (b % 5) == 0)
			sum += b;
	}
	printf("%d\n", sum);
	return (0);
}
