#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a specific index.
 * @head: Address of the curent head of the list.
 * @idx: index where the node should be added.
 * @n: value to be inserted
 * Return: address of teh new node, NULL if fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *t, *prev, *new;

	new = malloc(sizeof(listint_t));
	if (!head)
	{
		free(new);
		return (NULL);
	}
	if (!new || !(*head))
	{
		free(new);
		return (NULL);
	}
	if (!idx)
	{
		new->n = n;
		prev = (*head);
		*head = new;
		new->next = prev;
		return (new);
	}
	for (i = 0, t = *head; i < idx - 1; i++, t = t->next)
	{
		if (!(t->next))
		{
			free(new);
			return (NULL);
		}
	}
	prev = t->next;
	new->n = n;
	t->next = new;
	new->next = prev;
	return (new);
}
