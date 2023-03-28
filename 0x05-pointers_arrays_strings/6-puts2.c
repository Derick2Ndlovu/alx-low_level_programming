#include "main.h"


/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: string to print
 *
 * Return: string
 */

void puts2(char *str)
{
	int lengthstr = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		lengthstr++;
	}
	a = lengthstr - 1;
	for (c = 0; c <= a; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}