#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 *             by your alloc_grid function
 * @grid: width array
 * @height: array height
 * Return: returns 0
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(*(grid + k));
	}
	free(grid);
}
