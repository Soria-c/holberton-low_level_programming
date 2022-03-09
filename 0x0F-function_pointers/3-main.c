#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints name of the current program.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
