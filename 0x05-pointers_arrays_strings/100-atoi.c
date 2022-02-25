/**
 * _atoi - Converts a string to an integer.
 * @s: address to s
 * Return: integer number from s.
 */

int _atoi(char *s)
{
	int c, i, j, k;
	unsigned int n;

	c = 1;
	n = 0;
	if (*s == '\0')
		return (0);
	for (; (*s > 57 || *s < 48) && *s != '\0'; s++)
		continue;
	for (i = 0; *(s + i) >= 48 && *(s + i) <= 57; i++)
		continue;
	if (i == 0)
		return (0);
	for (j = 1; j < i; j++)
		c *= 10;
	for (k = 0; k < i; k++)
	{
		if (*(s + k) >= 48 && *(s + k) <= 57)
		{
			n += (*(s + k) - '0') * c;
			c /= 10;
		}
		else
			continue;
	}
	if (*(s - 1) == '-' || *(s - 3) == '-')
		n *= -1;
	if (*(s - 1) == '-' && *(s + i + 1) > 64)
		n *= -1;
	return (n);
}
