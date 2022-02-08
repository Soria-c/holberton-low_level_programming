/**
 * print_sign - checks sign of an integer
 * @n: integer input
 * Return: 1 if positive, -1 if negative, 0 if 0
 */

int _putchar(char c);

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}	
