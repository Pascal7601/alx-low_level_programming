#include "lists.h"

/**
 * add_node_end - adds nodes at the end
 * @head: pointer to the list
 * @str: string
 * Return: the pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *curr;
	
	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	curr = *head;
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
	curr->next = ptr;
	}

	return (ptr);
}
