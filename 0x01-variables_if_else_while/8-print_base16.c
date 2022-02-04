#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char counter = 48;

	while (counter <= 57)
	{
		putchar(counter);
		counter++;
	}

	counter = 97;

	while (counter <= 102)
	{
		putchar(counter);
		if (counter == 102)
			putchar(10);
		counter++;
	}
	return (0);

}
