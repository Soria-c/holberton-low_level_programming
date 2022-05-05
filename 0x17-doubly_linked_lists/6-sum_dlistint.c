#include "lists.h"

/**
 * sum_dlistint - sums values of a linked list
 * @head: address of linked list
 * Return: sum, 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
