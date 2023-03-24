#include "main.h"

/**
 * more_numbers - Prints numbers 10 times
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			_putchar(m + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
