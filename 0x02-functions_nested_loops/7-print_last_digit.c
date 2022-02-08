#include <stdio.h>
/**
 * _putchar - prints char
 * @c: char input
 * Return: int
 */
int _putchar(char c);

/**
 * print_last_digit - prints last digit of a numbre
 * @x: integer input
 * Return: the last digit of a number
 */

int print_last_digit(int x)
{
	int l;

	if (x < 0)
		x = x * -1;
	l = x % 10;
	_putchar('0' + l);
	return (l);
}
