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
	size_t low, high, pos, i;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return -1;

	while (i <= size && low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			return pos;
		}

		if (array[pos] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			low = pos + 1;
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			high = pos - 1;
			printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		}
		i++;
	}
	printf("Value checked array[%lu] is out of range", pos);
	return -1;

}
