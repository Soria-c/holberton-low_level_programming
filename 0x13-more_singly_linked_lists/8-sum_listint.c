#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list..
 * @head: Address of the curent head of the list.
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *t;
	int sum = 0;

	if (!head)
		return (0);
	for (t = head; t; t = t->next)
		sum += t->n;
	return (sum);
}
