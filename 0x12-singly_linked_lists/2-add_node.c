#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
 * add_node- adds a new node at the beginning of a list_t list.
 * @head: addres of head pointer.
 * @str: string to be stored in the new node.
 * Return: number of new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
		return (NULL);
	new->len = str_len((char *)str);
	new->next = *head;
	*head = new;
	return (new);
}
