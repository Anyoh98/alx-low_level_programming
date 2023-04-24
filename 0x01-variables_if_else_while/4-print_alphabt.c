#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int lowerCase = 97;

	for(lowerCase = 97; lowerCase <= 122; lowerCase++)
	{
		if(lowerCase != 101 && lowerCase != 122)
		{
			putchar(lowerCase);
		}
		putchar('\n');
		Return (0);
	}
}
