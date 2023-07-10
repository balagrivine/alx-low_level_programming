#include "main.h"

#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a string which contains s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, a, b, c;

	a = 0;

	b = 0;

	c = 0;

	i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}

	while (s2[a])
	{
		a++;
	}

	c = i + a;

	arr = malloc((sizeof(char) * c) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	a = 0;

	while (b < c)
	{
		if (b <= i)
		{
			arr[b] = s1[b];
		}
		if (b >= i)
		{
			arr[b] = s2[a];
			a++;
		}
		b++;
	}

	arr[b] = '\0';
	return (arr);
}
