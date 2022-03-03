#include <stdlib.h>

/**
 * _calloc - implementation of calloc.
 * @nmemb: number of members of the array.
 * @size: size of each member.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	size_t i;

	s = malloc(nmemb * size);
	if (s == NULL || nmemb == 0 || size == 0)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		*(s + i) = 0;
	return (s);
}
