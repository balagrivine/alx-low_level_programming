#include "main.h"
/**
 * positive_or_negative - determines whether a number is positive or negative
 *
 * @i: enter number as integer
 *
 * Return: always 0 (success)
 */

int positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);

	if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is positive", i);
	return (i);

}
