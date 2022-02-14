#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k = 0;
	char ss[2048];

	for (j = 0; *(s + j) != 0; j++)
		ss[j] = *(s + j);
	for (i = j - 1; i >= 0; i--)
	{
		*(s + k) = ss[i];
		k++;
	}
}
