#include "main.h"

/**
 * print_number - prints the input number
 * @n: input number
 * reverse - reverses the input integer n
 * @i: number of digits
 * Return: reversed number
 */

unsigned int reverse(unsigned int n, int i);
void print_number(int n)
{
	int y, i, j, x, r;
	unsigned int v = n;

	y = v;
	for (i = 0; y != 0; i++)
		y /= 10;
	if (v < 0)
	{
		v *= -1;
		_putchar('-');
	}
	if (v == 0)
		_putchar('0' + v);
	r = reverse(v, i);
	for (j = 0; j < i; j++)
	{
		x = r % 10;
		_putchar('0' + x);
		r /= 10;
	}
}
/**
 * reverse - reverses the input integer n
 * @n: input integer
 * @i: number of digits of input number
 * Return: reversed number
 */
unsigned int reverse(unsigned int n, int i)
{
	int o, d, j, z, x;

	d = 0;
	o = 1;
	for (z = 1; z < i; z++)
		o *= 10;
	for (j = 0; j < i; j++)
	{
		x = (n % 10) * o;
		d += x;
		n /= 10;
		o /= 10;
	}
	return (d);
}
