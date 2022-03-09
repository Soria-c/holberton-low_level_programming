#include <stdlib.h>

/**
 * array_iterator - callbacks another function.
 * @array: address of an array of int.
 * @size: size of the array
 * @action: address of function to be used.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
