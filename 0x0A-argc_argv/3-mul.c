#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments received
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
	}

	int num1, num2;

	num1 = argv[1];
	num2 = argvc[2];

	printf("%d\n", num1 * num2);

	return (0);
}
