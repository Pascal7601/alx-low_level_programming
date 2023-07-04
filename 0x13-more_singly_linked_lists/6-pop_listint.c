#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer to head
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	
	listint_t *ptr = *head;

	if (head == NULL || head == NULL)
		return (0);
	*head = (*head)->next;

	free(ptr);

	return (data);
}
