/**
 * _atoi - Converts a string to an integer.
 * @s: address to s.
 * Return: integer number from s.
 */

int _atoi(char *s)
{
	int c, i, j, k, ss;
	unsigned int n;

	c = 1;
	n = ss = 0;
	if (*s == '\0')
		return (0);
	for (; (*s > 57 || *s < 48) && *s != '\0'; s++)
	{
		if (*s == '-')
			ss++;
	}
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
	if (ss % 2 != 0)
		n *= -1;
	return (n);
}
