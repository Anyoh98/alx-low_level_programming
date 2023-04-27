#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: return is void.
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		for (j = 48; j <= 58; j++)
		{
			_putchar(j);
		}
		_putchar(i);
		i++;
	}
}
