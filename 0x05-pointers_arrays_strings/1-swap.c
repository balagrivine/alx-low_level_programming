#include "main.h"

/**
 * swap_int : swaps values of two integers
 * @a: first integer to be swapped
 * @b: second int to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*The function that swaps values of two integers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
