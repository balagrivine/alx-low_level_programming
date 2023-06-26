#include "main.h"
#include <stdio.h>
/**
 * print_array - prnts an array of numbers
 * @a: enter as integer
 * @b: enter as 2nd integer
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
