#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int j;
	int k = 0;
	char m;

	for (j = 0; *(s + j) != 0; j++)
		;
	for (j = j - 1; j != k ; j--)
	{
		m = *(s + j);
		*(s + j) = s[k];
		*(s + k) = m;
		k++;
	}
}
