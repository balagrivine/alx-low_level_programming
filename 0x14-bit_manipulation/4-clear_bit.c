#include "main.h"

/**
 * clear_bit - sets the bit at a given index to 0
 * @n: pointer to the bit representation
 * @index: index of the bit you want to set
 *
 * Return: 1 if it worked or -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bit;

	max_bit = 63;
	if (index > max_bit)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
