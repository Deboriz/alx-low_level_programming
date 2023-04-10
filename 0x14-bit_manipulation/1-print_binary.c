#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int groin = 0, axe = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (axe)
	{
		if (groin == 1 && (n & axe) == 0)
			_putchar('0');
		else if ((n & axe) != 0)
		{
			_putchar('1');
			groin = 1;
		}
		axe >>= 1;
	}
}
