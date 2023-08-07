#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_buff - allocates 1024 bytes for a buffer
 * @filename: the name of the filethe buffer is storing characters for
 *
 * Return: pointer to the newly allocated buffer
 */

char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * close_file -closes file descriptor
 * @file: the ifle descriptor to be closed
 *
 * Return: void
 */

void close_file(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file);
		exit(100);
	}
}
