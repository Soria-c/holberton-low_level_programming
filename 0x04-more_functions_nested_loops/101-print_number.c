#include "main.h"

/**
 * print_number - prints the input number
 * @n: input number
 * reverse - reverses the input integer n
 * @i: number of digits
 * Return: reversed number
 */

int reverse(int n, int i);
void print_number(int n)
{
	int y, i, j, x, r;

	y = n;
	for (i = 0; y != 0; i++)
		y /= 10;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0' + n);
	r = reverse(n, i);
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
int reverse(int n, int i)
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
