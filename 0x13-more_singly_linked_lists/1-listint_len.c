#include "lists.h"

/**
 * listint_len - computes the number of elements of a linked list.
 * @h: Address of the head of the list.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = h->next)
		;
	return (i);
}
