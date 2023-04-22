#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2dimmessional array
 * @grid: 2dimmessional grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
