#include "main.h"

/**
 * print_number - prints the input number
 * @n: input number
 */

void print_number(int n)
{
	int y, i, j, x, o, z;

	y = n;
	o = 1;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	for (i = 0; y != 0; i++)
		y /= 10;
	for (z = 1; z < i; z++)
		o *= 10;
	if (n == 0)
		_putchar('0' + n);
	for (j = 0; j < i; j++)
	{
		x = n / o;
		_putchar('0' + x);
		n = n % o;
		o /= 10;
	}
}
