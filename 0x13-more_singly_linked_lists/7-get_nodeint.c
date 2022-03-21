#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Address of the curent head of the list.
 * @index: index of the nth node.
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *t;

	if (!head)
		return (NULL);
	for (i = 0, t = head; i < index; i++, t = t->next)
		;
	return (t);
}
