#include "main.h"

/**
 * get_endianness - hecks the endianness
 *
 * Return: 0 if big endian, 1 if small endian
 */

int get_endianness(void)
{
	unsigned int a;
	char *character;

	a = 1;
	character = (char *) & a;

	return (*character);
}
