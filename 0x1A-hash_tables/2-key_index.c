#include "hash_tables.h"


/**
 * key_index- Computes the index of a given key
 * @key: key of the element
 * @size: value of the element
 * Return: index of a fiven key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
