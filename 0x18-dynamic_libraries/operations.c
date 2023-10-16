#include <stdio.h>

/**
 * add - performs addition operation
 * @a: first argument
 * @b: second argument
 * Return: sum of the two argments
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - performs subtraction operation
 * @a: first argument
 * @b: second argument
 * Return: difference between a and b
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mult - performs multiplication operation
 * @a: first argument
 * @b: second argument
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - performs division operation
 * @a: first argument
 * @b: second argument
 * Return: dividend of a and b
 */
int div(int a, int b)
{
	if (a == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * mod - performs modulus operation
 * @a: first argument
 * @b: second argument
 * Return: modulus of a and b
 */
int mod(int a, int b)
{
	return (a % b);
}
