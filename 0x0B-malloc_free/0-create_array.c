#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates arrays of strings
 * @size: length of the string
 * @c: string to be passed
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	for (count = 0; count < size; count++)
		ptr[count] = c;
	return (ptr);
}
