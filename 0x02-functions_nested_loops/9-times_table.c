#include "main.h"

/**
 * times_table - printing 9 times table
 */

void times_table(void)
{
	int n, m, table;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			table = n * m;
			if (table <= 9)
				_putchar(' ');
			else
				_putchar((table / 10) + '0');
			_putchar((table % 10) + '0');
		}
		_putchar('\n');
	}
}
