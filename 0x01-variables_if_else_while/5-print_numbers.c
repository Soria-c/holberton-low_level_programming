#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char counter = 0;

	while (counter < 10)
	{
		printf("%d", counter);
		if (counter == 9)
			printf("\n");
		counter++;
	}
	return (0);

}
