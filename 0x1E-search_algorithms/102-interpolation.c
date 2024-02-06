#include "search_algos.h"
#include <math.h>

/**
 * exponential_search - a function that searches for 
 * a value in a sorted array
 * @array: pointer to the first elemet of the array
 * @size: number of elements of the array
 * @value: value to search for
 * Return: -1 if value is absent else return value
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high, pos;
	size_t i;

	low = 0;
	i = 0;
	high = size - 1;
	pos = low + (value - array[low])*(high - low)/(array[high] - array[low]);

	if (array == NULL)
		return -1;

	while (i <= size - 1 && low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		if (array[pos] == value)
		{
			return value;
		}

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		i++;
	}
	return -1;

}
