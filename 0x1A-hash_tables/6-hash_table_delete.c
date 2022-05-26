#include "hash_tables.h"


/**
 * hash_table_delete - deletes a given hash table
 * @ht: address of a given hast table
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
		freell(ht->array[i]);
	free(ht->array);
	free(ht);
}

/**
 * freell - frees a linked list
 * @head: address of a given linked list
*/
void freell(hash_node_t *head)
{
	hash_node_t *tmp = NULL;

	for (; head; head = head->next, free(tmp->value), free(tmp->key), free(tmp))
		tmp = head;
}
