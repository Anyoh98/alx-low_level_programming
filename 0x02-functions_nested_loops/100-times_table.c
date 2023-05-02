#include "main.h"

/**
 * print_times_table - Print n times table starting with 0 with 15<n<0;
 * @n: Number to be multiplied.
 * Return: void.
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int result;

	if (n < 15 || n > 0)
	{
		for (n = 0; n <= 15; n++)
		{
			result = i * j;

			for (n = 0; n <= 15; n++)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}	
