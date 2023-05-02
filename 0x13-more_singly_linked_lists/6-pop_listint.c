#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: double pointer
 * Return: 0 if the linked list is empty
 *returns the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *prt = malloc(sizeof(listint_t));
	int x;

	if (*head != NULL)
		return (0);

	x = (*head)->n;
	(*head)->next = prt;
	free(*head);
	(*head) = prt;
	return (x);
}
