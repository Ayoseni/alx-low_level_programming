#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the number of n elements in an array integer
 * @a: array
 * @n: number of array
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
