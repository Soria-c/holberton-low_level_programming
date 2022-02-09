#include <stdio.h>

/**
 * main - calls the phi function*
 * @x: integer
 * @y: int one step behind x
 * @i: counter
 * Return: 0 if successful
 */
void phi(unsigned long x, unsigned long y, int i);
int main(void)
{
	phi(2, 1, 1);
	return (0);
}

/**
 * phi - fibonacci sequence
 * @x: integer
 * @y: one step behind x
 * @i: counter
 */
void phi(unsigned long x, unsigned long y, int i)
{
	i++;
	if (i <= 50)
	{
		unsigned long z = x;

		printf("%lu, ", y);
		x = x + y;
		y = z;
		phi(x, y, i);
	}
	else
	{
		printf("%lu", y);
		printf("\n");
	}
}
