#include <stdio.h>

/**
 * main: Print lower case alphabet in reverse
 *
 * Return: Always 0 
 */

int main (void)
{
	int lowerCase;

	for (lowerCase = 123; lowerCase > 97; lowerCase--)
	{
		putchar(lowerCase);
	}	
	putchar('\n');
	return (0);
}
