#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - Write a program that prints all single digit numbers of base 10 startin
*-g from 0, followed by a new line.
*
*Return: 0
*/
int main(void)
{
	char num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);


}
