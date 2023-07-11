#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments passed
 * @av: argument vector
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d;

	char *arr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (a < ac)
	{
		while (av[a][b])
		{
			c++;
			b++;
		}
		b = 0;
		a++;
	}
	arr = malloc((sizeof(char) * c) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			arr[d] = av[a][b];
			d++;
			b++;

		}
		arr[d] = '\n';

		b = 1;
		d++;
		a++;
	}

	d++;
	arr[d] = '\0';
	return (arr);

}
