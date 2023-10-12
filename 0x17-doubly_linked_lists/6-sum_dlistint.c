#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data of a DLL
 * @head: pointer to the head of the list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	ih (!head)
	{
		return 0;
	}
	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return sum;
}
