#include "main.h"

/**
 * print_last_digit - printing the last digit of a number
 * @d: the digit of the number to be printed
 * Return: last digit of the value
 */

int print_last_digit(int d)
{
	int lastdigit;

	lastdigit = d % 10;
	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar(lastdigit + '0');
	return (0);
	}
