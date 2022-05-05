#include "lists.h"

/**
 * dlistint_len - computes number of elements in a linked list
 * @h: address of linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
		continue;
	return (i);
}
