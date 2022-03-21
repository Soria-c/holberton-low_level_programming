#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: Address of the curent head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	for (; head; head = head->next, free(t))
		t = head;
}
