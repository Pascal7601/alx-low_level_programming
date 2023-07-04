#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node
 * Return: reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *new, *next;

	previous = NULL;
	new = *head;

	while (new != NULL)
	{
		next = new->next;
		new->next = previous;
		previous = new;
		new = next;
	}
	*head = previous;
	return (*head);
}
