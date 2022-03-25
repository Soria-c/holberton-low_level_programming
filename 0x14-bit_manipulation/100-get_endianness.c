/**
 * get_endianness - checks the endianness.
 * Return: 1 if little endian, 0 if big endian.
 */
int get_endianness(void)
{
	int i = 1;
	char *e = (char *)&i;

	return (*e);
}
