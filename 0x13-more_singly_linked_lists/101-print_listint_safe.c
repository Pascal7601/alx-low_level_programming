#include "lists.h"

/**
 * print_listint - prints whole list
 * @head: pointer to head
 * Return: node
 */

size_t print_listint_safe(const listint_t *head) {
    const listint_t* slow = head;
    const listint_t* fast = head;
    size_t count = 0;
    int loop_detected = 0;
    const listint_t* current = head

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
        printf("-> [%p] %d\n", (void*)slow, slow->n);
        exit(98);
    }
    while (current != NULL) {
        printf("[%p] %d\n", (void*)current, current->n);
        current = current->next;
        count++;
    }

    return count;
}
