#include "search_algos.h"

/**
 * linear_search - function that searches for 
 * a value in an array of integers using linear search
 * @array: pointer to an arry of integers
 * @size: size of the array
 * @value: value to be searched for
 * Return: value if present, -1 if array is NULL or value absent
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if(array == NULL)
		return(-1);

	for(i = 0; i <= size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if(array[i] == value)
			return(value);
	}
	return -1;
}
