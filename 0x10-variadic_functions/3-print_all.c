#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything in optional parameters.
 * @format: format specifier.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	int i, bl;
	va_list args;
	char *cn;

	va_start(args, format);
	i = 0;
	while (!format)
		return;
	while (format[i])
	{
		bl = 0;
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				cn = va_arg(args, char *);
				if (!cn)
					cn = "(nil)";
				printf("%s", cn);
				break;
			default:
				bl = 1;
				break;
		}
		i++;
		if (!bl && format[i])
			printf(", ");
	}
	printf("\n");
}
