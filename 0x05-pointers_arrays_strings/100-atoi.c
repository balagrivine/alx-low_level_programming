#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s:string to bhe converted to an integer
 * Return: always 0 (success)
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int n1 = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			n1 = (n1 * 10) + (s[c] - '0');
			c++;

		}
		if(isi == 1)
		{
			break;
		}
		c++;
	}
	n1 *= min;
	return (n1);
}

