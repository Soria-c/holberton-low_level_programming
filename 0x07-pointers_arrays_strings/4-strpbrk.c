#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input string
 * @accept: string to compare
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)

{
	int i, j, k;

	k = 0;

	for (i = 0; *(s + i) != 0; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				k = 1;
		}
		if (k == 1)
			break;
	}
	if (k == 0)
		return (NULL);
	return (s + i);
}
