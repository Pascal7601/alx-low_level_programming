#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node at the beginning.
 * @head: double pointer to the list
 * @str: string that is duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *make;
	unsigned int len = 0;

	while (str[len])
		len++;
	make = malloc(sizeof(list_t));
	if (!make)
		return (NULL);

	make->str = strdup(str);
	make->len = len;
	make->next = *head;
	(*head) = make;
	return (*head);
}
