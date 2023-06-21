#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: array to be printed
 * @size: size of the array
 * ation - function pointer
 * Return: integer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL && action != NULL)
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
}
