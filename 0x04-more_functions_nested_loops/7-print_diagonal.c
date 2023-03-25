#include "main.h"

/**
 * print_diagonal - printing number of lines diagonally
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 1; d <= n; d++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
