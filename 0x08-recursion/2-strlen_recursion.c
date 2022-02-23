/**
 * _strlen_recursion - Calculates length of a string.
 * @s: address of the string.
 * Return: Lenght of the string s .
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
