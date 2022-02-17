#include <stdio.h>
/**
 * infinite_add - function that adds two numbers
 * @n1: input number 1
 * @n2: input number 2
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, s, y, x, n, t;
	char z, q, m;

	s = 0;
	for (j = 0; *(n1 + j) != '\0'; j++)
		continue;
	for (i = 0; *(n2 + i) != '\0'; i++)
		continue;
	t = j;
	if (i > j)
		t = i;
	for (k = 1; k <= t; k++)
	{
		if (k + 1 >= size_r)
			return (0);
		q = (s / 10);
		if (k <= j && t == i)
			s = (*(n1 + (j - k)) - '0') + (*(n2 + (i - k)) - '0') + q;
		else if (k <= i && t == j)
			s = (*(n1 + (j - k)) - '0') + (*(n2 + (i - k)) - '0') + q;
		else
		{
			if (t == i)
				s = (*(n2 + (i - k)) - '0') + q;
			else if (t == j)
				s = (*(n1 + (j - k)) - '0') + q;
		}
		z = s % 10;
		*(r + (k - 1)) = z + '0';
	}
	if (s >= 10)
		*(r + (k - 1)) = (s / 10) + '0';
	else
		*(r + (k - 1)) = '\0';
	/*string reverse*/
	x = 0;
	for (y = 0; *(r + y) != '\0' ; y++)
		continue;
	n = y;
	if (y % 2 == 0)
		n--;
	for (y = y - 1; (y != n / 2) && r[0] != '\0'; y--)
	{
		m = *(r + y);
		*(r + y) = *(r + x);
		*(r + x) = m;
		x++;
	}
	return (r);
}
