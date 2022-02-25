#include <stdio.h>

/**
 * main - prints name of the current program.
 * @argc: number of command line arguments.
 * @argv: array containing the program command line arguments.
 * Return: 0 if successful.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
