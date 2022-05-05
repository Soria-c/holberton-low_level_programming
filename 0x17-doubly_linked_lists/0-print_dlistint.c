#include "lists.h"

/**
 * print_dlistint - prints elements of a linked list
 * @h: address of linked list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
