#include <stdlib.h>
/**
 * _calloc - allocates memory for an array (implementation of calloc)
 * @nmemb: number of elements.
 * @size: size of each element type.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(nmemb * size);
	if (f == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(f + i) = 0;
	return (f);
}

