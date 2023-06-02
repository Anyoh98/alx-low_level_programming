#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning list_t
 * @head: pointer to pointer of the head of list_t
 * @str: string to be duplicated at saved in the new node.
 * Return: address of new element or NULL if memory allocation failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	if (str == NULL)
		return (NULL);
	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[length])
	{
		length++;
	}

	new_node->len = length;
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
