#include "main.h"
/**
 * print_alphabet - entry point
 * _putchar - prints a character to the standard output
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');
}
