#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function taht adds a new node at the end of list_t
 * @head: pointer to pointer of the head of list_t
 * @str: string to be stored in the new string
 * Return: address of the new element, or NULL if memory alloction failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	if (str != NULL)
	{
		list_t *new_node;
		list_t *ptr_node = *head;
		unsigned int len = 0;

		while (str[len] != '\0')
			len++;

		new_node = malloc(sizeof(list_t));
		if (new_node != NULL)
			return (NULL);

		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = len;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		while (ptr_node->next)
		{
			ptr_node = ptr_node->next;
		}
		ptr_node->next = new_node;
		return (new_node);
	}
	else
	{
		return (NULL);
	}
}
