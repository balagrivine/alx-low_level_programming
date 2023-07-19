#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that add numbers passed as arguments
 * @a: first number
 * @b: second digit
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts the numbers passed as arguments
 * @a: first digit
 * @b: second digit
 * Return: diff btn a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies digits passed ascarguments
 * @a: first digit
 * @b: second digit
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides the numbers passed as arguments
 * @a: first digit
 * @b: second digit
 * Return: dividendof a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - gets the modulus of numbers passed as arguments
 * @a: first digit
 * @b: second digit
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
