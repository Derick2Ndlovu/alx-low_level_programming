#include "main.h"

/**
 * _islower - displays lowercase characters
 * @c: is the character
 * Return: 1 if c islower and 0 if not.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
