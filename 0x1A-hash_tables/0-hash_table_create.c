#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hasstable
 * Return: address of new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	h_table->size = size;
	h_table->array = calloc(size, sizeof(hash_node_t *));
	if (!h_table->array)
		return (NULL);
	return (h_table);
}
