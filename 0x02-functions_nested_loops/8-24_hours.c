#include <stdio.h>
/**
 * _putchar - prints char
 * @c: char input
 * Return: int
 */
int _putchar(char c);

/**
 * jack_bauer - prints last digit of a numbre
 */

void jack_bauer(void)
{
	char bul = 0;
	int m;

	for (m = 0; m < 3; m++)
	{
		int k;

		for (k = 0; k < 10; k++)
		{
			int j;

			for (j = 0; j < 6; j++)
			{
				int i;

				for (i = 0; i < 10; i++)
				{
					_putchar('0' + m);
					_putchar('0' + k);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + i);
					_putchar('\n');
					if ((i == 9) && (j == 5) && (k == 3) && (m == 2))
					{
						bul = 1;
						break;
					}
				if (bul == 1)
					break;
				}
			if (bul == 1)
				break;
			}
		if (bul == 1)
			break;
		}
	if (bul == 1)
		break;
	}
}
