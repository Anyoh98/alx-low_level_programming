#include "lists.h"

/**
 * add_nodeint - funtion to add a new node to the begining of a linkzedlist
 * @head: pointer to pointer of the head ofnlinked list
 * @n: data feild of the node
 * Return: address of the new element or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create a new node and allocate memory for the new node*/
	listint_t *node_new = malloc(sizeof(listint_t));

	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n; /*store thevalue /'n/' inside the new nodes own /'n/'*/
	node_new->next = *head; /*store head pointer in the next new_node*/
	*head = node_new;

	return (node_new);
}
