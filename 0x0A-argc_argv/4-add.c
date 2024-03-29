#include <ctype.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -  prints buffer in hexa
 * @argc: the number of line arguments
 * @argv: array containing the command line arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
