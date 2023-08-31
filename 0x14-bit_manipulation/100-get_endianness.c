#include "main.h"
/**
 * get_endianness - checks for the ednianness
 * Return: 0 if big else return 1
 */

int get_endianness(void)
{
	unsigned int index = 0x76543210;
	char *endian;

	endian = (char *) &index;
	index = 1;
	return (*endian);
}
