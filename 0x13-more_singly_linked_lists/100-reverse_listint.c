#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Address of the curent head of the list.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t, *s;

	for (s = NULL; *head; s = *head, *head = t)
	{
		t = (*head)->next;
		(*head)->next = s;
	}
	*head = s;
	return (*head);
}
