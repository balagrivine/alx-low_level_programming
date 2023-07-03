#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @needle: pointer to the substring
 * @haystack: pointer to string
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)

{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
	}
	return (NULL);
}
