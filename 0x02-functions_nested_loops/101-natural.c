#include <stdio.h>

/**
 * main - compute the sum of multiples of 5 and 3 below 1024.
 * Return: always return 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		printf("%d", i);
	}
	return (0);
}
