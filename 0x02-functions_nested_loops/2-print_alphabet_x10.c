#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 *
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	int i;
	int a;
	i = 0;

	while (i < 10)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
