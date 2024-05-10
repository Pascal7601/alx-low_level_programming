#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers using the algo
 * @array: pointer to fist value of the array
 * @size: actual size of the array
 * @value: the number to be searched
 * Return: the index tht the value found is
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;
	int i;

	while (low <= high)
	{

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;

	}
	return (-1);
}
