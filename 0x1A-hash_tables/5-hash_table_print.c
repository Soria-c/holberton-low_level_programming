#include "hash_tables.h"


/**
 * hash_table_print - prints the elements of a hash table
 * @ht: address of a given hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *tmp = NULL, *tmp2 = NULL;

	if (!ht)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp; tmp = tmp->next)
		{
			if (tmp2)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp2 = tmp;
		}
	}
	printf("}\n");
}
