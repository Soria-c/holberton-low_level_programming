/**
 * _memset - fills the first n bytes of s with the constant byte b.
 * @s: buffer address
 * @b: constant bytes
 * @n: number of bytes to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		*(s + i) = b;
	return (s);
}
