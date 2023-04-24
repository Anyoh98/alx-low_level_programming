#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int lowerCase;

	for(lowerCase = 97; lowerCase < 123; lowerCase++)
	{
		if(lowerCase != 101 || lowerCase != 113)
		{
			putchar(lowerCase);
		}
	
	}
	putchar('\n');
	return (0);
	
}
