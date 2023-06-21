#include "main.h"
/**
 * print_alphabet_x10 - prints 10 timmes the letters of the alphabet
 *
 * Return: returns no value
 */

void print_alphabet_x10(void)
{
	char letter;
	int line_count;
	line_count = 0;

	while (line_count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		       _putchar(letter);

		}
		_putchar('\n');
		line_count++;
	}
}
