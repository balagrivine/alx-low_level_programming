#include "main.h"
#include  <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to thenewly created array
 */

int *array_range(int min, int max)
{
	int *arr, a = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[a] = min;
		a++;
		min++;
	}
	return (arr);
}
