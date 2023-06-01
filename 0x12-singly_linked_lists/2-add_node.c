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
	if (str != NULL)
	{
		unsigned int len = 0;
		list_t *new_node;

		while (str[len] != '\0')
                {
                        len++;
                }

		new_node = (list_t *)malloc(sizeof(list_t));
		
		if (new_node == NULL)
                        return (NULL);
		new_node->str = strdup(str);

		if (new_node->str == NULL)
                {
                        free(new_node);
                        return (NULL);
                }
                new_node->len = len;
                new_node->next = *head;
                *head = new_node;
	}
	 else
        {
                return (NULL);
        }
	return (*head);
}
