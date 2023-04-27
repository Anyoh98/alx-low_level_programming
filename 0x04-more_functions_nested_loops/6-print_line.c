#include "main.h"

/**
 * print_line - Function draws a safe line
 * @n: number of times _ should be printed.
 * Return: no return value.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
