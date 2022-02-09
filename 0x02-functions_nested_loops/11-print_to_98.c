#include <stdio.h>

/**
 * print_to_98 - given a number counts from it to 98
 * @n: integer input
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
	else
	{

		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
}
