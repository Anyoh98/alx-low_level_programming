#include <stdio.h>

/**
 * main - prints numbers from 0 - 9
 *
 * return: always (0)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		printf("%d", numb);
	}
	putchar('\n');
	return (0);
}
