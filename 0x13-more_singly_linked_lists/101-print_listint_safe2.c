#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num_nodes = 0;
    const listint_t *loop_start = NULL;
    const listint_t *temp = head;

    if (head == NULL)
    {
        return num_nodes;
    }

    num_nodes = looped_listint_len(head);

    if (num_nodes == 0)
    {
        while (temp)
        {
            printf("[%p] %d\n", (void *)temp, temp->n);
            temp = temp->next;
            num_nodes++;
        }
    }
    else
    {
        printf("Loop detected in the linked list.\n");
        loop_start = temp;
        while (num_nodes > 0)
        {
            printf("[%p] %d\n", (void *)temp, temp->n);
            temp = temp->next;
            num_nodes--;
        }
        printf("Loop points back to node at address [%p].\n", (void *)loop_start);
    }

    return num_nodes;
}

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
    const listint_t *tortoise = head;
    const listint_t *hare = head;

    while (hare && hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            size_t num_nodes = 0;
            do
            {
                num_nodes++;
                hare = hare->next;
            } while (tortoise != hare);

            return num_nodes;
        }
    }

    return 0;
}

