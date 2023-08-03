#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number whose binary rep is to be printed
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i, inc = 0;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			inc++;
		}
		else if (inc)
		{
			_putchar('0');
		}
	}
	if (inc == 0)
	{
		_putchar('0');
	}
}
