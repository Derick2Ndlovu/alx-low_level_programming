#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 */

void print_alphabet(void)
{
	char alphabets;

	alphabets = 'a';
	while
		(alphabets <= 'z') {
			_putchar(alphabets);
			alphabets++;
		}
	_putchar('\n');
}
