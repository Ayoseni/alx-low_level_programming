#include <stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: number min
 * @max: number max
 * Return: returns 0
 */

int *array_range(int min, int max)
{
	int *str, k;

	if (min > max)
	{
		return (NULL);
	}
	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; min <= max; k++, min++)
	{
		*(str + k) = min;
	}
	return (str);
}
