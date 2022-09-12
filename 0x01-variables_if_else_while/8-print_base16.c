#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main -  a program that prints all the numbers of base 16 in lowercase,
*followed by a new line.
*followed by a new line.
*
*Return: 0
*/
int main(void)
{
	char hex, j;

	j = 0xF;
	hex = 0x0;

	while (hex <= j)
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');

	return (0);


}
