#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calcs minimum number of coins to make change for an amount of money.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	int c[5] = {25, 10, 5, 2, 1};
	int i, j, k, n;

	k = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; n > 0; i++)
	{
		if (c[i] <= n)
		{
			for (j = 0; n >= c[i]; j++)
			{

				n -= c[i];
				k++;
			}
		}
	}
	printf("%d\n", k);
	return (0);
}
