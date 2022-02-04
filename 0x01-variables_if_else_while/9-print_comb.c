#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short counter = 48;

	while (counter <= 57)
	{
		putchar(counter);
		if (counter == 57)
		{
			putchar(10);
			break;
		}
		putchar(44);
		putchar(32);
		counter++;
	}
	return (0);

}
