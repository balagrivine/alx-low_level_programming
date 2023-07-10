#include "main.h"

#include <stdlib.h>

/**
 * create_array - creates an array of
 * characters and initializes with a special char
 * @size: size of the array
 * @c: specific char that initializes the array
 * Return: pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)

{

	char *arr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	if (arr == NULL)
		return (NULL);


	return (arr);

}
