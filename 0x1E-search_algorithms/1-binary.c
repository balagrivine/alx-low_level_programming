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
	size_t mid;
	int low, high;

	if(array == NULL)
		return -1;
	low = 0;
	high = size -1;
	if(high >= low)
	{
		mid = size / 2;
		if(array[mid] == value)
			return mid;
		if(array[mid] > value)
			return binary_search(array, mid - 1, value);
		else
		return binary_search(array, mid + 1, value);
	}
	return -1;
}
