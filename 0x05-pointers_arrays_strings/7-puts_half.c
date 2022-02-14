#include "main.h"

/**
 * puts_half - function that prints the second half of a string.
 * @str: input string
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (j = 0; *(str + j) != 0; j++)
		;
	for (i = 0; i < j; i++)
	{
		if (j % 2 == 0)
			_putchar(*(str + (i + j / 2)));
		else
			_putchar(*(str + (i + (j - 1) / 2)));

	}
	_putchar('\n');
}
