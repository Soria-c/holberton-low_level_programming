#include "main.h"

/**
 * puts_half - function that prints the second half of a string.
 * @str: input string
 */

void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (j = 0; *(str + j) != 0; j++)
		;
	if (j % 2 == 0)
	{
		for (i = j / 2; i < j; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (k = (j - 1) / 2; k < j; k++)
			_putchar(*(str + k));
	}
	_putchar('\n');
}
