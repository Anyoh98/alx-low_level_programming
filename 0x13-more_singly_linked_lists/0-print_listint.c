#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Print all elements of the linked list listint_t
 * @h: head pointer of linked lst to be printed
 * Return: NUmber of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t counter = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n); /*n stores integer/data value for each node*/
		counter++; /* increment counter to count number of nodes*/
		current = current->next; /* move to the next node*/
	}
	return (counter);
}
