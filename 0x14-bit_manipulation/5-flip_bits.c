#include "main.h"
/**
 * flip_bits - counts thr numberof bits to be changed
 * @n: 1st no
 * @m: 2nd no
 *
 * Return: numbers of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_bits = 0;
	unsigned long int temp = (n ^ m);

	while (temp > 0)
	{
		if (temp & 1)
		{
			num_bits += (temp & 1);
		}
		temp >>= 1;
	}
	return (num_bits);
}
