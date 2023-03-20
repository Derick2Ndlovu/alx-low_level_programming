#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	char alphabetsx10;
	int times;

	for (times = 0; times <= 9; times++)
	{
		for (alphabetsx10 = 'a'; alphabetsx10 <= 'z'; alphabetsx10++)
			_putchar(alphabetsx10);
		_putchar('\n');
	}
}
