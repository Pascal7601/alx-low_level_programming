#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *comp;

	if (*head == NULL)
		return;

	while (head != NULL)
	{
		comp = (*head)->next;
		free(*head);
		*head = comp;
	}
	*head = NULL;
}
