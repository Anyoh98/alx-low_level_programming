#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers
 * @a: input integer.
 * @n: Number of integers.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int index = 0;
	int m;

	for (index = 0; a[index] != 0; index++)
	{
		n++;
	}
	while (index < n--)
	{
		m = a[index];
		a[index] = a[n];
		a[n] = m;
		index++;
	}
}
