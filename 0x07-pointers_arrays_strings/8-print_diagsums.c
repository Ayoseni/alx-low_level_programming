#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints sum of two diagonals of a square matrix of integer
 * @a: integer
 * @size: size of the integer
 * Return: returns  0
 */

void print_diagsums(int *a, int size)
{
	int i, j, s = 0, t = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				s = s + a[(size + 1) * i];
			}
			if (i + j == size - 1)
			{
				t = t + a[(size - 1) * (i + 1)];
			}
		}
	}
	printf("%i, %i\n", s, t);
}
