#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array 
 * using jump search algorithm
 * @array: pointer to the first element of thr array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 if value is absent or array is NULL else return value
 */

size_t min(size_t a, size_t b)
{
	if (b > a)
		return a;
	else
		return b;
}
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return -1;

	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step++;
		if (prev >= size)
			return -1;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (array[prev] < value)
	{
		prev++;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (prev == min(step, size))
			return -1;
	}
	if (array[prev] == value)
		return prev;
	return -1;
}
