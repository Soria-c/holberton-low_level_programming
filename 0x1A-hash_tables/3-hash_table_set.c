#include "hash_tables.h"


/**
 * hash_table_set - adds an element to a hash table
 * @ht: address of a given hash table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (!key || !(*key) || !value || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (hash_table_check(ht, key, index))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		if (!ht->array[index]->value)
			return (0);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

/**
 * hash_table_check - checks if a key already exists in ht
 * @ht: address of a given hash table
 * @key: key of the element
 * @index: index of key
 * Return: 1 if it exists, 0 otherwise
 */
size_t
hash_table_check(const hash_table_t *ht, const char *key, unsigned int index)
{
	hash_node_t *node;

	node = ht->array[index];

	for (; node && strcmp(node->key, key); node = node->next)
		;
	if (!node)
		return (0);
	return (1);
}
