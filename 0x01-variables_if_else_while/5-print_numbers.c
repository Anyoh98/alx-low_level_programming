#include <stdio.h>

/**
 * main - Entry point
 * Description: Print numbers from 0-9
 * Return: always 0 (success)
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
