#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - a function that searches for 
 * a value in a sorted array
 * @array: pointer to the first elemet of the array
 * @size: number of elements of the array
 * @value: value to search for
 * Return: -1 if value is absent else return value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return -1;

	for (low = 0, high = size - 1; high >= 1;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
		{
			return pos;
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
			high = pos - 1;
	}
	return -1;

}
