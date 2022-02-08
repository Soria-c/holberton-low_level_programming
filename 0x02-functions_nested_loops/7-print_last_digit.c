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
	long int l;
	l = x;
	
	if (l < 0)
		l = l * -1;
	l = l % 10;
	_putchar('0' + l);
	return (l);
}
