#include <stdlib.h>
/**
 * strtow - Split a string into words.
 * @str: address of input string.
 * Return: pointer to array of strings (splitted from str).
 */
char **strtow(char *str)
{
	size_t i, k, j, x, y, c, m;
	char **s;

	c = m = 0;
	if (str == NULL)
		return (NULL);
	for (; *str == ' ' && *str != '\0'; str++)
		continue;
	c++;
	for (; str[m] != ' '; m++)
		continue;
	for (i = 1; *(str + i) != '\0'; i++)
	{
		if (*(str + i) > 32 && *(str + i - 1) == ' ')
		{
			c++;
			for (k = 0; str[i + k] != ' '; k++)
			{
				if (str[i + k] == '\0')
					break;
			}
			if (k > m)
				m = k;
		}
	}
	s = malloc((c + 1) * 8);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < c + 1; j++)
		s[j] = malloc(m + 1);
	for (x = 0; x < c; x++)
	{
		for (y = 0; *str != 32; y++)
		{
			if (*str == '\0')
				break;
			s[x][y] = *str;
			str++;
		}
		s[x][y] = '\0';
		while (*str == ' ')
			str++;
	}
	s[c] = NULL;
	return (s);
}
