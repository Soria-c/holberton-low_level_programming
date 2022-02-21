/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: first string address
 * @accept: address of string to compare
 * Return: pointer to s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j, k, m;

	m = k = 0;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *(s + j))
			{
				k++;
				m = 1;
			}
		}
		if (m == 0)
			break;
		m = 0;
	}
	return (k);
}
