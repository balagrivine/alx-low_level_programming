#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)

{
	int i, j, sum1, sum2;

	sum1 = 0;

	sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		sum2 = sum2 + a[j];
	}

	printf("%d, %d\n", sum1, sum2);
}
