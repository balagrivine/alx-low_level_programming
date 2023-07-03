#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to initial string
 * @accept: pointer to the substring
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
	

		for ( j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
					{
						value++;
						check = 1;	
					}
		}
		if (check == 0)
			return (i);
	}
	return (0);
}
