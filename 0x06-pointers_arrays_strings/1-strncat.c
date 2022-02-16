/**
 * _strncat - function that appends a source string to a destiny string.
 * @dest: destiny string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i, k;

	for (j = 0; *(dest + j) != 0; j++)
		continue;
	for (k = 0; *(src + k) != 0; k++)
		continue;
	if (n > k)
		n = k;
	for (i = 0; i < n; i++)
		*(dest + (j + i)) = *(src + i);
	return (dest);
}
