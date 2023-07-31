#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of listint_t list
 * @head: pointer to pointer to the first node in the list
 * @n: data in the node
 *
 * Return: addres of the new element or null if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	temp = (*head);

	newnode->n = n;
	newnode->next = temp;
	(*head) = newnode;

	return (newnode);
}
