#include <stdio.h>

/**
 * main - calls the phi function*
 * @x: integer
 * @y: int one step behind x
 * @i: counter
 * Return: 0 if successful
 */
void phi2(unsigned long x, unsigned long y, int i);
int main(void)
{
	unsigned long x, y, z;
	int i = 0;

	x = 2;
	y = 1;
	z = 0;
	while (i < 62)
	{
		i++;
		printf("%lu, ", y);
		z = x;
		x = x + y;
		y = z;
	}
	phi2(x, y, i);

	return (0);
}
void phi2(unsigned long x, unsigned long y, int i)
{
	unsigned long x1, x2, x3, y1, y2, y3, z1, z2, z3, exc, exc2;

	x1 = x / 10000000;
	x2 = (x / 1000000) % 1000000;
	x3 = x % 1000000;
	y1 = y / 10000000;
	y2 = (y / 1000000) % 1000000;
	y3 = y % 1000000;
	while (i < 99)
	{
		i++;
		if (i < 99)
			printf("%lu%lu%lu, ", y1, y2, y3);
		else
			printf("%lu%lu%lu\n", y1, y2, y3);
		z1 = x1;
		z2 = x2;
		z3 = x3;
		x3 = x3 + y3;
		exc2 = x3 / 1000000;
		x3 = x3 % 1000000;
		x2 = x2 + y2 + exc2;
		exc = x2 / 1000000;
		x2 = x2 % 1000000;
		x1 = x1 + y1 + exc;
		y1 = z1;
		y2 = z2;
		y3 = z3;
	}
}
