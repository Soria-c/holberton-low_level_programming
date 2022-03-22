#include "lists.h"

/**
 * free_loop - frees a listint_t linked list.
 * @h: address of the head pointer.
 * @n: one address before of loop node, NULL is there is no loop.
 * Return: size of the list that was free'd.
 */

size_t free_loop(listint_t **h, listint_t *n)
{
	listint_t *t;
	size_t i;

	for (i = 0; *h != n; *h = (*h)->next, free(t), i++)
		t = *h;
	*h = NULL;
	return (i);
}
/**
 * free_listint_safe - checks if there is a loop or not, frees when required.
 * @h: Address of the head of pointer.
 * Return: size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t f = 0;
	listint_t *l, *l2, *p;

	p = l = l2 = (*h);
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
		return (free_loop(h, NULL));
	if (l == p)
	{
		*h = (*h)->next;
		f = free_loop(h, l) + 1;
		free(p);
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
	f = free_loop(h, l) + 1;
	free(l);
	return (f);
}
