#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int j;
	int n;
	int k = 0;
	char m;

	for (j = 0; *(s + j) != 0; j++)
		;
	n = j;
	if (j % 2 == 0)
		n--;
	for (j = j - 1; (j != n / 2) && s[0] != '\0'; j--)
	{
		m = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = m;
		k++;
	}
}
