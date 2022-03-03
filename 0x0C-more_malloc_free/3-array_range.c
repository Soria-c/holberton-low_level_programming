#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first number.
 * @max: last number.
 * Return: pointer to allocated memory.
 */
int *array_range(int min, int max)
{
	int *c;
	unsigned long i, n2;

	if (min > max)
		return (NULL);
	if (max - min < 0)
		n2 = (max - min) * -1;
	else
		n2 = max - min;
	c = malloc((n2 + 1) * 4);
	if (c == NULL)
		return (NULL);
	for (i = 0; i <= n2; i++)
		*(c + i) = i + min;
	return (c);
}
