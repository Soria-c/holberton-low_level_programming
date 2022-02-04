#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short counter = 48;
	unsigned short counter2;
	unsigned short base = 10;

	while (base > 0)
	{
		counter2 = counter + 1;
		while (counter2 != 58)
		{
			putchar(counter);
			putchar(counter2);
			if (counter == 56)
			{
				putchar(10);
				break;
			}

			putchar(44);
			putchar(32);
			counter2++;
		}
		counter++;
		base--;
	}
	return (0);

}
