#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enrtry point
 *prints all single digit number of base 10
 *starting from zere, following by a new line
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
