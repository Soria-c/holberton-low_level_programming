#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes required.
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	size_t *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
