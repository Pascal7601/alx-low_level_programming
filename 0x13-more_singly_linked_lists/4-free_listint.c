#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head != NULL)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
