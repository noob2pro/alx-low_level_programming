#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: arguments received
 *
 * Return: 0 on success 1 on failure
 */

int main(int argc, char *argv[])
{

	int i, j, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc - 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);

	}

	printf("%d\n", sum);
	return (0);
}
