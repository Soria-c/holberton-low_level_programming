#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char counter = 122;

	while (counter >= 97)
	{
		putchar(counter);
		if (counter == 97)
			putchar(10);
		counter--;
	}
	return (0);

}
