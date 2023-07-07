#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, char **argv)

{
	int a, mul = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			/*printf("%s\n", argv[a]);*/

			mul = mul * atoi(argv[a]);

			/*printf("%d\n", mul);*/
		}

		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
