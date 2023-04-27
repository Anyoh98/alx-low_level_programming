#include "main.h"

/**
 * print_most_numbers - Print numbers from 0-9  except 2 and 4.
 * Return: Return void.
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i > 59)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
