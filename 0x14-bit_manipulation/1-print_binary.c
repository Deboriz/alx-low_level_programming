#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int empty;
	int fits;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (empty = n, fits = 0; (empty >>= 1) > 0; fits++)
		;

	for (; fits >= 0; fits--)
	{
		if ((n >> fits) & 1)
			printf("1");
		else
			printf("0");
	}
}
