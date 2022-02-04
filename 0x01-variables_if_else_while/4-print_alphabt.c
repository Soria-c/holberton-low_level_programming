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
		if (counter == 113 || counter == 101)
		{
			counter++;
			continue;
		}
		putchar(counter);
		if (counter == 122)
			putchar(10);
		counter++;
	}
	return (0);

}
