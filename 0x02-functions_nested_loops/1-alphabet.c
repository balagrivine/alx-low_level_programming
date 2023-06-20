#include "main.h"
/**
 * main - entry point
 * _putchar - prints a character to the standard output
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);

		letter++;
	}

	_putchar('\n');
	return (0);
}
