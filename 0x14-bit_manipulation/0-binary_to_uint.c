#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, i;

	number = 0;
	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		number = (number << 1) | (b[i] - '0');
	}
	return (number);
}
