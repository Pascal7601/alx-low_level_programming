#include "lists.h"

/**
 * sum_listint - sums all list
 * @head: pointer to head
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

