#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}
