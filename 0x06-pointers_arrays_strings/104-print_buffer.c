#include <stdio.h>

/**
 * print_buffer - Function that prints a buffer
 * @b: buffer
 * @size: buffer size
 */
void print_buffer(char *b, int size)
{
	int k, i;

	if (size <= 0)
		printf("\n");
	else
	{
		for (k = 0; k < size; k++)
		{
			if (k % 10 == 0)
			{
				printf("%.8x: ", k);
				for (i = 0; i < 10; i += 2)
				{
					if (k + i < size || k + i + 1 < size)
						printf("%.2x%.2x ", b[k + i], b[k + i + 1]);
					else
						printf("     ");
				}
			}
			if ((b[k] < 33) && (b[k] != ' '))
				printf(".");
			else
				printf("%c", *(b + k));
			if (k % 10 == 9 || k == size - 1)
				printf("\n");
		}

	}
}
