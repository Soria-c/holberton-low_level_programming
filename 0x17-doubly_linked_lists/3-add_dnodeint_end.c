#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end in a doubly linked list
 * @head: address of linked list
 * @n: new value
 * Return: address of new nodet
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	for (; tmp->next; tmp = tmp->next)
		continue;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
