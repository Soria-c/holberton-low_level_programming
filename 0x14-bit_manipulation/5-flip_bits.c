#include "main.h"

/**
 * flip_bits - computes number of bits flip to turn n into m.
 * @m: input integer.
 * @n: input integer.
 * Return: number of flips required.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, c = 0;

	if (m == n)
		return (0);
	for (i = 0; i < 64; i++, n = n >> 1, m = m >> 1)
	{
		if ((n & 1) != (m & 1))
			c++;
	}
	return (c);
}
