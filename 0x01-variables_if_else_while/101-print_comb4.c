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
	unsigned short counter3;
	unsigned short base = 10;

	while (base > 0)
	{
		counter2 = counter + 1;
		while (counter2 != 58)
		{
			counter3 = counter2 + 1;
			while (counter3 != 58)
			{
				putchar(counter);
				putchar(counter2);
				putchar(counter3);

				if (counter == 55)
				{
					putchar(10);
					break;
				}
				putchar(44);
				putchar(32);
				counter3++;
			}
			counter2++;
		}
		counter++;
		base--;
	}
	return (0);

}
