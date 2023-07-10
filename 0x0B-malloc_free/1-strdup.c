#include "main.h"

#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to be duplicated
 * Return: pointer to the duplicate string else
 * return NULL for insufficient memory
 */

char *_strdup(char *str)

{
	int i;

	int a;

	char *arr;

	i = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	arr = malloc((sizeof(char) * i) + i);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < i; a++)
	{
		arr[a] = str[a];

	}

	arr[a] = '\0';

	return (arr);
}
