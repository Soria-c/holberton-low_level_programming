#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: input string
 * @needle: substring to compare
 * Return: pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;


	for (k = 0; *(needle + k) != '\0'; k++)
		continue;
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 0; (haystack[i + j] - needle[j] == 0) && haystack[i + j] != 0; j++)
				continue;
			if (j == k)
				return (haystack + i);
		}
	}
	if (k == 0)
		return (haystack);
	return (NULL);
}
