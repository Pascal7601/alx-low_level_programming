#include "lists.h"

/**
 * add_node - adds node at the beginning
 * @head: pointer to the list
 * @str: string
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(str);

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}



