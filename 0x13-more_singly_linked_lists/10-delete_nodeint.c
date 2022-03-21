#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a specific index.
 * @head: Address of the curent head of the list.
 * @index: index where the node should be deleted.
 * Return: 1 if successful, 0 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *t, *prev;

	if (!(*head))
		return (-1);
	t = *head;
	if (!index)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
		return (1);
	}
	for (i = 0; i < index - 1; i++, t = t->next)
		;
	if (!(t->next))
		return (-1);
	prev = t->next->next;
	free(t->next);
	t->next = prev;
	return (1);
}
