#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: address of the first string.
 * @s2: address of the second string.
 * @n: number of bytes from n to be copied.
 * Return: pointer to allocated string, NULL if malloc fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k, m, x;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		continue;
	for (j = 0; *(s2 + j) != '\0'; j++)
		continue;
	if (n >= j)
	{
		s = malloc(j + i + 1);
		x = j;
	}
	else
	{
		s = malloc(n + i + 1);
		x = n;
	}
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		*(s + k) = *(s1 + k);
	for (m = 0; m < x; m++)
		*(s + k + m) = *(s2 + m);
	*(s + k + m) = '\0';
	return (s);
}
