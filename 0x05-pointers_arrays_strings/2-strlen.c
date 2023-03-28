#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to check
 *
 * Return: length
 */

int _strlen(char *s)
{
	int lengthstr = 0;

	while (*s != '\0')
	{
		lengthstr++;
		s++;
	}
	return (lengthstr);
}
