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
	size_t low, high, i;

	if(array == NULL)
		return -1;

	low = 0;
	high = seze - 1;
	while (high >= low)
	{
		printf("Searching in array :");
		for(i = 0; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = low + (high - low) / 2
		if (array[i] == value)
			return i;
		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}
	return -1;
}
