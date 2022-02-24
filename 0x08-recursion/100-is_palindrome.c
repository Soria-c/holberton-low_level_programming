char *ptl(char *s);
int nonretro(char *s, char *l);

/**
 * is_palindrome - Determines if s is palindrome.
 * @s: address of s.
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	char *l;

	if (*s == '\0')
		return (1);
	l = ptl(s);
	return (nonretro(s, l));
}
/**
 * ptl - places to pointer to the end of s.
 * @s: pointer to the beginning of s.
 * Return: pointer to end of s.
 */
char *ptl(char *s)
{
	if (*s != '\0')
		return (ptl(s + 1));
	return (s - 1);
}
/**
 * nonretro - checks if s is palindrome.
 * @s: pointer to the beginning of s.
 * @l: pointer to the end of l.
 * Return: 1 if palindrome, 0 if not.
 */
int nonretro(char *s, char *l)
{
	if (*s != '\0')
	{
		if (*s != *l)
			return (0);
		else
			return (nonretro(s + 1, l - 1));
	}
	return (1);
}

