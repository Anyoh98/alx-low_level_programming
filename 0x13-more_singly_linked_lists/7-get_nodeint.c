#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a ll
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

    /* Traverse list till desired index or end of list is reached */
	while (current != NULL)
	{
		if (count == index)
		{
			/*Return the node at the desired index */
			return (current);
		}
		count++;
		current = current->next;
	}

    /* If the desired index is out of range, return NULL */
	return (NULL);
}
