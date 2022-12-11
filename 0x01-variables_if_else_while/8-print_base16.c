#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;
	char b;

	for (y = '0'; y <= '9'; b++)
		putchar(y);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
		putchar('\n');
	return (0);
}
