#include "main.h"

int _root(int n, int a);

/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: number to calculate the square root
 * Return: natural squareroot
 */

int _sqrt_recursion(int n)

{
	return (_root(n, 1));
}

/**
 * _root - calculates the square root
 * @n: number to calculate its square root
 * @a: enter number as integer
 */


int _root(int n, int a)
{
	int square_root;

	square_root = a * a;

	if (square_root > n)
	{
		return (-1);
	}

	if (square_root == n)
	{
		return (a);
	}

	return (_root(n, a + 1));
}

