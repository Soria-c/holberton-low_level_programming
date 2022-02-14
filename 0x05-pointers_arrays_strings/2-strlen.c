/**
 * _strlen - function that returns lenght of a string
 * @s: input string
 * Return: lenght of input string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	return (i);
}
