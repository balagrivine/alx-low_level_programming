#include "main.h"
#include <stdlib.h>

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


/**
 * main - copies the content of a file to another
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments passed to the program
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int src, dest, wrte, rd;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	rd = read(src, buffer, 1024);
   	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (src == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wrte = write(dest, buffer, 1024);
		if (dest == -1 || wrte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(src, buffer, 1024);
		wrte = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(src);
	close_file(dest);

	return (1);
}
