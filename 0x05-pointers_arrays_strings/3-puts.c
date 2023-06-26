#include "main.h"
/**
 * _puts - prints a string followed by qa new line t the standard output
 * @str: string t be printed
 *Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
