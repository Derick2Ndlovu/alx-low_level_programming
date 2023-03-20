#include <stdio.h>

/**
 * main - the main entry of the program
 *
 * Return: always 0
 */

int main(void)
{
	char alphabetsEQ;

	alphabetsEQ = 'a';
	while
		(alphabetsEQ <= 'z') {
			if ((alphabetsEQ != 'e' && alphabetsEQ != 'q') && alphabetsEQ <= 'z')
				putchar(alphabetsEQ);
			alphabetsEQ++;
		}
	putchar('\n');
	return (0);
}
