#include "main.h"

/**
 * print_diagonal - printing number of lines diagonally
 * @n: number of lines
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		_putchar('\\');
	_putchar('\n');
}
