#include "search_algos.h"

/**
 * print - prints message
 * @x: index
 * @y: value
 * Return: index
 */
int print(int x, int y)
{
	printf("Value checked array[%d] = [%d]\n", x, y);
	return (x);
}

/**
 * linear_search - implementation of the algorithm
 * @array: pointer to array of integers
 * @size: size of the aray
 * @value: value to search for
 * Return: index of the value in array if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int i = -1;

	if (!array)
		return (-1);

	while ((++i < (int)size) && (value != array[i]))
		print(i, array[i]);
	return ((i == (int)size) ? -1 : print(i, array[i]));
}
