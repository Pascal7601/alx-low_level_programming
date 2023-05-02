#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer to list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav = *head;
	unsigned int i = 0;
	listint_t *new = NULL;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(trav);
		return (1);
	}
	while (i < (index - 1))
	{
		if (trav || trav->next == NULL)
			return (-1);
		trav = trav->next;
		i++;
	}
	new = trav->next;
	trav->next = new->next;
	free(new);
	return (1);
}
