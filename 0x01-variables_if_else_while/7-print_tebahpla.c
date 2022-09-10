#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - A program that prints the lowercase alphabet in reverse
*followed by a new line.
*
*Return: 0
*/
int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');

	return (0);


}
