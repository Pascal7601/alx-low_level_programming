#include "lists.h"

/**
 * list_len - counts number of elements
 * @h: pointer passed
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
