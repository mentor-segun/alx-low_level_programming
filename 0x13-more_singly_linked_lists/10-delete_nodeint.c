#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index
 *			of listint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node that should be deleted (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}

		prev = temp;
		temp = temp->next;
		count++;
	}

	return (-1);
}
