#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 * Return: node
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, temp;
    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        count++;

        if (slow == fast) {
            loop_detected = 1;
            break;
        }
    }

    if (loop_detected) {
        current = *h;
        while (current != slow) {
             *temp = current;
            current = current->next;
            free(temp);
            count++;
        }
        *h = NULL;
        return count;
    }

    current = *h;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
        count++;
    }
    *h = NULL;
    return count;
}
