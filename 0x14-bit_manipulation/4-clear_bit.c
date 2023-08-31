#include "main.h"
/**
 * clear_bit - sets the value of abit to 0at a given index
 * @n: number
 * @index: index of the bit
 * Return: 1 if success, else return -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
