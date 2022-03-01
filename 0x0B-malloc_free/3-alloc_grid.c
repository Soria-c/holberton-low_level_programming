#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array.
 * @width: columns.
 * @height: rows.
 * Return: pointer to the 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int j, k, i;

	if (width <= 0 || height <= 0)
		return (0);
	m = malloc(8 * height);
	if (m == NULL)
	{
		free(m);
		return (0);
	}
	for (j = 0; j < height; j++)
	{
		m[j] = malloc(4 * width);
		if (m[j] == NULL)
		{
			free(m);
			return (0);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (i = 0; i < width; i++)
			m[k][i] = 0;
	}
	return (m);
}
