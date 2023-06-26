#include "main.h"
/**
 * print_most_numbers - prints single digits of base 10 except 2 and 4
 *
 * Return: returns no value
 */

void print_most_numbers(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{

		if (num == 50)
		{
			continue;
		}
		_putchar(num + '0');
		num++;

	}
	_putchar('\n');
}
