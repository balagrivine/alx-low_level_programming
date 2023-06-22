#include "main.h"
/**
 * print_numbers - prints all single digits
 *
 * Return: returns no value
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
		_putchar('\n');

	}
}
