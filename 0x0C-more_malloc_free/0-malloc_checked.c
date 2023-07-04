#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: integer
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);

	if (mal == NULL)
	{
		exit (98);
	}
	return (mal);
}
