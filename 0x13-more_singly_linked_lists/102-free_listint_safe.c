#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: double pointer
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *comp = *h;
	int n = 0;
	int pq;

	if (h || (*h) == NULL)
		return (0);
	while (*h != NULL)
	{
		pq = (*h) - (*h)->next;
		if (pq > 0)
		{
			free(*h);
			(*h) = comp;
			n++;
		}
		else
		{
			free(*h);
			(*h) = NULL;
			n++;
			break;
		}
	}
	(*h) = NULL;
	return (n);
}
