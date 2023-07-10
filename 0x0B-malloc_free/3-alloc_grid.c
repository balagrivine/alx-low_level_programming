#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a two-dimensu=ional array of integers
 * @width: number of columns of the grid
 * @height: number of rows of the grid
 * Return: pointer to two a 2d array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, **arr, a, b, c;

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (a = i; a >= 0; a--)
			{
				free(arr[a]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			arr[b][c] = 0;
		}
	}
	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	return (arr);
}
