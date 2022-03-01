#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: address of first string.
 * @s2: address of second string.
 * Return: Address to s which containg the concatenation of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		continue;
	for (j = 0; *(s2 + j) != '\0'; j++)
		continue;
	s = malloc(i + j + 1);
	if (s == NULL)
		return (0);
	for (k = 0; k < i; k++)
		*(s + k) = *(s1 + k);
	for (m = 0; m <= j; m++)
		*(s + i + m) = *(s2 + m);
	return (s);
}
