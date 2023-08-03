#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit reppresentation
 * @index: index of the bit you want to get
 * Return: value of the bit at index of -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;
	unsigned int max_bit;

	max_bit = 63;
	if (index > max_bit)
	{
		return (-1);
	}

	get_bit = (n >> index) & 1;

	return (get_bit);
}
