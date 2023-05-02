#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds a list
 * @head: pointer to list
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *comp = head;
	listint_t *dup = head;

	if (head == NULL)
		return (NULL);
	while (comp && dup && dup->next)
	{
		dup = dup->next->next;
		comp = comp->next;
		if (dup == comp)
		{
			comp = head;
			while (comp != dup)
			{
				comp = comp->next;
				dup = dup->next;
			}
			return (dup);
		}
	}

	return (NULL);
}
