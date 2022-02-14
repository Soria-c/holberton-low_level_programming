#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int n;
	int k = 0;
	char m;

	for (j = 0; *(s + j) != 0; j++)
		;
	n = j;
	if (j % 2 == 0)
		n++;
	for (i = j - 1; i != n / 2 ; i--)
	{
		m = *(s + i);
		*(s + i) = *(s + k);
		*(s + k) = m;
		k++;
	}
}
