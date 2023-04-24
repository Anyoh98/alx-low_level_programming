#include <stdio.h>

/**
 * main - Entry poitn
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (n = 97;  n < 103; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
