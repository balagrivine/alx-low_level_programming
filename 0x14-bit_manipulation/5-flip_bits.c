#include "main.h"

/**
 * flip_bits - returns number of bits you would need
 * to flip to move from one nmber to another
 * @n: bit to be flipped
 * @m: bit to be flipped
 *
 * Return: number of bits needed to be flipped
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	int a;
	unsigned long int present;
	unsigned long int not;

	not = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		present = not >> a;
		if (present & 1)
		{
			num_bits++;
		}
	}
	return (num_bits);
}
