#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: address of linked list
 * @idx: index
 * @n: value
 * Return: new node, 0 if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	if (!(*h))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!idx)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (; tmp && idx; tmp = tmp->next, idx--)
		continue;
	if (!tmp)
	{
		free(new);
		return (NULL);
	}
	if (tmp->next)
	{
		tmp = tmp->prev;
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}
	new->prev = tmp;
	new->next = NULL;
	tmp->next = new;
	return (new);
}
