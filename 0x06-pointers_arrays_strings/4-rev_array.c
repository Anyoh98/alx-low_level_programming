#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: input array.
 * @n: Number of integers in array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int index = 0;
	int m;

	while (index < n / 2)
	{
		m = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = m;
		index++;
	}
}
