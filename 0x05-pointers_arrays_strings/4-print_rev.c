#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: input string
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (j = 0; *(s + j) != 0; j++)
		;
	for (i = j; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
