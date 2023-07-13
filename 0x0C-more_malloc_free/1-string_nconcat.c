#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the first n bytes from string 2
 * Return: pointer to newly allocated spaace in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;

	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[k])
	{
		k++;
	}
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	arr = malloc(sizeof(char) * l + 1);
	if (arr == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			arr[j] = s1[j];
		if (j >= i)
		{
			arr[j] = s2[k];
			k++;
		}
		j++;
	}
	arr[j] = '\0';
	return (arr);




}
