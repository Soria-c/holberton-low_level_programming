#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: address to reallocate.
 * @old_size: old size of the array.
 * @new_size: new size of the array.
 * Return: pointer to allocated string, NULL if fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *ptr2;
	unsigned int i, n;

	ptr2 = (char *)ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	n = old_size;
	if (old_size > new_size)
		n = new_size;
	s = malloc(new_size);
	for (i = 0; i <= n; i++)
		*(s + i) = *(ptr2 + i);
	free(ptr2);
	
	return (s);
}
