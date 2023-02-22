#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
