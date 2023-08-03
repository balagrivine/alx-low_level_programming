#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 or 1 chars
 *
 * Return: the converted number or 0 if b is null or if chars in
 * string pointed to by b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, value;

	value = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0'|| b[i] > '1')
		{
			return (0);
		}
		value = 2 * value + (b[i] - '0');

	}
	return (value);
}
