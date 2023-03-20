#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the character
 * Return: 1 if c isalpha and 0 if not.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
