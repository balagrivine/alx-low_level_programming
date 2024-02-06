#include "search_algos.h"

/**
 * advanced_binary - searches for an element in an ordered
 * list using binary search
 * @array: pointer to the first element
 * @size: number of elemnts in the array
 * @value: value to be searched for
 * Return: -1 if value absent or array NULL else index where value
 * is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
		return -1;

	low = 0;
	high = size - 1;
	if (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = 0; i < high; i++)
			printf("%ld, ", i);
		printf("%ld\n", i);
		if (array[mid] == value)
			return mid;
		if (array[mid] < value)
			advanced_binary(array, mid + 1, value);
		else
			advanced_binary(array, mid - 1, value);
	}

	return -1;
}
