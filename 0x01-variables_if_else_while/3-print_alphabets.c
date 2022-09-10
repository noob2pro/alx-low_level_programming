#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - entry point of the app
*Return: 0
*/
int main(void)
{

	/* your code goes there */
	int ch, uc;

	ch = 'a';
	uc = 'A'

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	putchar('\n');
	return (0);
}
