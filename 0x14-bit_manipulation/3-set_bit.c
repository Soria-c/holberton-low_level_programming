#include "main.h"
/**
 * pow_2 - computes powers of 2.
 * @n: exponent.
 * Return: 2 to the n.
 */
unsigned long int pow_2(unsigned int n)
{
	unsigned int i;
	unsigned long int r = 1;

	if (!n)
		return (1);
	for (i = 0; i < n; i++)
		r *= 2;
	return (r);
}
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: input number.
 * @index: input index.
 * Return: 1 if worked, -1 if an error ocurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = *n | pow_2(index);
	return (1);
}
