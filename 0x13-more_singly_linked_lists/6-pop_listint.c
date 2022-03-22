#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: Address of the curent head of the list.
 * Return: data of node deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *t;

	if (!head)
		return (0);
	if (!(*head))
		return (0);
	t = *head;
	*head = (*head)->next;
	return (t->n);
}
