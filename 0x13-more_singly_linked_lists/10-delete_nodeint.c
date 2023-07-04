#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer
 * @index: index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *previous, *ptr;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	new = *head;
	previous = NULL;

	while (new != NULL && index > 0)
	{
		previous = new;
		new = new->next;
		index--;
	}
	if (new == NULL)
		return (-1);
	previous->next = new->next;
	free(new);

	return (-1);
}



