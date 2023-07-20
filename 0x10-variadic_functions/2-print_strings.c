#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;

	char *str;

	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(num, char*);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(num);


}
