#include "main.h"

int _is_prime(int a, int b);

/**
 * _is_prime_number - checks for prime number
 * @: number to be checked
 * Return: 1 if n is an integer else return 0
 */

int is_prime_number(int n)
{
	return (_is_prime(n, 1));
}


/**
 * _is_prime - checks if input is a prime number
 * @a: number to be checked
 * @b: number of iteration times
 * Return: 1 if prime otherwise return 0
 */

int _is_prime(int a, int b)

{
	if (a <= 1)
	{
		return (0);
	}

	if (a % b ==0 && b > 1)
	{
		return (0);
	}

	if ((a / b) < b)
	{
		return (1);
	}

	return (_is_prime(a, (b + 1)));
}
