#include "lists.h"

/**
 * listint_len - create function to return number of leements in linked lists
 * @h: header pointer to node 1 of linked list
 * Return: Number of elements in teh linked list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t counter = 0;

	while (current != NULL)
	{
		counter++;
		current =  current->next;
	}
	return (counter);
}
