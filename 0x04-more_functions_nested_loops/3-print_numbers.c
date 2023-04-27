#include "main.h"

/**
 * print_numbers - Print numbers 0 - 9
 * Return: No return valu for void.
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 59; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
