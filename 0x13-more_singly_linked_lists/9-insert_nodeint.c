#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a position
 * @head: double pointer
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	unsigned int p;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	for (p = 0; ptr && p < idx; p++)
	{
		if (p == idx - 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		else
			ptr = ptr->next;
	}

	return (NULL);
}
