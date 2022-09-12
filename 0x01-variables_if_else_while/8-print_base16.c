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

	j = 0x0f;
	hex = 0x00;

	while (hex <= j)
	{
		putchar(hex);
		hex = hex + 0x01;
	}

	putchar('\n');

	return (0);


}
