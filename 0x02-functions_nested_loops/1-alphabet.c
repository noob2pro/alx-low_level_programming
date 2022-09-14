#include "main.h"

/**
 * print_alphabet - a - z
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: void
 *
*/

void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	return (0);

}
