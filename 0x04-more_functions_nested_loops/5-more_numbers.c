#include "main.h"

/**
 * more_numbers - prints numbers for 0 t 14
 */
void more_numbers(void)
{
	int i, m, k;

	for (k = 0; k < 10; k++)
	{
		i = 0;
		m = 0;
		while (i < 15)
		{
			i++;
			if (i > 10)
				_putchar('1');
			if (m == 10)
				m = 0;
			_putchar('0' + m);
			m++;
		}
		_putchar('\n');
	}
}
