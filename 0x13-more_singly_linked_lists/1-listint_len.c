#include "lists.h"

/**
 * list_len - Returns the number of elements
 * in the linked listint_t list.
 * @h: A pointer to the head of the listint_t list,
 *
 * Return: The number of elements in the lists_t list.
 */
size_t list_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
