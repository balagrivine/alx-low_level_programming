#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include "function_pointers.h"

/**
 * main - prints result of operations
 * @argc: argument count
 * @argv: argument vector
 * Return: always (0) success
 */

int main(int argc, char *argv[])
{

	char (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	argv[2] = op;

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
