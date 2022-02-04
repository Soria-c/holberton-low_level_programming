#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short counter = 48;
	short counter2;
	short counter3 = 0;
	unsigned int base = 10;

	while (base > 0)
	{
		counter2 = 48 + counter3;
		while (counter2 != 58)
		{
			if (counter == counter2)
			{
				counter2++;
				continue;
			}

			putchar(counter);
			putchar(counter2);
			if (counter < 56)
			{
				putchar(44);
				putchar(32);
			}
			else if (counter == 56)
			{
				putchar(10);
			}

			counter2++;
		}
		counter++;
		counter3++;
		base--;
	}
	return (0);

}
