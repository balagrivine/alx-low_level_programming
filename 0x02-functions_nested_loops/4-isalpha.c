#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: enter number as an integer
 * Return: returns 1 if c is a letter, lowercase or uppercase
 * returns 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)

		return (1);
	else
		return (0);
	_putchar('\n');

}
