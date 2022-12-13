#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
