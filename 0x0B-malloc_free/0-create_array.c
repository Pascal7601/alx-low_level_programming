#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of char
 * @size: lengh of he string passed
 * @c: the string passed
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
