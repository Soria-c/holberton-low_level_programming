/**
 * _isupper - checks is a character is in uppercase
 * @c: input character
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
