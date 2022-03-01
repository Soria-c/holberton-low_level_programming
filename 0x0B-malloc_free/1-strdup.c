#include <stdlib.h>
/**
 * _strdup - duplicates and array.
 * @str: pointer to string to be duplicated.
 * Return: pointer to duplicated string.
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (0);
	for (i = 0; *(str + i) != '\0'; i++)
		continue;
	s = malloc(i);
	if (s == NULL)
		return (0);
	for (j = 0; j <= i; j++)
		*(s + j) = *(str + j);
	return (s);
}
