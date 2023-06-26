#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: Enter as character
 * Return: lenth of string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++);
	length++;
	return (length);
}
