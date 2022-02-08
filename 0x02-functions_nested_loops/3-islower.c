/**
 * _islower - checks if a character is in lower case
 *@c: char input
 *
 * Return: 1 if lower case, 0 otherwise
 */


int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
