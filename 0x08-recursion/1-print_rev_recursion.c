#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	int i;
	
	if (s[i])
	{
		_print_rev_recursion(s[i] + 1);
		_putchar(s[i]);
	}
}
