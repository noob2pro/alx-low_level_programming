i#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - entry point of the app
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	/* your code goes there */

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, last_digit, last_digit);
	}

	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}

	return (0);
}
