#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer input
 * @b: second integer input
 *
 * Return: two integers swaped
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
