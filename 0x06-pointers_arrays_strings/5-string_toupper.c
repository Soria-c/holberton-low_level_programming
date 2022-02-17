/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @s: input string
 * Return: all uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) -= 32;
	}
	return (s);
}

