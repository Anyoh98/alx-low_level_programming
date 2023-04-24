#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	while (x < 10)
	{
		putchar((10-x) + '0');
	
		if (x < 9)
		{
			putchar(44);
			putchar(32);
		}		
		x++;
	putchar('\n');
	}
}
