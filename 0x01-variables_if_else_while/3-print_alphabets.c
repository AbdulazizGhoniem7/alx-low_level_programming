#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - returns alphabes both upper and lower case
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
