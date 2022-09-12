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
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);


}
