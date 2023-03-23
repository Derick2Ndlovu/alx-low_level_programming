#include "main.h"

/**
 * print_most_numbers - printing most number
 * @n: integer value
 * Return: always 0
 */

void print_most_numbers(void)
{
	int n;

	n = 0;
	if (n != 2 && n != 4)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
