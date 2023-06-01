#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of the list_t list
 * @h: pointer to the head of list_t
 * Return: number of nodes in the list, size_t.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str != NULL)
		{
			size_t length = 0;
			while (h->str[length] != '\0')
			{
				length++;
			}
			printf("[%lu] %s\n", length, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}

	return (counter);
}
