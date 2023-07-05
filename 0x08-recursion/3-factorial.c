#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Enter number as integer
 * Return: 0 (success) and  -1 if n < 0 (error)
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
