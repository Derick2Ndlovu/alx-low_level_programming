#include "main.h"

/**
 * print_sign - printing the sign of a number.
 * @n: is the number.
 * Return: 1 if greater than 0, return 0 if 0 and -1 if less than 0
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n <= -1)
		_putchar('-');
	return (-1);
}
