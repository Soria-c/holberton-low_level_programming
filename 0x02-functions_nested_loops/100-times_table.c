/**
 * _putchar - prints char
 * @c: char input
 * Return: int
 */
int _putchar(char c);

/**
 * print_times_table - prints the n times table
 * @n: integer input
 */
void print_times_table(int n)
{
	int i, r, a, b, c;

	for (i = 0; i < n + 1; i++)
	{
		int j;

		if (n < 0 || n > 15)
			break;
		else if (n == 0)
		{
			_putchar('0' + n);
			_putchar('\n');
			break;
		}

		for (j = 0; j < n + 1; j++)
			{
			r = i * j;
			if (r < 100)
			{
				a = r / 10;
				b = r % 10;
				if (j == 0)
				{
					_putchar('0' + j);
					_putchar(',');
				}
				else if (a == 0)
				{
					if (j == n)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + b);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + b);
						_putchar(',');
					}
				}
				else if (j == n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + a);
					_putchar('0' + b);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(',');
				}
			}
			else
			{
				a = r / 100;
				b = (r / 10) % 10;
				c = r % 10;
				if (j == n)
				{
					_putchar(' ');
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar('0' + c);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar('0' + c);
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
