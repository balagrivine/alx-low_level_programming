#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - adds the values of all numbers passed as parameters
 * @n: first parameter
 *
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;

	unsigned int i = 0;

	int sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);

		va_end(num);
	}

	return (sum);
}
