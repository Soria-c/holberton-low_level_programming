#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes of its own main function.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	int i, n;
	int (*p)() = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
		printf("%02hhx ", *(char *)(p + i));
	printf("\n");
	return (0);
}
