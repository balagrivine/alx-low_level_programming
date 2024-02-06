#include "search_algos.h"

size_t min(size_t a, size_t b)
{
	if (a < b)
		return a;
	else
		return b;
}

/**                                                                                 * binary_search - function to search for a                                         * value ina  sorted rray of integers using binary search algorithm                 * @array: pointer to an array of integers                                          * @size: numbe rof elements in the array                                           * @value: value to be searched                                                     * Return: value or -1 if value is not in the array                                 */

int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return -1;

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return i;
		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}

	return -1;
}

/**                                                                                 * exponential_search - searches for a                                              * value in a sorted array using exponential search                                 * @array: pointer to the first element of the array to search                      * @value: value to search                                                          * @size: number of elements in the list                                            * Return: -1 if element is absent of arrat is NULL                                 * else return value                                                                */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return -1;

	for (i = 1; i < size && array[i] < value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	low = i / 2;
	high = min(i, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return _binary_search(array, low, high, value);
}
