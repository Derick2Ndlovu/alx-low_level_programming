#include "main.h"
#include <stdio.h>

/**
 * main - the program prints numbers 1 - 100.
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			_putchar("Fizz");
		}
		else if ((n % 5) == 0)
		{
			_putchar("Buzz");
		}
		else  if ((n % 15) == 0)
		{
			_putchar("FizzBuzz");
		}
		else
			_putchar(n);
	}
	_putchar('\n');
}
