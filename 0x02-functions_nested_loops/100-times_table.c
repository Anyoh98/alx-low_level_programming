#include "main.h"

/**
 * print_times_table - Print n times table starting with 0 with 15<n<0;
 * @n: Number to be multiplied.
 * Return: void.
 */

void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n <= 15 && n >= 0)
	{
		result = i * j;
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (result < 100 && result > 10)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + 48);
					_putchar(',');
					_putchar(' ');

				}
				if (result < 10)
				{
					_putchar(result % 10 + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (result > 99)
				{
					_putchar(result / 100 + 48);
					_putchar(result % 10 + 48);
					_putchar(result % 10 + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
