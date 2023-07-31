#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a singly linked list
 * @head: pointer to the first node
 * @index: index of the node starting at zero
 *
 * Return: nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	if (head == NULL)
	{
		return (NULL);
	}

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
