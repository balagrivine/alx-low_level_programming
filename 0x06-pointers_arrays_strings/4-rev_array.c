#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array of integers
 * @n: number of elements be reversed
 * Return: nothing
 */

void reverse_array(int *a, int n)

{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
