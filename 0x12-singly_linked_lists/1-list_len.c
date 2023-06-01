#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Functin that returns No of elmnts in list_t linked list
 * @h: pointer to the head of list_t
 * Return: Number of elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
