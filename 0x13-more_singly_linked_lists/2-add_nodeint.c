#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Function adds new node at beginning of listint_t
 *
 * @head: Pointer to pointer to the head of the list
 * @n: Value to be stored in new node
 *
 * Return: The address of the new element,
 *		or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
