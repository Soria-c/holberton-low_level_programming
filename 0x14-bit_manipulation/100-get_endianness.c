/**
 * get_endianness - checks the endianness.
 * Return: 1 if little endian, 0 if big endian.
 */
int get_endianness(void)
{
	char *e = "Test";

	if (&e[0] < &e[1])
		return (1);
	else
		return (0);
}
