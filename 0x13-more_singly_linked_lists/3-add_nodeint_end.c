#include "lists.h"

/**
 * add_nodeint_end - adds node at end
 * @head: first node pointer
 * @n: integer
 * Return: end node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *pass;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		pass = *head;
		while (pass->next != NULL)
		{
			pass = pass->next;
		}
		pass->next = new;
	}
	return (new);
}
