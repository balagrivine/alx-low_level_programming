#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a singly linked list
 * @head: pointer to pointer to the first node in the list
 *
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = (*head);

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = 0;
	if (*head == NULL)
	{
		(*head) = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;
	return (newnode);
}
