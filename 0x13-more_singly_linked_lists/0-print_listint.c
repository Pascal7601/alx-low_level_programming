#include "lists.h"

/**
 * print_listint - prints the whole list
 * @h: pointer to the list
 * Return: number of integers
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

