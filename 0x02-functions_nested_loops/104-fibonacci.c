#include <stdio.h>

/**
 * main - calls the phi function
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
	while (i < 44)
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

/**
 * phi2 - continuation of the series
 * @x: integer
 * @y: int one step behind x
 * @i: counter
 */
void phi2(unsigned long x, unsigned long y, int i)
{
	unsigned long x1, x2, x3, y1, y2, y3, z1, z2, z3, exc, exc2;

	x1 = x / 1000000000;
	x2 = (x / 100000) % 10000;
	x3 = x % 100000;
	y1 = y / 1000000000;
	y2 = (y / 100000) % 10000;
	y3 = y % 100000;
	while (i >= 44 && i < 87)
	{
		i++;
		if (y2 < 1000)
		{
			if (y2 < 100)
				printf("%lu00%lu%lu, ", y1, y2, y3);
			else if (y2 >= 100 && y2 < 1000)
				printf("%lu0%lu%lu, ", y1, y2, y3);
		}
		else if (y3 < 10000)
		{
			if (y2 >= 1000 && y2 < 10000)
				printf("%lu%lu0%lu, ", y1, y2, y3);
		}
		else
			printf("%lu%lu%lu, ", y1, y2, y3);
		z1 = x1;
		z2 = x2;
		z3 = x3;
		x3 = x3 + y3;
		exc2 = x3 / 100000;
		x3 = x3 % 100000;
		x2 = x2 + y2 + exc2;
		exc = x2 / 10000;
		x2 = x2 % 10000;
		x1 = x1 + y1 + exc;
		y1 = z1;
		y2 = z2;
		y3 = z3;
	}

	x2 = x2 + ((x1 % 10000) * 10000);
	x1 = x1 / 10000;
	y2 = y2 + ((y1 % 10000) * 10000);
	y1 = y1 / 10000;
	while (i >= 87 && i < 98)
	{
		i++;
		if (i < 98)
		{
			if (y2 < 10000000)
			{
				if (y2 < 1000000)
					printf("%lu00%lu%lu, ", y1, y2, y3);
				else if (y2 >= 1000000 && y2 < 10000000)
					printf("%lu0%lu%lu, ", y1, y2, y3);
			}
			else if (y3 < 10000)
			{
				if (y2 >= 1000 && y2 < 10000)
					printf("%lu%lu0%lu, ", y1, y2, y3);
			}
			else
				printf("%lu%lu%lu, ", y1, y2, y3);
			z1 = x1;
			z2 = x2;
			z3 = x3;
			x3 = x3 + y3;
			exc2 = x3 / 100000;
			x3 = x3 % 100000;
			x2 = x2 + y2 + exc2;
			exc = x2 / 100000000;
			x2 = x2 % 100000000;
			x1 = x1 + y1 + exc;
			y1 = z1;
			y2 = z2;
			y3 = z3;
		}
		else
			printf("%lu%lu%lu\n ", y1, y2, y3);
	}
}

