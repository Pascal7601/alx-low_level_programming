#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the dimession
 * @height: height of the dimension
 * Return: pointer to dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **ptr = malloc(sizeof(int*) * width);

	if ((width || height) <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(sizeof(int) * height);
	}
	return (ptr);
}

