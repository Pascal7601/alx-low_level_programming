#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the algo
 * @array: pointer to fist value of the array
 * @size: actual size of the array
 * @value: the number to be searched
 * Return: the index tht the value found is
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);
}

