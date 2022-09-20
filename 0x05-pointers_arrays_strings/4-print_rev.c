#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to be reserved.
 */

void print_rev(char *s)
{
/*
*	int len = 0, i;
*
*	while (s[i++])
*		len++;
*
*	for (i = len - 1; i >= 0; i--)
*		_putchar(s[i]);
*
*	_putchar('\n');
*/

	char *r_ptr = s;

	while (*(r_ptr + 1) != '\0')
		r_ptr++;

	while (r_ptr > s)
	{
		char tmp = *r_ptr;
		*r_ptr-- = *s;
		*s++ = tmp;
		_putchar(*s);
	}

}
