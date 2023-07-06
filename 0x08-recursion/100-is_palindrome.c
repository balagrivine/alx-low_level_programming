#include "main.h"

int _strlen(char *s);

int _comp_char(char *s, int a, int b); 

/**
 * is_palindrome - checks for a palindrome string
 * @s: string to be checked
 * Return: 1 if string is palindrome otherwise return 0
 */

int is_palindrome(char *s)

{
	if (*s == '\0')
	{
		return (1);

	}

	return (_comp_char(s, 0, _strlen(s) - 1));

}

/**
 * _strlen: returns the length of a string
 * @s:string whose length is to be checked
 * Return: length of string
 */

int _strlen(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * _comp_char - compares characters of a string
 * @s: string whose characters are to be compared
 * @a: smallest iteration value
 * @b: largest iteratioon value
 * Return: 1 if characters are same, else return 0
 */

int _comp_char(char *s, int a, int b)

{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
		{
			return (1);
		}

		return (0 + _comp_char(s, a + 1, b - 1));
	}

	return (0);
}
