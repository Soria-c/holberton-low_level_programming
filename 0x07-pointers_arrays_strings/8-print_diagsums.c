#include <stdio.h>

/**
 * print_diagsums- sum of the two diagonals of a square matrix of integers.
 * @a: casted integer array
 * @size: dimension of array
 */

void print_diagsums(int *a, int size)
{
	int i; 
	long int sum1, sum2;

	sum1 = sum2 = 0;

	for (i = size - 1; i < (size * size) - 1; i += size - 1)
		sum1 += a[i];
	for (; i > 0; i -= (size + 1))
		sum2 += a[i];
	printf("%ld, %ld\n", sum2, sum1);
}
