#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: Address of the curent head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	for (; *head; *head = (*head)->next, free(t))
		t = *head;
	*head = NULL;
}
