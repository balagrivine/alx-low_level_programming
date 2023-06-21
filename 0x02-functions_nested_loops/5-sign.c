#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * Return: returns 1 if sign is positive
 * returns 0 if number is 0
 * returns -1 if number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return ( 1);

	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);

	}
	else
	{
	_putchar(45);
	return (-1);

	}

}
