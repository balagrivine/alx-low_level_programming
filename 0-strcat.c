#include "main.h"
/**
 * _strcat - appends src string to the daest string
 * @src: string that is going to be appended to another string
 * @dest: string that receives the src string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
