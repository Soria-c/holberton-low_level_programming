#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first number.
 * @max: last number.
 * Return: pointer to allocated memory.
 */
int *array_range(int min, int max)
{
	int *c, i, n;

	n = max - min;
	if (n < 0)
		n = -n;
	c = malloc((n * 4) + 1);
	if (c == NULL || min > max)
	{
		free(c);
		return (NULL);
	}
	for (i = 0; i <= n; i++)
		*(c + i) = i + min;
	return (c);
}
