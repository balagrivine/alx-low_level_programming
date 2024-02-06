#include "search_algos.h"

/**
 * exponential_search - searches for a 
 * value in a sorted array using exponential search
 * @array: pointer to the first element of the array to search
 * @value: value to search
 * @size: number of elements in the list
 * Return: -1 if element is absent of arrat is NULL
 * else return value
 */

size_t min(size_t a, size_t b)
{
	if (a < b)
		return a;
	else
		return b;
}
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid;

	if (array == NULL)
		return -1;

	for (i = 1; i < size && array[i] < value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	low = i / 2;
	high = min(i, size - 1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);

	return -1;
}
