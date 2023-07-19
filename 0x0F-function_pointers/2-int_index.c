#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array ofmintegers to be looped over
 * @size: sizeof the array
 * @cmp: pointer to function to be used to compare values
 * Return: index of the first element for 
 * which the cmp function does not rturn 0
 * return -1 if functions fail and if size<=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);

}
