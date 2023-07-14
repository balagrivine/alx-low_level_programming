#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realocates memory block using malloc and free
 * @ptr: pointer to memory area preciously allocated with a call to malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	arr = malloc(new_size);

	if (arr == NULL)
	{
		return (NULL);

	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		arr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (arr);
}
