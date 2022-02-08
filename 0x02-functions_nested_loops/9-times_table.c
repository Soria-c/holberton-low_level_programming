/**
 * _putchar - prints char
 * @c: char input
 * Return: int
 */
int _putchar(char c);

/**
	 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int i, r, a, b;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			r = i * j;
			a = r / 10;
			b = r % 10;
			if (j == 0)
			{
				_putchar('0' + j);
				_putchar(',');
			}
			else if (a == 0)
			{
				if (j == 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + b);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + b);
					_putchar(',');
				}
			}
			else if (j == 9)
			{
				_putchar(' ');	
				_putchar('0' + a);
				_putchar('0' + b);
			}
			else
			{	
				_putchar(' ');
				_putchar('0' + a);
				_putchar('0' + b);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
