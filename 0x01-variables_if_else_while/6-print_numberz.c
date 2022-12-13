#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * prints all signle digit number of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);

}
