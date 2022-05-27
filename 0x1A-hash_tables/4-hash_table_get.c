#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: address of a given hash table
 * @key: key of the element
 * Return: value associated with a key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || !(*key) || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	for (; node && strcmp(node->key, key); node = node->next)
		;
	if (!node)
		return (NULL);
	return (node->value);
}
