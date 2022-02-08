/**
 * print_alphabet - prints "_putchar"
 * @c: input character
 * Return: prints a char
 */

int _putchar(char c);

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
