#include "lists.h"

/**
 * listint_len - Function returns number of elements in a listint_t list
 *
 * @h: Pointer to head of the list
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
