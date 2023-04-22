#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **yt;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	yt = malloc(sizeof(int *) * height);

	if (yt == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		yt[x] = malloc(sizeof(int) * width);

		if (yt[x] == NULL)
		{
			for (; x >= 0; x--)
				free(yt[x]);

			free(yt);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			yt[x][y] = 0;
	}

	return (yt);
}
