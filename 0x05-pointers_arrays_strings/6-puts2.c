#include "main.h"
/**
 * puts2 - prints every single carater of a
 * string starting with the first followed by a new line
 * @str: string to ebe printed
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
