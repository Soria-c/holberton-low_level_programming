/**
 * _strcat - function that appends a source string to a destiny string.
 * @dest: destiny string
 * @src: source string
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int j, i;

	for (j = 0; *(dest + j) != 0; j++)
		continue;
	for (i = 0; *(src + i) != 0; i++)
		*(dest + (j + i)) = *(src + i);
	return (dest);
}
