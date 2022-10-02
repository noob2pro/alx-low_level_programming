#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: The number of arguments passed
 * @argv: Arguments passed to the program
 *
 * Return: 0
 */

int function main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

