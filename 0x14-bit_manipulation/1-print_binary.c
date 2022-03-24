#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: input number.
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int n2 = n;

	for (i = 0; n2; i++)
		n2 = n2 >> 1;
	for (i = i - 1; i > 0 && n; i--)
		_putchar(((n >> i * 1) & 1) + '0');
	_putchar(((n >> i * 1) & 1) + '0');
}
