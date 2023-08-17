#include "lists.h"

/**
 * print_dlistint - prints all the elements in the list
 * @h: the head of th elist
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count;

	node_count = 0;
	if (h == NULL)
		return (node_count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h->next;
	}
	return (node_count)
}
