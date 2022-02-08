/**
 * print_alphabet_x10 - prints "_putchar"
 * @c: input character
 * Return: prints a char
 */

int _putchar(char c);

void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	for (alphabet = 'a'; alphabet <= '{'; alphabet++)
	{
		i++;
		if (alphabet == '{')
		{
			alphabet = '\n';
		}
		_putchar(alphabet);
		if (alphabet == '\n')
			alphabet = '`';
		if (i == 270)
			break;
	}
}
