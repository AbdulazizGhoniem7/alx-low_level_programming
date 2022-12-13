#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Retrun: Always 0 (Success)
 */

int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
