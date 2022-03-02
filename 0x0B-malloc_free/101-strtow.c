#include <stdlib.h>

int count(char *str, int *c);
/**
 * strtow - Split a string into words.
 * @str: address of input string.
 * Return: pointer to array of strings (splitted from str).
 */
char **strtow(char *str)
{
	int j, x, y, c, m;
	char **s;

	c = 0;

	if (str == NULL)
		return (NULL);
	for (; *str == ' ' && *str != '\0'; str++)
		continue;
	m = count(str, &c);
	if (c == 0)
		return (NULL);
	s = malloc((c - 1) * 8);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < c; j++)
	{
		s[j] = malloc(m + 1);
		if (s[j] == NULL)
			return (NULL);
	}
	for (x = 0; x < c; x++)
	{
		for (y = 0; *str != 32; y++)
		{
			if (*str == '\0')
				break;
			s[x][y] = *str;
			str++;
		}
		while (*str == ' ')
			str++;
	}
	s[c] = NULL;
	return (s);
}
/**
 * count - counts number of words and max word size.
 * @str: address of input string.
 * @c: address of c (number of words).
 * Return: max word size.
 */
int count(char *str, int *c)
{
	int m = 0, i, k;

	for (; *str == ' ' && *str != '\0'; str++)
		continue;
	if (*str != '\0')
		*c = *c + 1;
	for (; str[m] != ' '; m++)
		continue;
	for (i = 1; *(str + i) != '\0'; i++)
	{
		if (*(str + i) > 32 && *(str + i - 1) == ' ')
		{
			*c = *c + 1;
			for (k = 0; str[i + k] != ' '; k++)
			{
				if (str[i + k] == '\0')
					break;
			}
			if (k > m)
				m = k;
		}
	}
	return (m);
}
