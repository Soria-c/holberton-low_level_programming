/**
 * cap_string - function that capitalizes all words from a string
 * @s: input string
 * Return: all words in uppercase
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			if (i == 0)
				*(s + i) -= 32;
			if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
				*(s + i) -= 32;
			else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.')
				*(s + i) -= 32;
			else if (s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"')
				*(s + i) -= 32;
			else if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{')
				*(s + i) -= 32;
			else if (s[i - 1] == '}')
				*(s + i) -= 32;
		}
	}
	return (s);
}

