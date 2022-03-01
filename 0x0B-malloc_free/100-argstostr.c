#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: number of arguments (uncluding the  program name).
 * @av: address of string of arguments (uncluding the program name).
 * Return: pointer to new concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, c, k;

	c = k = 0;
	if (ac == 0 or av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
	}
	s = malloc(c + ac);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*(s + k + j) = av[i][j];
		*(s + k + j) = '\n';
		k += j + 1;
	}
	return (s);
}
