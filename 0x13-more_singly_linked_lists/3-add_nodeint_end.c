#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function that adds a new node at the end of a list
 * @head: pointer to a pointer to the head of the list
 * @n: value to be assigned to th enew node
 * Return: address of the element or NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	/*create a new node and allocate memory for it*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/*if list is empty make the new node the head*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/*move throught the list to find the last node*/
		current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
