#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all the integers in optional parameters.
 * @separator: address of string to be used as a separator.
 * @n: number of parameters to be printed.
 * Return: sum.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		printf("%s", (separator && i < n - 1) ? separator : "");
	}
	va_end(args);
	printf("\n");
}
