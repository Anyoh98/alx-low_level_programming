#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: get the last digit of a number
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 98)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
