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
	int ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}

		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
