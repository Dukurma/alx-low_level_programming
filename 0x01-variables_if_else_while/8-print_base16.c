#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char b;

	for (num = '0'; num <= '9'; num++)
		putchar((num % 10) + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
		putchar('\n');
	return (0);
}
