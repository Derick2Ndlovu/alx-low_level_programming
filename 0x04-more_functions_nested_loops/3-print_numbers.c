#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * @n: the integer number
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}