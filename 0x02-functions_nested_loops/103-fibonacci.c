#include <stdio.h>

/**
 * main - calls the phi function*
 * @x: integer
 * @y: int one step behind x
 * @sum: sum of even numbers
 * Return: 0 if successful
 */
void phi(unsigned long x, unsigned long y, unsigned long sum);
int main(void)
{
	phi(2, 1, 0);
	return (0);
}

/**
 * phi - fibonacci sequence
 * @x: integer
 * @y: one step behind x
 * @sum: sum of even numbers
 */
void phi(unsigned long x, unsigned long y, unsigned long sum)
{
	if (x < 4000000)
	{
		unsigned long z = x;

		if (x % 2 == 0)
			sum += x;
		x = x + y;
		y = z;
		phi(x, y, sum);
	}
	else
	{
		printf("%lu", sum);
		printf("\n");
	}
}
