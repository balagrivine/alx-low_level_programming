#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: number of elements in the array
 * @size: size of each member of the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;

	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	arr = malloc(j);
	if (arr == NULL)
		return (NULL);

	while (i < j)
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}
