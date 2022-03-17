#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_len - lenght of a string
 * @str: string recieved
 *
 * Return: counter i
 */

int str_len(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		continue;
	return (i);
}
/**
 * add_node_end- adds a new node at the end of a list_t list.
 * @head: addres of head pointer.
 * @str: string to be stored in the new node.
 * Return: address of new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *s;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = str_len((char *)str);
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	for (s = *head; ;  s = s->next)
	{
		if (!(s->next))
		{
			s->next = new;
			break;
		}
	}
	return (new);
}
