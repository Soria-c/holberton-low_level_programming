#include <stdio.h>

/**
 * po_w - computes x to the power of y.
 * @x: base
 * @y: exponent.
 * Return: x to the y, 1 if y = 0.
 */
int po_w(int x, int y)
{
	int i, r = 1;

	if (!y)
		return (1);
	for (i = 0; i < y; i++)
		r *= x;
	return (r);
}
/**
 * str_len_c - computes lenght of a string of binary numbers.
 * @b: address of input string.
 * Return: lenght, 0 if not a valid binary number.
 */
int str_len_c(char *b)
{
	int i;

	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}
	return (i);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: address of input string
 * Return: converted number, 0 if b is NULL or b not valid number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int l, i, l2;
	char *b2;

	if (!b)
		return (0);
	b2 = (char *)b;
	l2 = str_len_c((char *)b);
	if (!l2)
		return (0);
	for (; *b2 != '1'; b2++)
		;
	l = str_len_c(b2);
	for (i = 0; i < l; i++, b2++)
		n += (po_w(2, l - 1 - i)) * (*b2 - '0');
	return (n);
}
