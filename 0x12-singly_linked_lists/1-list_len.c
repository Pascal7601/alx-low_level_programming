#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * @h: pointer to the list_t list
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
