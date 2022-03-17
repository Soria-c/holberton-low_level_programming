#include <stdio.h>
#include "lists.h"

/**
 * print_list- prints all the elements of a list_t list.
 * @h: addres of first node.
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (i);
}
