#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints all the strings in optional parameters.
 * @separator: address of string to be used as a separator.
 * @n: number of parameters to be printed.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s == NULL ? "(nil)" : s);
		printf("%s", (separator && i < n - 1) ? separator : "");
	}
	va_end(args);
	printf("\n");
}
