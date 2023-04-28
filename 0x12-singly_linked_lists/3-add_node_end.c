#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of another
 * @head: pointer to the string
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tem = *head, *mad;
	unsigned int len = 0;

	while (str[len])
		len++;

	mad = malloc(sizeof(list_t));
	if (!mad)
		return (NULL);
	mad->str = strdup(str);
	mad->len = len;
	mad->next = NULL;

	if (*head == NULL)
	{
		*head = mad;
		return (mad);
	}
	while (tem->next)
		tem = tem->next;
	tem->next = mad;
	return (mad);
}
