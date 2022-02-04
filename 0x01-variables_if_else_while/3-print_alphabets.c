#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char counter = 97;

	while (counter <= 122)
	{
		putchar(counter);
		counter++;
	}

	counter = 65;

	while (counter <= 90)
	{
		putchar(counter);
		if (counter == 90)
			putchar(10);
		counter++;
	}
	return (0);

}
