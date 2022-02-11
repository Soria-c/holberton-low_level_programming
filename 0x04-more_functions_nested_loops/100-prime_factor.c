#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0 if successful
 */


int main(void)
{
	unsigned long int j, min;

	j = 612852475143;
	min = 2;
	while (min != 4020)
	{
		if (j % min != 0)
			min++;
		else
			j = j / min;
	}
	printf("%lu\n", j);
	return (0);
}
