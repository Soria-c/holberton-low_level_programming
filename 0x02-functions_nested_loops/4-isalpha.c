/**
 * _isalpha - checks if a character is alpha
 *@c: char input
 *
 * Return: 1 if alphabetic, 0 otherwise
 */


int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
