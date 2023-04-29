#include <stdio.h>

/**
 * main -  Print possible combinations of 3 digits
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				if (k == j && k == i)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (k == 57 && j == 56 && i == 55)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
