#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: the string to print in reverse
 *
 * Return: string
 */

void print_rev(char *s)
{
	int lengthstr = 0;
	int reversestr;

	while (*s != '\0')
	{
		lengthstr++;
		s++;
	}
	s--;
	for (reversestr = lengthstr; reversestr > 0; reversestr--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
