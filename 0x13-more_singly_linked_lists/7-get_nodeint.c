#include "lists.h"

/**
 * get_nodeint_at_index - gets node
 * @head: pointer to the node
 * @index: node number
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL && index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL && index > 0)
		return (NULL);

	return (ptr);
}
