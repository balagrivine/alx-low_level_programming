#include "search_algos.h"

/**
 * advanced_binary_search - searches for an element in an ordered
 * list using binary search
 * @array: pointer to the first element
 * @low: number of elemnts in the arrayg
 * @high: ending index
 * @value: value to be searched for
 * Return: -1 if value absent or array NULL else index where value
 * is located
 */

int advanced_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (array == NULL)
		return -1;

	if (high >= low)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = 0; i < high; i++)
			printf("%ld, ", i);
		printf("%ld\n", i);
	
		if (array[mid] == value)
			return mid;
		if (array[mid] < value)
			return advanced_binary_search(array, low, mid - 1, value);
		return advanced_binary_search(array, mid + 1, high, value);
	}

	return -1;
}

/**
 * advanced_binary - searches a value in a sorted array of intergers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 || value
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_search(array, 0, size - 1, value));
}
