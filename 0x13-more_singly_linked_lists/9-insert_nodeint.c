#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node 
 * @head: pointer to head
 * @idx: index
 * @n: integer
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old;

	if (head == NULL || idx == 0)
		return (NULL);

	old = *head;
	while (old != NULL && idx > 1)
	{
		old = old->next;
		idx--;
	}
	if (old == NULL || old->next == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = old->next;
	old->next = new;

	return (new);
}
