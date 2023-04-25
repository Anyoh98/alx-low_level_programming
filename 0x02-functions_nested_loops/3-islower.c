#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 *
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	int i;
	i=0;

	while (i < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
