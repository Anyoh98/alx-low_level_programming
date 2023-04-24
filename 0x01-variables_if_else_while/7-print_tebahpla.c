#include <stdio.h>

/**
 * main: Entry point
 * Description:Print lower case alphabet in reverse
 * Return: Always 0
 */

int main(void)
{
	int lowerCase;

	for (lowerCase >= 122; lowerCase > 97; lowerCase--)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
