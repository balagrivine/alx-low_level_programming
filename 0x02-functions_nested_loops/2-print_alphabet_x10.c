#include "main.h"
/**
 * main - prints 10 timmes the letters of the alphabet
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	char letter;
	int line_count;
	line_count = 0;

	while (line_count <= 11)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		       _putchar(letter);
			
		}
		_putchar('\n');
		line_count++;
	}
	return (0);
}
