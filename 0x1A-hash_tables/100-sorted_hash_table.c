#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the hasstable
 * Return: address of new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to a hash table
 * @ht: address of a given hash table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new = NULL;

	if (!key || !(*key) || !value || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (hash_table_check_2(ht, key, index))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		if (!ht->array[index]->value)
			return (0);
		return (1);
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	new->snext = NULL;
	new->sprev = NULL;
	shash_table_set_sort(ht, new);
	return (1);
}

/**
 * shash_table_set_sort - adds an element to the sorted linked list
 * @ht: address of a given hash table
 * @node: node to add
 */
void shash_table_set_sort(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *t;

	if (!ht->shead || strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = node;
		ht->shead = node;
		ht->shead->sprev = NULL;
	}
	else
	{
		t = ht->shead;
		for (; t->snext && strcmp(node->key, t->snext->key) > 0; t = t->snext)
			;
		node->snext = t->snext;
		if (t->snext)
			t->snext->sprev = node;
		node->sprev = t;
		t->snext = node;
	}
	if (!node->snext)
		ht->stail = node;
}

/**
 * hash_table_check_2 - checks if a key already exists in ht
 * @ht: address of a given hash table
 * @key: key of the element
 * @index: index of key
 * Return: 1 if it exists, 0 otherwise
 */
size_t
hash_table_check_2(const shash_table_t *ht, const char *key,
					unsigned int index)
{
	shash_node_t *node;

	node = ht->array[index];

	for (; node && strcmp(node->key, key); node = node->next)
		;
	if (!node)
		return (0);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: address of a given hash table
 * @key: key of the element
 * Return: value associated with a key, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!key || !(*key) || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	for (; node && strcmp(node->key, key); node = node->next)
		;
	if (!node)
		return (NULL);
	return (node->value);
}


/**
 * shash_table_print - prints the elements of a hash table
 * @ht: address of a given hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL, *tmp2 = NULL;

	if (!ht)
		return;
	printf("{");

	for (tmp = ht->shead; tmp; tmp = tmp->snext)
	{
		{
			if (tmp2)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp2 = tmp;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the elements of a hash table in reverse
 * @ht: address of a given hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL, *tmp2 = NULL;

	if (!ht)
		return;
	printf("{");
	for (tmp = ht->stail; tmp; tmp = tmp->sprev)
	{
		{
			if (tmp2)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp2 = tmp;
		}
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes a given hash table
 * @ht: address of a given hast table
 */
void shash_table_delete(shash_table_t *ht)
{
	size_t i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
		freellsh(ht->array[i]);
	free(ht->array);
	free(ht);
}

/**
 * freellsh - frees a linked list
 * @head: address of a given linked list
*/
void freellsh(shash_node_t *head)
{
	shash_node_t *tmp = NULL;

	for (; head; head = head->next, free(tmp->value), free(tmp->key), free(tmp))
		tmp = head;
}
