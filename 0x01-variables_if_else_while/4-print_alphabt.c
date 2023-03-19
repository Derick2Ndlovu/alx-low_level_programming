#include <stdio.h>

/**
 * main - ukuqala kwe program
 *
 * Return: buyisa njalo u 0
 */

int main(void)
{

	char alphaEQ;

	alphaEQ = 'a';
	while
		(alphaEQ <= 'z') {
			if (alphaEQ == 'e')
				alphaEQ++;
			else if (alphaEQ == 'q')
				alphaEQ++;
			else
			putchar(alphaEQ);
			alphaEQ++;
		}
	putchar('\n');
	return (0);
}
