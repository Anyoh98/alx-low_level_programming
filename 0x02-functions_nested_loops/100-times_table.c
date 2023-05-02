#include "main.h"

/**
 * print_times_table - Print n times table starting with 0 with 15<n<0;
 * @n: Number to be multiplied.
 * Return: void.
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == 0)
				{
					_putchar(result + 48);
				}
				if (result < 100 && result > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + 48);
				}
				if (result < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result % 10 + 48);
				}
				if (result > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(result / 100 + 48);
					_putchar(result % 10 + 48);
					_putchar(result % 10 + 48);
				}
			}
		}
	}
}
