#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: always (0) success
 */

int main(int argc, char **argv)

{
	int i;

	if (argc == 1)
	{

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);

}
