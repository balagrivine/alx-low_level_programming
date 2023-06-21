#include "main.h"
/**
 * _islower - checks if a character is lower case
 * _putchar - prints th arguments passed to it
 * int c - takes argument and tells whether it is lowercase or not
 *
 * Return: returns 1 if character is lower case
 * returns 0 if character is not lower case
 */

int _islower(int c)
{

	while (c >= 'a')
	{
		if (c <= 'z')
		{
			_putchar(c);
			return (1);
		}
		if (c >= 'z')
			return (0);
	}
	_putchar('\n');
	return (0);

}
