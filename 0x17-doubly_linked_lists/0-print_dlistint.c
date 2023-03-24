#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: The head of the distint_t list
 *
 * Return: The number nodes in the list.
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

