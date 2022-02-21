#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string address
 * @c: constant character to compare
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != c ; i++)
	{
		if (*(s + i) == '\0')
			return (NULL);
	}
	return (s + i);
}
