/**
 * _strcpy - function that copies a string
 * @src: input source string
 * @dest: where to copy the source string
 * Return: array of characters
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(src + i) != '\0'; i++)
		;
	for (j = 0; j <= i; j++)
		*(dest + j) = *(src + j);
	return (dest);
}
