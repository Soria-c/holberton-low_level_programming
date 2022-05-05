#include "lists.h"

/**
 * get_dnodeint_at_index - search for a node at a given index
 * @head: address of linked list
 * @index: index of node
 * Return: address of node at index, NULL is not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head && index; head = head->next, index--)
		continue;
	return (head);
}
