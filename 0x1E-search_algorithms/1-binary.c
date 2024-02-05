#include "search_algos.h"

/**
 * binary_search - function to search for a 
 * value ina  sorted rray of integers using binary search algorithm
 * @array: pointer to an array of integers
 * @size: numbe rof elements in the array
 * @value: value to be searched
 * Return: value or -1 if value is not in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, i;
	int low, high;

	if(array == NULL)
		return -1;
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low)/2;
		for(i = 0; i < size; i++)
		{
			printf("Searching in array: %d", array[i]);
			printf("\n")
		}

		if (array[mid] == value)
			return mid;
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
