#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data in alist
 * @head: pointer to the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *comp = head;

	if (head == NULL)
		return (0);

	while (comp != NULL)
	{
		sum += comp->n;
		comp = comp->next;
	}
	return (sum);
}
