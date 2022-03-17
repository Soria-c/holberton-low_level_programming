#include "lists.h"

/**
 * list_len- calculates  the number of elements in a linked list_t list.
 * @h: addres of first node.
 * Return: number of nodes / elements.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++, h = h->next)
		;
	return (i);
}
