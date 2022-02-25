#include <stdio.h>

/**
 * main - prints the number of command line arguments.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
