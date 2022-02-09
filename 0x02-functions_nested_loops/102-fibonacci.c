#include <stdio.h>

/**
 * main - calls the phi function*
 * @x: integer
 * @y: int one step behind x
 * Return: 0 if successful
 */
void phi(int x, int y);
int main(void)
{
	phi(2, 1);
	return (0);
}

/**
 * phi - fibonacci sequence sum
 * @x: integer
 * @y: one step behind x
 */
void phi(int x, int y)
{
	if (x < 50)
	{
		int z = x;

		printf("%d, ", y);
		x = x + y;
		y = z;
		phi(x, y);
	}
	else
	{
		printf("%d", y);
		printf("\n");
	}
}
