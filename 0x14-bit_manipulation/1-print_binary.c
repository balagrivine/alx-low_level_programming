#include "main.h"
/**
 * print_binary - prints binary rep of a number
 * @n: number whose binary form is to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int count;
	int index, op = 0;

	for (index = 63; index >= 0; index--)
	{
		count = n >> index;

		if (count & 1)
		{
			_putchar('1');
			op++;
		}
		else if (op)
		{
			_putchar('0');
		}
	}
	if (!op)
	{
		_putchar('0');
	}
}
