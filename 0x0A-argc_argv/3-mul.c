#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments
 * @argv: argument vector
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 3)
	{
		mul *= atoi(argv[argc - 2]);
		mul *= atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
