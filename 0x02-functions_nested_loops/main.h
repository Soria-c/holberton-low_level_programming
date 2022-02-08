#ifndef _MAIN_H_
#define _MAIN_H_
#include "_putchar.c"


int _putchar(char c);


/**
 * print_alphabet - prints the alphabet plus a new line
 *
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}

/**
 * print_alphabet_x10 - prints the alphabet plus a new line ten times
 *
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}

}

#endif /* _MAIN_H_ */
