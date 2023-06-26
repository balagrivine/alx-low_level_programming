#include "main.h"
/**
 * _islower - checks if a character is lower case
 * _putchar - prints th arguments passed to it
 * int - takes argument and tells whether it is lowercase or not
 *
 * Return: returns 1 if character is lower case
 * returns 0 if character is not lower case
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

	_putchar('\n');

}
