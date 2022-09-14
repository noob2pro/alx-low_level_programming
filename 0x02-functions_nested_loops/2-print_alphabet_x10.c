#include "main.h"

/**
 * print_alphabet - a - z
 *
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 * Return: null
 *
*/

void print_alphabet(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}

}
