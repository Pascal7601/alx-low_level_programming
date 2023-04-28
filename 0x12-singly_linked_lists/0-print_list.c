#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints all elements of a list.
 * @h: pointer to the string to be printed
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

