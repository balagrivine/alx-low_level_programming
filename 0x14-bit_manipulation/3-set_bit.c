#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given position
 * @n: pointer to the given bit position
 * @index: index of the bit you want to set
 *
 * Return: 1 if it worked or -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bit;

	max_bit = 63;
	if (index > max_bit)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
