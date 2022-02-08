#include "_putchar.c"
#ifndef _MAIN_H_
#define _MAIN_H_


int _putchar(char c);
void print_alphabet(void);

#endif /* _MAIN_H_ */
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

