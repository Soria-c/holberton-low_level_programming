#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: address of linked list.
 */
void free_list(list_t *head)
{
	list_t *s;

	for (; head; free(s->str), free(s))
	{
		s = head;
		head = head->next;
	}
}
