#ifndef _MAIN_H_
#define _MAIN_H_
#include "_putchar.c"
#include "0-putchar.c"
#include "1-alphabet.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"

int _putchar(char c);

/**
 * print_putchar - prints "_putchar"
 *
 */
void print_putchar(void);

/**
 * print_alphabet - prints the alphabet plus a new line
 *
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet plus a new line ten times
 *
 */
void print_alphabet_x10(void);

/**
 * islower - checks if a character is in lower case
│* @c: char input
│* Return: 1 if lower case, 0 otherwise
 */
int _islower(char c);

#endif /* _MAIN_H_ */
