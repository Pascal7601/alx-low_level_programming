#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr, *forward;

	curr = head;
	while (curr != NULL)
	{
		forward = curr;
		curr->next = forward;
		free(forward->str);
		free(forward);
	}
}
