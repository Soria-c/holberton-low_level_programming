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
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	s = malloc((nmemb + 1) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(s + i) = 0;
	return (s);
}
