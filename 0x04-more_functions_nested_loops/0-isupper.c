#include "main.h"
/**
 * _isupper - checksfor upper case character
 *
 * @c: Enter character
 *
 * Return: returns 1 if c is upper case
 * otherwise return 0
 */

int _isupper(int c)
{
	while (c >= 65)
	{
		if (c <= 90)
		{
			return (1);
		}

		else
		{

			return (0);

		}
	putchar('\n');
	}
	return (0);
}
