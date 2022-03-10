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
	int i, bl, j, ff;
	va_list args;
	char *cn;
	char ch[] = {'i', 'c', 'f', 's'};

	va_start(args, format);
	i = bl = ff = 0;
	while ((format[i] != '\0') && format)
	{
		j = 0;
		while (j < 4 && ff == 1)
		{
			if (format[i] == ch[j])
				printf(", ");
			j++;
		}
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				ff = 1;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				ff = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				ff = 1;
				break;
			case 's':
				cn = va_arg(args, char *);
				ff = 1;
				if (!cn)
				{
					printf("(nil)");
					break;
				}
				printf("%s", cn);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
