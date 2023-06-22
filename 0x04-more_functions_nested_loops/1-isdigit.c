#include "main.h"
/**
 *_isdigit - checks for digits
 *@c: Enter number as integer
 *Return: return 1 if number is a digit
 *otherwise return 0
 */

int _isdigit(int c)
{
	while (c >= 48)
	{
		if (c <= 57)
			return (1);
		else
			return (0);
	}
	return (0);
}
