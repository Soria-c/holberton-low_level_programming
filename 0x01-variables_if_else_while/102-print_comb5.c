#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned short count1 = 48;
	unsigned short count2 = 48;
	unsigned short count3 = 48;
	unsigned short count4 = 48;
	unsigned short row = 1;

	while (count1 < 58)
	{
		count2 = 48;
		while (count2 < 58)
		{
			count3 = count1;
			while (count3 < 58)
			{
				if (row == 1)
				{
					count4 = count2 + 1;
				}
				else
					count4 = 48;
				while (count4 < 58)
				{
					putchar(count1);
					putchar(count2);
					putchar(32);
					putchar(count3);
					putchar(count4);
					putchar(44);
					putchar(32);
					count4++;

				}
				row = 0;
				count3++;
			}
			row++;
			count2++;
		}
		count1++;
	}
}
