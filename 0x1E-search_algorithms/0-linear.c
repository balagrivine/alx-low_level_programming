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
	int target;

	if(array == NULL)
		return(-1);

	for(i = 0; i <= size; i++)
	{
		printf("%d\n", array[i]);
		if(array[i] == value)
			target = value;
		else
			return(-1);
	}
	return(target);
}
