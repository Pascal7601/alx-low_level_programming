#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be freed
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *pas;

	while (head != NULL)
	{
		pas = head->next;
		free(head->str);
		free(head);
		head = pas;
	}
}

