#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to print in reverse
 *
 * Return: string
 */

void rev_string(char *s)
{
	char reversestr = s[0];
	int counterrev = 0;
	int i;

	while (s[counterrev] != '\0')
	{
		counterrev++;
	}
	for (i = 0; i < counterrev; i++)
	{
		counterrev--;
		reversestr = s[i];
		s[i] = s[counterrev];
		s[counterrev] = reversestr;
	}
}
