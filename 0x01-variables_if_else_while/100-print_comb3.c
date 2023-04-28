#include <stdio.h>

/**
 * main - Print all possible different combinations of 2 digits
 * Return: Always 0 (sucesses)
*/

int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
		for (m = n + 1; m < 58; m++)
		{
			if (m != n)
			{
				putchar(n);
				putchar(m);
			}
			if (n == 56 && m == 57)
			{
				continue;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

