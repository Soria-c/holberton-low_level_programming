#include "lists.h"

/**
 * print_loop - prints a listint_t linked list.
 * @p: address of the head.
 * @n: one address before of loop node, NULL is there is no loop.
 * Return: number of nodes.
 */

size_t print_loop(listint_t *p, listint_t *n)
{
	size_t i;

	for (i = 0; p != n; i++, p = p->next)
		printf("[%p] %d\n", (void *)&(p->n), p->n);
	return (i);
}
/**
 * print_listint_safe - checks if there is a loop or not.
 * @head: Address of the head of the list.
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t f = 0;
	listint_t *l, *l2, *p;

	p = l = l2 = (listint_t *)head;
	while (l && l2 && l2->next)
	{
		l = l->next, l2 = l2->next->next;
		if (l == l2)
		{
			f = 1;
			break;
		}
	}
	if (!f)
		return (print_loop(p, NULL));
	if (l == p)
	{
		printf("[%p] %d\n", (void *)&(l->n), l->n);
		f = print_loop(p->next, l) + 1;
		printf("-> [%p] %d\n", (void *)&(l->n), l->n);
		return (f);
	}
	for (; ; p = p->next)
	{
		for (; l->next != l2; l = l->next)
		{
			if (l->next == p)
			{
				f = 0;
				break;
			}
		}
		if (!f)
			break;
		l = l2;
	}
	f = print_loop((listint_t *)head, l) + 1;
	printf("[%p] %d\n", (void *)&(l->n), l->n);
	printf("-> [%p] %d\n", (void *)&(l->next->n), l->next->n);
	return (f);
}
