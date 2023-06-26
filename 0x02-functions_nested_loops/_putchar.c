#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the standard output
 *
 * Return: return 1 (success)
 * return -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
